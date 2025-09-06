#pragma once


// CGetAllProductList dialog

class CGetAllProductList : public CDialogEx
{
	DECLARE_DYNAMIC(CGetAllProductList)

public:
	CGetAllProductList(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CGetAllProductList();
	void GetallCompaniesProd();
	void GetAllProdCategory();
	void GetAllProductDetials();
	//void GetAllProSubCategory();
	JSONValue* jval;
    virtual BOOL OnInitDialog();
	CString Value;
	CString Id;
	CString CategoryId;
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_GET_ALL_PRODUCTS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	AppApiService* m_apiService;
	CArray<VenderInfo, VenderInfo> m_vendordetails;
	
public:
	afx_msg void OnCbnSelchangeComboProduct();
	afx_msg void OnCbnSelchangeComboSubCategory();
	afx_msg void OnCbnSelchangeComboCompProduct();
	//CListBox ListItem;
	CArray<VenderProducts, VenderProducts> m_vendorProducts;
};

