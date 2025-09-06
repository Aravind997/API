#include "pch.h"
#include "WebCloudAPITest.h"
#include "CLicenceTestApp.h"
#include "afxdialogex.h"
#include <ctime>
#include <chrono>
#include <string>
#include <afxwin.h> 



// CLicenceTestApp dialog

IMPLEMENT_DYNAMIC(CLicenceTestApp, CDialogEx)

CLicenceTestApp::CLicenceTestApp(CWnd* pParent /*=nullptr*/)
    : CDialogEx(IDD_DIALOG_LICENCESTESTAPP, pParent)
{

}

CLicenceTestApp::~CLicenceTestApp()
{
}

void CLicenceTestApp::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC1, m_Product);
}


BEGIN_MESSAGE_MAP(CLicenceTestApp, CDialogEx)

END_MESSAGE_MAP()


// CLicenceTestApp message handlers


CString GetmACaddress()
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

BOOL CLicenceTestApp::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	LicenseInfo users;
	CString Macid = GetmACaddress();
	CString selectPrdt = _T("DKST1");
	m_LicenseService->GetLicenseInfo(selectPrdt, Macid, users);


	CTime currentTime = CTime::GetCurrentTime();

	CWnd* pButton = GetDlgItem(IDOK);



	if (pButton) 
	{
		int remainingDays = _ttoi(users.RemainingDays);
		if (remainingDays > 30 || remainingDays < 0) {
			pButton->EnableWindow(FALSE); // Disable the button
			CWebCloudAPITestApp::SetResponseMsg(L"Button Inactive");

			CString productStatus = L"Product Expired Please Purchase";
			m_Product.SetWindowText(productStatus);
			
		}
		else {
			pButton->EnableWindow(TRUE); // Enable the button
			CWebCloudAPITestApp::SetResponseMsg(L"Button Activated");
			CString productStatus = L"Product is Active";
			m_Product.SetWindowText(productStatus);
		}
	}

	return TRUE;
}