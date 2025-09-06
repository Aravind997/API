#pragma once
#include"NetworkRequest.h"

// CSubTaskForm dialog

class CSubTaskForm : public CDialogEx
{
	DECLARE_DYNAMIC(CSubTaskForm)

public:
	CSubTaskForm(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CSubTaskForm();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SUBTASKFORM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	BOOL OnInitDialog();
	JSONValue* m_Jvalue;

	AppApiService* m_PMService;
	CListCtrl m_listctrl;

	CArray<SubTask_Info> m_InfoArray;
	DECLARE_MESSAGE_MAP()
public:
	void SHOWSUBTASK();
	int GetSelectedCheckboxIndex();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedDELETE();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickededit();
	afx_msg void OnBnClickedButtondel();
	void Reset();
};
