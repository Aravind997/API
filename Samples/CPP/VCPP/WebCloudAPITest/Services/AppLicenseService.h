//AppLicenseService.h
#include <afxstr.h>
#include "../Include/JSONvalue.h"
#include "AppApiService.h"
#include <vector>


class ItemInfo1
{
public:
	ItemInfo1()
	{
		Text = _T("");
		Value = 0;
	}
	CString Text;
	int Value;
};

class Activation
{
public:
	Activation()
	{

    }
	CString Key, LicenseMode, RegistrationKey, RegistrationName, UserName, ExpirationDate, Save;
};

class ProductLicenseAdditionalInfo
{
public:
    ProductLicenseAdditionalInfo()
    {

    }

    CString AllowedFeatures;
    CString DisabledFeatures;
    bool InitialLicense;
    CString ProductSubscriptionId;
};

class LicenseInfo
{
public:
    LicenseInfo()
    {

    }

    CString LicenseStatus;
    CString MachineName;
    CString ProductName;
    CString ProductID;
    CString EmailID;
    CString PhoneNo;
    CString Address;
    bool IsUnlimitedLicense;
    CString LicenseName;
    CString NoOfDays;
    CString EntryDate;
    CString RegKey;
    CString EmailStatus;
    CString PersonName;
    CString LicensePassword;
    CString HardwareID;
    CString LicenseID;
    ProductLicenseAdditionalInfo AdditionalSubscriptionInfo; 
    CString RemainingDays;
};


