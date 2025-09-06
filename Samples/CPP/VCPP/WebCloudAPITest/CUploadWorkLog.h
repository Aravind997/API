#pragma once


// CUploadWorkLog dialog

class CUploadWorkLog : public CDialogEx
{
	DECLARE_DYNAMIC(CUploadWorkLog)

public:
	CUploadWorkLog(CWnd* pParent = nullptr);
	void CaptureWorkActivity();
	// standard constructor
	virtual ~CUploadWorkLog();
	AppApiService* m_TTService;

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_UPLOADWORKLOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedUpload();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedTakeScreenshots();
	afx_msg void OnBnClickedClose();



	CString m_CaptureTime;
	CString m_MessageText;
	CString m_exename;
	CEdit m_windowtite;
	CString m_windowtitle;
	CString memotitle;
	CString m_memodescription;
	CString CompletionPercentage;
	CStatic m_screenshot;
	CString m_screenshotBase64; 

};
