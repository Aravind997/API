#pragma once

// Forward declaration (Assuming it's a service class)
class TimeTrackerService;

// CTTDataSummery dialog
class CTTDataSummery : public CDialogEx
{
    DECLARE_DYNAMIC(CTTDataSummery)

public:
    CTTDataSummery(CWnd* pParent = nullptr);   // Standard constructor
    AppApiService* m_TimeTrackerService;

    virtual ~CTTDataSummery();

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_DIALOG_TTDATASUMMERY };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    CString FormatTime(double totalHours);
    virtual BOOL OnInitDialog();  // Corrected declaration

    DECLARE_MESSAGE_MAP()

private:
    void ProcessAndPostDataSummary(); //  Function to process and post data

    CString FormatTime(int totalMinutes);

    // Member variables for edit box values
    CString m_TodayHours;
    CString m_WeekHours;
    CString m_MonthHours;

};
