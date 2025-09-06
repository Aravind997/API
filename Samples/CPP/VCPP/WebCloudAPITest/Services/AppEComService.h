 #pragma once
#include <afxstr.h>
#include "../Include/JSONvalue.h"
#include "AppApiService.h"
#include <pugixml.hpp>


class VenderInfo
{

public:
    VenderInfo() {
        VenderCompanyName = _T("");
        VenderEmailAddress = _T("");
        GstinVatID = _T("");
        VenderRegistrationDate = _T("");
        VenderProfileDesc = _T("");
        VenderMobileNumber = _T("");
        VenderPhoneNumber = _T("");
        VenderCountry = _T("");
        VenderPinCode = _T("");
        VenderState = _T("");
        VenderCity = _T("");
        VenderAddress2 = _T("");
        VenderAddress1 = _T("");
        VenderUserId = _T("");
        ReEnterEmailAddress = _T("");
        InvoicePrefix = _T("");
        VenderWebsiteUrl = _T("");
       
    }
    CString GstinVatID;
    CString VenderRegistrationDate;
    CString VenderProfileDesc;
    CString VenderEmailAddress;
    CString VenderMobileNumber;
    CString VenderPhoneNumber;
    CString VenderCountry;
    CString VenderPinCode;
    CString VenderState;
    CString VenderCity;
    CString VenderWebsiteUrl;
    CString VenderAddress2;
    CString VenderAddress1;
    CString VenderCompanyName;
    CString VenderUserId;
    CString ReEnterEmailAddress;
    CString InvoicePrefix;
   
    
}; 
class AppVersionInfo {
public:
    CString OriginalAppName, AppCode, AppName, MainAppVersion, PluginVersion, NewFeatures, MainAppSetupDownloadLink, PluginSetupDownloadLink;
};
class VersionInfo {

public:
    AppVersionInfo AppVersionInfo;
    CString XMLfileVersionInfo;
};
class EcomProductDetailsSettings {
public:
    CString YoutubeVideoLink;
    CString ShippingChargeInInr;

    CString ProductImageTwoUrl;
    CString ProductThmnailTwoUrl;
    CString ProductImageThreeUrl;
    CString ProductThmnailThreeUrl;
    CString ProductPriceInInr;
    CString TaxName;
    CString TaxPercentage;
    bool IncludeTax;
    CString ProductRegistrationCode;
  
    VersionInfo ProductVersionInfo;

};


class ProductThumbnail {
public:
    CString strThumb1;
    CString strThumb2;
    CString strThumb3;
};

class ProductImages
{
public:

    CString strImage1;
    CString strImage2;
    CString strImage3;
};
class VenderProducts
{
public:
    VenderProducts() {
        CategoryID = _T("");
        SubCategoryName = _T("");
        ProductTitle = _T("");
    }
    EcomProductDetailsSettings  ecomProductDetails;
    CString AdditionalInfoXml;
    CString ProductMoreDetails;
    int ProductType;
    CString ProductShippingDetails;
    CString ProductPlimusLink;
    CString ProductDisablePayPal;
    CString ProductDescription;
    CString ProductQuickDemoLink;
    CString ProductQuantity;
    CString ProductPrice;
    CString ProductThumbnailImagePath;
    CString ProductRealImagePath;
    CString ProductSpecification;
    CString ProductSubTitle;
    CString ProductTitle;
    CString SubCategoryDescription;
    CString SubCategoryName;
    CString SubCategoryId;
    CString CategoryName;
    CString CategoryID;
    CString VenderCompanyName;
    CString VenderUserId;
    CString ProductId; 
    ProductThumbnail   productThumbs;
    ProductImages  productImages;

};



class AddVenderInfo
{

public:
    AddVenderInfo() {
      /*  VenderCompanyName = _T("");
        VenderEmailAddress = _T("");
        GstinVatID = _T("");
        VenderRegistrationDate = _T("");
        VenderProfileDesc = _T("");
        VenderMobileNumber = _T("");
        VenderPhoneNumber = _T("");
        VenderCountry = _T("");
        VenderPinCode = _T("");
        VenderState = _T("");
        VenderCity = _T("");
        VenderAddress2 = _T("");
        VenderAddress1 = _T("");
        VenderUserId = _T("");
        ReEnterEmailAddress = _T("");
        InvoicePrefix = _T("");
        VenderWebsiteUrl = _T("");*/

    }
    CString GstinVatID;
    
    CString VenderProfileDesc;
    CString VenderEmailAddress;
    CString VenderMobileNumber;
    CString VenderPhoneNumber;
    CString VenderCountry;
    CString VenderPinCode;
    CString VenderState;
    CString VenderCity;
    CString VenderWebsiteUrl;
    CString VenderAddress2;
    CString VenderAddress1;
    CString VenderCompanyName;
    CString VenderUserId;
    CString ReEnterEmailAddress;
    CString InvoicePrefix;
  

};
class FileChunkReq
{

public:
    int ChunkNumber;
    bool HasBlocks;
    bool EndOfData;
    CByteArray Data;
    CString  FileName;
    CString DestinationDirectory;
};

class AddProducts {
  public:
    //  CString AdditionalInfoXml;
      CString ProductMoreDetails;
     // int ProductType;
     // CString ProductShippingDetails;
     // CString ProductPlimusLink;
     // CString ProductDisablePayPal;
      CString ProductDescription;
      //CString ProductQuickDemoLink;
      CString ProductQuantity;
      CString ProductPrice;
     // CString ProductThumbnailImagePath;
     // CString ProductRealImagePath;
      CString ProductSpecification;
      CString ProductSubTitle;
      CString ProductTitle;
      CString SubCategoryDescription;
      CString SubCategoryName;
      CString SubCategoryId;
      CString CategoryName;
      CString CategoryID;
      CString VenderCompanyName;
      CString VenderUserId;
      CString ProductId;
    /*  CString ProductImageTwoUrl;
      CString ProductThmnailTwoUrl;
      CString ProductImageThreeUrl;
      CString ProductThmnailThreeUrl;
      CString YoutubeVideoLink;
      CString ProductPriceInInr;
      CString ShippingChargeInInr;
      CString TaxName;
      CString TaxPercentage;
      bool IncludeTax;
      CString ProductRegistrationCode;*/
     // CString TaxPercentage;


};
class PayPaLSettings
{
  public:
    PayPaLSettings() {

          VendorId = _T("");
          PaypalClientID = _T("");
          PaypalClientSecretKey = _T("");
        

    };
    CString VendorId;
    CString  PaypalClientID;
    CString  PaypalClientSecretKey; 
    bool  EnablePaypal; 
};
class PayUMoneySettings
{
 public:
    CString  VendorId;
    CString  MerchantID;
    CString  MerchantKey;
    CString  Salt;
    bool  EnablePayumoney;
};
class StripeSettings
{
 public:
    CString VendorId;
    CString  SecretKey; 
    CString  PublishableKey; 
    bool EnableStripeSettings; 

};
class RazorpaySettings 
{
public:
    CString VendorId;
    CString  RazorpayKeyID; 
    CString  RazorpayKeySecret; 
    bool EnableRazorpaySettings; 
};
class EmailSettings
{
public:
    CString VendorId;
    CString  AdminEmail; 
    CString  SupportEmail;
    CString  BusinessEmail; 
    CString  DefaultEmail; 
};
class BusinessSettings 
{
public:
    CString VendorId;
    CString  OrganizationName; 
    CString  Address; 
    CString  PinCode; 
    CString  PhoneNo1;
    CString  PhoneNo2;
    CString  FaxNo; 
    CString  WebSiteURL; 
};
class BankDetails 
{
public:
    CString VendorId;
    CString  BankName; 
    CString  AccountNo; 
    CString  SWIFTIFSCCodeBankAddress; 
    CString  OrderRequestEmail; 
    bool EnableBankTransfer; 
};
class ShippingDetails 
{
 public:
    CString VendorId;
    CString ShippingAddress; 
    CString  EmailAddress; 
    CString  PhoneNumber;
 };
