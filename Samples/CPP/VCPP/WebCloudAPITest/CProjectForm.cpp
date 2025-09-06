// CProjectForm.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CProjectForm.h"
#include "afxdialogex.h"


// CProjectForm dialog

IMPLEMENT_DYNAMIC(CProjectForm, CDialogEx)

CProjectForm::CProjectForm(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_PROJECTFORM, pParent)
{

}

CProjectForm::~CProjectForm()
{
}

void CProjectForm::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_listctrl);
}

BOOL CProjectForm::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_listctrl.InsertColumn(0, L"Select", LVCFMT_CENTER, 70);
	m_listctrl.InsertColumn(1, L"SL No", LVCFMT_CENTER, 60);
	m_listctrl.InsertColumn(2, L"Project Name", LVCFMT_CENTER, 150);
	m_listctrl.InsertColumn(3, L"Project Description", LVCFMT_CENTER, 200);
	SHOWPROJECT();
	return true;
}
BEGIN_MESSAGE_MAP(CProjectForm, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CProjectForm::OnBnClickedButton2)

	ON_BN_CLICKED(IDC_BUTTONEdit, &CProjectForm::OnBnClickedButtonedit)
	ON_BN_CLICKED(IDC_BUTTONDel, &CProjectForm::OnBnClickedButtonddel)
	//ON_BN_CLICKED(IDC_CHECK3, &CProjectForm::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_BUTTON4, &CProjectForm::OnBnClickedButton4)
END_MESSAGE_MAP()


// CProjectForm message handlers


void CProjectForm::OnBnClickedButton2()
{
	// SAVE
	projectDetails info;
	CString strButtonText1;
	GetDlgItem(IDC_BUTTON2)->GetWindowText(strButtonText1);

	CString strtitle, strdesc;
	GetDlgItem(IDC_EDIT1)->GetWindowText(strtitle);
	GetDlgItem(IDC_EDIT2)->GetWindowText(strdesc);



	if (strButtonText1 == _T("Update"))
	{


		int nSelectedIndex = GetSelectedCheckboxIndex();
		projectDetails Info;
		GetDlgItem(IDC_EDIT1)->GetWindowText(Info.Projecttitle);
		Info.ProjectID = m_InfoArray[nSelectedIndex].ProjectID;
		Info.Projecttitle = strtitle;
		Info.ProjectDescription = strdesc;
		UINT state = IsDlgButtonChecked(IDC_CHECK3);

		if (state == BST_CHECKED) {
			// Checkbox is checked
			Info.iCheckActive = 1;
		}
		else if (state == BST_UNCHECKED) {
			// Checkbox is unchecked
			Info.iCheckActive = 0;
		}
		m_PMService->updateproject(Info);
		
		Reset();
	}

	if (strButtonText1 == _T("Save"))
	{
		GetDlgItem(IDC_EDIT1)->GetWindowText(info.Projecttitle);
		GetDlgItem(IDC_EDIT2)->GetWindowText(info.ProjectDescription);
		UINT state = IsDlgButtonChecked(IDC_CHECK3);

		if (state == BST_CHECKED) {
			// Checkbox is checked
			info.iCheckActive = 1;
		}
		else if (state == BST_UNCHECKED) {
			// Checkbox is unchecked
			info.iCheckActive = 0;
		}
		m_PMService->AddNewProject(info);
		m_listctrl.DeleteAllItems();
		SHOWPROJECT();
	}

}
void CProjectForm::SHOWPROJECT()
{
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_CHECKBOXES);
	m_InfoArray.RemoveAll();

	m_PMService->PROJECTVIEWLIST(m_InfoArray);

	for (unsigned int i = 0; i < m_InfoArray.GetSize(); i++)
	{
		int nItem;
		nItem = m_listctrl.InsertItem(i, _T(""));
		CString  slno;
		slno.Format(_T("%d"), i + 1);
		m_listctrl.SetItemText(nItem, 1, slno);
		m_listctrl.SetItemText(nItem, 2, m_InfoArray[i].Projecttitle);
		m_listctrl.SetItemText(nItem, 3, m_InfoArray[i].ProjectDescription);
	}
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | TVS_HASBUTTONS);
}

int CProjectForm::GetSelectedCheckboxIndex()
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






void CProjectForm::OnBnClickedButtonedit()
{
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
		CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT1);
		Edit_Box1->SetWindowText(_T(""));

		CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT2);
		Edit_Box2->SetWindowText(_T(""));
		Edit_Box1->SetWindowText(m_InfoArray[nSelectedIndex].Projecttitle);
		Edit_Box2->SetWindowText(m_InfoArray[nSelectedIndex].ProjectDescription);
		UINT state = IsDlgButtonChecked(IDC_CHECK3);
		int checkBoxId = IDC_CHECK3;



		if (m_InfoArray[nSelectedIndex].iCheckActive == 1)
		{
			CheckDlgButton(checkBoxId, BST_CHECKED);
		}
		if (m_InfoArray[nSelectedIndex].iCheckActive == 0)
		{

			CheckDlgButton(checkBoxId, BST_UNCHECKED);
		}

	}


}


void CProjectForm::OnBnClickedButtonddel()
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
		m_PMService->DeleteProject(nSelectedIndex);


		m_listctrl.DeleteAllItems();
		SHOWPROJECT();
	}
}





void CProjectForm::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here
	Reset();

}

void CProjectForm::Reset()
{
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT1);
	Edit_Box1->SetWindowText(_T(""));

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT2);
	Edit_Box2->SetWindowText(_T(""));
	SetDlgItemText(IDC_BUTTON2, _T("Save"));
	m_listctrl.DeleteAllItems();
	SHOWPROJECT();
}