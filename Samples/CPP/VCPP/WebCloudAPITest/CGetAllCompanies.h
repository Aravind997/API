#pragma once


// CGetAllCompanies dialog

class CGetAllCompanies : public CDialogEx
{
	DECLARE_DYNAMIC(CGetAllCompanies)

public:
	CGetAllCompanies(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CGetAllCompanies();
	void GetallCompanies();
	JSONValue* jval;
	
	virtual BOOL OnInitDialog();
	
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_GET_ALL_COMPANIES };
#endif


	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
	
	CComboBox comboid;
private:
	AppApiService* m_apiService;
	CArray<VenderInfo, VenderInfo> m_vendordetails;
public:
	//afx_msg void OnEnChangeEditDetails();
	afx_msg void OnCbnSelchangeCompDetails();
	CListBox ListItem;
};
