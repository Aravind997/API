
#include "pch.h"
#include "AppApiService.h"
#include "../NetworkRequest.h"
#include "../WebCloudAPITest.h"
#include "../Markup.h"
#include <iostream>
#include <afxwin.h>

//#import <msxml6.dll>

void AppApiService::GetAllCompanies(CArray<VenderInfo,VenderInfo>& InfoArray)
{

	CString getAllcompany = _T("api/Ecom/GetCompanyList");
	OnStatusMessage(getAllcompany);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllcompany);
		std::wstring res = Jvalue->Stringify(true);
		OnResponseData(CString(res.c_str()));
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			VenderInfo Info;
			Info.VenderCompanyName = Jobj[L"VenderCompanyName"]->AsString().c_str();
			Info.VenderEmailAddress = Jobj[L"VenderEmailAddress"]->AsString().c_str();
			Info.GstinVatID = Jobj[L"GstinVatID"]->AsString().c_str();
			Info.VenderRegistrationDate = Jobj[L"VenderRegistrationDate"]->AsString().c_str();
			Info.VenderProfileDesc = Jobj[L"VenderProfileDesc"]->AsString().c_str();
			Info.VenderMobileNumber = Jobj[L"VenderMobileNumber"]->AsString().c_str();
			Info.VenderPhoneNumber = Jobj[L"VenderPhoneNumber"]->AsString().c_str();
			Info.VenderCountry = Jobj[L"VenderCountry"]->AsString().c_str();
			Info.VenderPinCode = Jobj[L"VenderPinCode"]->AsString().c_str();
			Info.VenderState = Jobj[L"VenderState"]->AsString().c_str();
			Info.VenderCity = Jobj[L"VenderCity"]->AsString().c_str();
			Info.VenderWebsiteUrl = Jobj[L"VenderWebsiteUrl"]->AsString().c_str();
			Info.VenderAddress2 = Jobj[L"VenderAddress2"]->AsString().c_str();
			Info.VenderAddress1 = Jobj[L"VenderAddress1"]->AsString().c_str();
			Info.VenderUserId = Jobj[L"VenderUserId"]->AsString().c_str();
			//Info.ReEnterEmailAddress = Jobj[L"ReEnterEmailAddress"]->AsString().c_str();
			Info.InvoicePrefix = Jobj[L"InvoicePrefix"]->AsString().c_str();
		
			InfoArray.Add(Info);
		}

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
	
}  
void AppApiService::GetAllProductCategory(CArray<VenderProducts, VenderProducts>& InfoArray) {

	CString getAllCategory = _T("api/Ecom/GetAllProductCategory");
	OnStatusMessage(getAllCategory);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllCategory);
		std::wstring res = Jvalue->Stringify(true);
		OnResponseData(CString(res.c_str()));
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			VenderProducts Info;
			Info.CategoryName = Jobj[L"CategoryName"]->AsString().c_str();
			Info.CategoryID = Jobj[L"CategoryID"]->AsString().c_str();
			

			InfoArray.Add(Info);
		}

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}

} 
void AppApiService::GetAllProductSubCategory(CString CategoryId, CArray<VenderProducts, VenderProducts>& InfoArray) {

	//CString getAllCategory = (_T("api/Ecom/GetAllProductSubCategory?CategoryId=%s"), CategoryId);
	CString getAllSubCategory = (_T("api/Ecom/GetAllProductSubCategory?CategoryId=" + CategoryId));
	
	OnStatusMessage(getAllSubCategory);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllSubCategory);
		std::wstring res = Jvalue->Stringify(true);
		OnResponseData(CString(res.c_str()));
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			VenderProducts Info;
		
			Info.SubCategoryName = Jobj[L"SubCategoryName"]->AsString().c_str();
			Info.SubCategoryId = Jobj[L"SubCategoryId"]->AsString().c_str();


			InfoArray.Add(Info);
		}

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}


void AppApiService::GetAllProductList(CString CompanyId, CString CategoryId,CString SubcategoryId,CArray<VenderProducts,VenderProducts> &InfoArray) {

		CString getAllProduct = (_T("api/Ecom/GetProductDetails?CompanyId="+CompanyId+"&&CategoryId="+CategoryId+"&&SubcategoryId="+SubcategoryId));
		OnStatusMessage(getAllProduct);
		try
		{
			JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllProduct);
			std::wstring res = Jvalue->Stringify(true);
			OnResponseData(CString(res.c_str()));
			JSONArray root = Jvalue->AsArray();
			for (unsigned int i = 0; i < root.size(); i++)
			{
				JSONObject Jobj = root[i]->AsObject();

				//JSONObject job = Jobj[L"EcomProductDetailsSettings"]->AsObject();
				VenderProducts Info;  
				Info.ProductTitle = Jobj[L"ProductTitle"]->AsString().c_str();
				Info.CategoryName = Jobj[L"CategoryName"]->AsString().c_str();
				Info.ProductDescription= Jobj[L"ProductDescription"]->AsString().c_str();
				Info.ProductId= Jobj[L"ProductId"]->AsString().c_str();
				Info.ProductMoreDetails= Jobj[L"ProductMoreDetails"]->AsString().c_str();
				Info.ProductDisablePayPal= Jobj[L"ProductDisablePayPal"]->AsString().c_str();
				Info.ProductPlimusLink= Jobj[L"ProductPlimusLink"]->AsString().c_str();
				Info.ProductPrice= Jobj[L"ProductPrice"]->AsString().c_str();
				Info.ProductQuantity= Jobj[L"ProductQuantity"]->AsString().c_str();
				Info.ProductQuickDemoLink= Jobj[L"ProductQuickDemoLink"]->AsString().c_str();
				Info.ProductRealImagePath= Jobj[L"ProductRealImagePath"]->AsString().c_str();
				Info.ProductShippingDetails= Jobj[L"ProductShippingDetails"]->AsString().c_str();
				Info.ProductSpecification = Jobj[L"ProductSpecification"]->AsString().c_str();
				Info.ProductSubTitle= Jobj[L"ProductSubTitle"]->AsString().c_str();
				Info.ProductThumbnailImagePath= Jobj[L"ProductThumbnailImagePath"]->AsString().c_str();
		      	Info.ProductType = Jobj[L"ProductType"]->AsNumber();
				Info.SubCategoryDescription = Jobj[L"SubCategoryDescription"]->AsString().c_str();
				Info.SubCategoryId= Jobj[L"SubCategoryId"]->AsString().c_str();
				Info.SubCategoryName= Jobj[L"SubCategoryName"]->AsString().c_str();
				Info.VenderCompanyName= Jobj[L"VenderCompanyName"]->AsString().c_str();
				Info.VenderUserId= Jobj[L"VenderUserId"]->AsString().c_str();

				Info.AdditionalInfoXml = Jobj[L"AdditionalInfoXml"]->AsString().c_str();
				 CString AdditionalInfoXml = Jobj[L"AdditionalInfoXml"]->AsString().c_str();

				 pugi::xml_document doc;
				 // Convert CString to std::string
				 std::string xmlStringStd = CT2A(AdditionalInfoXml);

				 // Convert std::string to const pugi::char_t*
				 const pugi::char_t* xmlString = reinterpret_cast<const pugi::char_t*>(xmlStringStd.c_str());
				 pugi::xml_parse_result result = doc.load_string(xmlString);
				

				 // Access individual XML elements
				 pugi::xml_node productImageTwoUrlNode = doc.child("EcomProductDetailsSettings").child("ProductImageTwoUrl");
				 pugi::xml_node ProductImageThreeUrlNode = doc.child("EcomProductDetailsSettings").child("ProductImageThreeUrl");

				 pugi::xml_node ProductThmnailTwoUrlNode = doc.child("EcomProductDetailsSettings").child("ProductThmnailTwoUrl");
				 pugi::xml_node ProductThmnailThreeUrlNode = doc.child("EcomProductDetailsSettings").child("ProductThmnailThreeUrl");
				
				 pugi::xml_node YoutubeVideoLinkNode = doc.child("EcomProductDetailsSettings").child("YoutubeVideoLink");
				 pugi::xml_node ProductPriceInInrNode = doc.child("EcomProductDetailsSettings").child("ProductPriceInInr");
				 pugi::xml_node ShippingChargeInInrNode = doc.child("EcomProductDetailsSettings").child("ShippingChargeInInr");
				 pugi::xml_node TaxNameNode = doc.child("EcomProductDetailsSettings").child("TaxName");
				 pugi::xml_node TaxPercentageNode = doc.child("EcomProductDetailsSettings").child("TaxPercentage");
				 pugi::xml_node IncludeTaxNode = doc.child("EcomProductDetailsSettings").child("IncludeTax");
				 pugi::xml_node ProductRegistrationCodeNode = doc.child("EcomProductDetailsSettings").child("ProductRegistrationCode");
				


				 std::string productImageTwoUrl = productImageTwoUrlNode.text().get();
				 std::string ProductImageThreeUrl = ProductImageThreeUrlNode.text().get();

				 std::string ProductThmnailTwoUrl = ProductThmnailTwoUrlNode.text().get();
				 std::string ProductThmnailThreeUrl = ProductThmnailThreeUrlNode.text().get();

				 std::string YoutubeVideoLink = YoutubeVideoLinkNode.text().get();
				 std::string ProductPriceInInr = ProductPriceInInrNode.text().get();
				 std::string ShippingChargeInInr = ShippingChargeInInrNode.text().get();
				 std::string TaxName = TaxNameNode.text().get();
				 std::string TaxPercentage = TaxPercentageNode.text().get();
				 std::string IncludeTax = IncludeTaxNode.text().get();
				 std::string ProductRegistrationCode = ProductRegistrationCodeNode.text().get();

				 // Convert std::string to CString
				 CString productImageTwoUrl_CStr = CString(productImageTwoUrl.c_str());
				 CString ProductImageThreeUrl_CStr = CString(ProductImageThreeUrl.c_str());

				 CString ProductThmnailTwoUrl_CStr = CString(ProductThmnailTwoUrl.c_str());
				 CString ProductThmnailThreeUrl_CStr = CString(ProductThmnailThreeUrl.c_str());

				 CString YoutubeVideoLink_CStr = CString(YoutubeVideoLink.c_str());
				 CString ProductPriceInInr_CStr = CString(ProductPriceInInr.c_str());
				 CString ShippingChargeInInr_CStr = CString(ShippingChargeInInr.c_str());
				 CString TaxName_CStr = CString(TaxName.c_str());
				 CString TaxPercentage_CStr = CString(TaxPercentage.c_str());
				 CString IncludeTax_CStr = CString(IncludeTax.c_str());
				 CString ProductRegistrationCode_CStr = CString(ProductRegistrationCode.c_str());

				 Info.ecomProductDetails.ProductImageTwoUrl = productImageTwoUrl_CStr;
				 Info.ecomProductDetails.ProductImageThreeUrl = ProductImageThreeUrl_CStr;

				 Info.ecomProductDetails.ProductThmnailTwoUrl = ProductThmnailTwoUrl_CStr;
				 Info.ecomProductDetails.ProductThmnailThreeUrl = ProductThmnailThreeUrl_CStr;

				 Info.ecomProductDetails.YoutubeVideoLink = YoutubeVideoLink_CStr;
				 Info.ecomProductDetails.ProductPriceInInr = ProductPriceInInr_CStr;
				 Info.ecomProductDetails.ShippingChargeInInr = ShippingChargeInInr_CStr;
				 Info.ecomProductDetails.TaxName = TaxName_CStr;
				 Info.ecomProductDetails.TaxPercentage = TaxPercentage_CStr;
				 Info.ecomProductDetails.IncludeTax = IncludeTax_CStr;
				 Info.ecomProductDetails.ProductRegistrationCode = ProductRegistrationCode_CStr;

				JSONObject job = Jobj[L"productThumbs"]->AsObject();
			   
				Info.productThumbs.strThumb1= job[L"strThumb1"]->AsString().c_str();
				Info.productThumbs.strThumb2 = job[L"strThumb2"]->AsString().c_str();
				Info.productThumbs.strThumb3 = job[L"strThumb3"]->AsString().c_str();

			/*	JSONObject job1 = Jobj[L"ecomProductDetails"]->AsObject();
				
				
				Info.ecomProductDetails.YoutubeVideoLink= job1[L"YoutubeVideoLink"]->IsNull() ? _T("") : job1[L"YoutubeVideoLink"]->AsString().c_str();
				Info.ecomProductDetails.ShippingChargeInInr = job1[L"ShippingChargeInInr"]->IsNull() ? _T("") : job1[L"ShippingChargeInInr"]->AsString().c_str();
				Info.ecomProductDetails.ProductPriceInInr = job1[L"ProductPriceInInr"]->IsNull() ? _T("") : job1[L"ProductPriceInInr"]->AsString().c_str();
				Info.ecomProductDetails.IncludeTax = job1[L"IncludeTax"]->AsBool();
				Info.ecomProductDetails.ProductImageThreeUrl = job1[L"ProductImageThreeUrl"]->IsNull() ? _T("") : job1[L"ProductImageThreeUrl"]->AsString().c_str();
				Info.ecomProductDetails.ProductImageTwoUrl = job1[L"ProductImageTwoUrl"]->IsNull() ? _T("") : job1[L"ProductImageTwoUrl"]->AsString().c_str();
				Info.ecomProductDetails.ProductRegistrationCode = job1[L"ProductRegistrationCode"]->IsNull() ? _T("") : job1[L"ProductRegistrationCode"]->AsString().c_str();
				Info.ecomProductDetails.ProductThmnailThreeUrl = job1[L"ProductThmnailThreeUrl"]->IsNull() ? _T("") : job1[L"ProductThmnailThreeUrl"]->AsString().c_str();
				Info.ecomProductDetails.ProductThmnailTwoUrl = job1[L"ProductThmnailTwoUrl"]->IsNull() ? _T("") : job1[L"ProductThmnailTwoUrl"]->AsString().c_str();
				Info.ecomProductDetails.TaxName = job1[L"TaxName"]->IsNull() ? _T("") : job1[L"TaxName"]->AsString().c_str();
				Info.ecomProductDetails.TaxPercentage = job1[L"TaxPercentage"]->IsNull() ? _T("") : job1[L"TaxPercentage"]->AsString().c_str();*/
			

				InfoArray.Add(Info);
				
			}

		}
		catch (const std::exception& e)
		{
			OnResponseData(CString(e.what()));
		}
  }
void AppApiService::AddCompanyDetails(AddVenderInfo& addvender) {

	CString data;
	JSONObject Obj;
	Obj[L"VenderCompanyName"] = new JSONValue(addvender.VenderCompanyName);
	Obj[L"VenderEmailAddress"] = new JSONValue(addvender.VenderEmailAddress);
	Obj[L"GstinVatID"] = new JSONValue(addvender.GstinVatID);
	Obj[L"VenderProfileDesc"] = new JSONValue(addvender.VenderProfileDesc);
	Obj[L"VenderMobileNumber"] = new JSONValue(addvender.VenderMobileNumber);
	Obj[L"VenderPhoneNumber"] = new JSONValue(addvender.VenderPhoneNumber);
	Obj[L"VenderCountry"] = new JSONValue(addvender.VenderCountry);
	Obj[L"VenderPinCode"] = new JSONValue(addvender.VenderPinCode);
	Obj[L"VenderState"] = new JSONValue(addvender.VenderState);
	Obj[L"VenderCity"] = new JSONValue(addvender.VenderCity);
	Obj[L"VenderWebsiteUrl"] = new JSONValue(addvender.VenderWebsiteUrl);
	Obj[L"VenderAddress2"] = new JSONValue(addvender.VenderAddress2);
	Obj[L"VenderAddress1"] = new JSONValue(addvender.VenderAddress1);
	Obj[L"InvoicePrefix"] = new JSONValue(addvender.InvoicePrefix);
	Obj[L"ReEnterEmailAddress"]= new JSONValue(addvender.ReEnterEmailAddress);
	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddCompany");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully");
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
CString AppApiService::UpadateCompany(VenderInfo& Info) {
	CString updateVender = _T("api/Ecom/UpadteCompany");
	CString dataUpdate;
	JSONObject obj;
	obj[L"VenderUserId"] = new JSONValue(Info.VenderUserId);
	obj[L"VenderCompanyName"] = new JSONValue(Info.VenderCompanyName);
	obj[L"VenderEmailAddress"] = new JSONValue(Info.VenderEmailAddress);
	obj[L"GstinVatID"] = new JSONValue(Info.GstinVatID);
	obj[L"VenderWebsiteUrl"] = new JSONValue(Info.VenderWebsiteUrl);
	obj[L"VenderPhoneNumber"] = new JSONValue(Info.VenderPhoneNumber);
	obj[L"VenderMobileNumber"] = new JSONValue(Info.VenderMobileNumber);
	obj[L"ReEnterEmailAddress"] = new JSONValue(Info.ReEnterEmailAddress);
	obj[L"InvoicePrefix"] = new JSONValue(Info.InvoicePrefix);
	obj[L"VenderAddress1"] = new JSONValue(Info.VenderAddress1);
	obj[L"VenderAddress2"] = new JSONValue(Info.VenderAddress2);
	obj[L"VenderCity"] = new JSONValue(Info.VenderCity);
	obj[L"VenderState"] = new JSONValue(Info.VenderState);
	obj[L"VenderCountry"] = new JSONValue(Info.VenderCountry);
	obj[L"VenderPinCode"] = new JSONValue(Info.VenderPinCode);
	obj[L"VenderProfileDesc"] = new JSONValue(Info.VenderProfileDesc);

	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updateVender = _T("api/Ecom/UpadteCompany");                                     
		OnStatusMessage(updateVender);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateVender, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
CString AppApiService::DeleteCompany(CString CompanyId) {
	try
	{
		CString DeleteVender;
		DeleteVender.Format(_T("api/Ecom/DeleteCompany?CompanyId=" + CompanyId));
		JSONValue* JvalueNew = NetworkRequest::GetReqEx(DeleteVender);
		std::wstring resNew = JvalueNew->Stringify(true);
		CString cstrResNew(resNew.c_str());
		OnResponseData(cstrResNew);
		OnStatusMessage(DeleteVender);
		AfxMessageBox(cstrResNew);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}

	return CString();
}
void AppApiService::UploadProductImage(FileChunkReq& data) {

}
void AppApiService::GetPayPalSettings(CString venderId,PayPaLSettings& InfoArray) {

	CString getPayPal = (_T("api/Ecom/GetPayPalSettings?VendorId=" + venderId));
	OnStatusMessage(getPayPal);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getPayPal);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();
		
		
		      InfoArray.PaypalClientID = Jobj[L"PaypalClientID"]->IsNull() ? _T("") : Jobj[L"PaypalClientID"]->AsString().c_str();
			  InfoArray.PaypalClientSecretKey = Jobj[L"PaypalClientSecretKey"]->IsNull() ? _T("") : Jobj[L"PaypalClientSecretKey"]->AsString().c_str();
			  InfoArray.EnablePaypal = Jobj[L"EnablePaypal"]->AsBool();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::GetPayUMoneySettings(CString venderId,  PayUMoneySettings& InfoArray)
{

	CString getPayU = (_T("api/Ecom/GetPayUMoneySettings?VendorId=" + venderId));
	OnStatusMessage(getPayU);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getPayU);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();

		InfoArray.MerchantID = Jobj[L"MerchantID"]->IsNull() ? _T("") : Jobj[L"MerchantID"]->AsString().c_str();
		InfoArray.MerchantKey = Jobj[L"MerchantKey"]->IsNull() ? _T("") : Jobj[L"MerchantKey"]->AsString().c_str();
		InfoArray.EnablePayumoney = Jobj[L"EnablePayumoney"]->AsBool();
		InfoArray.Salt = Jobj[L"Salt"]->IsNull() ? _T("") : Jobj[L"Salt"]->AsString().c_str();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}

}
void AppApiService::GetStripeSettings(CString venderId, StripeSettings& InfoArray)
{

	CString getStripe = (_T("api/Ecom/GetStripeSettings?VendorId=" + venderId));
	OnStatusMessage(getStripe);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getStripe);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();

			

			//InfoArray.VendorId = Jobj[L"VendorId"]->AsString().c_str();
			InfoArray.SecretKey = Jobj[L"SecretKey"]->IsNull() ? _T("") : Jobj[L"SecretKey"]->AsString().c_str();
			InfoArray.PublishableKey = Jobj[L"PublishableKey"]->IsNull() ? _T("") : Jobj[L"PublishableKey"]->AsString().c_str();
			InfoArray.EnableStripeSettings = Jobj[L"EnableStripeSettings"]->AsBool();
			

			
		

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::GetRazorpaySettings(CString venderId,  RazorpaySettings& InfoArray) 
{

	CString getRazor = (_T("api/Ecom/GetRazorpaySettings?VendorId=" + venderId));
	OnStatusMessage(getRazor);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getRazor);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();
		//Info.VendorId = Jobj[L"VendorId"]->AsString().c_str();
		InfoArray.RazorpayKeyID = Jobj[L"RazorpayKeyID"]->IsNull() ? _T("") : Jobj[L"RazorpayKeyID"]->AsString().c_str();
		InfoArray.RazorpayKeySecret = Jobj[L"RazorpayKeySecret"]->IsNull() ? _T("") : Jobj[L"RazorpayKeySecret"]->AsString().c_str();
		InfoArray.EnableRazorpaySettings = Jobj[L"EnableRazorpaySettings"]->AsBool();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::GetEMailSettings(CString venderId, EmailSettings& InfoArray)
{

	CString getEmail = (_T("api/Ecom/GetEMailSettings?VendorId=" + venderId));
	OnStatusMessage(getEmail);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getEmail);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();

		//InfoArray.VendorId = Jobj[L"VendorId"]->AsString().c_str();
		InfoArray.AdminEmail = Jobj[L"AdminEmail"]->IsNull() ? _T("") : Jobj[L"AdminEmail"]->AsString().c_str();
		InfoArray.BusinessEmail = Jobj[L"BusinessEmail"]->IsNull() ? _T("") : Jobj[L"BusinessEmail"]->AsString().c_str();
		InfoArray.DefaultEmail = Jobj[L"DefaultEmail"]->IsNull() ? _T("") : Jobj[L"DefaultEmail"]->AsString().c_str();
		InfoArray.SupportEmail = Jobj[L"SupportEmail"]->IsNull() ? _T("") : Jobj[L"SupportEmail"]->AsString().c_str();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::GetBusinessSettings(CString venderId, BusinessSettings& InfoArray)
{

	CString getBusiness = (_T("api/Ecom/GetBusinessSettings?VendorId=" + venderId));
	OnStatusMessage(getBusiness);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getBusiness);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();

		//InfoArray.VendorId = Jobj[L"VendorId"]->AsString().c_str();
		InfoArray.OrganizationName = Jobj[L"OrganizationName"]->IsNull() ? _T("") : Jobj[L"OrganizationName"]->AsString().c_str();
		InfoArray.Address = Jobj[L"Address"]->IsNull() ? _T("") : Jobj[L"Address"]->AsString().c_str();
		InfoArray.WebSiteURL = Jobj[L"WebSiteURL"]->IsNull() ? _T("") : Jobj[L"WebSiteURL"]->AsString().c_str();
		InfoArray.PhoneNo1 = Jobj[L"PhoneNo1"]->IsNull() ? _T("") : Jobj[L"PhoneNo1"]->AsString().c_str();
		InfoArray.PhoneNo2 = Jobj[L"PhoneNo2"]->IsNull() ? _T("") : Jobj[L"PhoneNo2"]->AsString().c_str();
		InfoArray.PinCode = Jobj[L"PinCode"]->IsNull() ? _T("") : Jobj[L"PinCode"]->AsString().c_str();
		InfoArray.FaxNo = Jobj[L"FaxNo"]->IsNull() ? _T("") : Jobj[L"FaxNo"]->AsString().c_str();



			
		

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::GetBankDetails(CString venderId, BankDetails& InfoArray)
{

	CString getBank = (_T("api/Ecom/GetBankDetails?VendorId=" + venderId));
	OnStatusMessage(getBank);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getBank);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();

			//Info.VendorId = Jobj[L"VendorId"]->AsString().c_str();
		InfoArray.BankName = Jobj[L"BankName"]->IsNull() ? _T("") : Jobj[L"BankName"]->AsString().c_str();
		InfoArray.AccountNo = Jobj[L"AccountNo"]->IsNull() ? _T("") : Jobj[L"AccountNo"]->AsString().c_str();
		InfoArray.SWIFTIFSCCodeBankAddress = Jobj[L"SWIFTIFSCCodeBankAddress"]->IsNull() ? _T("") : Jobj[L"SWIFTIFSCCodeBankAddress"]->AsString().c_str();
		InfoArray.EnableBankTransfer = Jobj[L"EnableBankTransfer"]->IsNull() ? false : Jobj[L"EnableBankTransfer"]->AsBool();
		InfoArray.OrderRequestEmail = Jobj[L"OrderRequestEmail"]->IsNull() ? _T("") : Jobj[L"OrderRequestEmail"]->AsString().c_str();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::GetShippingDetails(CString venderId, ShippingDetails& InfoArray)
{

	CString getShip = (_T("api/Ecom/GetShippingDetails?VendorId=" + venderId));
	OnStatusMessage(getShip);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getShip);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();

		//	Info.VendorId = Jobj[L"VendorId"]->AsString().c_str();
		InfoArray.ShippingAddress = Jobj[L"ShippingAddress"]->IsNull() ? _T("") : Jobj[L"ShippingAddress"]->AsString().c_str();
		InfoArray.PhoneNumber = Jobj[L"PhoneNumber"]->IsNull() ? _T("") : Jobj[L"PhoneNumber"]->AsString().c_str();
		InfoArray.EmailAddress = Jobj[L"EmailAddress"]->IsNull() ? _T("") : Jobj[L"EmailAddress"]->AsString().c_str();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
}
void AppApiService::AddCompanyProducts(VenderProducts& addporducts)
{
	CString postdetials = _T("api/Ecom/AddCompanyProduct");
	CString data;
	JSONObject Obj;
	Obj[L"VenderCompanyName"] = new JSONValue(addporducts.VenderCompanyName);
	Obj[L"CategoryID"] = new JSONValue(addporducts.CategoryID);
	Obj[L"SubCategoryId"] = new JSONValue(addporducts.SubCategoryId);
	Obj[L"ProductDescription"] = new JSONValue(addporducts.ProductDescription);
	Obj[L"ProductMoreDetails"] = new JSONValue(addporducts.ProductMoreDetails);

	Obj[L"ProductPrice"] = new JSONValue(addporducts.ProductPrice);
	Obj[L"ProductQuantity"] = new JSONValue(addporducts.ProductQuantity);
	Obj[L"CategoryName"] = new JSONValue(addporducts.CategoryName);
	Obj[L"SubCategoryName"] = new JSONValue(addporducts.SubCategoryName);
	Obj[L"ProductSpecification"] = new JSONValue(addporducts.ProductSpecification);

	Obj[L"VenderUserId"] = new JSONValue(addporducts.VenderUserId);
	Obj[L"ProductTitle"] = new JSONValue(addporducts.ProductTitle);
	Obj[L"ProductSubTitle"] = new JSONValue(addporducts.ProductSubTitle);
	Obj[L"SubCategoryDescription"] = new JSONValue(addporducts.SubCategoryDescription);
    Obj[L"ProductPlimusLink"] = new JSONValue(addporducts.ProductPlimusLink);

	Obj[L"ProductQuickDemoLink"] = new JSONValue(addporducts.ProductQuickDemoLink);
	Obj[L"ProductRealImagePath"] = new JSONValue(addporducts.ProductRealImagePath);
	Obj[L"ProductShippingDetails"] = new JSONValue(addporducts.ProductShippingDetails);
	Obj[L"ProductThumbnailImagePath"] = new JSONValue(addporducts.ProductThumbnailImagePath);
	Obj[L"ProductType"] = new JSONValue(addporducts.ProductType);

	Obj[L"AdditionalInfoXml"] = new JSONValue(addporducts.AdditionalInfoXml);

	//CString xmlData = _T("<?xml version=\"1.0\" encoding=\"utf-16\"?>\r\n<EcomProductDetailsSettings xmlns:xsi=\"http:\/\/www.w3.org\/2001\/XMLSchema-instance\" xmlns:xsd=\"http:\/\/www.w3.org\/2001\/XMLSchema\">\r\n  ... (rest of the XML data) ...\r\n<\/EcomProductDetailsSettings>");
	/*CString xmlData;
	xmlData.Format(
		_T("<?xml version=\"1.0\" encoding=\"utf-16\"?>\r\n<EcomProductDetailsSettings>\r\n"

			"  <ProductImageThreeUrl>%s</ProductImageThreeUrl>\r\n"
			"  <ProductImageTwoUrl>%s</ProductImageTwoUrl>\r\n"
			"<ProductThmnailThreeUrl>%s</ProductThmnailThreeUrl>\r\n "
			"<ProductThmnailTwoUrl>%s</ProductThmnailTwoUrl>\r\n "
			"<YoutubeVideoLink>%s</YoutubeVideoLink>\r\n"
			"<ProductPriceInInr>%s<\/ProductPriceInInr>\r\n"
			"<ShippingChargeInInr>%s<\/ShippingChargeInInr>\r\n"
			"<TaxName>%s</TaxName>\r\n "
			"<TaxPercentage>%s </TaxPercentage>\r\n"
			"<IncludeTax>false</IncludeTax>\r\n"
			"<ProductRegistrationCode>%s</ProductRegistrationCode>\r\n "
			"</EcomProductDetailsSettings>"), addporducts.ecomProductDetails.ProductImageTwoUrl, addporducts.ecomProductDetails.ProductImageThreeUrl,
		addporducts.ecomProductDetails.ProductThmnailThreeUrl, addporducts.ecomProductDetails.ProductThmnailTwoUrl, addporducts.ecomProductDetails.YoutubeVideoLink, addporducts.ecomProductDetails.ProductPriceInInr,
		addporducts.ecomProductDetails.ShippingChargeInInr, addporducts.ecomProductDetails.TaxName, addporducts.ecomProductDetails.TaxPercentage, addporducts.ecomProductDetails.ProductRegistrationCode);*/
	JSONObject job;

	job[L"strThumb1"] = new JSONValue(addporducts.productThumbs.strThumb1);
	job[L"strThumb2"] = new JSONValue(addporducts.productThumbs.strThumb2);
	job[L"strThumb3"] = new JSONValue(addporducts.productThumbs.strThumb3);
	Obj[L"productThumbs"]= new JSONValue(job);

	JSONObject job1;

	job1[L"IncludeTax"] = new JSONValue(addporducts.ecomProductDetails.IncludeTax);
	job1[L"ProductImageThreeUrl"] = new JSONValue(addporducts.ecomProductDetails.ProductImageThreeUrl);
	job1[L"ProductImageTwoUrl"] = new JSONValue(addporducts.ecomProductDetails.ProductImageTwoUrl);
	job1[L"ProductPriceInInr"] = new JSONValue(addporducts.ecomProductDetails.ProductPriceInInr);
	job1[L"ProductRegistrationCode"] = new JSONValue(addporducts.ecomProductDetails.ProductRegistrationCode);
	job1[L"ProductThmnailThreeUrl"] = new JSONValue(addporducts.ecomProductDetails.ProductThmnailThreeUrl);
	job1[L"ProductThmnailTwoUrl"] = new JSONValue(addporducts.ecomProductDetails.ProductThmnailTwoUrl);
	job1[L"ShippingChargeInInr"] = new JSONValue(addporducts.ecomProductDetails.ShippingChargeInInr);
	job1[L"TaxName"] = new JSONValue(addporducts.ecomProductDetails.TaxName);
	job1[L"TaxPercentage"] = new JSONValue(addporducts.ecomProductDetails.TaxPercentage);
	job1[L"YoutubeVideoLink"] = new JSONValue(addporducts.ecomProductDetails.YoutubeVideoLink);

	Obj[L"ecomProductDetails"] = new JSONValue(job1);
	JSONObject job2;

	job2[L"strImage1"] = new JSONValue(addporducts.productImages.strImage1);
	job2[L"strImage2"] = new JSONValue(addporducts.productImages.strImage2);
	job2[L"strImage3"] = new JSONValue(addporducts.productImages.strImage3);

	Obj[L"productImages"] = new JSONValue(job2);

	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddCompanyProduct");
		OnStatusMessage(postdetials);
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(false);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully"+ cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
CString AppApiService::DeleteProduct(CString ProductId)
{

	try
	{
		CString DeleteProduct;
		DeleteProduct.Format(_T("api/Ecom/DeleteCompanyProduct?ProductId=" + ProductId));
		JSONValue* JvalueNew = NetworkRequest::GetReqEx(DeleteProduct);
		std::wstring resNew = JvalueNew->Stringify(true);
		CString cstrResNew(resNew.c_str());
		OnResponseData(cstrResNew);
		OnStatusMessage(DeleteProduct);
		AfxMessageBox(cstrResNew);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}

	return CString();
}
CString AppApiService::UpdateProduct(VenderProducts& Info)
{
	CString updatePorduct = _T("api/Ecom/UpadteCompanyProduct");
	CString dataUpdate;
	JSONObject Obj;

	JSONObject job1;

	job1[L"IncludeTax"] = new JSONValue(Info.ecomProductDetails.IncludeTax);
	job1[L"ProductImageThreeUrl"] = new JSONValue(Info.ecomProductDetails.ProductImageThreeUrl);
	job1[L"ProductThmnailTwoUrl"] = new JSONValue(Info.ecomProductDetails.ProductImageTwoUrl);

	job1[L"ProductPriceInInr"] = new JSONValue(Info.ecomProductDetails.ProductPriceInInr);
	job1[L"ProductRegistrationCode"] = new JSONValue(Info.ecomProductDetails.ProductRegistrationCode);

	job1[L"ProductThmnailThreeUrl"] = new JSONValue(Info.ecomProductDetails.ProductThmnailThreeUrl);
	job1[L"ProductThmnailTwoUrl"] = new JSONValue(Info.ecomProductDetails.ProductThmnailTwoUrl);

	job1[L"ShippingChargeInInr"] = new JSONValue(Info.ecomProductDetails.ShippingChargeInInr);
	job1[L"TaxName"] = new JSONValue(Info.ecomProductDetails.TaxName);
	job1[L"TaxPercentage"] = new JSONValue(Info.ecomProductDetails.TaxPercentage);

	job1[L"YoutubeVideoLink"] = new JSONValue(Info.ecomProductDetails.YoutubeVideoLink);
	job1[L"ProductVersionInfo"] = new JSONValue(Info.ecomProductDetails.ProductVersionInfo.XMLfileVersionInfo);


	Obj[L"ecomProductDetails"] = new JSONValue(job1);

	/*CString xmlData;
	xmlData.Format(
		_T("<?xml version=\"1.0\" encoding=\"utf-16\"?>\r\n<EcomProductDetailsSettings>\r\n"

			"  <ProductImageThreeUrl>%s</ProductImageThreeUrl>\r\n"
			"  <ProductImageTwoUrl>%s</ProductImageTwoUrl>\r\n"
			"<ProductThmnailThreeUrl>%s</ProductThmnailThreeUrl>\r\n "
			"<ProductThmnailTwoUrl>%s</ProductThmnailTwoUrl>\r\n "
			"<YoutubeVideoLink>%s</YoutubeVideoLink>\r\n"
			"<ProductPriceInInr>%s<\/ProductPriceInInr>\r\n"
			"<ShippingChargeInInr>%s<\/ShippingChargeInInr>\r\n"
			"<TaxName>%s</TaxName>\r\n "
			"<TaxPercentage>%s </TaxPercentage>\r\n"
			"<IncludeTax>false</IncludeTax>\r\n"
			"<ProductRegistrationCode>%s</ProductRegistrationCode>\r\n "
			"</EcomProductDetailsSettings>"), Info.ecomProductDetails.ProductImageTwoUrl,Info.ecomProductDetails.ProductImageThreeUrl,
		     Info.ecomProductDetails.ProductThmnailThreeUrl, Info.ecomProductDetails.ProductThmnailTwoUrl, Info.ecomProductDetails.YoutubeVideoLink, Info.ecomProductDetails.ProductPriceInInr,
		Info.ecomProductDetails.ShippingChargeInInr, Info.ecomProductDetails.TaxName,Info.ecomProductDetails.TaxPercentage, Info.ecomProductDetails.ProductRegistrationCode);*/

	Obj[L"VenderCompanyName"] = new JSONValue(Info.VenderCompanyName);
	Obj[L"CategoryID"] = new JSONValue(Info.CategoryID);
	Obj[L"SubCategoryId"] = new JSONValue(Info.SubCategoryId);
	Obj[L"ProductDescription"] = new JSONValue(Info.ProductDescription);
	Obj[L"ProductMoreDetails"] = new JSONValue(Info.ProductMoreDetails);

	Obj[L"ProductPrice"] = new JSONValue(Info.ProductPrice);
	Obj[L"ProductQuantity"] = new JSONValue(Info.ProductQuantity);
	Obj[L"CategoryName"] = new JSONValue(Info.CategoryName);
	Obj[L"SubCategoryName"] = new JSONValue(Info.SubCategoryName);
	Obj[L"ProductSpecification"] = new JSONValue(Info.ProductSpecification);

	Obj[L"VenderUserId"] = new JSONValue(Info.VenderUserId);
	Obj[L"ProductTitle"] = new JSONValue(Info.ProductTitle);
	Obj[L"ProductSubTitle"] = new JSONValue(Info.ProductSubTitle);
    Obj[L"SubCategoryDescription"] = new JSONValue(Info.SubCategoryDescription);
	Obj[L"ProductPlimusLink"] = new JSONValue(Info.ProductPlimusLink);

	Obj[L"ProductQuickDemoLink"] = new JSONValue(Info.ProductQuickDemoLink);
	Obj[L"ProductRealImagePath"] = new JSONValue(Info.ProductRealImagePath);
	Obj[L"ProductShippingDetails"] = new JSONValue(Info.ProductShippingDetails);
	Obj[L"ProductThumbnailImagePath"] = new JSONValue(Info.ProductThumbnailImagePath);
	Obj[L"ProductType"] = new JSONValue(Info.ProductType);

	//Info.AdditionalInfoXml = xmlData;
	Obj[L"AdditionalInfoXml"] = new JSONValue(Info.AdditionalInfoXml);
	Obj[L"ProductDisablePayPal"] = new JSONValue(Info.ProductDisablePayPal);
	Obj[L"ProductId"] = new JSONValue(Info.ProductId);
	JSONObject job;

	job[L"strThumb1"] = new JSONValue(Info.productThumbs.strThumb1);
	job[L"strThumb2"] = new JSONValue(Info.productThumbs.strThumb2);
	job[L"strThumb3"] = new JSONValue(Info.productThumbs.strThumb3);
	Obj[L"productThumbs"] = new JSONValue(job);

	
	JSONObject job2;

	job2[L"strImage1"] = new JSONValue(Info.productImages.strImage1);
	job2[L"strImage2"] = new JSONValue(Info.productImages.strImage2);
	job2[L"strImage3"] = new JSONValue(Info.productImages.strImage3);

	Obj[L"productImages"] = new JSONValue(job2);

	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updatePorduct = _T("api/Ecom/UpadteCompanyProduct");
		OnStatusMessage(updatePorduct);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updatePorduct, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
void AppApiService::AddPayPalSetting(PayPaLSettings& addpaypal)
{
	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addpaypal.VendorId);
	Obj[L"PaypalClientID"] = new JSONValue(addpaypal.PaypalClientID);
	Obj[L"PaypalClientSecretKey"] = new JSONValue(addpaypal.PaypalClientSecretKey);
	Obj[L"EnablePaypal"] = new JSONValue(addpaypal.EnablePaypal);
	
	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddPayPalSettings");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully"+ cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
CString AppApiService::UpdatePayUMoney(PayUMoneySettings& Info)
{

	CString updatepayu = _T("api/Ecom/UpdatePayumoneySettingss");
	CString dataUpdate;
	JSONObject obj;
	obj[L"MerchantID"] = new JSONValue(Info.MerchantID);
	obj[L"MerchantKey"] = new JSONValue(Info.MerchantKey);
	obj[L"Salt"] = new JSONValue(Info.Salt);
	obj[L"EnablePayumoney"] = new JSONValue(Info.EnablePayumoney);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updatepayu = _T("api/Ecom/UpdatePayumoneySettings");
		OnStatusMessage(updatepayu);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updatepayu, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
CString AppApiService::UpdatePayPal(PayPaLSettings& Info)
{

	CString updatepaypal = _T("api/Ecom/UpdatePayPalSettings");
	CString dataUpdate;
	JSONObject obj;
	obj[L"PaypalClientID"] = new JSONValue(Info.PaypalClientID);
	obj[L"PaypalClientSecretKey"] = new JSONValue(Info.PaypalClientSecretKey);
	obj[L"EnablePaypal"] = new JSONValue(Info.EnablePaypal);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updatepaypal = _T("api/Ecom/UpdatePayPalSettings");
		OnStatusMessage(updatepaypal);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updatepaypal, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();

}
CString AppApiService::UpdateStripe(StripeSettings& Info)
{

	CString updateLink = _T("api/Ecom/UpdateStripeSettings");
	CString dataUpdate;
	JSONObject obj;
	obj[L"PublishableKey"] = new JSONValue(Info.PublishableKey);
	obj[L"SecretKey"] = new JSONValue(Info.SecretKey);
	obj[L"EnableStripeSettings"] = new JSONValue(Info.EnableStripeSettings);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString update = _T("api/Ecom/UpdateStripeSettings");
		OnStatusMessage(updateLink);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateLink, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();

}
CString AppApiService:: UpdateRazorPay(RazorpaySettings& Info)
{

	CString updateLink = _T("api/Ecom/UpdateRazorpaySettings");
	CString dataUpdate;
	JSONObject obj;
	obj[L"RazorpayKeyID"] = new JSONValue(Info.RazorpayKeyID);
	obj[L"RazorpayKeySecret"] = new JSONValue(Info.RazorpayKeySecret);
	obj[L"EnableRazorpaySettings"] = new JSONValue(Info.EnableRazorpaySettings);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString update = _T("api/Ecom/UpdateRazorpaySettings");
		OnStatusMessage(updateLink);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateLink, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
CString  AppApiService::UpdateEmail(EmailSettings& Info)
{

	CString updateLink = _T("api/Ecom/UpdateEmailSettings");
	CString dataUpdate;
	JSONObject obj;
	obj[L"AdminEmail"] = new JSONValue(Info.AdminEmail);
	obj[L"BusinessEmail"] = new JSONValue(Info.BusinessEmail);
	obj[L"DefaultEmail"] = new JSONValue(Info.DefaultEmail);
	obj[L"SupportEmail"] = new JSONValue(Info.SupportEmail);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString update = _T("api/Ecom/UpdateEmailSettings");
		OnStatusMessage(updateLink);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateLink, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();

}
CString AppApiService::UpdateBusiness(BusinessSettings& Info)
{

	CString updateLink = _T("api/Ecom/UpdateBusinessSettings");
	CString dataUpdate;
	JSONObject obj;
	obj[L"OrganizationName"] = new JSONValue(Info.OrganizationName);
	obj[L"Address"] = new JSONValue(Info.Address);
	obj[L"PhoneNo1"] = new JSONValue(Info.PhoneNo1);
	obj[L"PhoneNo2"] = new JSONValue(Info.PhoneNo2);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);
	obj[L"FaxNo"] = new JSONValue(Info.FaxNo);
	obj[L"PinCode"] = new JSONValue(Info.PinCode);
	obj[L"WebSiteURL"] = new JSONValue(Info.WebSiteURL);


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updateLink = _T("api/Ecom/UpdateBusinessSettings");
		OnStatusMessage(updateLink);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateLink, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();

}
CString AppApiService::UpdateBankDetails(BankDetails& Info)
{

	CString updateLink = _T("api/Ecom/UpdateBankDetails");
	CString dataUpdate;
	JSONObject obj;
	obj[L"BankName"] = new JSONValue(Info.BankName);
	obj[L"AccountNo"] = new JSONValue(Info.AccountNo);
	obj[L"EnableBankTransfer"] = new JSONValue(Info.EnableBankTransfer);
	obj[L"OrderRequestEmail"] = new JSONValue(Info.OrderRequestEmail);
	obj[L"SWIFTIFSCCodeBankAddress"] = new JSONValue(Info.SWIFTIFSCCodeBankAddress);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);
	


	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updateLink = _T("api/Ecom/UpdateBankDetails");
		OnStatusMessage(updateLink);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateLink, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();

}
CString AppApiService::UpdateShippingDetails(ShippingDetails& Info)
{

	CString updateLink = _T("api/Ecom/UpdateShippingDetails");
	CString dataUpdate;
	JSONObject obj;
	obj[L"EmailAddress"] = new JSONValue(Info.EmailAddress);
	obj[L"PhoneNumber"] = new JSONValue(Info.PhoneNumber);
	obj[L"ShippingAddress"] = new JSONValue(Info.ShippingAddress);
	obj[L"VendorId"] = new JSONValue(Info.VendorId);



	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(true);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updateLink = _T("api/Ecom/UpdateShippingDetails");
		OnStatusMessage(updateLink);
		OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateLink, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
void  AppApiService::AddBankDetails(BankDetails& addbank)
{

		CString data;
		JSONObject Obj;
		Obj[L"VendorId"] = new JSONValue(addbank.VendorId);
		Obj[L"BankName"] = new JSONValue(addbank.BankName);
		Obj[L"AccountNo"] = new JSONValue(addbank.AccountNo);
		Obj[L"OrderRequestEmail"] = new JSONValue(addbank.OrderRequestEmail);
		Obj[L"SWIFTIFSCCodeBankAddress"] = new JSONValue(addbank.SWIFTIFSCCodeBankAddress);
		Obj[L"EnableBankTransfer"] = new JSONValue(addbank.EnableBankTransfer);


		JSONValue* val = new JSONValue(Obj);
		std::wstring res = val->Stringify(false);
		data = CString(res.c_str());

		try
		{
			CString postdetials = _T("api/Ecom/AddBankDetails");
			CWebCloudAPITestApp::SetRequestMSg(data);
			JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
			std::wstring res = jval->Stringify(true);
			CString cstrRes(res.c_str());
			CWebCloudAPITestApp::SetResponseMsg(cstrRes);
			AfxMessageBox(L"Posted Successfully"+ cstrRes);
		}
		catch (const std::exception& e)
		{
			CString errorStr(e.what());
			AfxMessageBox(errorStr);

		}
}
void  AppApiService::AddPayUMoney(PayUMoneySettings& addpayu)
{

	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addpayu.VendorId);
	Obj[L"MerchantID"] = new JSONValue(addpayu.MerchantID);
	Obj[L"MerchantKey"] = new JSONValue(addpayu.MerchantKey);
	Obj[L"Salt"] = new JSONValue(addpayu.Salt);
	Obj[L"EnablePayumoney"] = new JSONValue(addpayu.EnablePayumoney);


	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddPayumoneySettings");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully" + cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
void AppApiService::AddStripe(StripeSettings& addstripe)
{

	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addstripe.VendorId);
	Obj[L"PublishableKey"] = new JSONValue(addstripe.PublishableKey);
	Obj[L"SecretKey"] = new JSONValue(addstripe.SecretKey);
	Obj[L"EnableStripeSettings"] = new JSONValue(addstripe.EnableStripeSettings);


	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddStripeSettings");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully" + cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}

void AppApiService::AddRazorPay(RazorpaySettings& addrazor)
{

	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addrazor.VendorId);
	Obj[L"RazorpayKeyID"] = new JSONValue(addrazor.RazorpayKeyID);
	Obj[L"RazorpayKeySecret"] = new JSONValue(addrazor.RazorpayKeySecret);
	Obj[L"EnableRazorpaySettings"] = new JSONValue(addrazor.EnableRazorpaySettings);


	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddRazorpaySettings");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully" + cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
void AppApiService::AddEmailSettings(EmailSettings& addemail)
{

	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addemail.VendorId);
	Obj[L"AdminEmail"] = new JSONValue(addemail.AdminEmail);
	Obj[L"BusinessEmail"] = new JSONValue(addemail.BusinessEmail);
	Obj[L"DefaultEmail"] = new JSONValue(addemail.DefaultEmail);
	Obj[L"SupportEmail"] = new JSONValue(addemail.SupportEmail);

	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddEmailSettings");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully" + cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
void AppApiService::AddBusinessSettings(BusinessSettings& addbusiness)
{

	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addbusiness.VendorId);
	Obj[L"OrganizationName"] = new JSONValue(addbusiness.OrganizationName);
	Obj[L"Address"] = new JSONValue(addbusiness.Address);
	Obj[L"FaxNo"] = new JSONValue(addbusiness.FaxNo);
	Obj[L"PhoneNo1"] = new JSONValue(addbusiness.PhoneNo1);
	Obj[L"PhoneNo2"] = new JSONValue(addbusiness.PhoneNo2);
	Obj[L"PinCode"] = new JSONValue(addbusiness.PinCode);
	Obj[L"WebSiteURL"] = new JSONValue(addbusiness.WebSiteURL);




	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddBusinessSettings");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully" + cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
void  AppApiService::AddShipSettings(ShippingDetails& addship)
{

	CString data;
	JSONObject Obj;
	Obj[L"VendorId"] = new JSONValue(addship.VendorId);
	Obj[L"EmailAddress"] = new JSONValue(addship.EmailAddress);
	Obj[L"PhoneNumber"] = new JSONValue(addship.PhoneNumber);
	Obj[L"ShippingAddress"] = new JSONValue(addship.ShippingAddress);
	



	JSONValue* val = new JSONValue(Obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		CString postdetials = _T("api/Ecom/AddShippingDetails");
		CWebCloudAPITestApp::SetRequestMSg(data);
		JSONValue* jval = NetworkRequest::PostReq(postdetials, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		CWebCloudAPITestApp::SetResponseMsg(cstrRes);
		AfxMessageBox(L"Posted Successfully" + cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
}
