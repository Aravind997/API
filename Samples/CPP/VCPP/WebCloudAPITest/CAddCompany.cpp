// CAddCompany.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CAddCompany.h"
#include "afxdialogex.h"


// CAddCompany dialog

IMPLEMENT_DYNAMIC(CAddCompany, CDialogEx)

CAddCompany::CAddCompany(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ADD_COMPANY, pParent)
{
	
}

CAddCompany::~CAddCompany()
{
}

void CAddCompany::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_CO_DETIALS, m_listctrl);
}


BEGIN_MESSAGE_MAP(CAddCompany, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_ADD_COMPANY, &CAddCompany::OnBnClickedButtonAddCompany)
	ON_BN_CLICKED(IDC_BT_EDIT_CO, &CAddCompany::OnBnClickedBtEditCo)
	ON_BN_CLICKED(IDC_BT_DLT_CO, &CAddCompany::OnBnClickedBtDltCo)
	
END_MESSAGE_MAP()


// CAddCompany message handlers
BOOL CAddCompany::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	m_listctrl.InsertColumn(0, L"Select", LVCFMT_CENTER, 70);
	m_listctrl.InsertColumn(1, L"Sl No", LVCFMT_CENTER, 60);
	m_listctrl.InsertColumn(2, L"Company Name", LVCFMT_CENTER, 180);
	m_listctrl.InsertColumn(3, L"EMail", LVCFMT_CENTER, 230);
	m_listctrl.InsertColumn(4, L"City", LVCFMT_CENTER, 230);
	m_listctrl.InsertColumn(5, L"State", LVCFMT_CENTER, 150);
	m_listctrl.InsertColumn(6, L"Mobile", LVCFMT_CENTER, 150);
	
	GetallCompanies();
	

	return TRUE;  
}









void CAddCompany::GetallCompanies() {
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_CHECKBOXES);
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	
	m_apiService->GetAllCompanies(m_vendordetails);
	for (int i = 0; i < m_vendordetails.GetSize(); i++)
	{
		int nItem;
		nItem = m_listctrl.InsertItem(i, _T(""));
		CString  slno;
		slno.Format(_T("%d"), i + 1);
		m_listctrl.SetItemText(nItem, 1, slno);
		m_listctrl.SetItemText(nItem, 2, m_vendordetails[i].VenderCompanyName);
		m_listctrl.SetItemText(nItem, 3, m_vendordetails[i].VenderEmailAddress);
		m_listctrl.SetItemText(nItem, 4, m_vendordetails[i].VenderCity);
		m_listctrl.SetItemText(nItem, 5, m_vendordetails[i].VenderState);
		m_listctrl.SetItemText(nItem, 6, m_vendordetails[i].VenderMobileNumber);
		
	}
	m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | TVS_HASBUTTONS);
	//m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

}
int CAddCompany:: GetSelectedCheckboxIndex( ) {

	int nSelectedIndex = -1;

	// iterate through each item in the ListControl
	//CListCtrl m_listctrl;
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

void CAddCompany::OnBnClickedBtEditCo()
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_BUTTON_ADD_COMPANY, _T("Update"));
	
	m_bEditing = TRUE;
	int nCount = m_listctrl.GetItemCount();


	int nSelectedIndex = GetSelectedCheckboxIndex();

	if (nSelectedIndex != -1) {
		// do something with the selected checkbox's index value
	}
	else {
		AfxMessageBox(_T("Please select an item to edit."), MB_ICONWARNING);
	}




	//SetDlgItemText(IDSAVE, _T("Update"));
	if (nSelectedIndex != LB_ERR)
	{

		CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_COMP_NAME);
		Edit_Box1->SetWindowText(_T(""));

		CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_GST);
		Edit_Box2->SetWindowText(_T(""));
		CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_WEBSITE);
		Edit_Box3->SetWindowText(_T(""));
		CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_TELE);
		Edit_Box4->SetWindowText(_T(""));
		CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_MOB);
		Edit_Box5->SetWindowText(_T(""));

		CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_ADRESS1);
		Edit_Box6->SetWindowText(_T(""));
		CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_ADRESS2);
		Edit_Box7->SetWindowText(_T(""));
		CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_EMAIL);
		Edit_Box8->SetWindowText(_T(""));
		CEdit* Edit_Box9 = (CEdit*)GetDlgItem(IDC_EDIT_REMAIL);
		Edit_Box9->SetWindowText(_T(""));
		CEdit* Edit_Box10 = (CEdit*)GetDlgItem(IDC_EDIT_CITY);
		Edit_Box10->SetWindowText(_T(""));
		CEdit* Edit_Box11 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
		Edit_Box11->SetWindowText(_T(""));
		CEdit* Edit_Box12 = (CEdit*)GetDlgItem(IDC_EDIT_STATE);
		Edit_Box12->SetWindowText(_T(""));
		CEdit* Edit_Box13 = (CEdit*)GetDlgItem(IDC_EDIT_COUNTRY);
		Edit_Box13->SetWindowText(_T(""));
		CEdit* Edit_Box14 = (CEdit*)GetDlgItem(IDC_EDIT_DESC);
		Edit_Box14->SetWindowText(_T(""));
		CEdit* Edit_Box15 = (CEdit*)GetDlgItem(IDC_EDIT_INVOICE);
		Edit_Box15->SetWindowText(_T(""));

		Edit_Box1->SetWindowText(m_vendordetails[nSelectedIndex].VenderCompanyName);
		Edit_Box2->SetWindowText(m_vendordetails[nSelectedIndex].GstinVatID);
		Edit_Box3->SetWindowText(m_vendordetails[nSelectedIndex].VenderWebsiteUrl);
		Edit_Box4->SetWindowText(m_vendordetails[nSelectedIndex].VenderPhoneNumber);
		Edit_Box5->SetWindowText(m_vendordetails[nSelectedIndex].VenderMobileNumber);
		Edit_Box6->SetWindowText(m_vendordetails[nSelectedIndex].VenderAddress1);
		Edit_Box7->SetWindowText(m_vendordetails[nSelectedIndex].VenderAddress2);

		Edit_Box8->SetWindowText(m_vendordetails[nSelectedIndex].VenderEmailAddress);
		Edit_Box9->SetWindowText(m_vendordetails[nSelectedIndex].ReEnterEmailAddress);
		Edit_Box10->SetWindowText(m_vendordetails[nSelectedIndex].VenderCity);
		Edit_Box11->SetWindowText(m_vendordetails[nSelectedIndex].VenderPinCode);
		Edit_Box12->SetWindowText(m_vendordetails[nSelectedIndex].VenderState);
		Edit_Box13->SetWindowText(m_vendordetails[nSelectedIndex].VenderCountry);
		Edit_Box14->SetWindowText(m_vendordetails[nSelectedIndex].VenderProfileDesc);
		Edit_Box15->SetWindowText(m_vendordetails[nSelectedIndex].InvoicePrefix);




	}
}


void CAddCompany::OnBnClickedBtDltCo()
{
	// TODO: Add your control notification handler code here
	 int i = 1;
	 int nSelectedIndex = GetSelectedCheckboxIndex();
	 CString  DCompanyId;
	 DCompanyId = m_vendordetails[nSelectedIndex].VenderUserId;
	 // DCompanyId.Format(_T("%d"), i + nSelectedIndex);
	if (DCompanyId == "0")
	{
		AfxMessageBox(_T("Please Select A Comapny To Delete"));
		return;
	}
	

	int iAnswer = 0;
	iAnswer = AfxMessageBox(_T("Are You Sure?Do You want to Delete This Company Detials ?"), MB_OKCANCEL);
	if (iAnswer == IDCANCEL)
	{
		return;
	}
	
	

	m_apiService->DeleteCompany(DCompanyId);
	
	

}
void CAddCompany::OnBnClickedButtonAddCompany()
{
	// TODO: Add your control notification handler code here
	AddVenderInfo add;
	
	CString  btntxt1;
	 GetDlgItem(IDC_BUTTON_ADD_COMPANY)->GetWindowText(btntxt1);

	if (btntxt1 == "Save" ){
		GetDlgItem(IDC_EDIT_COMP_NAME)->GetWindowText(add.VenderCompanyName);
		GetDlgItem(IDC_EDIT_GST)->GetWindowText(add.GstinVatID);
		GetDlgItem(IDC_EDIT_WEBSITE)->GetWindowText(add.VenderWebsiteUrl);
		GetDlgItem(IDC_EDIT_TELE)->GetWindowText(add.VenderPhoneNumber);
		GetDlgItem(IDC_EDIT_MOB)->GetWindowText(add.VenderMobileNumber);
		GetDlgItem(IDC_EDIT_EMAIL)->GetWindowText(add.VenderEmailAddress);
		GetDlgItem(IDC_EDIT_REMAIL)->GetWindowText(add.ReEnterEmailAddress);
		GetDlgItem(IDC_EDIT_INVOICE)->GetWindowText(add.InvoicePrefix);
		GetDlgItem(IDC_EDIT_ADRESS1)->GetWindowText(add.VenderAddress1);
		GetDlgItem(IDC_EDIT_ADRESS2)->GetWindowText(add.VenderAddress2);
		GetDlgItem(IDC_EDIT_CITY)->GetWindowText(add.VenderCity);
		GetDlgItem(IDC_EDIT_PIN)->GetWindowText(add.VenderPinCode);
		GetDlgItem(IDC_EDIT_STATE)->GetWindowText(add.VenderState);
		GetDlgItem(IDC_EDIT_COUNTRY)->GetWindowText(add.VenderCountry);
		GetDlgItem(IDC_EDIT_DESC)->GetWindowText(add.VenderProfileDesc);

		m_apiService = CWebCloudAPITestApp::m_pAppApiService;
		m_apiService->AddCompanyDetails(add);
		ClearData();
	}
	
		CString venderName, venderWeb, vederEmail, venderRemail, VenderPhone, venderMob, venderGst, venderInvoice, venderAdress1, venderAdress2, venderCity, venderPin, venderState, vnederCountry, venderDesc;
		CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_COMP_NAME);
		Edit_Box1->GetWindowText(venderName);

		CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_GST);
		Edit_Box2->GetWindowText(venderGst);

		CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_WEBSITE);
		Edit_Box3->GetWindowText(venderWeb);

		CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_TELE);
		Edit_Box3->GetWindowText(VenderPhone);

		CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_MOB);
		Edit_Box5->GetWindowText(venderMob);

		CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_ADRESS1);
		Edit_Box6->GetWindowText(venderAdress1);

		CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_ADRESS2);
		Edit_Box7->GetWindowText(venderAdress2);


		CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_EMAIL);
		Edit_Box8->GetWindowText(vederEmail);

		CEdit* Edit_Box9 = (CEdit*)GetDlgItem(IDC_EDIT_REMAIL);
		Edit_Box9->GetWindowText(venderRemail);

		CEdit* Edit_Box10 = (CEdit*)GetDlgItem(IDC_EDIT_CITY);
		Edit_Box10->GetWindowText(venderCity);

		CEdit* Edit_Box11 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
		Edit_Box11->GetWindowText(venderPin);

		CEdit* Edit_Box12 = (CEdit*)GetDlgItem(IDC_EDIT_STATE);
		Edit_Box12->GetWindowText(venderState);

		CEdit* Edit_Box13 = (CEdit*)GetDlgItem(IDC_EDIT_COUNTRY);
		Edit_Box13->GetWindowText(vnederCountry);
		CEdit* Edit_Box14 = (CEdit*)GetDlgItem(IDC_EDIT_DESC);
		Edit_Box14->GetWindowText(venderDesc);
		CEdit* Edit_Box15 = (CEdit*)GetDlgItem(IDC_EDIT_INVOICE);
		Edit_Box15->GetWindowText(venderInvoice);


		CString btntxt;
		if (venderName != _T("")) {

			GetDlgItem(IDC_BUTTON_ADD_COMPANY)->GetWindowText(btntxt);
			if (btntxt == "Update") {

				int nSelectedIndex = GetSelectedCheckboxIndex();
				VenderInfo updateinfo;
				updateinfo.VenderUserId = m_vendordetails[nSelectedIndex].VenderUserId;

				updateinfo.VenderCompanyName = venderName;
				updateinfo.GstinVatID = venderGst;
				updateinfo.VenderWebsiteUrl = venderWeb;
				updateinfo.VenderEmailAddress = vederEmail;
				updateinfo.ReEnterEmailAddress = venderRemail;
				updateinfo.InvoicePrefix = venderInvoice;
				updateinfo.VenderPhoneNumber = VenderPhone;
				updateinfo.VenderMobileNumber = venderMob;
				updateinfo.VenderAddress1 = venderAdress1;
				updateinfo.VenderAddress2 = venderAdress2;
				updateinfo.VenderCity = venderCity;
				updateinfo.VenderPinCode = venderPin;
				updateinfo.VenderState = venderState;
				updateinfo.VenderCountry = vnederCountry;
				updateinfo.VenderProfileDesc = venderDesc;

				m_apiService->UpadateCompany(updateinfo);
				SetDlgItemText(IDC_BUTTON_ADD_COMPANY, _T("Save"));
				ClearData();
				//GetallCompanies();
			}
		}
		
	

}
void CAddCompany::ClearData() {
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_COMP_NAME);
	Edit_Box1->SetWindowText(_T(""));

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_GST);
	Edit_Box2->SetWindowText(_T(""));
	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_WEBSITE);
	Edit_Box3->SetWindowText(_T(""));
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_TELE);
	Edit_Box4->SetWindowText(_T(""));
	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_MOB);
	Edit_Box5->SetWindowText(_T(""));

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_ADRESS1);
	Edit_Box6->SetWindowText(_T(""));
	CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_ADRESS2);
	Edit_Box7->SetWindowText(_T(""));
	CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_EMAIL);
	Edit_Box8->SetWindowText(_T(""));
	CEdit* Edit_Box9 = (CEdit*)GetDlgItem(IDC_EDIT_REMAIL);
	Edit_Box9->SetWindowText(_T(""));
	CEdit* Edit_Box10 = (CEdit*)GetDlgItem(IDC_EDIT_CITY);
	Edit_Box10->SetWindowText(_T(""));
	CEdit* Edit_Box11 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
	Edit_Box11->SetWindowText(_T(""));
	CEdit* Edit_Box12 = (CEdit*)GetDlgItem(IDC_EDIT_STATE);
	Edit_Box12->SetWindowText(_T(""));
	CEdit* Edit_Box13 = (CEdit*)GetDlgItem(IDC_EDIT_COUNTRY);
	Edit_Box13->SetWindowText(_T(""));
	CEdit* Edit_Box14 = (CEdit*)GetDlgItem(IDC_EDIT_DESC);
	Edit_Box14->SetWindowText(_T(""));
	CEdit* Edit_Box15 = (CEdit*)GetDlgItem(IDC_EDIT_INVOICE);
	Edit_Box15->SetWindowText(_T(""));
}