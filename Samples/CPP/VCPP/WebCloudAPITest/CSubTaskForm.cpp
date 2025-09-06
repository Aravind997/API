// CSubTaskForm.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CSubTaskForm.h"
#include "afxdialogex.h"


// CSubTaskForm dialog

IMPLEMENT_DYNAMIC(CSubTaskForm, CDialogEx)

CSubTaskForm::CSubTaskForm(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SUBTASKFORM, pParent)
{

}

CSubTaskForm::~CSubTaskForm()
{
}

void CSubTaskForm::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_SUBTASKLIST, m_listctrl);
}

BOOL CSubTaskForm::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//m_listctrl.InsertColumn(1, L"MsgID", LVCFMT_CENTER, 100);
	m_listctrl.InsertColumn(0, L"Select", LVCFMT_CENTER, 70);
	m_listctrl.InsertColumn(1, L"SL No", LVCFMT_CENTER, 60);
	m_listctrl.InsertColumn(2, L"SubTask Name", LVCFMT_CENTER, 150);
	m_listctrl.InsertColumn(3, L"SubTask Description", LVCFMT_CENTER, 200);

	SHOWSUBTASK();
	return TRUE;

}


BEGIN_MESSAGE_MAP(CSubTaskForm, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CSubTaskForm::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &CSubTaskForm::OnBnClickedButton4)

	
	ON_BN_CLICKED(IDC_BUTTONEdit, &CSubTaskForm::OnBnClickededit)
	ON_BN_CLICKED(IDC_BUTTONDel, &CSubTaskForm::OnBnClickedButtondel)
END_MESSAGE_MAP()


// CSubTaskForm message handlers
void CSubTaskForm::SHOWSUBTASK()
{
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_CHECKBOXES);
	m_InfoArray.RemoveAll();

	m_PMService->SUBTASKVIEWLIST(m_InfoArray);

	for (unsigned int i = 0; i < m_InfoArray.GetSize(); i++)
	{
		int nItem;
		nItem = m_listctrl.InsertItem(i, _T(""));
		CString  slno;
		//slno.Format(_T("%d"), i + 1);
		slno.Format(_T("%d"), m_InfoArray[i].SubTaskID);
		m_listctrl.SetItemText(nItem, 1, slno);
		m_listctrl.SetItemText(nItem, 2, m_InfoArray[i].SubTaskTitle);
		m_listctrl.SetItemText(nItem, 3, m_InfoArray[i].SubTaskDescription);
	}
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | TVS_HASBUTTONS);
}



void CSubTaskForm::OnBnClickedButton2()
{
	{
		// TODO: Add your control notification handler code here
		SubTask_Details info;
		CString strButtonText1;
		GetDlgItem(IDC_BUTTON2)->GetWindowText(strButtonText1);



		if (strButtonText1 == _T("Update"))
		{
			CString strtitle, strdesc;
			GetDlgItem(IDC_EDIT_SUBTASKNAME)->GetWindowText(strtitle);
			GetDlgItem(IDC_EDIT_SUBTASKDESC)->GetWindowText(strdesc);


			int nSelectedIndex = GetSelectedCheckboxIndex();
			SubTaskDetails Info;
			GetDlgItem(IDC_EDIT_SUBTASKNAME)->GetWindowText(Info.SubTaskTitle);
			Info.SubTaskID = m_InfoArray[nSelectedIndex].SubTaskID;
			Info.SubTaskTitle = strtitle;
			Info.SubTaskDescription = strdesc;
			m_PMService->updatesubtask(Info);
			Reset();
			
		}

		if (strButtonText1 == _T("Save"))
		{
			GetDlgItem(IDC_EDIT_SUBTASKNAME)->GetWindowText(info.SubTaskTitle);
			GetDlgItem(IDC_EDIT_SUBTASKDESC)->GetWindowText(info.SubTaskDescription);
			m_PMService->AddNewSubTask(info);
			m_listctrl.DeleteAllItems();

			SHOWSUBTASK();
		}
	}
}


void CSubTaskForm::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here
	Reset();
}
int CSubTaskForm::GetSelectedCheckboxIndex()
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




void CSubTaskForm::OnBnClickedButton1()
{
}


void CSubTaskForm::OnBnClickededit()
{
	// TODO: Add your control notification handler code here

	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_BUTTON2, _T("Update"));
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
		CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_SUBTASKNAME);
		Edit_Box1->SetWindowText(_T(""));

		CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_SUBTASKDESC);
		Edit_Box2->SetWindowText(_T(""));
		Edit_Box1->SetWindowText(m_InfoArray[nSelectedIndex].SubTaskTitle);
		Edit_Box2->SetWindowText(m_InfoArray[nSelectedIndex].SubTaskDescription);
	}
}


void CSubTaskForm::OnBnClickedButtondel()
{
	
		// TODO: Add your control notification handler code hereint nSelectedIndex = GetSelectedCheckboxIndex();
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
			m_PMService->Deletesubtask(nSelectedIndex);

			//m_HRService->DeleteEmployee(EmployeeEmailOff[0]);
			m_listctrl.DeleteAllItems();
			SHOWSUBTASK();
		}
	}
	// TODO: Add your control notification handler code here

void CSubTaskForm::Reset()
{
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_SUBTASKNAME);
	Edit_Box1->SetWindowText(_T(""));

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_SUBTASKDESC);
	Edit_Box2->SetWindowText(_T(""));
	SetDlgItemText(IDC_BUTTON2, _T("Save"));
	m_listctrl.DeleteAllItems();
    SHOWSUBTASK();
}