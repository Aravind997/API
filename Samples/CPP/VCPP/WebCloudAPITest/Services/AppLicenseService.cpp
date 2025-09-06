//AppLicenseService.cpp
#include "pch.h"
#include "AppApiService.h"
#include <afxwin.h>
#include "../NetworkRequest.h"
#include "../WebCloudAPITest.h"



CString AppApiService::RegisterNewLicense(LicenseInfo Info)
{
	CString registerNewLicense = _T("api/License/RegisterNewLicense");
	CString data;
	JSONObject obj;
	obj[L"CustomerName"] = new JSONValue(Info.PersonName);
	obj[L"ProductSubID"] = new JSONValue(Info.ProductID);
	obj[L"HardwareID"] = new JSONValue(Info.HardwareID);
	obj[L"PhoneNo"] = new JSONValue(Info.PhoneNo);
	obj[L"EmailID"] = new JSONValue(Info.EmailID);
	obj[L"Address"] = new JSONValue(Info.Address);
	obj[L"RegKey"] = new JSONValue(Info.RegKey);
	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		if (!registerNewLicense)
		{
			OnStatusMessage(registerNewLicense);
		}
		if (!data)
		{
			OnRequestData(data);
		}
		JSONValue* jval = NetworkRequest::PostReq(registerNewLicense, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		if (!cstrRes)
		{
			OnResponseData(cstrRes);
		}

		if (!cstrRes)
		{
			AfxMessageBox(_T("No response"));

		}
		else
		{
			AfxMessageBox(cstrRes);

		}


	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
	CWebCloudAPITestApp::SetResponseMsg(data);


	return CString();
}


CString AppApiService::RequestOneTimeReg(LicenseInfo Info)
{
	CString requestonetimereg = _T("api/License/RequestOneTimeReg");
	CString data;
	JSONObject obj;
	obj[L"CustomerName"] = new JSONValue(Info.PersonName);
	obj[L"ProductSubID"] = new JSONValue(Info.ProductID);
	obj[L"HardwareID"] = new JSONValue(Info.HardwareID);
	obj[L"PhoneNo"] = new JSONValue(Info.PhoneNo);
	obj[L"EmailID"] = new JSONValue(Info.EmailID);
	obj[L"Address"] = new JSONValue(Info.Address);
	obj[L"RegKey"] = new JSONValue(Info.RegKey);
	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		if (!requestonetimereg) {
			OnStatusMessage(requestonetimereg);
		}
		if (!data)
			OnRequestData(data);
		JSONValue* jval = NetworkRequest::PostReq(requestonetimereg, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		if (!cstrRes)
		{
			AfxMessageBox(_T("No response"));

		}
		else
		{
			AfxMessageBox(cstrRes);

		}


	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
	CWebCloudAPITestApp::SetResponseMsg(data);


	return CString();
}

CString AppApiService::RequestSubscription(LicenseInfo Info)
{
	CString registerNewLicense = _T("api/License/RegisterNewLicense");
	CString data;
	JSONObject obj;
	obj[L"CustomerName"] = new JSONValue(Info.PersonName);
	obj[L"ProductSubID"] = new JSONValue(Info.ProductID);
	obj[L"HardwareID"] = new JSONValue(Info.HardwareID);
	obj[L"PhoneNo"] = new JSONValue(Info.PhoneNo);
	obj[L"EmailID"] = new JSONValue(Info.EmailID);
	obj[L"Address"] = new JSONValue(Info.Address);
	obj[L"RegKey"] = new JSONValue(Info.RegKey);
	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	data = CString(res.c_str());

	try
	{
		if (!registerNewLicense)
		{
			OnStatusMessage(registerNewLicense);
		}
		if (!data)
		{
			OnRequestData(data);
		}
		JSONValue* jval = NetworkRequest::PostReq(registerNewLicense, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		if (!cstrRes)
		{
			AfxMessageBox(_T("No response"));

		}
		else
		{
			AfxMessageBox(cstrRes);

		}


	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);

	}
	CWebCloudAPITestApp::SetResponseMsg(data);


	return CString();
}

void AppApiService::GetLicenseInfo(CString selectPrdt, CString Macid, LicenseInfo& InfoArray)
{
	try
	{
		CString strSigninURL = _T("api/License/GetLicenseInfo?strPdtSubscriptionId=") + selectPrdt + _T("&&strUniqueRegistrationID=") + Macid;
		JSONValue* Jvalue = NetworkRequest::GetReqEx(strSigninURL);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();
		InfoArray.LicenseStatus = Jobj[L"LicenseStatus"]->IsNull() ? _T("") : Jobj[L"LicenseStatus"]->AsString().c_str();
		InfoArray.MachineName = Jobj[L"MachineName"]->IsNull() ? _T("") : Jobj[L"MachineName"]->AsString().c_str();
		InfoArray.ProductName = Jobj[L"ProductName"]->IsNull() ? _T("") : Jobj[L"ProductName"]->AsString().c_str();
		InfoArray.EmailID = Jobj[L"EmailID"]->IsNull() ? _T("") : Jobj[L"EmailID"]->AsString().c_str();
		InfoArray.IsUnlimitedLicense = Jobj[L"IsUnlimitedLicense"]->IsNull() ? _T("") : Jobj[L"IsUnlimitedLicense"]->AsBool();
		InfoArray.LicenseName = Jobj[L"LicenseName"]->IsNull() ? _T("") : Jobj[L"LicenseName"]->AsString().c_str();
		InfoArray.EntryDate = Jobj[L"EntryDate"]->IsNull() ? _T("") : Jobj[L"EntryDate"]->AsString().c_str();
		InfoArray.RegKey = Jobj[L"RegKey"]->IsNull() ? _T("") : Jobj[L"RegKey"]->AsString().c_str();
		InfoArray.EmailStatus = Jobj[L"EmailStatus"]->IsNull() ? _T("") : Jobj[L"EmailStatus"]->AsString().c_str();
		InfoArray.PersonName = Jobj[L"PersonName"]->IsNull() ? _T("") : Jobj[L"PersonName"]->AsString().c_str();
		InfoArray.LicensePassword = Jobj[L"LicensePassword"]->IsNull() ? _T("") : Jobj[L"LicensePassword"]->AsString().c_str();
		InfoArray.HardwareID = Jobj[L"HardwareID"]->IsNull() ? _T("") : Jobj[L"HardwareID"]->AsString().c_str();
		InfoArray.LicenseID = Jobj[L"LicenseID"]->IsNull() ? _T("") : Jobj[L"LicenseID"]->AsString().c_str();
		InfoArray.RemainingDays = Jobj[L"RemainingDays"]->IsNull() ? _T("") : Jobj[L"RemainingDays"]->AsString().c_str();
		JSONObject Jobj1 = Jobj[L"AdditionalSubscriptionInfo"]->AsObject();
		InfoArray.AdditionalSubscriptionInfo.AllowedFeatures = Jobj1[L"AllowedFeatures"]->IsNull() ? _T("") : Jobj1[L"AllowedFeatures"]->AsString().c_str();
		InfoArray.AdditionalSubscriptionInfo.DisabledFeatures = Jobj1[L"DisabledFeatures"]->IsNull() ? _T("") : Jobj1[L"DisabledFeatures"]->AsString().c_str();
		InfoArray.AdditionalSubscriptionInfo.InitialLicense = Jobj1[L"InitialLicense"]->IsNull() ? _T("") : Jobj1[L"InitialLicense"]->AsBool();
		InfoArray.AdditionalSubscriptionInfo.ProductSubscriptionId = Jobj1[L"ProductSubscriptionId"]->IsNull() ? _T("") : Jobj1[L"ProductSubscriptionId"]->AsString().c_str();

	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}

}

