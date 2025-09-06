#pragma once


// CAssignTaskForm dialog

class CAssignTaskForm : public CDialogEx
{
	DECLARE_DYNAMIC(CAssignTaskForm)

public:
	CAssignTaskForm(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CAssignTaskForm();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ASSIGNTASKFORM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	CListCtrl m_listctrl;
	BOOL OnInitDialog();
	void Loaduser();
	JSONValue* m_Jvalue;

	AppApiService* m_PMService;


	CArray<Project_Info> m_projectInfoArray;
	CArray<Task_Info> m_taskInfoArray;
	CArray<SubTask_Info> m_subtaskInfoArray;
	CArray<UserIn, UserIn> m_userinfoArray;

	CArray<usergroup_info> m_teamInfoArray;
	CArray<UserCategotyInfo>m_groupInfoArray;
	CArray <Assign_taskinfo>m_AssignTaskArray;



	DECLARE_MESSAGE_MAP()
public:
	CString a[5];
	CString empid;

	afx_msg void OnCbnSelchangeCombo4();
	afx_msg void OnCbnSelchangeCombo5();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnLvnItemchangedList3(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnLvnItemchangedList5(NMHDR* pNMHDR, LRESULT* pResult);
	void bindemp(CString empid);

	int GetSelectedCheckboxIndex();

	afx_msg void OnBnClickedButton4();
	afx_msg void OnLvnItemchangedListassigntasklist(NMHDR* pNMHDR, LRESULT* pResult);
};
