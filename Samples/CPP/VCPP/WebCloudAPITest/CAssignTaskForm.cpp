// CAssignTaskForm.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CAssignTaskForm.h"
#include "afxdialogex.h"
#include"CProjectForm.h"
#include "CTaskForm.h"
#include"CSubTaskForm.h"




// CAssignTaskForm dialog

IMPLEMENT_DYNAMIC(CAssignTaskForm, CDialogEx)

CAssignTaskForm::CAssignTaskForm(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ASSIGNTASKFORM, pParent)
{

}

CAssignTaskForm::~CAssignTaskForm()
{
}

void CAssignTaskForm::DoDataExchange(CDataExchange* pDX)
{

	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST4, m_listctrl);

}

BOOL CAssignTaskForm::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_listctrl.InsertColumn(0, L"Select", LVCFMT_CENTER, 70);
	m_listctrl.InsertColumn(1, L"SL No", LVCFMT_CENTER, 60);
	m_listctrl.InsertColumn(2, L"Assign Task", LVCFMT_CENTER, 470);
	m_listctrl.InsertColumn(3, L"Assign id", LVCFMT_CENTER, 30);

	CComboBox* project = (CComboBox*)GetDlgItem(IDC_COMBO1);
	CComboBox* task = (CComboBox*)GetDlgItem(IDC_COMBO2);
	CComboBox* subtask = (CComboBox*)GetDlgItem(IDC_COMBO3);
	CComboBox* user = (CComboBox*)GetDlgItem(IDC_COMBO4);
	CComboBox* team = (CComboBox*)GetDlgItem(IDC_COMBO5);
	m_PMService->PROJECTVIEWLIST(m_projectInfoArray);
	m_PMService->TASKVIEWLIST(m_taskInfoArray);
	m_PMService->SUBTASKVIEWLIST(m_subtaskInfoArray);
	m_PMService->GetUserdetais(m_userinfoArray);
	
		// Set the selection to the first item (index 0)
		


	int userid;
	m_PMService->GetExistingGroups(m_groupInfoArray);
	for (unsigned int i = 0; i < m_projectInfoArray.GetSize(); i++)
	{
		project->AddString(m_projectInfoArray.GetAt(i).Projecttitle);

	}
	for (unsigned int i = 0; i < m_taskInfoArray.GetSize(); i++)
	{
		task->AddString(m_taskInfoArray.GetAt(i).TaskDescription);

	}
	for (unsigned int i = 0; i < m_subtaskInfoArray.GetSize(); i++)
	{
		subtask->AddString(m_subtaskInfoArray.GetAt(i).SubTaskDescription);

	}
	for (unsigned int i = 0; i < m_groupInfoArray.GetSize(); i++)
	{
		user->AddString(m_groupInfoArray.GetAt(i).CategoryName);
		a[i] = m_groupInfoArray.GetAt(i).CategoryID;

	}
	Loaduser();
	if (project && task && subtask && user)
	{
		project->SetCurSel(0);
		task->SetCurSel(0);
		subtask->SetCurSel(0);
		user->SetCurSel(0);
	}
	return TRUE;
}
BEGIN_MESSAGE_MAP(CAssignTaskForm, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO4, &CAssignTaskForm::OnCbnSelchangeCombo4)
	ON_CBN_SELCHANGE(IDC_COMBO5, &CAssignTaskForm::OnCbnSelchangeCombo5)
	ON_BN_CLICKED(IDC_BUTTON1, &CAssignTaskForm::OnBnClickedButton1)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST3, &CAssignTaskForm::OnLvnItemchangedList3)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST5, &CAssignTaskForm::OnLvnItemchangedList5)
	ON_BN_CLICKED(IDC_BUTTON2, &CAssignTaskForm::OnBnClickedButton4)
	
END_MESSAGE_MAP()


// CAssignTaskForm message handlers
void CAssignTaskForm::Loaduser()
{

}


void CAssignTaskForm::OnCbnSelchangeCombo4()
{

	CComboBox* user = (CComboBox*)GetDlgItem(IDC_COMBO4);
	int Combo_Sel = user->GetCurSel();
	CComboBox* team = (CComboBox*)GetDlgItem(IDC_COMBO5);
	int count = team->GetCount();

	team->ResetContent();
	if (Combo_Sel != CB_ERR)
	{

		m_teamInfoArray.RemoveAll();

		m_PMService->GETTEMMEMBER_BY_GROUP(Combo_Sel, m_teamInfoArray);
		for (unsigned int i = 0; i < m_teamInfoArray.GetSize(); i++)
		{
			team->AddString(m_teamInfoArray.GetAt(i).FirstName);


		}

	}

}


void CAssignTaskForm::OnCbnSelchangeCombo5()
{
	CComboBox* team = (CComboBox*)GetDlgItem(IDC_COMBO5);
	int Combo_Sel = team->GetCurSel();
	empid = m_teamInfoArray.GetAt(Combo_Sel).Email;

	bindemp(empid);

}


void CAssignTaskForm::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CComboBox* project = (CComboBox*)GetDlgItem(IDC_COMBO1);
	CComboBox* task = (CComboBox*)GetDlgItem(IDC_COMBO2);
	CComboBox* subtask = (CComboBox*)GetDlgItem(IDC_COMBO3);
	CComboBox* user = (CComboBox*)GetDlgItem(IDC_COMBO4);
	CComboBox* team = (CComboBox*)GetDlgItem(IDC_COMBO5);
	int projectcel = project->GetCurSel();
	int taskcel = task->GetCurSel();
	int subtaskcel = subtask->GetCurSel();
	int usercel = user->GetCurSel();
	int teamcel = team->GetCurSel();
	Assign_task_Details Assigntask;

	int projectid = m_projectInfoArray.GetAt(projectcel).ProjectID;
	int taskid = m_taskInfoArray.GetAt(taskcel).TaskID;
	int subtaskid = m_subtaskInfoArray.GetAt(subtaskcel).SubTaskID;
	CString emp_id = m_teamInfoArray.GetAt(teamcel).Email;
	CString user_id = m_groupInfoArray.GetAt(usercel).CategoryID;
	CString tasktitle = (m_projectInfoArray.GetAt(projectcel).Projecttitle + "|" + m_taskInfoArray.GetAt(taskcel).TaskTitle + "|" + m_subtaskInfoArray.GetAt(subtaskcel).SubTaskTitle);


	Assigntask.ProjectID = projectid;
	Assigntask.TaskID = taskid;
	Assigntask.SubTaskID = subtaskid;
	Assigntask.EmployeeID = emp_id;
	Assigntask.UserID = user_id;
	Assigntask.TaskTitle = tasktitle;
	//Assigntask.TaskAssignedBy = "admin";

	m_PMService->viewassintask(Assigntask);
	//m_PMService->getalltaskbyemp(emp_id);

	bindemp(emp_id);
}


void CAssignTaskForm::OnLvnItemchangedList3(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}


void CAssignTaskForm::OnLvnItemchangedList5(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}
void  CAssignTaskForm::bindemp(CString empid)
{
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_CHECKBOXES);
	Assign_task_Details Assigntask;
	CString e = Assigntask.EmployeeID;
	m_AssignTaskArray.RemoveAll();
	m_listctrl.DeleteAllItems();
	//m_PMService->TASKVIEWLIST(m_AssignTaskArray);
	m_PMService->getalltaskbyemp(empid, m_AssignTaskArray);

	for (unsigned int i = 0; i < m_AssignTaskArray.GetSize(); i++)
	{
		int nItem;
		nItem = m_listctrl.InsertItem(i, _T(""));
		CString  slno;
		slno.Format(_T("%d"), i + 1);
		CString id;
		id.Format(_T("%d"), m_AssignTaskArray[i].TaskAssignmentId);
		m_listctrl.SetItemText(nItem, 1, slno);
		//m_listctrl.SetItemText(nItem, 2, m_AssignTaskArray[i].TaskTitle);
		m_listctrl.SetItemText(nItem, 2, m_AssignTaskArray[i].AssignmentDesc);
		m_listctrl.SetItemText(nItem, 3, id);
	}
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | TVS_HASBUTTONS);
}


int  CAssignTaskForm::GetSelectedCheckboxIndex()
{
	int nSelectedIndex = -1;

	// iterate through each item in the ListControl
	int nItemCount = m_listctrl.GetItemCount();
	for (int nIndex = 0; nIndex < nItemCount; nIndex++) {
		// check if the checkbox in the first column is checked
		if (m_listctrl.GetCheck(nIndex)) {
			nSelectedIndex = nIndex;
			break; // exit the loop as soon as a checked checkbox is found
		}
	}

	return nSelectedIndex;
}



void CAssignTaskForm::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here
	int nSelectedIndex = GetSelectedCheckboxIndex();
	int nCount = m_listctrl.GetItemCount();
	CString assignId = m_listctrl.GetItemText(nSelectedIndex, 3);
	if (nCount == -1)
	{
		// No item selected
		AfxMessageBox(_T("Please select an item to delete."), MB_ICONWARNING);
		return;
	}
	else
	{


		CComboBox* team = (CComboBox*)GetDlgItem(IDC_COMBO5);
		int Combo_Sel = team->GetCurSel();
		empid = m_teamInfoArray.GetAt(Combo_Sel).Email;
		m_PMService->deleteassigntask(assignId);
		bindemp(empid);
	}
	//AfxMessageBox(Assigntask.AssignmentDesc);

}


void CAssignTaskForm::OnLvnItemchangedListassigntasklist(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}
