// CTaskForm.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CTaskForm.h"
#include "afxdialogex.h"


// CTaskForm dialog

IMPLEMENT_DYNAMIC(CTaskForm, CDialogEx)

CTaskForm::CTaskForm(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_TASKFORM, pParent)
{

}

CTaskForm::~CTaskForm()
{
}

void CTaskForm::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_PROJECTLIST, m_listctrl);
	DDX_Control(pDX, IDC_LIST_TASKLIST, m_listctrl);
}

BOOL CTaskForm::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//m_listctrl.InsertColumn(1, L"MsgID", LVCFMT_CENTER, 100);
	m_listctrl.InsertColumn(0, L"Select", LVCFMT_CENTER, 70);
	m_listctrl.InsertColumn(1, L"SL No", LVCFMT_CENTER, 60);
	m_listctrl.InsertColumn(2, L"Task Name", LVCFMT_CENTER, 150);
	m_listctrl.InsertColumn(3, L"Task Description", LVCFMT_CENTER, 200);

	SHOWTASK();
	return TRUE;

}
BEGIN_MESSAGE_MAP(CTaskForm, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SAVE2, &CTaskForm::OnBnClickedButtonSave2)
	ON_BN_CLICKED(IDC_BUTTON_CANCEL, &CTaskForm::OnBnClickedButtonCancel)
	ON_BN_CLICKED(IDC_BUTTONDel, &CTaskForm::OnBnClickedDELETE)
	ON_BN_CLICKED(IDC_BUTTONEdit, &CTaskForm::OnBnClickedButton2)
END_MESSAGE_MAP()


// CTaskForm message handlers
void CTaskForm::SHOWTASK()
{
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_CHECKBOXES);
	m_InfoArray.RemoveAll();

	m_PMService->TASKVIEWLIST(m_InfoArray);

	for (unsigned int i = 0; i < m_InfoArray.GetSize(); i++)
	{
		int nItem;
		nItem = m_listctrl.InsertItem(i, _T(""));
		CString  slno;
		slno.Format(_T("%d"), i + 1);
		m_listctrl.SetItemText(nItem, 1, slno);
		m_listctrl.SetItemText(nItem, 2, m_InfoArray[i].TaskTitle);
		m_listctrl.SetItemText(nItem, 3, m_InfoArray[i].TaskDescription);
	}
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | TVS_HASBUTTONS);
}


void CTaskForm::OnBnClickedButtonSave2()
{
	// TODO: Add your control notification handler code here
	Task_Details info;
	CString strButtonText1;
	GetDlgItem(IDC_BUTTON_SAVE2)->GetWindowText(strButtonText1);

	CString strtitle, strdesc;
	GetDlgItem(IDC_EDIT_TASKNAME)->GetWindowText(strtitle);
	GetDlgItem(IDC_EDIT_TASKDESC)->GetWindowText(strdesc);


	if (strButtonText1 == _T("Update"))
	{


		int nSelectedIndex = GetSelectedCheckboxIndex();
		TaskDetails Info;
		GetDlgItem(IDC_EDIT_TASKNAME)->GetWindowText(Info.TaskTitle);
		Info.TaskID = m_InfoArray[nSelectedIndex].TaskID;
		Info.TaskTitle = strtitle;
		Info.TaskDescription = strdesc;
		m_PMService->updatetask(Info);
		Reset();
		SetDlgItemText(ID_BUTTON_SAVE, _T("Save"));
	}

	if (strButtonText1 == _T("Save"))
	{
		GetDlgItem(IDC_EDIT_TASKNAME)->GetWindowText(info.TaskTitle);
		GetDlgItem(IDC_EDIT_TASKDESC)->GetWindowText(info.TaskDescription);
		m_PMService->AddNewTask(info);
		m_listctrl.DeleteAllItems();
		SHOWTASK();
	}
}


void CTaskForm::OnBnClickedButtonCancel()
{
	// TODO: Add your control notification handler code here
	Reset();
}

int CTaskForm::GetSelectedCheckboxIndex()
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


void CTaskForm::OnBnClickedDELETE()
{
	// TODO: Add your control notification handler code here

	int nSelectedIndex = GetSelectedCheckboxIndex();
	int nCount = m_listctrl.GetItemCount();
	if (nCount == -1)
	{
		// No item selected
		AfxMessageBox(_T("Please select an item to delete."), MB_ICONWARNING);
		return;
	}
	else
	{
		m_PMService->Deletetask(nSelectedIndex);

		//m_HRService->DeleteEmployee(EmployeeEmailOff[0]);
		m_listctrl.DeleteAllItems();
		SHOWTASK();
	}
}


void CTaskForm::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_BUTTON_SAVE2, _T("Update"));
	int nCount = m_listctrl.GetItemCount();


	int nSelectedIndex = GetSelectedCheckboxIndex();
	if (nSelectedIndex != -1) {
		// do something with the selected checkbox's index value
	}
	else {
		AfxMessageBox(_T("Please select an item to edit."), MB_ICONWARNING);
	}
	if (nSelectedIndex != LB_ERR)
	{
		CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_TASKNAME);
		Edit_Box1->SetWindowText(_T(""));

		CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_TASKDESC);
		Edit_Box2->SetWindowText(_T(""));
		Edit_Box1->SetWindowText(m_InfoArray[nSelectedIndex].TaskTitle);
		Edit_Box2->SetWindowText(m_InfoArray[nSelectedIndex].TaskDescription);
	}
}
void CTaskForm::Reset()
{
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_TASKNAME);
	Edit_Box1->SetWindowText(_T(""));

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_TASKDESC);
	Edit_Box2->SetWindowText(_T(""));
	SetDlgItemText(IDC_BUTTON_SAVE2, _T("Save"));
	m_listctrl.DeleteAllItems();
	SHOWTASK();
}