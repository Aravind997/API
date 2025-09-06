// CGetAllCompanies.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CGetAllCompanies.h"
#include "afxdialogex.h"
#include "NetworkRequest.h"


// CGetAllCompanies dialog

IMPLEMENT_DYNAMIC(CGetAllCompanies, CDialogEx)

CGetAllCompanies::CGetAllCompanies(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_GET_ALL_COMPANIES, pParent)
{
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;

}

CGetAllCompanies::~CGetAllCompanies()
{
}

void CGetAllCompanies::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_COMP_DETAILS, ListItem);
}


BEGIN_MESSAGE_MAP(CGetAllCompanies, CDialogEx)
	
	ON_CBN_SELCHANGE(IDC_COMP_DETAILS, &CGetAllCompanies::OnCbnSelchangeCompDetails)
END_MESSAGE_MAP()


// CGetAllCompanies message handlers
void CGetAllCompanies::GetallCompanies() {

	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMP_DETAILS);
	Combodrop_down->ResetContent();
	m_apiService->GetAllCompanies(m_vendordetails);
	for (int i = 0; i < m_vendordetails.GetSize(); i++)
	{
		Combodrop_down->AddString(m_vendordetails[i].VenderCompanyName);
	}



}
BOOL CGetAllCompanies::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	GetallCompanies();
	

	// TODO:  Add extra initialization here
   //  GetAllFormsAPI();
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}




void CGetAllCompanies::OnCbnSelchangeCompDetails()
{
	// TODO: Add your control notification handler code here
	CComboBox* comboid = (CComboBox*)GetDlgItem(IDC_COMP_DETAILS);
	int ComboSelItem = comboid->GetCurSel();

	if (ComboSelItem != CB_ERR)
	{
		VenderInfo venderinfo;
		venderinfo = m_vendordetails.GetAt(ComboSelItem);
		ListItem.ResetContent();
		
		ListItem.AddString(_T("Vendor Company: ") + venderinfo.VenderCompanyName);
		ListItem.AddString(_T("Company Email Adress : ") + venderinfo.VenderEmailAddress);
		ListItem.AddString(_T("GstinVatID : ") + venderinfo.GstinVatID);
		ListItem.AddString(_T("Company RegistrationDate : ") + venderinfo.VenderRegistrationDate);
		ListItem.AddString(_T("Company ProfileDesc : ") + venderinfo.VenderProfileDesc);
		ListItem.AddString(_T("Company MobileNumber : ") + venderinfo.VenderMobileNumber);
		ListItem.AddString(_T("Company PhoneNumber : ") + venderinfo.VenderPhoneNumber);
		ListItem.AddString(_T("Company Country : ") + venderinfo.VenderCountry);
		ListItem.AddString(_T("Company PinCode : ") + venderinfo.VenderPinCode);
		ListItem.AddString(_T("Company State : ") + venderinfo.VenderState);
		ListItem.AddString(_T("Company City : ") + venderinfo.VenderCity);
		ListItem.AddString(_T("Company WebSiteUrl : ") + venderinfo.VenderWebsiteUrl);
		ListItem.AddString(_T("Company  Adress1 : ") + venderinfo.VenderAddress2);
		ListItem.AddString(_T("Company  Adress2 : ") + venderinfo.VenderAddress1);
		ListItem.AddString(_T("Company User ID : ") + venderinfo.VenderUserId);
		//ListItem.AddString(_T("Company ReEnterEmail Adress : ") + venderinfo.ReEnterEmailAddress);
		ListItem.AddString(_T("InvoicePrefix : ") + venderinfo.InvoicePrefix);
		
	}
}
