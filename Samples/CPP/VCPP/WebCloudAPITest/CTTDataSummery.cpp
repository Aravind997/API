// CTTDataSummery.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CTTDataSummery.h"
#include "afxdialogex.h"
#include <string>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <atlstr.h>

// CTTDataSummery dialog
IMPLEMENT_DYNAMIC(CTTDataSummery, CDialogEx)

BEGIN_MESSAGE_MAP(CTTDataSummery, CDialogEx)
END_MESSAGE_MAP()

// Constructor
CTTDataSummery::CTTDataSummery(CWnd* pParent /*=nullptr*/)
    : CDialogEx(IDD_DIALOG_TTDATASUMMERY, pParent)
{
}

// Destructor
CTTDataSummery::~CTTDataSummery()
{
}

// Called when the dialog initializes
BOOL CTTDataSummery::OnInitDialog()
{
    CDialogEx::OnInitDialog();

    // Process and send data after initialization
    ProcessAndPostDataSummary();

    return TRUE; // Return TRUE unless the focus is set to a control
}

// Data exchange function
void CTTDataSummery::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);

    DDX_Text(pDX, IDC_EDIT1, m_TodayHours);
    DDX_Text(pDX, IDC_EDIT2, m_WeekHours);
    DDX_Text(pDX, IDC_EDIT7, m_MonthHours);

    CString UserID = _T("admin");
    CWebCloudAPITestApp::SetResponseMsg(L"Data Summary Tracked");

    // Initialize TimeTrackerSummaryInfo and TimeTrackerSummaryResponse
    TimeTrackerSummaryInfo summaryInfo;
    TimeTrackerSummaryResponse response;

    // Call the API function with the required parameters
    // m_TimeTrackerService->TTDataSummaryInfo(UserID, summaryInfo, response);

    // Set the data from the response into dialog controls
    SetDlgItemText(IDC_EDIT1, response.NoOfHoursWorked);
    SetDlgItemText(IDC_EDIT2, response.NoOfOfflineHoursWorked);
}

CString CTTDataSummery::FormatTime(double totalHours)
{
    int hours = static_cast<int>(totalHours); // Extract the whole hours
    int minutes = static_cast<int>((totalHours - hours) * 60); // Convert the decimal part to minutes

    // Format the time as HH:MM
    CString formattedTime;
    formattedTime.Format(L"%02d:%02d", hours, minutes);
    return formattedTime;
}
// Function to process and post data
void CTTDataSummery::ProcessAndPostDataSummary()
{
    CString todayHours, offlineHours, monthHours;


    // Get data from the edit boxes
    GetDlgItemText(IDC_EDIT1, todayHours);
    GetDlgItemText(IDC_EDIT2, offlineHours);
    GetDlgItemText(IDC_EDIT7, monthHours);

  

    CString UserID = _T("admin");
    TimeTrackerSummaryInfo summaryInfo;
    TimeTrackerSummaryResponse response;


    // Assuming m_TimeTrackerService is a valid pointer and TTDataSummaryInfo is a valid method
    m_TimeTrackerService->TTDataSummaryInfo(UserID, summaryInfo, response);

    // Set the response data back to the dialog controls
    CString formattedTodayHours = FormatTime(_ttof(response.NoOfHoursWorked));
    CString formattedOfflineHours = FormatTime(_ttof(response.NoOfOfflineHoursWorked));
    CString formattedMonthHours = FormatTime(_ttof(response.NoOfHoursWorked)); // Assuming month hours are also in the same format

    // Set the formatted response data back to the dialog controls
    SetDlgItemText(IDC_EDIT1, formattedTodayHours);
    SetDlgItemText(IDC_EDIT2, formattedOfflineHours);
    SetDlgItemText(IDC_EDIT7, formattedMonthHours);
    // Optionally display a message for user feedback
    CWebCloudAPITestApp::SetResponseMsg(L"Data summary posted successfully.");
}

