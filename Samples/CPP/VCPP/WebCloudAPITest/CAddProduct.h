#pragma once
#include <WinINet.h> 


// CAddProduct dialog

class CAddProduct : public CDialogEx
{
	DECLARE_DYNAMIC(CAddProduct)

public:
	CAddProduct(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CAddProduct();
	virtual BOOL OnInitDialog();
	void GetallCompanies();
	void GetAllProdCategory();
	int GetSelectedCheckboxIndex();
	void HideTaxEdit();
	void ImageDecode(CString strBase64);
	void ClearData();
	void ClearImageDataOne();
	void ClearImageDataTwo();
	void ClearImageDataThree();
	
	CString Value;
	CString Id;
	CString CategoryId;
	BOOL m_bEditing;
	CButton m_checkBox;
	BOOL GIncludeTax;
// If you want to display the uploaded image
	CString m_strImagePathOne, m_strImagePathTwo, m_strImagePathThree;

	//varible for converting Image to base64
	CString strImage1, strImage2, strImage3;

	BOOL m_bShowEditBox;
	IStream* m_pStream;
	//varible for decoding Image
	CString  thumOneImg, thumTwoImg, thumThreeImg,CompthumOneImg,CompthumTwoImg,CompthumThreeImg;
   //save Imagepath
	CString strImagePath1, strImagePath2, strImagePath3;
	int ImageValue;
	void   DispalyImage();
	void   DispalyImageTwo();
	void   DispalyImageThree();
	void DisplayApiImgOne(CString thumOneImg);
	void DisplayApiImgTwo(CString thumTwoImg);
	void DisplayApiImgThree(CString thumThreeImg);
	void   DispalyDecodedImage(IStream* m_pStream);
	
	
	
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ADD_PRODUCTS };
#endif
private:
	AppApiService* m_apiService;
	CArray<VenderInfo, VenderInfo> m_vendordetails;
	CArray<VenderProducts, VenderProducts> m_vendorProducts;
	CListCtrl m_listctrl;
	CComboBox ComboItem;
	CStatic m_imageControl;
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeComboAllCo();
	afx_msg void OnCbnSelchangeComboProCat();
	afx_msg void OnCbnSelchangeComboSubCat();
	afx_msg void OnBnClickedButtonSave();
	afx_msg void OnBnClickedButtonEdit();
	afx_msg void OnCbnSelchangeComboItmSpec();
	afx_msg void OnBnClickedCheckTax();
	afx_msg void OnBnClickedButtonDelete();
	afx_msg void OnBnClickedBtnImg1();
	
	afx_msg void OnBnClickedBtnImg2();
	afx_msg void OnBnClickedBtnImg3();
};
