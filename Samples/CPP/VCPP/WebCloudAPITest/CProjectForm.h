#pragma once


// CProjectForm dialog

class CProjectForm : public CDialogEx
{
	DECLARE_DYNAMIC(CProjectForm)

public:
	CProjectForm(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CProjectForm();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PROJECTFORM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	CListCtrl m_listctrl;
	BOOL OnInitDialog();
	JSONValue* m_Jvalue;

	AppApiService* m_PMService;

	CArray<Project_Info> m_InfoArray;

	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedButton2();
	void SHOWPROJECT();
	int GetSelectedCheckboxIndex();

	afx_msg void OnBnClickedButtonedit();
	afx_msg void OnBnClickedButtonddel();
	//afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedButton4();
	void Reset();
};
