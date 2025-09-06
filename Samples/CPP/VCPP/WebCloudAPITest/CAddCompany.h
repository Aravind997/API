#pragma once


// CAddCompany dialog

class CAddCompany : public CDialogEx
{
	DECLARE_DYNAMIC(CAddCompany)

public:
	CAddCompany(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CAddCompany();
	virtual BOOL OnInitDialog();
	void GetallCompanies();
	void ClearData();
	
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ADD_COMPANY };
#endif
private:
	AppApiService* m_apiService;
	CArray<VenderInfo, VenderInfo> m_vendordetails;
	
	CListCtrl m_listctrl;
	
	CButton m_btnEdit;
	CButton m_btnSave;
	BOOL m_bEditing;
	BOOL isChecked;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
	int GetSelectedCheckboxIndex();
	
	afx_msg void OnBnClickedButtonAddCompany();
	afx_msg void OnBnClickedBtEditCo();
	afx_msg void OnBnClickedBtDltCo();
};
