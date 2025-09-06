// CFormRegister.cpp : implementation file
//

#include "pch.h"
#include "stdio.h"
#include "WebCloudAPITest.h"
#include "CFormRegister.h"
#include "afxdialogex.h"
#include "NetworkRequest.h"

#include <wincrypt.h>
//headers for mac
#pragma comment(lib, "iphlpapi.lib")
#include <Windows.h>
#include <iostream>
#include <atlstr.h>
#include <Iphlpapi.h>
//count header
#include <chrono>
#include <ctime>
#include <string>
#include <ctime>




// CFormRegister dialog

IMPLEMENT_DYNAMIC(CFormRegister, CDialogEx)

CString GetMACaddress()
{
	CString macAddress;
	PIP_ADAPTER_INFO adapterInfo;
	ULONG bufferSize = sizeof(IP_ADAPTER_INFO);
	adapterInfo = (IP_ADAPTER_INFO*)malloc(bufferSize);

	// Call GetAdaptersInfo to get buffer size needed
	if (GetAdaptersInfo(adapterInfo, &bufferSize) == ERROR_BUFFER_OVERFLOW) {
		free(adapterInfo);
		adapterInfo = (IP_ADAPTER_INFO*)malloc(bufferSize);
	}

	// Call GetAdaptersInfo again to get actual data
	if (GetAdaptersInfo(adapterInfo, &bufferSize) == NO_ERROR) {
		// Iterate through adapters
		PIP_ADAPTER_INFO pAdapterInfo = adapterInfo;
		while (pAdapterInfo) {
			char buffer[18]; // Buffer for MAC address in the format "XX:XX:XX:XX:XX:XX\0"
			sprintf_s(buffer, sizeof(buffer), "%02X%02X%02X%02X%02X%02X",
				pAdapterInfo->Address[0], pAdapterInfo->Address[1], pAdapterInfo->Address[2],
				pAdapterInfo->Address[3], pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
			macAddress = CString(buffer);
			// Only return the first MAC address found
			if (!macAddress.IsEmpty()) {
				break;
			}
			pAdapterInfo = pAdapterInfo->Next;
		}
	}

	free(adapterInfo);
	return macAddress;
}

CFormRegister::CFormRegister(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_FORMREGISTER, pParent)
	, m_URL(_T("http://test2.virtualtutor.co.in/"))

	, m_MachineId(GetMACaddress())
{

}

CFormRegister::~CFormRegister()
{
}




void CFormRegister::OnEnChangeEdit5()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here

}

void CFormRegister::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_URL);

	DDX_Control(pDX, IDC_COMBO1, m_ComboBox1);
	DDX_Text(pDX, IDC_EDIT5, m_MachineId);
}


BEGIN_MESSAGE_MAP(CFormRegister, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CFormRegister::OnBnClickedBuy)

	ON_CBN_SELCHANGE(IDC_COMBO1, &CFormRegister::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON3, &CFormRegister::OnBnClickedValidate)
	ON_BN_CLICKED(IDC_BUTTON10, &CFormRegister::OnBnClickedRegister)
	ON_BN_CLICKED(IDC_BUTTON11, &CFormRegister::OnBnClickedCancel)
	ON_EN_CHANGE(IDC_EDIT5, &CFormRegister::OnEnChangeEdit5)
	
END_MESSAGE_MAP()


// CFormRegister message handlers


void CFormRegister::OnBnClickedBuy()
{
	int a = m_ComboBox1.GetCurSel();
	switch (a) {
	case 0:
		ShellExecute(NULL, L"open", L"http://test2.virtualtutor.co.in///buy-renew.aspx?productsubid=DKST1", nullptr, nullptr, SW_SHOWNORMAL);
		printf("0");
		break;
	case 1:
		ShellExecute(NULL, L"open", L"http://test2.virtualtutor.co.in///buy-renew.aspx", nullptr, nullptr, SW_SHOWNORMAL);
		printf("1");
		break;
	default:printf("Error");
		break;
	}
}



void CFormRegister::ActivationProduct()
{

}

int getDaysRemaining(int year, int month, int day)
{
	
	time_t now = time(nullptr);
	struct tm timeinfo;
	localtime_s(&timeinfo, &now);

	// Set the target date
	std::tm targetTime_t = { 0, 0, 0, day, month - 1, year - 1900 };

	// Convert to system time
	std::time_t target = std::mktime(&targetTime_t);

	// Calculate the time difference in seconds
	std::chrono::seconds diff = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::from_time_t(target) - std::chrono::system_clock::from_time_t(now));

	// Calculate the number of remaining days
	int daysRemaining = diff.count() / (60 * 60 * 24);

	return daysRemaining;
}

void CFormRegister::ValidateActivation()
{
	if (IDC_COMBO1 == -1)
	{
		MessageBox(L"Please Select a Product" L"Info");
		return;
	}
	if (IDC_COMBO2 == 1)
	{
	}
}


	
		



		void CFormRegister::OnBnClickedValidate()
		{
			LicenseInfo users;
			CString Macid = GetMACaddress();
			CString selectPrdt = _T("DKST1");
			m_LicenseService->GetLicenseInfo(selectPrdt, Macid, users);
			CString RemainingDays = users.RemainingDays;
			std::wstring message = L"You have " + (RemainingDays) + L" days remaining.";
			int result = MessageBox(message.c_str(), MB_OK);

			// Check the user's response
			if (result == IDOK)
			{
				// OK button was clicked
			}
		}



void CFormRegister::OnBnClickedRegister()
{

	//Name TextBox
	CEdit* pEditControl = (CEdit*)GetDlgItem(IDC_EDIT2);
	if (pEditControl->GetWindowTextLength() == 0)
	{
		MessageBox(NULL, L"Enter Your Name", MB_ICONEXCLAMATION | MB_OK);
	}
	else
	{
		GetDlgItem(IDC_EDIT3)->SetFocus();
	}

	//Phone Number textBox
	CEdit* pEditControl2 = (CEdit*)GetDlgItem(IDC_EDIT3);
	if (pEditControl2->GetWindowTextLength() == 0)
	{
		MessageBox(NULL, L"Enter Your Phone Number", MB_ICONEXCLAMATION | MB_OK);
	}
	else
	{
		GetDlgItem(IDC_EDIT4)->SetFocus();
	}

	//Email TextBox
	CEdit* pEditControl3 = (CEdit*)GetDlgItem(IDC_EDIT3);
	if (pEditControl3->GetWindowTextLength() == 0)
	{
		MessageBox(NULL, L"Enter Your EmailID", MB_ICONEXCLAMATION | MB_OK);
	}
	else
	{
		GetDlgItem(IDC_COMBO2)->SetFocus();
	}

	//DropBox For PurchasePlan
	CEdit* pEditControl4 = (CEdit*)GetDlgItem(IDC_COMBO2);
	if (pEditControl4->GetWindowTextLength() == 0)
	{
		MessageBox(NULL, L"Select a Option", MB_ICONEXCLAMATION | MB_OK);
	}
	else
	{
		GetDlgItem(IDC_EDIT5)->SetFocus();
	}
	CString SltPrd, URL, Name, PhNo, Email, Option, MId, RegK, Addr;


	CComboBox* combo_Box_drop = (CComboBox*)GetDlgItem(IDC_COMBO1);
	int isel = combo_Box_drop->GetCurSel();
	combo_Box_drop->GetWindowText(SltPrd);

	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT1);
	Edit_Box1->GetWindowText(URL);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT2);
	Edit_Box2->GetWindowText(Name);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT3);
	Edit_Box3->GetWindowText(PhNo);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT4);
	Edit_Box4->GetWindowText(Email);

	CComboBox* combo_Box_drop1 = (CComboBox*)GetDlgItem(IDC_COMBO2);
	int isel1 = combo_Box_drop1->GetCurSel();
	combo_Box_drop1->GetWindowText(Option);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT5);
	Edit_Box5->GetWindowText(MId);

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT6);
	Edit_Box6->GetWindowText(RegK);

	CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT7);
	Edit_Box7->GetWindowText(Addr);

	CString PrdId;
	if (SltPrd == "Desktop Streamer") {
		if (Option == "OneTime" || Option == "Trial" || Option == "Subscription") {
			PrdId = "DSKT1";
		}
	}
	else if (SltPrd == "WebCloud") {
		if (Option == "OneTime" || Option == "Trial" || Option == "Subscription") {
			PrdId = "WC45E";
		}
	}
	LicenseInfo licenseinfo;
	licenseinfo.PersonName = Name;
	licenseinfo.ProductID = PrdId;
	licenseinfo.HardwareID = GetMACaddress();
	licenseinfo.PhoneNo = PhNo;
	licenseinfo.EmailID = Email;
	licenseinfo.Address = Addr;
	licenseinfo.RegKey = "";

	switch (isel1) {
	case 0:
		m_LicenseService->RegisterNewLicense(licenseinfo);
		break;
	case 1:
		m_LicenseService->RequestOneTimeReg(licenseinfo);
		break;
	case 2:
		m_LicenseService->RequestSubscription(licenseinfo);
		break;
	default:printf("Error");
		break;
	}
	int daysRemaining = getDaysRemaining(2023, 6, 4);

	// Convert the days remaining to a string
	CString daysRemainingStr;
	daysRemainingStr.Format(L"%d", daysRemaining);

	// Display a message box with the days remaining
	
	CString message = L"Days remaining: " + daysRemainingStr;
	MessageBox(message, L"Registration Information", MB_OK | MB_ICONINFORMATION);


	
}





void CFormRegister::OnBnClickedCancel()
{
	this->OnCancel();

}



void CFormRegister::OnCbnSelchangeCombo1()
{
	// TODO: Add your control notification handler code here
}









