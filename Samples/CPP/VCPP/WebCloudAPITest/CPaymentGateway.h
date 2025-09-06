#pragma once


// CPaymentGateway dialog

class CPaymentGateway : public CDialogEx
{
	DECLARE_DYNAMIC(CPaymentGateway)

public:
	CPaymentGateway(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CPaymentGateway();
	void GetallCompanies();
	virtual BOOL OnInitDialog();

	void DisablePaymentSettings();
	void ShowPayPalControls();
	void HidePayPalControls();
	void ShowPayUMoneyControls();
	void HidePayUMoneyControls();
	void ShowStripeSettings();
	void HideStripeSettings();
	void ShowRazorPay();
	void HideRazorPay();
	void ShowEmail();
	void HideEmail();
	void ShowBusinessSettings();
	void HideBusinessSettings();
	void ShowShipingSetiings();
	void HideShipingSettings();
	void ShowBankSettings();
	void HideBankSettings();

	BOOL  Check_EnablePaypal;
	CButton m_checkBox;

	CButton m_checkBoxStripe;
	BOOL  Check_EnableStripe;

	CButton m_checkBoxRazor;
	BOOL  Check_EnableRazorpay;

	CButton m_checkBoxBank;
	BOOL Check_BankTrasfer;

	CButton m_checkBoxPayu;
	BOOL Check_EnablePayUMoney;
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PAYMENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
 private:
	CString GcompanyId;
	 AppApiService* m_apiService;
	 PayPaLSettings Info;
	 PayUMoneySettings payu;
	 StripeSettings stripe;
	 RazorpaySettings razor;
	 EmailSettings email;
	 BusinessSettings business;
	 BankDetails bank;
	 ShippingDetails ship;
	 CArray<VenderInfo, VenderInfo> m_vendordetails;
	 CArray<PayPaLSettings,PayPaLSettings> m_paypalsettings;
	 CArray<VenderProducts, VenderProducts> m_venderProducts;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeComboPayCo();
	afx_msg void OnBnClickedRadioPaypal();
	afx_msg void OnBnClickedRadioPayuMoney();
	afx_msg void OnBnClickedRadioStripesettigs();
	afx_msg void OnBnClickedRadioRazorpaysettings();
	afx_msg void OnBnClickedRadioEmailsettings();
	afx_msg void OnBnClickedRadioBusinesssettings();
	afx_msg void OnBnClickedRadioShipingsettings();
	afx_msg void OnBnClickedRadioBankdetails();

	//afx_msg void OnBnClickedButtonPay();
	
	afx_msg void OnBnClickedCheckPay();
	afx_msg void OnBnClickedButtonPayu();
	afx_msg void OnBnClickedButtonPay();
	afx_msg void OnBnClickedButtonStripe();
	afx_msg void OnBnClickedCheckStripe();
	afx_msg void OnBnClickedButtonRazor();
	afx_msg void OnBnClickedCheckRazor();
	afx_msg void OnBnClickedButtonEmail();
	afx_msg void OnBnClickedButtonBs();
	afx_msg void OnBnClickedButtonBt();
	afx_msg void OnBnClickedCheckBt();
	afx_msg void OnBnClickedButtonSa();
	afx_msg void OnBnClickedCheckPayu();
};
