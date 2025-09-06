// CGetLicenseInfo.cpp : implementation file


#include "pch.h"
#include "WebCloudAPITest.h"
#include "afxdialogex.h"
#include <winhttp.h>
#include "tchar.h"
#include "CGetLicenseInfo.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <string>
#include <algorithm> 
#pragma once

#include "NetworkRequest.h" 





// CGetLicenseInfo dialog

IMPLEMENT_DYNAMIC(CGetLicenseInfo, CDialogEx)




CGetLicenseInfo::~CGetLicenseInfo()
{

}

CString GetMACAddress() {
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
CGetLicenseInfo::CGetLicenseInfo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_GETLICENSEINFO, pParent)
	, m_Details(_T(""))
	, m_HardwareID (GetMACAddress())
{
	// Obtain MAC address and assign it to m_HardwareID
	m_HardwareID = GetMACAddress();
}

void CGetLicenseInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_Details);
	DDX_Text(pDX, IDC_EDIT1, m_HardwareID);
}


BEGIN_MESSAGE_MAP(CGetLicenseInfo, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CGetLicenseInfo::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON1, &CGetLicenseInfo::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT2, &CGetLicenseInfo::OnEnChangeDetails)
	ON_EN_CHANGE(IDC_EDIT1, &CGetLicenseInfo::TextHardwareID)
END_MESSAGE_MAP()


// CGetLicenseInfo message handlers

void CGetLicenseInfo::OnEnChangeDetails()
{


}

void CGetLicenseInfo::TextHardwareID()
{
	
}



void CGetLicenseInfo::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CComboBox* combo_Box_drop = (CComboBox*)GetDlgItem(IDC_COMBO1);
	int selectedIndex = combo_Box_drop->GetCurSel();
	LicenseInfo users;
	CString Macid = GetMACAddress();
	CString selectPrdt = _T("DKST1");
	m_LicenseService->GetLicenseInfo(selectPrdt, Macid, users);
	//CGetLicenseInfo::OnEnChangeDetails();
	CWebCloudAPITestApp::SetResponseMsg(users.HardwareID);
	CString selection;
	combo_Box_drop->GetWindowText(selectPrdt);

	if (selectPrdt == "Desktop Streamer")
	{
		GetDlgItem(IDC_EDIT2)->SetWindowText(
			_T("LicenseStatus		: ") + users.LicenseStatus + _T("\r\n") +
			_T("Machine Name		: ") + users.MachineName + _T("\r\n") +
			_T("Product Name		: ") + users.ProductName + _T("\r\n") +
			_T("Product ID		: ") + users.ProductID + _T("\r\n") +
			_T("EmailID			: ") + users.EmailID + _T("\r\n") +
			_T("Is Unlimited License               : ") + (users.IsUnlimitedLicense ? _T("True") : _T("False")) + _T("\r\n") +
			_T("License Name		: ") + users.LicenseName + _T("\r\n") +
			_T("No Of Days		: ") + users.NoOfDays + _T("\r\n") +
			_T("Date of Entry		: ") + users.EntryDate + _T("\r\n") +
			_T("RegKey		              : ") + users.RegKey + _T("\r\n") +
			_T("Email Status		: ") + users.EmailStatus + _T("\r\n") +
			_T("LicensePassword		: ") + users.LicensePassword + _T("\r\n") +
			_T("Hardware ID		: ") + users.HardwareID + _T("\r\n") +
			_T("License ID		: ") + users.LicenseID + _T("\r\n") +
			_T("Remaining Days		: ") + users.RemainingDays + _T("\r\n") +
			_T("Allowed Features		: ") + users.AdditionalSubscriptionInfo.AllowedFeatures + _T("\r\n") +
			_T("Disabled Features		: ") + users.AdditionalSubscriptionInfo.DisabledFeatures + _T("\r\n") +
			_T("Initial License                        : ") + (users.AdditionalSubscriptionInfo.InitialLicense ? _T("True") : _T("False")) + _T("\r\n") +
			_T("Product Subscription Id          : ") + users.AdditionalSubscriptionInfo.ProductSubscriptionId + _T("\r\n"));
	}
	else if (selectPrdt == "WebCloud")
	{
		GetDlgItem(IDC_EDIT2)->SetWindowText(_T("Product not Found"));
	}

}


void CGetLicenseInfo::OnCbnSelchangeCombo1()
{
	// TODO: Add your control notification handler code here
}









