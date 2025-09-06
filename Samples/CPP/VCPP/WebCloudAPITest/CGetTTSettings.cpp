// CGetTTSettings.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CGetTTSettings.h"
#include "afxdialogex.h"
#include <iostream>
#include <windows.h>
#include <ctime> 
#include <chrono> 
#include <ctime>
#include <iomanip>

// CGetTTSettings dialog

IMPLEMENT_DYNAMIC(CGetTTSettings, CDialogEx)



CGetTTSettings::CGetTTSettings(CWnd* pParent /*=nullptr*/)
    : CDialogEx(IDD_DIALOG_GETTTSETTINGS, pParent)
    , m_TimeZone()
    , m_IdleTime()
    , m_TimeZoneCode()
    , m_ActivityCaptureInterval()
    , m_ScreenCaptureResolution()
    
{

}

CGetTTSettings::~CGetTTSettings()
{
}


void CGetTTSettings::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT1, m_TimeZone);
    DDX_Text(pDX, IDC_EDIT2, m_IdleTime);
    DDX_Text(pDX, IDC_EDIT3, m_TimeZoneCode);
    DDX_Text(pDX, IDC_EDIT5, m_ActivityCaptureInterval);
    DDX_Text(pDX, IDC_EDIT8, m_ScreenCaptureResolution);


    TimeTrackerSettings TimeTracker;
    m_TimeTrackerService->GetTimeTrackerSettings(TimeTracker);

    GetDlgItem(IDC_EDIT1)->SetWindowText(TimeTracker.TimeZone);
    GetDlgItem(IDC_EDIT3)->SetWindowText(TimeTracker.TimeZoneCode);
    GetDlgItem(IDC_EDIT2)->SetWindowText(CString(std::to_wstring(TimeTracker.IdleTimeDuration).c_str()));
    GetDlgItem(IDC_EDIT5)->SetWindowText(CString(std::to_wstring(TimeTracker.ActivityCaptureInterval).c_str()));
    GetDlgItem(IDC_EDIT8)->SetWindowText(TimeTracker.ScreenCaptureResolution);

    //CWebCloudAPITestApp::SetResponseMsg(responseMsg);
}



BEGIN_MESSAGE_MAP(CGetTTSettings, CDialogEx)

END_MESSAGE_MAP()


// CGetTTSettings message handlers




