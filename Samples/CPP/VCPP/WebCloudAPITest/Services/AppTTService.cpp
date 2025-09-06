#include "pch.h"
#include "AppApiService.h"
#include <afxwin.h>
#include "../NetworkRequest.h"
#include "../WebCloudAPITest.h"
#include <memory>
#include <windows.h>
#include <wincrypt.h>

//GetTimeTracker
void AppApiService::GetTimeTrackerSettings(TimeTrackerSettings& InfoArray)
{
	try
	{
		CString TimeTrackerSettings = _T("api/TT/GetTimeTrackerSettings");
		JSONValue* Jvalue = NetworkRequest::GetReqEx(TimeTrackerSettings);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		JSONObject Jobj = Jvalue->AsObject();
		InfoArray.TimeZone = Jobj[L"TimeZone"]->AsString().c_str();
		InfoArray.TimeZoneCode = Jobj[L"TimeZoneCode"]->AsString().c_str();
		InfoArray.IdleTimeDuration = Jobj[L"IdleTimeDuration"]->AsNumber();
		InfoArray.ActivityCaptureInterval = Jobj[L"ActivityCaptureInterval"]->AsNumber();
		InfoArray.ScreenCaptureResolution = Jobj[L"ScreenCaptureResolution"]->AsString().c_str();
	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}


}

void AppApiService::TTDataSummaryInfo(CString& UserID, TimeTrackerSummaryInfo& SummaryInfo, TimeTrackerSummaryResponse& Response)
{
	try
	{
		// Serialize SummaryInfo into JSON
		JSONObject Obj;
		Obj[L"DateTicks"] = new JSONValue(static_cast<double>(SummaryInfo.DateTicks));
		Obj[L"TrackSummaryType"] = new JSONValue(SummaryInfo.TrackSummaryType.GetString());

		// Convert JSON object to string
		std::unique_ptr<JSONValue> val(new JSONValue(Obj));
		std::wstring serializedItem = val->Stringify(false);
		CString data(serializedItem.c_str());

		CString TimeTrackerSettings = "api/TT/TTDataSummaryInfo?UserID=" + UserID;

		// Send request with JSON payload
		CWebCloudAPITestApp::SetRequestMSg(data);
		std::unique_ptr<JSONValue> jval(NetworkRequest::PostReq(TimeTrackerSettings, data));



		JSONObject responseObj = jval->AsObject();

		// Check if expected keys exist before accessing
		if (responseObj.find(L"NoOfHoursWorked") == responseObj.end() ||
			responseObj.find(L"NoOfOfflineHoursWorked") == responseObj.end())
		{
			AfxMessageBox(L"Error: Missing expected keys in JSON response.");
			return;
		}

		// Assign values to Response object
		if (responseObj[L"NoOfHoursWorked"]->IsString()) {
			Response.NoOfHoursWorked = responseObj[L"NoOfHoursWorked"]->AsString().c_str();
		}
		else {
			AfxMessageBox(L"Error: NoOfHoursWorked is not a string.");
			return;
		}

		if (responseObj[L"NoOfOfflineHoursWorked"]->IsString()) {
			Response.NoOfOfflineHoursWorked = responseObj[L"NoOfOfflineHoursWorked"]->AsString().c_str();
		}
		else {
			AfxMessageBox(L"Error: NoOfOfflineHoursWorked is not a string.");
			return;
		}
	}
	catch (const std::exception& e)
	{
		AfxMessageBox(L"Exception: " + CString(e.what()));
	}
}

void AppApiService::UploadWorkDairy(CString& UserID, WorkDairyDataReq& WorkDairyData, WorkDairyDataResp& Response)
{
	try
	{
		JSONObject Obj;
		Obj[L"MemoTitle"] = new JSONValue(WorkDairyData.WorkDairyData.MemoDetails.MemoTitle);
		Obj[L"MemoDesc"] = new JSONValue(WorkDairyData.WorkDairyData.MemoDetails.MemoDesc);
		Obj[L"CompletionPercentage"] = new JSONValue(WorkDairyData.WorkDairyData.MemoDetails.CompletionPercentage);
		Obj[L"BugServerDetails"] = new JSONValue(WorkDairyData.WorkDairyData.MemoDetails.BugServerDetails);
		Obj[L"AdditionalParms"] = new JSONValue(WorkDairyData.AdditionalParms);
		Obj[L"CaptureTime"] = new JSONValue(WorkDairyData.WorkDairyData.CaptureTime);
		Obj[L"ApplicationExeName"] = new JSONValue(WorkDairyData.WorkDairyData.CurrentActiveAppDetails.ApplicationExeName);
		Obj[L"ApplicationWindowTitle"] = new JSONValue(WorkDairyData.WorkDairyData.CurrentActiveAppDetails.ApplicationWindowTitle);
		Obj[L"ActiveAppScreenShot"] = new JSONValue(WorkDairyData.WorkDairyData.CurrentActiveAppDetails.ActiveAppScreenShot);
		Obj[L"IsOfflineTime"] = new JSONValue(WorkDairyData.WorkDairyData.IsOfflineTime ? L"true" : L"false");
		Obj[L"IsUploaded"] = new JSONValue(WorkDairyData.WorkDairyData.IsUploaded ? L"true" : L"false");
		Obj[L"UploadedServerURLList"] = new JSONValue(WorkDairyData.WorkDairyData.UploadedServerURLList);
		Obj[L"UserName"] = new JSONValue(WorkDairyData.WorkDairyData.UserName);
		Obj[L"CameraImage"] = new JSONValue(WorkDairyData.WorkDairyData.CameraImage);

		JSONValue* jsonValue = new JSONValue(Obj);
		if (!jsonValue)
		{
			Response.Success = false;
			Response.ErrorDesc = _T("Failed to create JSON object");
			return;
		}

		std::wstring jsonString = jsonValue->Stringify(false);
		CString jsonCString(jsonString.c_str());
		delete jsonValue;

		CString UploadWorkLog = _T("api/TT/UploadWorkDairy?UserID=") + UserID;
		JSONValue* Jvalue = NetworkRequest::PostReq(UploadWorkLog, jsonCString);  // Assuming this is defined elsewhere

		if (Jvalue)
		{
			std::wstring res = Jvalue->Stringify(true);
			JSONObject responseObj = Jvalue->AsObject();
			Response.Success = responseObj[L"Success"] ? responseObj[L"Success"]->AsBool() : false;
			Response.ErrorDesc = responseObj[L"ErrorDesc"] ? CString(responseObj[L"ErrorDesc"]->AsString().c_str()) : _T("");
			delete Jvalue;
		}
		else
		{
			Response.Success = false;
			Response.ErrorDesc = _T("Failed to get server response");
		}
	}
	catch (const std::exception& e)
	{
		Response.Success = false;
		Response.ErrorDesc = CString(e.what());
	}
}