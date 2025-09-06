// CGetAllProductList.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CGetAllProductList.h"
#include "afxdialogex.h"
#include "NetworkRequest.h"


// CGetAllProductList dialog

IMPLEMENT_DYNAMIC(CGetAllProductList, CDialogEx)
CString GcompanyID;
CString GcategoryID;
CString GsubCategoryID;
CGetAllProductList::CGetAllProductList(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_GET_ALL_PRODUCTS, pParent)
{
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
}

CGetAllProductList::~CGetAllProductList()
{
}

void CGetAllProductList::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_LIST_PRODUCT, ListItem);
}


BEGIN_MESSAGE_MAP(CGetAllProductList, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO_PRODUCT, &CGetAllProductList::OnCbnSelchangeComboProduct)
	ON_CBN_SELCHANGE(IDC_COMBO_SUB_CATEGORY, &CGetAllProductList::OnCbnSelchangeComboSubCategory)
	ON_CBN_SELCHANGE(IDC_COMBO_COMP_PRODUCT, &CGetAllProductList::OnCbnSelchangeComboCompProduct)
END_MESSAGE_MAP()



// CGetAllProductList message handlers
void CGetAllProductList::GetallCompaniesProd() {  //Get all companies List

	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_COMP_PRODUCT);
	Combodrop_down->ResetContent();
	m_apiService->GetAllCompanies(m_vendordetails);
	for (int i = 0; i < m_vendordetails.GetSize(); i++)
	{
		Combodrop_down->AddString(m_vendordetails[i].VenderCompanyName);
	}

	
	
}
// Function for to get Company ID
void CGetAllProductList::OnCbnSelchangeComboCompProduct()
{
	// TODO: Add your control notification handler code here
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_comany = (CComboBox*)GetDlgItem(IDC_COMBO_COMP_PRODUCT);
	int selectedIndex = Combodrop_comany->GetCurSel();
	if (selectedIndex !=CB_ERR) {
		  
		VenderInfo venderinfo;
		venderinfo = m_vendordetails.GetAt(selectedIndex);
		GcompanyID = venderinfo.VenderUserId;
	}

}
BOOL CGetAllProductList::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	GetallCompaniesProd();

	GetAllProdCategory();
	//GetAllProSubCategory();

	// TODO:  Add extra initialization here
  
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}
void CGetAllProductList::GetAllProdCategory() {                                      //Get all companies product list
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_PRODUCT);

	
	/*Combodrop_down->AddString(_T("Select"));
	Combodrop_down->SetItemData(0, 0);*/
	//Combodrop_down->ResetContent();
	m_apiService->GetAllProductCategory(m_vendorProducts);
	for (int i = 0; i < m_vendorProducts.GetSize(); i++)
	{
		Value = m_vendorProducts[i].CategoryName;
		Id = m_vendorProducts[i].CategoryID;
		Combodrop_down->AddString(Value);
		
	}

}

// Selecting Prdouct Category
void CGetAllProductList::OnCbnSelchangeComboProduct()
{
	// TODO: Add your control notification handler code here
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	  CComboBox* Combodrop_subcat = (CComboBox*)GetDlgItem(IDC_COMBO_SUB_CATEGORY);
	  Combodrop_subcat->ResetContent();
		CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_PRODUCT);
		
		
		
		int selectedIndex = Combodrop_down->GetCurSel();

		
		
		if (selectedIndex != CB_ERR)
		{   
			if (selectedIndex == 0) {
				CategoryId = "2";
				GcategoryID = CategoryId;
				Combodrop_subcat->ResetContent();
				m_apiService->GetAllProductSubCategory(CategoryId, m_vendorProducts);

				for (int i = 0; i < m_vendorProducts.GetSize(); i++)
				{

					Combodrop_subcat->AddString(m_vendorProducts[i].SubCategoryName);
				}

			}
			else if (selectedIndex == 1) {
				CategoryId = "1";

				GcategoryID = CategoryId;
				m_apiService->GetAllProductSubCategory(CategoryId, m_vendorProducts);

				Combodrop_subcat->ResetContent();
				for (int i = 0; i < m_vendorProducts.GetSize(); i++)
				{

					Combodrop_subcat->AddString(m_vendorProducts[i].SubCategoryName);
				}
			}
			// Do something with the selected value (selectedText) here
		}
}


void CGetAllProductList::OnCbnSelchangeComboSubCategory()
{
	// TODO: Add your control notification handler code here
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_subcat = (CComboBox*)GetDlgItem(IDC_COMBO_SUB_CATEGORY);

	int selectedIndex = Combodrop_subcat->GetCurSel();
	CListBox* List_box;
	List_box = (CListBox*)GetDlgItem(IDC_LIST_PRODUCT);
	List_box->ResetContent();
	if (selectedIndex != CB_ERR) {
		VenderProducts vendorproducts;
		vendorproducts = m_vendorProducts.GetAt(selectedIndex);
		GsubCategoryID = vendorproducts.SubCategoryId;
		
		
		
		int list_sel = List_box->GetCurSel();
		
		m_vendorProducts.RemoveAll();
		
		m_apiService->GetAllProductList(GcompanyID, GcategoryID, GsubCategoryID, m_vendorProducts);
		List_box->ResetContent();
		for (int i = 0; i < m_vendorProducts.GetSize(); i++)
		{
			
			List_box->AddString(_T("Product Title :")+m_vendorProducts[i].ProductTitle);
			List_box->AddString(_T("CategoryName  :") + m_vendorProducts[i].CategoryName);
			List_box->AddString(_T("Prdouct Descripion :") + m_vendorProducts[i].ProductDescription);
			
		    List_box->AddString(_T("Product ID :") + m_vendorProducts[i].ProductId);
			List_box->AddString(_T("Prdouct Details :") + m_vendorProducts[i].ProductMoreDetails);
			List_box->AddString(_T("PayPal :") + m_vendorProducts[i].ProductDisablePayPal);
			List_box->AddString(_T("Prdouct Link :") + m_vendorProducts[i].ProductPlimusLink);
			List_box->AddString(_T("Prdouct Price :") + m_vendorProducts[i].ProductPrice);
			List_box->AddString(_T("Prdouct Quantity :") + m_vendorProducts[i].ProductQuantity);
			List_box->AddString(_T("Prdouct  Demo Link :") + m_vendorProducts[i].ProductQuickDemoLink);
			List_box->AddString(_T("Prdouct Image Path :") + m_vendorProducts[i].ProductRealImagePath);
			List_box->AddString(_T("Prdouct Shipping Detials :") + m_vendorProducts[i].ProductShippingDetails);
			List_box->AddString(_T("Prdouct Specification :") + m_vendorProducts[i].ProductSpecification);
			List_box->AddString(_T("Prdouct Sub Tittle :") + m_vendorProducts[i].ProductSubTitle);
			List_box->AddString(_T("Prdouct Sub Dedc :") + m_vendorProducts[i].SubCategoryDescription);
			List_box->AddString(_T("Prdouct Sub Id :") + m_vendorProducts[i].SubCategoryId);
			List_box->AddString(_T("Prdouct Sub Category Name :") + m_vendorProducts[i].SubCategoryName);
			List_box->AddString(_T("Company Name :") + m_vendorProducts[i].VenderCompanyName);
			List_box->AddString(_T("Comapny Id :") + m_vendorProducts[i].VenderUserId);
		}
		 List_box = (CListBox*)GetDlgItem(IDC_LIST_PRODUCT);
		List_box->ModifyStyle(LBS_SORT, NULL);
	   
	}
}

void CGetAllProductList::GetAllProductDetials() {
	
	try
	{
		//Get request.
	
		m_apiService->GetAllProductList(GcompanyID,GcategoryID, GsubCategoryID, m_vendorProducts);


		
		for (int i = 0; i < m_vendorProducts.GetSize(); i++) {
			
			VenderProducts DetailsList;
			DetailsList = m_vendorProducts[i];
			
		
			//ListItem.AddString(_T("Prdouct Title") + DetailsList.ProductTitle);
			/*ListItem.AddString(_T("CategoryName") + DetailsList.CategoryName);
			ListItem.AddString(_T("Prdouct Description") + DetailsList.ProductDescription);
			ListItem.AddString(_T("Product ID") + DetailsList.ProductId);
			ListItem.AddString(_T("Prdouct Details") + DetailsList.ProductMoreDetails);
			ListItem.AddString(_T("PayPal") + DetailsList.ProductDisablePayPal);
			ListItem.AddString(_T("Prdouct Link") + DetailsList.ProductPlimusLink);
			ListItem.AddString(_T("Prdouct Price") + DetailsList.ProductPrice);
			ListItem.AddString(_T("Prdouct Quantity") + DetailsList.ProductQuantity);
			ListItem.AddString(_T("Prdouct  Demo Link") + DetailsList.ProductQuickDemoLink);
			ListItem.AddString(_T("Prdouct Image Path") + DetailsList.ProductRealImagePath);
			ListItem.AddString(_T("Prdouct Shipping Detials") + DetailsList.ProductShippingDetails);
			ListItem.AddString(_T("Prdouct Specification") + DetailsList.ProductSpecification);
			ListItem.AddString(_T("Prdouct Sub Tittle") + DetailsList.ProductSubTitle);
			ListItem.AddString(_T("Prdouct Sub Dedc") + DetailsList.SubCategoryDescription);
			ListItem.AddString(_T("Prdouct Sub Id") + DetailsList.SubCategoryId);
			ListItem.AddString(_T("Prdouct Sub Category Name") + DetailsList.SubCategoryName);
			ListItem.AddString(_T("Company Name") + DetailsList.VenderCompanyName);
			ListItem.AddString(_T("Comapny Id") + DetailsList.VenderUserId);*/

		}


		//CWebCloudAPITestApp::SetRequestMSg(strUrl2);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		GetDlgItem(IDC_EDIT_RES_DATA)->SetWindowText(errorStr);
	}

}


