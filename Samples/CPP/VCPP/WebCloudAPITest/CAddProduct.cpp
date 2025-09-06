// CAddProduct.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CAddProduct.h"
#include "afxdialogex.h"
#include <windows.h>
#include "base64.h"

#include<gdiplus.h>
#include<WinInet.h>
using namespace Gdiplus;




// CAddProduct dialog

IMPLEMENT_DYNAMIC(CAddProduct, CDialogEx)
CString GCompanyID;
CString GCategoryID;
CString GSubCategoryID;

CAddProduct::CAddProduct(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ADD_PRODUCTS, pParent)
{
	
}

CAddProduct::~CAddProduct()
{
}

void CAddProduct::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_PRODUCT, m_listctrl);
	DDX_Control(pDX, IDC_COMBO_ITM_SPEC, ComboItem);
	DDX_Control(pDX, IDC_CHECK_TAX, m_checkBox);
	DDX_Control(pDX, IDC_STATIC_IMG1, m_imageControl);
}


BEGIN_MESSAGE_MAP(CAddProduct, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO_ALL_CO, &CAddProduct::OnCbnSelchangeComboAllCo)
	ON_CBN_SELCHANGE(IDC_COMBO_PRO_CAT, &CAddProduct::OnCbnSelchangeComboProCat)
	ON_CBN_SELCHANGE(IDC_COMBO_SUB_CAT, &CAddProduct::OnCbnSelchangeComboSubCat)
	ON_BN_CLICKED(IDC_BUTTON_SAVE, &CAddProduct::OnBnClickedButtonSave)
	ON_BN_CLICKED(IDC_BUTTON_EDIT, &CAddProduct::OnBnClickedButtonEdit)
	ON_CBN_SELCHANGE(IDC_COMBO_ITM_SPEC, &CAddProduct::OnCbnSelchangeComboItmSpec)
	ON_BN_CLICKED(IDC_CHECK_TAX, &CAddProduct::OnBnClickedCheckTax)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, &CAddProduct::OnBnClickedButtonDelete)
	ON_BN_CLICKED(IDC_BTN_IMG1, &CAddProduct::OnBnClickedBtnImg1)
	
	ON_BN_CLICKED(IDC_BTN_IMG2, &CAddProduct::OnBnClickedBtnImg2)
	ON_BN_CLICKED(IDC_BTN_IMG3, &CAddProduct::OnBnClickedBtnImg3)
END_MESSAGE_MAP()

BOOL CAddProduct::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_listctrl.InsertColumn(0, L"Select", LVCFMT_CENTER, 70);
	m_listctrl.InsertColumn(1, L"Sl No", LVCFMT_CENTER, 60);
	m_listctrl.InsertColumn(2, L"Company Name", LVCFMT_CENTER, 180);
	m_listctrl.InsertColumn(3, L"Category", LVCFMT_CENTER, 230);
	m_listctrl.InsertColumn(4, L"SubCategory", LVCFMT_CENTER, 230);
	m_listctrl.InsertColumn(5, L"Product Name", LVCFMT_CENTER, 150);
	m_listctrl.InsertColumn(6, L"Item Specification", LVCFMT_CENTER, 150);
	ComboItem.AddString(_T("New"));
	ComboItem.AddString(_T("Used"));
	ComboItem.AddString(_T("Not Specified"));
	
	GetallCompanies();
	GetAllProdCategory();
	HideTaxEdit();
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR gdiplusToken;
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

	

	// TODO:  Add extra initialization here
  
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}

// CAddProduct message handlers
void CAddProduct::GetallCompanies() {

	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_ALL_CO);
	Combodrop_down->ResetContent();
	m_apiService->GetAllCompanies(m_vendordetails);
	for (int i = 0; i < m_vendordetails.GetSize(); i++)
	{
		Combodrop_down->AddString(m_vendordetails[i].VenderCompanyName);
	}



}
void CAddProduct::GetAllProdCategory() {                                      //Get all companies product list
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_PRO_CAT);


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

void CAddProduct::OnCbnSelchangeComboAllCo()   // function for  to select  Company ID
{
	// TODO: Add your control notification handler code here
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_comany = (CComboBox*)GetDlgItem(IDC_COMBO_ALL_CO);
	int selectedIndex = Combodrop_comany->GetCurSel();
	if (selectedIndex != CB_ERR) {

		VenderInfo venderinfo;
		venderinfo = m_vendordetails.GetAt(selectedIndex);
		GCompanyID = venderinfo.VenderUserId;
	}
}


void CAddProduct::OnCbnSelchangeComboProCat()   //Function for select Category ID
{
	// TODO: Add your control notification handler code here
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_subcat = (CComboBox*)GetDlgItem(IDC_COMBO_SUB_CAT);
	Combodrop_subcat->ResetContent();
	CComboBox* Combodrop_down = (CComboBox*)GetDlgItem(IDC_COMBO_PRO_CAT);



	int selectedIndex = Combodrop_down->GetCurSel();



	if (selectedIndex != CB_ERR)
	{
		if (selectedIndex == 0) {
			CategoryId = "2";
			GCategoryID = CategoryId;
			Combodrop_subcat->ResetContent();
			m_apiService->GetAllProductSubCategory(CategoryId, m_vendorProducts);

			for (int i = 0; i < m_vendorProducts.GetSize(); i++)
			{

				Combodrop_subcat->AddString(m_vendorProducts[i].SubCategoryName);
			}

		}
		else if (selectedIndex == 1) {
			CategoryId = "1";

			GCategoryID = CategoryId;
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


void CAddProduct::OnCbnSelchangeComboSubCat()
{    
	// TODO: Add your control notification handler code here
	//m_listctrl.DeleteAllItems();
	m_apiService = CWebCloudAPITestApp::m_pAppApiService;
	CComboBox* Combodrop_subcat = (CComboBox*)GetDlgItem(IDC_COMBO_SUB_CAT);

	int selectedIndex = Combodrop_subcat->GetCurSel();
	
    	//m_listctrl.DeleteAllItems();
	if (selectedIndex != CB_ERR) {
		VenderProducts vendorproducts;
		vendorproducts = m_vendorProducts.GetAt(selectedIndex);
		GSubCategoryID = vendorproducts.SubCategoryId;

		m_vendorProducts.RemoveAll();
		m_listctrl.DeleteAllItems();
		m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | LVS_EX_CHECKBOXES);
	
		
		m_apiService->GetAllProductList(GCompanyID, GCategoryID, GSubCategoryID, m_vendorProducts);
	
		for (int i = 0; i < m_vendorProducts.GetSize(); i++)
		{
			int nItem;
			nItem = m_listctrl.InsertItem(i, _T(""));
			CString  slno;
			slno.Format(_T("%d"), i + 1);
			m_listctrl.SetItemText(nItem, 1, slno);
			m_listctrl.SetItemText(nItem, 2, m_vendorProducts[i].VenderCompanyName);
			m_listctrl.SetItemText(nItem, 3, m_vendorProducts[i].CategoryName);
			m_listctrl.SetItemText(nItem, 4, m_vendorProducts[i].SubCategoryName);
			m_listctrl.SetItemText(nItem, 5, m_vendorProducts[i].ProductTitle);
			m_listctrl.SetItemText(nItem, 6, m_vendorProducts[i].ProductSpecification);
			
		}
		m_listctrl.SetExtendedStyle(m_listctrl.GetExtendedStyle() | TVS_HASBUTTONS);
	}

	
}



int CAddProduct::GetSelectedCheckboxIndex() {

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

//Edit button function
void CAddProduct::OnBnClickedButtonEdit()
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_BUTTON_SAVE, _T("Update"));

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
	 
		CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_SHIP_USD);
		Edit_Box1->SetWindowText(_T(""));

		CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_VD_URL);
		Edit_Box2->SetWindowText(_T(""));

		CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_SHIP_INR);
		Edit_Box3->SetWindowText(_T(""));

		CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_TAX_NAME);
		Edit_Box4->SetWindowText(_T(""));

		CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_QNT);
		Edit_Box5->SetWindowText(_T(""));

		CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_INR);
		Edit_Box6->SetWindowText(_T(""));

		CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_USD);
		Edit_Box7->SetWindowText(_T(""));

		CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_PRO_SUB_NAME);
		Edit_Box8->SetWindowText(_T(""));

		CEdit* Edit_Box9 = (CEdit*)GetDlgItem(IDC_EDIT_PRO_NAME);
		Edit_Box9->SetWindowText(_T(""));

		CEdit* Edit_Box10 = (CEdit*)GetDlgItem(IDC_EDIT_DESC1);
		Edit_Box10->SetWindowText(_T(""));

		CEdit* Edit_Box11 = (CEdit*)GetDlgItem(IDC_EDIT_DESC2);
		Edit_Box11->SetWindowText(_T(""));

		CEdit* Edit_Box12 = (CEdit*)GetDlgItem(IDC_EDIT_REG_CODE);
		Edit_Box12->SetWindowText(_T(""));

		CComboBox* Combo_Box = (CComboBox*)GetDlgItem(IDC_COMBO_ITM_SPEC);
		Combo_Box->SetWindowText(_T(""));
		CEdit* Edit_Box14 = (CEdit*)GetDlgItem(IDC_EDIT_DESC);
		Edit_Box14->SetWindowText(_T(""));
		CEdit* Edit_Box15 = (CEdit*)GetDlgItem(IDC_EDIT_INVOICE);
		Edit_Box15->SetWindowText(_T(""));

		CEdit* Edit_Box16 = (CEdit*)GetDlgItem(IDC_EDIT_IMG1);
		Edit_Box16->SetWindowText(_T(""));
		CEdit* Edit_Box17 = (CEdit*)GetDlgItem(IDC_EDIT_IMG2);
		Edit_Box17->SetWindowText(_T(""));
		CEdit* Edit_Box18 = (CEdit*)GetDlgItem(IDC_EDIT_IMG3);
		Edit_Box18->SetWindowText(_T(""));

		Edit_Box1->SetWindowText(m_vendorProducts[nSelectedIndex].ProductShippingDetails);
		Edit_Box2->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.YoutubeVideoLink);
		Edit_Box3->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.ShippingChargeInInr);
		Edit_Box4->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.TaxName);
		Edit_Box5->SetWindowText(m_vendorProducts[nSelectedIndex].ProductQuantity);
		Edit_Box6->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.ProductPriceInInr);
		Edit_Box7->SetWindowText(m_vendorProducts[nSelectedIndex].ProductPrice);

		Edit_Box8->SetWindowText(m_vendorProducts[nSelectedIndex].ProductSubTitle);
		Edit_Box9->SetWindowText(m_vendorProducts[nSelectedIndex].ProductTitle);
		Edit_Box10->SetWindowText(m_vendorProducts[nSelectedIndex].ProductDescription);
		Edit_Box11->SetWindowText(m_vendorProducts[nSelectedIndex].ProductMoreDetails);

		Edit_Box12->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.ProductRegistrationCode);
		//Edit_Box13->SetWindowText(m_vendorProducts[nSelectedIndex].VenderCountry);
	//	Edit_Box14->SetWindowText(m_vendorProducts[nSelectedIndex].VenderProfileDesc);
		Combo_Box->SetWindowText(m_vendorProducts[nSelectedIndex].ProductSpecification);

	/*	Edit_Box16->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.ProductImageTwoUrl);
		Edit_Box17->SetWindowText(m_vendorProducts[nSelectedIndex].ecomProductDetails.ProductImageThreeUrl);
		Edit_Box18->SetWindowText(m_vendorProducts[nSelectedIndex].productThumbs.strThumb1);*/
		 thumOneImg = m_vendorProducts[nSelectedIndex].productThumbs.strThumb1;
		 thumTwoImg = m_vendorProducts[nSelectedIndex].productThumbs.strThumb2;
		 thumThreeImg = m_vendorProducts[nSelectedIndex].productThumbs.strThumb3;
		 CompthumOneImg = thumOneImg;
		 CompthumTwoImg = thumTwoImg;
		 CompthumThreeImg = thumThreeImg;

		//CString imageOne = m_vendorProducts[nSelectedIndex].ecomProductDetails.ProductImageTwoUrl;
	 //	CString strImage = NetworkRequest::ConvertFromBase64(thumOneImg,);
		DisplayApiImgOne(thumOneImg);
		DisplayApiImgTwo(thumTwoImg);
		DisplayApiImgThree(thumThreeImg);
		

	}
}
void CAddProduct:: DisplayApiImgOne( CString thumOneImg) {
	if (thumOneImg != "") {
		ImageDecode(thumOneImg);

		// Set the image in the CStatic control
		if (m_pStream) {
			// Load the image from the stream
			CImage image;
			if (image.Load(m_pStream) == S_OK) {
				ImageValue = 1;
				DispalyDecodedImage(m_pStream);
			}

		}
	}
}
void CAddProduct::DisplayApiImgTwo(CString thumTwoImg) {
	if (thumTwoImg != "") {
		ImageDecode(thumTwoImg);

		// Set the image in the CStatic control
		if (m_pStream) {
			// Load the image from the stream
			CImage image;
			if (image.Load(m_pStream) == S_OK) {
				ImageValue = 2;
				DispalyDecodedImage(m_pStream);
			}

		}
	}
}
void CAddProduct::DisplayApiImgThree(CString thumThreeImg) {
	if (thumThreeImg != "") {
		ImageDecode(thumThreeImg);

		// Set the image in the CStatic control
		if (m_pStream) {
			// Load the image from the stream
			CImage image;
			if (image.Load(m_pStream) == S_OK) {
				ImageValue = 3;
				DispalyDecodedImage(m_pStream);
			}

		}
	}
}

void CAddProduct::OnCbnSelchangeComboItmSpec()
{
	// TODO: Add your control notification handler code here
	//CComboBox* Combodrop_Item = (CComboBox*)GetDlgItem(IDC_COMBO_ITM_SPEC);
	//Combodrop_Item->AddString(_T("New"));
}


void CAddProduct::OnBnClickedCheckTax()
{
	// TODO: Add your control notification handler code here
	
	int isChecked = m_checkBox.GetCheck();
	
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_TAX_NAME);
	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_TAX_PER);
	
	// Show or hide the edit box based on the checkbox state
	if (isChecked == BST_CHECKED)
	{
		
		Edit_Box1->ShowWindow(SW_SHOW);
		Edit_Box2->ShowWindow(SW_SHOW);// Show the edit box
		GIncludeTax = true;
	}
	else if(isChecked == BST_UNCHECKED)
	{
		Edit_Box1->ShowWindow(SW_HIDE);
		Edit_Box2->ShowWindow(SW_HIDE);
		GIncludeTax = false;
		// Hide the edit box
	}
}
void CAddProduct::HideTaxEdit() {

	CEdit* Edit_BoxTax= (CEdit*)GetDlgItem(IDC_EDIT_TAX_NAME);
	CEdit* Edit_BoxTaxper = (CEdit*)GetDlgItem(IDC_EDIT_TAX_PER);
	Edit_BoxTax->ShowWindow(SW_HIDE);
	Edit_BoxTaxper->ShowWindow(SW_HIDE);

}

void CAddProduct::OnBnClickedButtonDelete()  //Function for to delete Company 
{
	// TODO: Add your control notification handler code here
	int i = 1;
	int nSelectedIndex = GetSelectedCheckboxIndex();
	CString  DPorductId;
	DPorductId = m_vendorProducts[nSelectedIndex].ProductId;
	// DCompanyId.Format(_T("%d"), i + nSelectedIndex);
	if (DPorductId == "0")
	{
		AfxMessageBox(_T("Please Select a Product to Delete"));
		return;
	}


	int iAnswer = 0;
	iAnswer = AfxMessageBox(_T("Are You Sure?Do You want to Delete This Product Detials ?"), MB_OKCANCEL);
	if (iAnswer == IDCANCEL)
	{
		return;
	}



	m_apiService->DeleteProduct(DPorductId);


}


void CAddProduct::OnBnClickedBtnImg1()
{
	// TODO: Add your control notification handler code here

	CString filter = _T("Image Files (*.bmp; *.jpg; *.png)|*.bmp;*.jpg;*.png|All Files (*.*)|*.*||");

	CFileDialog fileDialog(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST, filter, this);

	if (fileDialog.DoModal() == IDOK)
	{
		m_strImagePathOne = fileDialog.GetPathName();
		CEdit* Edit_ImgPath1 = (CEdit*)GetDlgItem(IDC_EDIT_IMG1);
		Edit_ImgPath1->SetWindowText(m_strImagePathOne);
		CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG1));
		pStaticControl->Invalidate();
		CDC* pDC = pStaticControl->GetDC();

		// Get the control's client area
		CRect rect;
		pStaticControl->GetClientRect(&rect);

		// Clear the control by filling it with a background color (e.g., white)
		pDC->FillSolidRect(rect, RGB(255, 255, 255)); // White background color

		// Release the device context
		pStaticControl->ReleaseDC(pDC);
		DispalyImage();
		

	}
}
void CAddProduct::DispalyImage() {
	// Load the image using GDI+
	Bitmap image(m_strImagePathOne);
	CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG1));
	
	if (image.GetLastStatus() == Ok) {
		// Get the CStatic control's device context
		
		CDC* pDC = pStaticControl->GetDC();

		// Create a GDI+ Graphics object from the device context
		Graphics graphics(pDC->GetSafeHdc());

		// Draw the image
		graphics.DrawImage(&image, 0, 0);

		// Release the device context
		pStaticControl->ReleaseDC(pDC);
	}

}


void CAddProduct::ImageDecode(CString strBase64) {
	std::string encodedImage = std::string(CT2CA(strBase64));

	std::string decodedImage = base64_decode(encodedImage);

	DWORD imageSize = (DWORD)decodedImage.length();
	HGLOBAL hMem = ::GlobalAlloc(GMEM_MOVEABLE, imageSize);
	LPVOID pImage = ::GlobalLock(hMem);
	memcpy(pImage, decodedImage.c_str(), imageSize);
	m_pStream = NULL;
	::CreateStreamOnHGlobal(hMem, FALSE, &m_pStream);
}
void CAddProduct:: DispalyDecodedImage(IStream* m_pStream) {
	if (ImageValue == 1) {
		Bitmap imageC(m_pStream);
		CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG1));

		if (imageC.GetLastStatus() == Ok) {
			// Get the CStatic control's device context

			CDC* pDC = pStaticControl->GetDC();

			// Create a GDI+ Graphics object from the device context
			Graphics graphics(pDC->GetSafeHdc());

			// Draw the image
			graphics.DrawImage(&imageC, 0, 0);

			// Release the device context
			pStaticControl->ReleaseDC(pDC);
			m_pStream = nullptr;
		}
	}
	else if (ImageValue == 2) {
		Bitmap imageC(m_pStream);
		CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG2));

		if (imageC.GetLastStatus() == Ok) {
			// Get the CStatic control's device context

			CDC* pDC = pStaticControl->GetDC();

			// Create a GDI+ Graphics object from the device context
			Graphics graphics(pDC->GetSafeHdc());

			// Draw the image
			graphics.DrawImage(&imageC, 0, 0);

			// Release the device context
			pStaticControl->ReleaseDC(pDC);
			m_pStream = nullptr;
		}
	}
	else if (ImageValue == 3) {

		Bitmap imageC(m_pStream);
		CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG3));

		if (imageC.GetLastStatus() == Ok) {
			// Get the CStatic control's device context

			CDC* pDC = pStaticControl->GetDC();

			// Create a GDI+ Graphics object from the device context
			Graphics graphics(pDC->GetSafeHdc());

			// Draw the image
			graphics.DrawImage(&imageC, 0, 0);

			// Release the device context
			pStaticControl->ReleaseDC(pDC);
			m_pStream = nullptr;
		}
	}
}

//Save and Update Data
void CAddProduct::OnBnClickedButtonSave()
{
	// TODO: Add your control notification handler code here
	VenderProducts add;

	CString  btntxt1;
	GetDlgItem(IDC_BUTTON_SAVE)->GetWindowText(btntxt1);


	if (btntxt1 == "Save") {
		GetDlgItem(IDC_EDIT_PRO_NAME)->GetWindowText(add.ProductTitle);
		GetDlgItem(IDC_EDIT_PRO_SUB_NAME)->GetWindowText(add.ProductSubTitle);
		GetDlgItem(IDC_EDIT_USD)->GetWindowText(add.ProductPrice);
		GetDlgItem(IDC_EDIT_INR)->GetWindowText(add.ecomProductDetails.ProductPriceInInr);
		GetDlgItem(IDC_EDIT_QNT)->GetWindowText(add.ProductQuantity);

		GetDlgItem(IDC_EDIT_TAX_NAME)->GetWindowText(add.ecomProductDetails.TaxName);
		GetDlgItem(IDC_EDIT_TAX_PER)->GetWindowText(add.ecomProductDetails.TaxPercentage);
		GetDlgItem(IDC_EDIT_DESC1)->GetWindowText(add.ProductDescription);
		GetDlgItem(IDC_EDIT_DESC2)->GetWindowText(add.ProductMoreDetails);
		GetDlgItem(IDC_EDIT_VD_URL)->GetWindowText(add.ecomProductDetails.YoutubeVideoLink);

		GetDlgItem(IDC_EDIT_REG_CODE)->GetWindowText(add.ecomProductDetails.ProductRegistrationCode);
		GetDlgItem(IDC_COMBO_ITM_SPEC)->GetWindowText(add.ProductSpecification);
		GetDlgItem(IDC_EDIT_SHIP_INR)->GetWindowText(add.ecomProductDetails.ShippingChargeInInr);
		GetDlgItem(IDC_COMBO_ALL_CO)->GetWindowText(add.VenderCompanyName);

		GetDlgItem(IDC_COMBO_PRO_CAT)->GetWindowText(add.CategoryName);
		GetDlgItem(IDC_COMBO_SUB_CAT)->GetWindowText(add.SubCategoryName);

		GetDlgItem(IDC_EDIT_IMG1)->GetWindowText(strImagePath1);
		GetDlgItem(IDC_EDIT_IMG2)->GetWindowText(strImagePath2);
		GetDlgItem(IDC_EDIT_IMG3)->GetWindowText(strImagePath3);
		if (strImagePath1 != "") {
			strImage1 = NetworkRequest::ConvertToBase64(strImagePath1);
		}
		else {
			strImage1 = "NIL";
		}
		if (strImagePath2 != "") {
			strImage2 = NetworkRequest::ConvertToBase64(strImagePath2);
		}
		else {
			strImage2 = "NIL";
		}
		if (strImagePath3 != "") {
			strImage3 = NetworkRequest::ConvertToBase64(strImagePath3);
		}
		else {
			strImage1 = "NIL";
		}
		
		
		add.productImages.strImage1 = strImage1;
		add.productImages.strImage2 = strImage2;
		add.productImages.strImage3 = strImage3;

		add.VenderUserId = GCompanyID;
		add.CategoryID = GCategoryID;
		add.SubCategoryId = GSubCategoryID;
		add.ProductType = 0;
		add.ecomProductDetails.IncludeTax = GIncludeTax;
		//add.ProductId = "";
		m_apiService = CWebCloudAPITestApp::m_pAppApiService;
		m_apiService->AddCompanyProducts(add);
		ClearData();
	}

	CString venderName, productname, categoryname, subcategoryname, productQunatity, priceinr, productprice, Desc1, Desc2,productSubTitle,productId,categoryId,subcategoeyId, taxname,ytlink,taxpercentage,proregcode,itemspec,shipussd,shipinr,strImg1,strImg2,strImg3;
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_PRO_NAME);
	Edit_Box1->GetWindowText(productname);

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_PRO_SUB_NAME);
	Edit_Box2->GetWindowText(productSubTitle);

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_USD);
	Edit_Box3->GetWindowText(productprice);

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_QNT);
	Edit_Box4->GetWindowText(productQunatity);

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_DESC1);
	Edit_Box5->GetWindowText(Desc1);

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_DESC2);
	Edit_Box6->GetWindowText(Desc2);

	CComboBox* comb1 = (CComboBox*)GetDlgItem(IDC_COMBO_ALL_CO);
	comb1->GetWindowText(venderName);

	CEdit* comb2 = (CEdit*)GetDlgItem(IDC_COMBO_ITM_SPEC);
	comb2->GetWindowText(itemspec);


	CEdit* comb3 = (CEdit*)GetDlgItem(IDC_COMBO_PRO_CAT);
	comb3->GetWindowText(categoryname);

	CEdit* comb4 = (CEdit*)GetDlgItem(IDC_COMBO_SUB_CAT);
	comb4->GetWindowText(subcategoryname);

	CEdit* Edit_Box10 = (CEdit*)GetDlgItem(IDC_EDIT_TAX_NAME);
	Edit_Box10->GetWindowText(taxname);

	CEdit* Edit_Box11 = (CEdit*)GetDlgItem(IDC_EDIT_TAX_PER);
	Edit_Box11->GetWindowText(taxpercentage);

	CEdit* Edit_Box12 = (CEdit*)GetDlgItem(IDC_EDIT_SHIP_USD);
	Edit_Box12->GetWindowText(shipussd);

	CEdit* Edit_Box13 = (CEdit*)GetDlgItem(IDC_EDIT_SHIP_INR);
	Edit_Box13->GetWindowText(shipinr);
	CEdit* Edit_Box14 = (CEdit*)GetDlgItem(IDC_EDIT_REG_CODE);
	Edit_Box14->GetWindowText(proregcode);
	CEdit* Edit_Box15 = (CEdit*)GetDlgItem(IDC_EDIT_VD_URL);
	Edit_Box15->GetWindowText(ytlink);

	CEdit* Edit_Box16 = (CEdit*)GetDlgItem(IDC_EDIT_INR);
	Edit_Box16->GetWindowText(priceinr);

	CEdit* Edit_Box17 = (CEdit*)GetDlgItem(IDC_EDIT_IMG1);
	Edit_Box17->GetWindowText(strImg1);
	CEdit* Edit_Box18 = (CEdit*)GetDlgItem(IDC_EDIT_IMG2);
	Edit_Box18->GetWindowText(strImg2);
	CEdit* Edit_Box19 = (CEdit*)GetDlgItem(IDC_EDIT_IMG3);
	Edit_Box19->GetWindowText(strImg3);


	CString btntxt;
	if (productname != _T("")) {

		GetDlgItem(IDC_BUTTON_SAVE)->GetWindowText(btntxt);
		if (btntxt == "Update") {

			int nSelectedIndex = GetSelectedCheckboxIndex();
			VenderProducts updateinfo;
			updateinfo.ProductId = m_vendorProducts[nSelectedIndex].ProductId;
			updateinfo.VenderUserId = GCompanyID;
			updateinfo.CategoryID = GCategoryID;
			updateinfo.SubCategoryId = GSubCategoryID;
			updateinfo.VenderCompanyName = venderName;

			updateinfo.ProductTitle = productname;
			updateinfo.CategoryName =  categoryname;
			updateinfo.SubCategoryName = subcategoryname;
			updateinfo.ProductQuantity = productQunatity;
			updateinfo.ProductPrice = productprice;

			updateinfo.ProductDescription = Desc1;
			updateinfo.ProductMoreDetails = Desc2;
			updateinfo.ProductSubTitle = productSubTitle;
			updateinfo.ecomProductDetails.ShippingChargeInInr = shipinr;
			updateinfo.ecomProductDetails.TaxName = taxname;


			updateinfo.ecomProductDetails.TaxPercentage = taxpercentage;
			updateinfo.ProductShippingDetails = shipussd;
			updateinfo.ecomProductDetails.YoutubeVideoLink = ytlink;
			updateinfo.ecomProductDetails.ProductRegistrationCode = proregcode;
			updateinfo.ecomProductDetails.ProductPriceInInr = priceinr;
	       
			updateinfo.ProductType = 0;
			updateinfo.ecomProductDetails.IncludeTax = GIncludeTax;
			updateinfo.ProductDisablePayPal = "No";
			updateinfo.AdditionalInfoXml = "";
			updateinfo.ecomProductDetails.ProductVersionInfo.XMLfileVersionInfo = "";
			updateinfo.SubCategoryDescription = "";
			updateinfo.ProductThumbnailImagePath = "";
			updateinfo.ProductSpecification = itemspec;
			if (strImg1 == "") {
				strImg1 = _T("NIL");
				
				updateinfo.productImages.strImage1 = strImg1;
			
			}
			else {
			   strImage1 = NetworkRequest::ConvertToBase64(strImg1);
				updateinfo.productImages.strImage1 = strImage1;
				
			}

			if (strImg2 == "") {
				strImg2 = _T("NIL");
			
				updateinfo.productImages.strImage2 = strImg2;
				
			}
			else {
				strImage2 = NetworkRequest::ConvertToBase64(strImg2);
				updateinfo.productImages.strImage2 = strImage2;
				
			}

			if (strImg3 == "") {
				strImg3 = _T("NIL");
				
				updateinfo.productImages.strImage3 = strImg3;
			
			}
			else {
				strImage3 = NetworkRequest::ConvertToBase64(strImg3);
				updateinfo.productImages.strImage3 = strImage3;
				
			}
			

			m_apiService->UpdateProduct(updateinfo);
			SetDlgItemText(IDC_BUTTON_SAVE, _T("Save"));
			//ClearData();
		}
	}
}


void CAddProduct::OnBnClickedBtnImg2()
{
	// TODO: Add your control notification handler code here
	CString filter = _T("Image Files (*.bmp; *.jpg; *.png)|*.bmp;*.jpg;*.png|All Files (*.*)|*.*||");

	CFileDialog fileDialog(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST, filter, this);

	if (fileDialog.DoModal() == IDOK)
	{
		m_strImagePathTwo = fileDialog.GetPathName();
		CEdit* Edit_ImgPath1 = (CEdit*)GetDlgItem(IDC_EDIT_IMG2);
		Edit_ImgPath1->SetWindowText(m_strImagePathTwo);
		CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG2));
		pStaticControl->Invalidate();
		CDC* pDC = pStaticControl->GetDC();

		// Get the control's client area
		CRect rect;
		pStaticControl->GetClientRect(&rect);

		// Clear the control by filling it with a background color (e.g., white)
		pDC->FillSolidRect(rect, RGB(255, 255, 255)); // White background color

		// Release the device context
		pStaticControl->ReleaseDC(pDC);
		DispalyImageTwo();


	}
}
void CAddProduct::DispalyImageTwo() {
	// Load the image using GDI+
	Bitmap image(m_strImagePathTwo);
	CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG2));

	if (image.GetLastStatus() == Ok) {
		// Get the CStatic control's device context

		CDC* pDC = pStaticControl->GetDC();

		// Create a GDI+ Graphics object from the device context
		Graphics graphics(pDC->GetSafeHdc());

		// Draw the image
		graphics.DrawImage(&image, 0, 0);

		// Release the device context
		pStaticControl->ReleaseDC(pDC);
	}

}


void CAddProduct::OnBnClickedBtnImg3()
{
	// TODO: Add your control notification handler code here
	// TODO: Add your control notification handler code here
	CString filter = _T("Image Files (*.bmp; *.jpg; *.png)|*.bmp;*.jpg;*.png|All Files (*.*)|*.*||");

	CFileDialog fileDialog(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST, filter, this);

	if (fileDialog.DoModal() == IDOK)
	{
		m_strImagePathThree = fileDialog.GetPathName();
		CEdit* Edit_ImgPath1 = (CEdit*)GetDlgItem(IDC_EDIT_IMG3);
		Edit_ImgPath1->SetWindowText(m_strImagePathThree);
		CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG3));
		pStaticControl->Invalidate();
		CDC* pDC = pStaticControl->GetDC();

		// Get the control's client area
		CRect rect;
		pStaticControl->GetClientRect(&rect);

		// Clear the control by filling it with a background color (e.g., white)
		pDC->FillSolidRect(rect, RGB(255, 255, 255)); // White background color

		// Release the device context
		pStaticControl->ReleaseDC(pDC);
		DispalyImageThree();


	}
}
void CAddProduct::DispalyImageThree() {
	// Load the image using GDI+
	Bitmap image(m_strImagePathThree);
	CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG3));

	if (image.GetLastStatus() == Ok) {
		// Get the CStatic control's device context

		CDC* pDC = pStaticControl->GetDC();

		// Create a GDI+ Graphics object from the device context
		Graphics graphics(pDC->GetSafeHdc());

		// Draw the image
		graphics.DrawImage(&image, 0, 0);

		// Release the device context
		pStaticControl->ReleaseDC(pDC);
	}

}
void CAddProduct::ClearData() {
	CEdit* Edit_Box1 = (CEdit*)GetDlgItem(IDC_EDIT_SHIP_USD);
	Edit_Box1->SetWindowText(_T(""));

	CEdit* Edit_Box2 = (CEdit*)GetDlgItem(IDC_EDIT_VD_URL);
	Edit_Box2->SetWindowText(_T(""));

	CEdit* Edit_Box3 = (CEdit*)GetDlgItem(IDC_EDIT_SHIP_INR);
	Edit_Box3->SetWindowText(_T(""));

	CEdit* Edit_Box4 = (CEdit*)GetDlgItem(IDC_EDIT_TAX_NAME);
	Edit_Box4->SetWindowText(_T(""));

	CEdit* Edit_Box5 = (CEdit*)GetDlgItem(IDC_EDIT_QNT);
	Edit_Box5->SetWindowText(_T(""));

	CEdit* Edit_Box6 = (CEdit*)GetDlgItem(IDC_EDIT_INR);
	Edit_Box6->SetWindowText(_T(""));

	CEdit* Edit_Box7 = (CEdit*)GetDlgItem(IDC_EDIT_USD);
	Edit_Box7->SetWindowText(_T(""));

	CEdit* Edit_Box8 = (CEdit*)GetDlgItem(IDC_EDIT_PRO_SUB_NAME);
	Edit_Box8->SetWindowText(_T(""));

	CEdit* Edit_Box9 = (CEdit*)GetDlgItem(IDC_EDIT_PRO_NAME);
	Edit_Box9->SetWindowText(_T(""));

	CEdit* Edit_Box10 = (CEdit*)GetDlgItem(IDC_EDIT_DESC1);
	Edit_Box10->SetWindowText(_T(""));

	CEdit* Edit_Box11 = (CEdit*)GetDlgItem(IDC_EDIT_DESC2);
	Edit_Box11->SetWindowText(_T(""));

	CEdit* Edit_Box12 = (CEdit*)GetDlgItem(IDC_EDIT_REG_CODE);
	Edit_Box12->SetWindowText(_T(""));

	CComboBox* Combo_Box = (CComboBox*)GetDlgItem(IDC_COMBO_ITM_SPEC);
	Combo_Box->SetWindowText(_T(""));
	CEdit* Edit_Box14 = (CEdit*)GetDlgItem(IDC_EDIT_DESC);
	Edit_Box14->SetWindowText(_T(""));
	CEdit* Edit_Box15 = (CEdit*)GetDlgItem(IDC_EDIT_INVOICE);
	Edit_Box15->SetWindowText(_T(""));

	CEdit* Edit_Box16 = (CEdit*)GetDlgItem(IDC_EDIT_IMG1);
	Edit_Box16->SetWindowText(_T(""));
	CEdit* Edit_Box17 = (CEdit*)GetDlgItem(IDC_EDIT_IMG2);
	Edit_Box17->SetWindowText(_T(""));
	CEdit* Edit_Box18 = (CEdit*)GetDlgItem(IDC_EDIT_IMG3);
	Edit_Box18->SetWindowText(_T(""));
	/*GCompanyID = "";
	 GCategoryID ="";
	 GSubCategoryID="";*/
	 ClearImageDataOne();
	 ClearImageDataTwo();
	 ClearImageDataThree();
}
void CAddProduct::ClearImageDataOne() {
	CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG1));
	pStaticControl->Invalidate();
	CDC* pDC = pStaticControl->GetDC();

	// Get the control's client area
	CRect rect;
	pStaticControl->GetClientRect(&rect);

	// Clear the control by filling it with a background color (e.g., white)
	pDC->FillSolidRect(rect, RGB(255, 255, 255)); // White background color

	// Release the device context
	pStaticControl->ReleaseDC(pDC);
}
void CAddProduct::ClearImageDataTwo() {
	CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG2));
	pStaticControl->Invalidate();
	CDC* pDC = pStaticControl->GetDC();

	// Get the control's client area
	CRect rect;
	pStaticControl->GetClientRect(&rect);

	// Clear the control by filling it with a background color (e.g., white)
	pDC->FillSolidRect(rect, RGB(255, 255, 255)); // White background color

	// Release the device context
	pStaticControl->ReleaseDC(pDC);
}
void CAddProduct::ClearImageDataThree() {
	CStatic* pStaticControl = reinterpret_cast<CStatic*>(GetDlgItem(IDC_STATIC_IMG3));
	pStaticControl->Invalidate();
	CDC* pDC = pStaticControl->GetDC();

	// Get the control's client area
	CRect rect;
	pStaticControl->GetClientRect(&rect);

	// Clear the control by filling it with a background color (e.g., white)
	pDC->FillSolidRect(rect, RGB(255, 255, 255)); // White background color

	// Release the device context
	pStaticControl->ReleaseDC(pDC);
}