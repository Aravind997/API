// CPaymentGateway.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CPaymentGateway.h"
#include "afxdialogex.h"


// CPaymentGateway dialog

IMPLEMENT_DYNAMIC(CPaymentGateway, CDialogEx)

CPaymentGateway::CPaymentGateway(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_PAYMENT, pParent)
{
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;

}

CPaymentGateway::~CPaymentGateway()
{
}

void CPaymentGateway::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK_PAY, m_checkBox);
	DDX_Control(pDX, IDC_CHECK_STRIPE, m_checkBoxStripe);
	DDX_Control(pDX, IDC_CHECK_RAZOR, m_checkBoxRazor); 
	DDX_Control(pDX, IDC_CHECK_BT, m_checkBoxBank);
	DDX_Control(pDX, IDC_CHECK_PAYU, m_checkBoxPayu);
}


BEGIN_MESSAGE_MAP(CPaymentGateway, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO_PAY_CO, &CPaymentGateway::OnCbnSelchangeComboPayCo)
	ON_BN_CLICKED(IDC_RADIO_PayPal, &CPaymentGateway::OnBnClickedRadioPaypal)
	ON_BN_CLICKED(IDC_RADIO_PAYU_MONEY, &CPaymentGateway::OnBnClickedRadioPayuMoney)
	ON_BN_CLICKED(IDC_RADIO_STRIPESETTIGS, &CPaymentGateway::OnBnClickedRadioStripesettigs)
	ON_BN_CLICKED(IDC_RADIO_RAZORPAYSETTINGS, &CPaymentGateway::OnBnClickedRadioRazorpaysettings)
	ON_BN_CLICKED(IDC_RADIO_EMAILSETTINGS, &CPaymentGateway::OnBnClickedRadioEmailsettings)
	ON_BN_CLICKED(IDC_RADIO_BUSINESSSETTINGS, &CPaymentGateway::OnBnClickedRadioBusinesssettings)
	ON_BN_CLICKED(IDC_RADIO_SHIPINGSETTINGS, &CPaymentGateway::OnBnClickedRadioShipingsettings)
	ON_BN_CLICKED(IDC_RADIO_BANKDETAILS, &CPaymentGateway::OnBnClickedRadioBankdetails)
	//ON_BN_CLICKED(IDC_BUTTON_PAY, &CPaymentGateway::OnBnClickedButtonPay)

	ON_BN_CLICKED(IDC_CHECK_PAY, &CPaymentGateway::OnBnClickedCheckPay)
	ON_BN_CLICKED(IDC_BUTTON_PAYU, &CPaymentGateway::OnBnClickedButtonPayu)
	ON_BN_CLICKED(IDC_BUTTON_PAY, &CPaymentGateway::OnBnClickedButtonPay)
	ON_BN_CLICKED(IDC_BUTTON_STRIPE, &CPaymentGateway::OnBnClickedButtonStripe)
	ON_BN_CLICKED(IDC_CHECK_STRIPE, &CPaymentGateway::OnBnClickedCheckStripe)
	ON_BN_CLICKED(IDC_BUTTON_RAZOR, &CPaymentGateway::OnBnClickedButtonRazor)
	ON_BN_CLICKED(IDC_CHECK_RAZOR, &CPaymentGateway::OnBnClickedCheckRazor)
	ON_BN_CLICKED(IDC_BUTTON_EMAIL, &CPaymentGateway::OnBnClickedButtonEmail)
	ON_BN_CLICKED(IDC_BUTTON_BS, &CPaymentGateway::OnBnClickedButtonBs)
	ON_BN_CLICKED(IDC_BUTTON_BT, &CPaymentGateway::OnBnClickedButtonBt)
	ON_BN_CLICKED(IDC_CHECK_BT, &CPaymentGateway::OnBnClickedCheckBt)
	ON_BN_CLICKED(IDC_BUTTON_SA, &CPaymentGateway::OnBnClickedButtonSa)
	ON_BN_CLICKED(IDC_CHECK_PAYU, &CPaymentGateway::OnBnClickedCheckPayu)
END_MESSAGE_MAP()

BOOL CPaymentGateway::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	GetallCompanies();
	DisablePaymentSettings();

	// TODO:  Add extra initialization here
   //  GetAllFormsAPI();
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}
// CPaymentGateway message handlers
void CPaymentGateway::GetallCompanies() {

	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_PAY_CO);
	Combodrop_down->ResetContent();
	m_apiService->GetAllCompanies(m_vendordetails);
	for (int i = 0; i < m_vendordetails.GetSize(); i++)
	{
		Combodrop_down->AddString(m_vendordetails[i].VenderCompanyName);
	}



}

void CPaymentGateway::OnCbnSelchangeComboPayCo()
{
	// TODO: Add your control notification handler code here
	CComboBox* comboid = (CComboBox*)GetDlgItem(IDC_COMBO_PAY_CO);
	int ComboSelItem = comboid->GetCurSel();
	
	if (ComboSelItem != CB_ERR)
	{
		VenderInfo venderinfo;
		venderinfo = m_vendordetails.GetAt(ComboSelItem);
		//comboid->ResetContent();
		
		GcompanyId = venderinfo.VenderUserId;
		//AfxMessageBox(_T("Please Select A Comapny ")+GcompanyId);
	}
}
void CPaymentGateway:: DisablePaymentSettings() {

	if (GcompanyId == "") {

		HidePayPalControls();

		//CONTROL FOR PAY_U_MONEY
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();

	}
	else {
		ShowPayPalControls();
		ShowPayUMoneyControls();
		ShowStripeSettings();
		ShowRazorPay();
		ShowEmail();
		ShowBusinessSettings();
		ShowBankSettings();
		ShowShipingSetiings();
	}
}

void CPaymentGateway::OnBnClickedRadioPaypal()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideEmail();
		HideRazorPay();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();

	}
	else {
		HidePayUMoneyControls();
		HideStripeSettings();
		HideEmail();
		HideRazorPay();
		HideShipingSettings();
		HideBankSettings();
		ShowPayPalControls();

		//CONTROL FOR PAY_U_MONEY
		
		
		m_apiService->GetPayPalSettings(GcompanyId,Info);
		if (Info.PaypalClientID != "") {

			
			CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_CLIENT_ID);
			Edit_Box1->SetWindowText(Info.PaypalClientID);
			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_KEY);
			Edit_Box2->SetWindowText(Info.PaypalClientSecretKey);
			
			SetDlgItemText(IDC_BUTTON_PAY, _T("Update Settings"));
			if (Info.EnablePaypal == true) {

				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_PAY);
				chk->SetCheck(BST_CHECKED);
			}
			else {
				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_PAY);
				chk->SetCheck(BST_UNCHECKED);
			}

			

		}
		else if(Info.PaypalClientID == "")
		{
			SetDlgItemText(IDC_BUTTON_PAY, _T("Save Settings"));
			CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_PAY);
			chk->SetCheck(BST_UNCHECKED);

			CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_CLIENT_ID);
			Edit_Box1->SetWindowText(_T(""));
			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_KEY);
			Edit_Box2->SetWindowText(_T(""));
		}
		
		
	}
}


void CPaymentGateway::OnBnClickedRadioPayuMoney()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();

		//CONTROL FOR PAY_U_MONEY
		
	}
	else {
		HidePayPalControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		ShowPayUMoneyControls();

		m_apiService->GetPayUMoneySettings(GcompanyId, payu);

		if (payu.MerchantID != "") {

		
			CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_MR_ID);
			Edit_Box1->SetWindowText(payu.MerchantID);

			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_MR_KEY);
			Edit_Box2->SetWindowText(payu.MerchantKey);

			CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_MR_SALT);
			Edit_Box3->SetWindowText(payu.Salt);

			SetDlgItemText(IDC_BUTTON_PAYU, _T("Update Settings"));
			if (payu.EnablePayumoney == true) {

				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_PAYU);
				chk->SetCheck(BST_CHECKED);
			}
			else {
				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_PAYU);
				chk->SetCheck(BST_UNCHECKED);
			}



		}
		

	}

}
void CPaymentGateway::ShowPayPalControls() {
   // GetDlgItem(IDC_STATIC_GRP)->ShowWindow(SW_SHOW);

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_PAYU3);
	st2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_CLIENT_ID);
	Edit_Box1->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_KEY);
	Edit_Box2->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_CID);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_KEY);
	Edit2->ShowWindow(SW_SHOW);

	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_PAY);
	btn->ShowWindow(SW_SHOW);

	CCheckListBox* chk = (CCheckListBox*)GetDlgItem(IDC_CHECK_PAY);
	chk->ShowWindow(SW_SHOW);

}
void CPaymentGateway::HidePayPalControls() {
	
	//GetDlgItem(IDC_STATIC_GRP)->ShowWindow(SW_HIDE);
	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_PAYU3);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_CLIENT_ID);
	Edit_Box1->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_KEY);
	Edit_Box2->ShowWindow(SW_HIDE);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_CID);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_KEY);
	Edit2->ShowWindow(SW_HIDE);

	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_PAY);
	btn->ShowWindow(SW_HIDE);

	CCheckListBox* chk = (CCheckListBox*)GetDlgItem(IDC_CHECK_PAY);
	chk->ShowWindow(SW_HIDE);
}

void CPaymentGateway::ShowPayUMoneyControls() {

	CStatic* st1 =(CStatic*)GetDlgItem(IDC_STATIC_GRP_PAYU);
	st1->ShowWindow(SW_SHOW);
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_MR_ID);
	Edit_Box1->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_MR_KEY);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_MR_SALT);
	Edit_Box3->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_MR_ID);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_MR_KEY);
	Edit2->ShowWindow(SW_SHOW);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_MR_SALT);
	Edit3->ShowWindow(SW_SHOW);

	CCheckListBox* check1 = (CCheckListBox*)GetDlgItem(IDC_CHECK_PAYU);
	check1->ShowWindow(SW_SHOW);
	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_PAYU);
	btn->ShowWindow(SW_SHOW);


}

void CPaymentGateway::HidePayUMoneyControls() {


	CStatic* st1 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_PAYU);
	st1->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_MR_ID);
	Edit_Box3->ShowWindow(SW_HIDE);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_MR_KEY);
	Edit_Box4->ShowWindow(SW_HIDE);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_MR_SALT);
	Edit_Box5->ShowWindow(SW_HIDE);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_MR_ID);
	Edit3->ShowWindow(SW_HIDE);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_MR_KEY);
	Edit4->ShowWindow(SW_HIDE);

	CStatic* Edit5 = (CStatic*)GetDlgItem(IDC_STATIC_MR_SALT);
	Edit5->ShowWindow(SW_HIDE);

	CCheckListBox* check1 = (CCheckListBox*)GetDlgItem(IDC_CHECK_PAYU);
	check1->ShowWindow(SW_HIDE);
	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_PAYU);
	btn->ShowWindow(SW_HIDE);

}
void CPaymentGateway::ShowStripeSettings() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_PAYU4);
	st2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY2);
	Edit_Box3->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_MR_KEY2);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_MR_ID2);
	Edit2->ShowWindow(SW_SHOW);

	
	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_STRIPE);
	btn->ShowWindow(SW_SHOW);

	CCheckListBox* chk = (CCheckListBox*)GetDlgItem(IDC_CHECK_STRIPE);
	chk->ShowWindow(SW_SHOW);
}
void CPaymentGateway::HideStripeSettings() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_PAYU4);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY);
	Edit_Box2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY2);
	Edit_Box3->ShowWindow(SW_HIDE);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_MR_KEY2);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_MR_ID2);
	Edit2->ShowWindow(SW_HIDE);

	
	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_STRIPE);
	btn->ShowWindow(SW_HIDE);

	CCheckListBox* chk = (CCheckListBox*)GetDlgItem(IDC_CHECK_STRIPE);
	chk->ShowWindow(SW_HIDE);
}

void CPaymentGateway::OnBnClickedRadioStripesettigs()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		//CONTROL FOR PAY_U_MONEY

	}
	else {
		HidePayPalControls();
		HidePayUMoneyControls();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		ShowStripeSettings();
		m_apiService->GetStripeSettings(GcompanyId, stripe);
		if (stripe.SecretKey != "") {


			CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY);
			Edit_Box1->SetWindowText(stripe.SecretKey);

			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY2);
			Edit_Box2->SetWindowText(stripe.PublishableKey);


			SetDlgItemText(IDC_BUTTON_STRIPE, _T("Update Settings"));
			if (stripe.EnableStripeSettings == true) {

				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_STRIPE);
				chk->SetCheck(BST_CHECKED);
			}
			else {
				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_STRIPE);
				chk->SetCheck(BST_UNCHECKED);
			}



		}
	


	}

}
void CPaymentGateway::ShowRazorPay() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_RAZOR);
	st2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_ID);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_KEY);
	Edit_Box3->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_MR_ID3);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_MR_KEY3);
	Edit2->ShowWindow(SW_SHOW);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_RAZOR);
	btn->ShowWindow(SW_SHOW);

	CCheckListBox* chk = (CCheckListBox*)GetDlgItem(IDC_CHECK_RAZOR);
	chk->ShowWindow(SW_SHOW);
}

void CPaymentGateway::HideRazorPay() {
	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRP_RAZOR);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_ID);
	Edit_Box2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_KEY);
	Edit_Box3->ShowWindow(SW_HIDE);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_MR_ID3);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_MR_KEY3);
	Edit2->ShowWindow(SW_HIDE);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_RAZOR);
	btn->ShowWindow(SW_HIDE);

	CCheckListBox* chk = (CCheckListBox*)GetDlgItem(IDC_CHECK_RAZOR);
	chk->ShowWindow(SW_HIDE);
}

void CPaymentGateway::OnBnClickedRadioRazorpaysettings()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		HideEmail();
		//CONTROL FOR PAY_U_MONEY

	}
	else {
		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		ShowRazorPay();
		
		m_apiService->GetRazorpaySettings(GcompanyId, razor);
		if (razor.RazorpayKeyID != "") {


			CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_ID);
			Edit_Box1->SetWindowText(razor.RazorpayKeyID);

			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_KEY);
			Edit_Box2->SetWindowText(razor.RazorpayKeySecret);


			SetDlgItemText(IDC_BUTTON_RAZOR, _T("Update Settings"));
			if (razor.EnableRazorpaySettings == true) {

				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_RAZOR);
				chk->SetCheck(BST_CHECKED);
			}
			else {
				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_RAZOR);
				chk->SetCheck(BST_UNCHECKED);
			}



		}



	}
		


}

void CPaymentGateway::ShowEmail() {
    
	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_EMAILGRP);
	st2->ShowWindow(SW_SHOW);
	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_AE);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_SE);
	Edit_Box3->ShowWindow(SW_SHOW);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_BE);
	Edit_Box4->ShowWindow(SW_SHOW);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_DE);
	Edit_Box5->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_AE);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_SE);
	Edit2->ShowWindow(SW_SHOW);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_BE);
	Edit3->ShowWindow(SW_SHOW);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_DE);
	Edit4->ShowWindow(SW_SHOW);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_EMAIL);
	btn->ShowWindow(SW_SHOW);


}
void CPaymentGateway::HideEmail() {
	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_EMAILGRP);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_AE);
	Edit_Box2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_SE);
	Edit_Box3->ShowWindow(SW_HIDE);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_BE);
	Edit_Box4->ShowWindow(SW_HIDE);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_DE);
	Edit_Box5->ShowWindow(SW_HIDE);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_AE);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_SE);
	Edit2->ShowWindow(SW_HIDE);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_BE);
	Edit3->ShowWindow(SW_HIDE);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_DE);
	Edit4->ShowWindow(SW_HIDE);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_EMAIL);
	btn->ShowWindow(SW_HIDE);
}

void CPaymentGateway::OnBnClickedRadioEmailsettings()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideBusinessSettings();
		HideShipingSettings();
		HideEmail();
		HideBankSettings();
		//CONTROL FOR PAY_U_MONEY

	}
	else {
		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		ShowEmail();

		m_apiService->GetEMailSettings(GcompanyId, email);
		if (email.AdminEmail != "") {


			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_AE);
			Edit_Box2->SetWindowText(email.AdminEmail);

			CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_SE);
			Edit_Box3->SetWindowText(email.SupportEmail);
			CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_BE);
			Edit_Box4->SetWindowText(email.BusinessEmail);

			CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_DE);
			Edit_Box5->SetWindowText(email.DefaultEmail);

			SetDlgItemText(IDC_BUTTON_EMAIL, _T("Update Settings"));

		}


	}
}
void CPaymentGateway::ShowBusinessSettings() {
	
	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRPBUS);
	st2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_ON);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AD);
	Edit_Box3->ShowWindow(SW_SHOW);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
	Edit_Box4->ShowWindow(SW_SHOW);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_PH1);
	Edit_Box5->ShowWindow(SW_SHOW);

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_PH2);
	Edit_Box6->ShowWindow(SW_SHOW);
	CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_FAX);
	Edit_Box7->ShowWindow(SW_SHOW);

	CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_WEB);
	Edit_Box8->ShowWindow(SW_SHOW);


	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_ON);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_AD);
	Edit2->ShowWindow(SW_SHOW);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_PIN);
	Edit3->ShowWindow(SW_SHOW);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_PH1);
	Edit4->ShowWindow(SW_SHOW);

	CStatic* Edit5 = (CStatic*)GetDlgItem(IDC_STATIC_PH2);
	Edit5->ShowWindow(SW_SHOW);

	CStatic* Edit6= (CStatic*)GetDlgItem(IDC_STATIC_FAX);
	Edit6->ShowWindow(SW_SHOW);

	CStatic* Edit7 = (CStatic*)GetDlgItem(IDC_STATIC_Web);
	Edit7->ShowWindow(SW_SHOW);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_BS);
	btn->ShowWindow(SW_SHOW);


}
void CPaymentGateway::HideBusinessSettings() {
	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRPBUS);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_ON);
	Edit_Box2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AD);
	Edit_Box3->ShowWindow(SW_HIDE);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
	Edit_Box4->ShowWindow(SW_HIDE);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_PH1);
	Edit_Box5->ShowWindow(SW_HIDE);

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_PH2);
	Edit_Box6->ShowWindow(SW_HIDE);
	CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_FAX);
	Edit_Box7->ShowWindow(SW_HIDE);

	CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_WEB);
	Edit_Box8->ShowWindow(SW_HIDE);


	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_ON);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_AD);
	Edit2->ShowWindow(SW_HIDE);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_PIN);
	Edit3->ShowWindow(SW_HIDE);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_PH1);
	Edit4->ShowWindow(SW_HIDE);

	CStatic* Edit5 = (CStatic*)GetDlgItem(IDC_STATIC_PH2);
	Edit5->ShowWindow(SW_HIDE);

	CStatic* Edit6 = (CStatic*)GetDlgItem(IDC_STATIC_FAX);
	Edit6->ShowWindow(SW_HIDE);

	CStatic* Edit7 = (CStatic*)GetDlgItem(IDC_STATIC_Web);
	Edit7->ShowWindow(SW_HIDE);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_BS);
	btn->ShowWindow(SW_HIDE);


}

void CPaymentGateway::OnBnClickedRadioBusinesssettings()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		//CONTROL FOR PAY_U_MONEY

	}
	else {
		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideShipingSettings();
		HideBankSettings();
		ShowBusinessSettings();

		m_apiService->GetBusinessSettings(GcompanyId, business);
		if (business.OrganizationName != "") {


			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_ON);
			Edit_Box2->SetWindowText(business.OrganizationName);

			CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AD);
			Edit_Box3->SetWindowText(business.Address);

			CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
			Edit_Box4->SetWindowText(business.PinCode);

			CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_PH1);
			Edit_Box5->SetWindowText(business.PhoneNo1);

			CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_PH2);
			Edit_Box6->SetWindowText(business.PhoneNo2);
			CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_FAX);
			Edit_Box7->SetWindowText(business.FaxNo);

			CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_WEB);
			Edit_Box8->SetWindowText(business.WebSiteURL);

			SetDlgItemText(IDC_BUTTON_BS, _T("Update Settings"));

		}


	}
}
void CPaymentGateway::ShowShipingSetiings() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_SHIPGRP);
	st2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_SA);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_EA);
	Edit_Box3->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_SA);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_EA1);
	Edit2->ShowWindow(SW_SHOW);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_SA);
	btn->ShowWindow(SW_SHOW);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PH3);
	Edit_Box4->ShowWindow(SW_SHOW);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_PH3);
	Edit4->ShowWindow(SW_SHOW);


	
}
void CPaymentGateway::HideShipingSettings() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_SHIPGRP);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_SA);
	Edit_Box2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_EA);
	Edit_Box3->ShowWindow(SW_HIDE);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_SA);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_EA1);
	Edit2->ShowWindow(SW_HIDE);


	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_SA);
	btn->ShowWindow(SW_HIDE);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PH3);
	Edit_Box4->ShowWindow(SW_HIDE);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_PH3);
	Edit4->ShowWindow(SW_HIDE);



}


void CPaymentGateway::OnBnClickedRadioShipingsettings()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideShipingSettings();
		HideBankSettings();
		//CONTROL FOR PAY_U_MONEY

	}
	else {
		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideEmail();
		HideBusinessSettings();
		HideBankSettings();
		ShowShipingSetiings();

		m_apiService->GetShippingDetails(GcompanyId, ship);
		if (ship.ShippingAddress != "") {


			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_SA);
			Edit_Box2->SetWindowText(ship.ShippingAddress);

			CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_EA);
			Edit_Box3->SetWindowText(ship.EmailAddress);

			CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PH3);
			Edit_Box4->SetWindowText(ship.PhoneNumber);


			SetDlgItemText(IDC_BUTTON_SA, _T("Update Settings"));

		}


	}

}


void CPaymentGateway::ShowBankSettings() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRPBANK);
	st2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_BN);
	Edit_Box2->ShowWindow(SW_SHOW);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AC);
	Edit_Box3->ShowWindow(SW_SHOW);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_IFSC);
	Edit_Box4->ShowWindow(SW_SHOW);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_BTO);
	Edit_Box5->ShowWindow(SW_SHOW);

	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_BN);
	Edit1->ShowWindow(SW_SHOW);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_AC);
	Edit2->ShowWindow(SW_SHOW);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_IFSC);
	Edit3->ShowWindow(SW_SHOW);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_BA);
	Edit4->ShowWindow(SW_SHOW);

	CStatic* Edit5 = (CStatic*)GetDlgItem(IDC_STATIC_CON);
	Edit5->ShowWindow(SW_SHOW);

	CStatic* Edit6 = (CStatic*)GetDlgItem(IDC_STATIC_PH5);
	Edit6->ShowWindow(SW_SHOW);

	CStatic* Edit7 = (CStatic*)GetDlgItem(IDC_STATIC_PN1);
	Edit7->ShowWindow(SW_SHOW);

	CStatic* Edit8 = (CStatic*)GetDlgItem(IDC_STATIC_OA);
	Edit8->ShowWindow(SW_SHOW);

	CStatic* Edit9 = (CStatic*)GetDlgItem(IDC_STATIC_SA2);
	Edit9->ShowWindow(SW_SHOW);

	CStatic* Edit10 = (CStatic*)GetDlgItem(IDC_STATIC_BN2);
	Edit10->ShowWindow(SW_SHOW);

	CStatic* Edit11 = (CStatic*)GetDlgItem(IDC_STATIC_AC2);
	Edit11->ShowWindow(SW_SHOW);

	CStatic* Edit12 = (CStatic*)GetDlgItem(IDC_STATIC_IFSC2);
	Edit12->ShowWindow(SW_SHOW);

	CStatic* Edit13 = (CStatic*)GetDlgItem(IDC_STATIC_CA);
	Edit13->ShowWindow(SW_SHOW);

	CCheckListBox* check1 = (CCheckListBox*)GetDlgItem(IDC_CHECK_BT);
	check1->ShowWindow(SW_SHOW);
	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_BT);
	btn->ShowWindow(SW_SHOW);

}
void CPaymentGateway::HideBankSettings() {

	CStatic* st2 = (CStatic*)GetDlgItem(IDC_STATIC_GRPBANK);
	st2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_BN);
	Edit_Box2->ShowWindow(SW_HIDE);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AC);
	Edit_Box3->ShowWindow(SW_HIDE);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_IFSC);
	Edit_Box4->ShowWindow(SW_HIDE);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_BTO);
	Edit_Box5->ShowWindow(SW_HIDE);


	CStatic* Edit1 = (CStatic*)GetDlgItem(IDC_STATIC_BN);
	Edit1->ShowWindow(SW_HIDE);

	CStatic* Edit2 = (CStatic*)GetDlgItem(IDC_STATIC_AC);
	Edit2->ShowWindow(SW_HIDE);

	CStatic* Edit3 = (CStatic*)GetDlgItem(IDC_STATIC_IFSC);
	Edit3->ShowWindow(SW_HIDE);

	CStatic* Edit4 = (CStatic*)GetDlgItem(IDC_STATIC_BA);
	Edit4->ShowWindow(SW_HIDE);

	CStatic* Edit5 = (CStatic*)GetDlgItem(IDC_STATIC_CON);
	Edit5->ShowWindow(SW_HIDE);

	CStatic* Edit6 = (CStatic*)GetDlgItem(IDC_STATIC_PH5);
	Edit6->ShowWindow(SW_HIDE);

	CStatic* Edit7 = (CStatic*)GetDlgItem(IDC_STATIC_PN1);
	Edit7->ShowWindow(SW_HIDE);

	CStatic* Edit8 = (CStatic*)GetDlgItem(IDC_STATIC_OA);
	Edit8->ShowWindow(SW_HIDE);

	CStatic* Edit9 = (CStatic*)GetDlgItem(IDC_STATIC_SA2);
	Edit9->ShowWindow(SW_HIDE);

	CStatic* Edit10 = (CStatic*)GetDlgItem(IDC_STATIC_BN2);
	Edit10->ShowWindow(SW_HIDE);

	CStatic* Edit11 = (CStatic*)GetDlgItem(IDC_STATIC_AC2);
	Edit11->ShowWindow(SW_HIDE);

	CStatic* Edit12 = (CStatic*)GetDlgItem(IDC_STATIC_IFSC2);
	Edit12->ShowWindow(SW_HIDE);

	CStatic* Edit13 = (CStatic*)GetDlgItem(IDC_STATIC_CA);
	Edit13->ShowWindow(SW_HIDE);

	CCheckListBox* check1 = (CCheckListBox*)GetDlgItem(IDC_CHECK_BT);
	check1->ShowWindow(SW_HIDE);
	CButton* btn = (CButton*)GetDlgItem(IDC_BUTTON_BT);
	btn->ShowWindow(SW_HIDE);


}

void CPaymentGateway::OnBnClickedRadioBankdetails()
{
	// TODO: Add your control notification handler code here
	if (GcompanyId == "") {
		AfxMessageBox(_T("Please Select A Comapny ") + GcompanyId);

		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideBusinessSettings();
		HideShipingSettings();
		HideEmail();
		HideBankSettings();
		//CONTROL FOR PAY_U_MONEY

	}
	else {
		HidePayPalControls();
		HidePayUMoneyControls();
		HideStripeSettings();
		HideRazorPay();
		HideBusinessSettings();
		HideShipingSettings();
		HideEmail();
		ShowBankSettings();

		m_apiService->GetBankDetails(GcompanyId, bank);
		if (bank.AccountNo != "") {


			CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_BN);
			Edit_Box2->SetWindowText(bank.BankName);

			CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AC);
			Edit_Box3->SetWindowText(bank.AccountNo);

			CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_IFSC);
			Edit_Box4->SetWindowText(bank.SWIFTIFSCCodeBankAddress);

			CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_BTO);
			Edit_Box5->SetWindowText(bank.OrderRequestEmail);

			SetDlgItemText(IDC_BUTTON_BT, _T("Update Settings"));

			if (bank.EnableBankTransfer == true) {

				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_BT);
				chk->SetCheck(BST_CHECKED);
			}
			else {
				CButton* chk = (CButton*)GetDlgItem(IDC_CHECK_BT);
				chk->SetCheck(BST_UNCHECKED);
			}

		}


	}
}




void CPaymentGateway::OnBnClickedCheckPay()  // function for to konow enable or disable paypal function
{
	// TODO: Add your control notification handler code here
	int isChecked = m_checkBox.GetCheck();

	if (isChecked == BST_CHECKED)
	{
		Check_EnablePaypal = true; // enable paypal
		
	}
	else if (isChecked == BST_UNCHECKED)
	{
		Check_EnablePaypal = false; // disable paypal
		
	}
}
void CPaymentGateway::OnBnClickedCheckPayu()
{
	// TODO: Add your control notification handler code here
	int isChecked = m_checkBox.GetCheck();

	if (isChecked == BST_CHECKED)
	{
		Check_EnablePayUMoney = true; // enable paypal

	}
	else if (isChecked == BST_UNCHECKED)
	{
		Check_EnablePayUMoney = false; // disable paypal

	}
}

void CPaymentGateway::OnBnClickedButtonPayu() // function for save and update PAYuMONEYSETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString vendeid, merchentid, merchkey, salt;
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_MR_ID);
	Edit_Box1->GetWindowText(merchentid);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_MR_KEY);
	Edit_Box2->GetWindowText(merchkey);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_MR_SALT);
	Edit_Box3->GetWindowText(salt);

		GetDlgItem(IDC_BUTTON_PAYU)->GetWindowText(btntxt);
		if (btntxt == "Update Settings") {

			PayUMoneySettings update;

			update.VendorId = GcompanyId;
			update.MerchantID = merchentid;
		    update.MerchantKey = merchkey;
			update.Salt = salt;

			m_apiService->UpdatePayUMoney(update);

		}
		else if (btntxt == "Save Settings") {

			PayUMoneySettings add;

			GetDlgItem(IDC_EDIT_MR_ID)->GetWindowText(add.MerchantID);
			GetDlgItem(IDC_EDIT_MR_KEY)->GetWindowText(add.MerchantKey);
			GetDlgItem(IDC_EDIT_MR_SALT)->GetWindowText(add.Salt);
			add.EnablePayumoney = Check_EnablePayUMoney;
			add.VendorId = GcompanyId;

			m_apiService->AddPayUMoney(add);
		}
}


void CPaymentGateway::OnBnClickedButtonPay() //function for update and save paypal settings
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString vendeid, clientid, key;

	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_CLIENT_ID);
	Edit_Box1->GetWindowText(clientid);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_KEY);
	Edit_Box2->GetWindowText(key);


	GetDlgItem(IDC_BUTTON_PAY)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		PayPaLSettings update;

		update.VendorId = GcompanyId;
		update.PaypalClientID = clientid;
		update.PaypalClientSecretKey = key;
		update.EnablePaypal = Check_EnablePaypal;

		m_apiService->UpdatePayPal(update);

	}
	else if (btntxt == "Save Settings") {

		PayPaLSettings add;

		GetDlgItem(IDC_EDIT_CLIENT_ID)->GetWindowText(add.PaypalClientID);
		GetDlgItem(IDC_EDIT_KEY)->GetWindowText(add.PaypalClientSecretKey);
		add.EnablePaypal = Check_EnablePaypal;
		add.VendorId = GcompanyId;

		m_apiService->AddPayPalSetting(add);
	}

}


void CPaymentGateway::OnBnClickedButtonStripe()   // function for save and update STRIPE  SETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString  secretkey, Pubkey;

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY);
	Edit_Box2->GetWindowText(secretkey);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_STRIPE_KEY2);
	Edit_Box3->GetWindowText(Pubkey);




	GetDlgItem(IDC_BUTTON_STRIPE)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		StripeSettings update;

		update.VendorId = GcompanyId;
		update.PublishableKey = secretkey;
		update.SecretKey = Pubkey;
		update.EnableStripeSettings = Check_EnableStripe;

		m_apiService->UpdateStripe(update);

	}
	else if (btntxt == "Save Settings") {

		StripeSettings add;

		GetDlgItem(IDC_EDIT_STRIPE_KEY2)->GetWindowText(add.PublishableKey);
		GetDlgItem(IDC_EDIT_STRIPE_KEY)->GetWindowText(add.SecretKey);
		add.EnableStripeSettings = Check_EnableStripe;
		add.VendorId = GcompanyId;

		m_apiService->AddStripe(add);
	}

}


void CPaymentGateway::OnBnClickedCheckStripe()
{
	// TODO: Add your control notification handler code here
	int isChecked = m_checkBoxStripe.GetCheck();

	if (isChecked == BST_CHECKED)
	{
		Check_EnableStripe = true; // enable paypal

	}
	else if (isChecked == BST_UNCHECKED)
	{
		Check_EnableStripe = false; // disable paypal

	}
}


void CPaymentGateway::OnBnClickedButtonRazor()  // function for save and update RAZORPAY  SETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString  razorid, Pubkey;


	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_ID);
	Edit_Box2->GetWindowText(razorid);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_RAZOR_KEY);
	Edit_Box3->GetWindowText(Pubkey);


	GetDlgItem(IDC_BUTTON_RAZOR)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		RazorpaySettings update;

		update.VendorId = GcompanyId;
		update.RazorpayKeyID = razorid;
		update.RazorpayKeySecret = Pubkey;
		update.EnableRazorpaySettings = Check_EnableRazorpay;

		m_apiService->UpdateRazorPay(update);

	}
	else if (btntxt == "Save Settings") {

		RazorpaySettings add;

		GetDlgItem(IDC_EDIT_RAZOR_ID)->GetWindowText(add.RazorpayKeyID);
		GetDlgItem(IDC_EDIT_RAZOR_KEY)->GetWindowText(add.RazorpayKeySecret);
		add.EnableRazorpaySettings = Check_EnableRazorpay;
		add.VendorId = GcompanyId;

		m_apiService->AddRazorPay(add);
	}
}


void CPaymentGateway::OnBnClickedCheckRazor()   
{
	// TODO: Add your control notification handler code here
	int isChecked = m_checkBoxRazor.GetCheck();

	if (isChecked == BST_CHECKED)
	{
		Check_EnableRazorpay = true; // enable paypal

	}
	else if (isChecked == BST_UNCHECKED)
	{
		Check_EnableRazorpay = false; // disable paypal

	}
}


void CPaymentGateway::OnBnClickedButtonEmail()   // function for save and update EMAIL  SETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString  admine, businesse, suporte, defualte;


	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_AE);
	Edit_Box2->GetWindowText(admine);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_SE);
	Edit_Box3->GetWindowText(businesse);
	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_BE);
	Edit_Box4->GetWindowText(suporte);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_DE);
	Edit_Box5->GetWindowText(defualte);

	


	GetDlgItem(IDC_BUTTON_EMAIL)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		EmailSettings update;

		update.VendorId = GcompanyId;
		update.AdminEmail = admine;
		update.BusinessEmail = businesse;
		update.SupportEmail = suporte;
		update.DefaultEmail = defualte;

		m_apiService->UpdateEmail(update);

	}
	else if (btntxt == "Save Settings") {

		EmailSettings add;

		GetDlgItem(IDC_EDIT_AE)->GetWindowText(add.AdminEmail);
		GetDlgItem(IDC_EDIT_BE)->GetWindowText(add.BusinessEmail);
		GetDlgItem(IDC_EDIT_DE)->GetWindowText(add.DefaultEmail);
		GetDlgItem(IDC_EDIT_SE)->GetWindowText(add.SupportEmail);
		
		add.VendorId = GcompanyId;

		m_apiService->AddEmailSettings(add);
	}
}


void CPaymentGateway::OnBnClickedButtonBs()     // function for save and update BUSINESS  SETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString  orgname, adress, pincode, PhoneNo1, PhoneNo2, fax, web;


	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_ON);
	Edit_Box2->GetWindowText(orgname);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AD);
	Edit_Box3->GetWindowText(adress);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PIN);
	Edit_Box4->GetWindowText(pincode);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_PH1);
	Edit_Box5->GetWindowText(PhoneNo1);

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_PH2);
	Edit_Box6->GetWindowText(PhoneNo2);
	CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_FAX);
	Edit_Box7->GetWindowText(fax);

	CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_WEB);
	Edit_Box8->GetWindowText(web);


	GetDlgItem(IDC_BUTTON_BS)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		BusinessSettings update;

		update.VendorId = GcompanyId;
		update.OrganizationName= orgname;
		update.Address = adress;
		update.PhoneNo1 = PhoneNo1;
		update.PhoneNo2 = PhoneNo2;
		update.PinCode = pincode;
     	update.FaxNo = fax;
		update.WebSiteURL= web;

		m_apiService->UpdateBusiness(update);

	}
	else if (btntxt == "Save Settings") {

		BusinessSettings add;

		GetDlgItem(IDC_EDIT_ON)->GetWindowText(add.OrganizationName);
		GetDlgItem(IDC_EDIT_AD)->GetWindowText(add.Address);
		GetDlgItem(IDC_EDIT_PH1)->GetWindowText(add.PhoneNo1);
		GetDlgItem(IDC_EDIT_PH2)->GetWindowText(add.PhoneNo2);
		GetDlgItem(IDC_EDIT_FAX)->GetWindowText(add.FaxNo);
		GetDlgItem(IDC_EDIT_PIN)->GetWindowText(add.PinCode);
		GetDlgItem(IDC_EDIT_WEB)->GetWindowText(add.WebSiteURL);
		add.VendorId = GcompanyId;
		
		m_apiService->AddBusinessSettings(add);
	}
}


void CPaymentGateway::OnBnClickedButtonBt()    //Function for save and update BANK DETIALS SETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString  bankname, account, ifsc, order;

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_BN);
	Edit_Box2->GetWindowText(bankname);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_AC);
	Edit_Box3->GetWindowText(account);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_IFSC);
	Edit_Box4->GetWindowText(ifsc);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_BTO);
	Edit_Box5->GetWindowText(order);




	GetDlgItem(IDC_BUTTON_BT)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		BankDetails update;

		update.VendorId = GcompanyId;
		update.BankName = bankname;
		update.AccountNo = account;
		update.SWIFTIFSCCodeBankAddress = ifsc;
		update.OrderRequestEmail = order;
		update.EnableBankTransfer = Check_BankTrasfer;
		

		m_apiService->UpdateBankDetails(update);

	}
	else if (btntxt == "Save Settings") {

		BankDetails add;
		GetDlgItem(IDC_EDIT_BN)->GetWindowText(add.BankName);
		GetDlgItem(IDC_EDIT_AC)->GetWindowText(add.AccountNo);
		GetDlgItem(IDC_EDIT_IFSC)->GetWindowText(add.SWIFTIFSCCodeBankAddress);
		GetDlgItem(IDC_EDIT_BTO)->GetWindowText(add.OrderRequestEmail);
		add.VendorId = GcompanyId;
		add.EnableBankTransfer = Check_BankTrasfer;

	
		m_apiService->AddBankDetails(add);
	}
}


void CPaymentGateway::OnBnClickedCheckBt()
{
	// TODO: Add your control notification handler code here
	int isChecked = m_checkBoxRazor.GetCheck();

	if (isChecked == BST_CHECKED)
	{
		Check_BankTrasfer = true; // enable Bank trasfer

	}
	else if (isChecked == BST_UNCHECKED)
	{
		Check_BankTrasfer = false; // disable  Bank trasfer

	}
}


void CPaymentGateway::OnBnClickedButtonSa()   //function  for save and upadte SHIPPING DETAILS SETTINGS
{
	// TODO: Add your control notification handler code here
	CString btntxt;
	CString  email, phone, saddress;

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_SA);
	Edit_Box2->GetWindowText(saddress);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_EA);
	Edit_Box3->GetWindowText(email);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_PH3);
	Edit_Box4->GetWindowText(phone);


	GetDlgItem(IDC_BUTTON_SA)->GetWindowText(btntxt);
	if (btntxt == "Update Settings") {

		ShippingDetails update;

		update.VendorId = GcompanyId;
		update.EmailAddress = email;
		update.PhoneNumber = phone;
		update.ShippingAddress = saddress;
		


		m_apiService->UpdateShippingDetails(update);

	}
	else if (btntxt == "Save Settings") {

		ShippingDetails add;
		GetDlgItem(IDC_EDIT_EA)->GetWindowText(add.EmailAddress);
		GetDlgItem(IDC_EDIT_PH3)->GetWindowText(add.PhoneNumber);
		GetDlgItem(IDC_EDIT_SA)->GetWindowText(add.ShippingAddress);
		
		add.VendorId = GcompanyId;


		m_apiService->AddShipSettings(add);
	}
}



