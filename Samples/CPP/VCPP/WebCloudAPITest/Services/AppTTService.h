#pragma once
#include <afxstr.h>
#include "../Include/JSONvalue.h"
#include "AppApiService.h"
#include <vector>
#include <ctime> // If using standard C++ time functions
#include <__msvc_chrono.hpp>



class TimeTrackerSettings
{
public:
    TimeTrackerSettings()
    {

    }
    
    CString TimeZone;
    CString TimeZoneCode;
    CString ScreenCaptureResolution;
    bool CaptureScreenShots;
    bool DoNotTrackIfIdle;
    int IdleTimeDuration;
    int ActivityCaptureInterval;
};

inline  long long GetCurrentDateTicks()
{
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Convert to time since epoch in microseconds
    auto duration = now.time_since_epoch();

    // Convert duration to 100-nanosecond intervals (ticks)
    long long ticks = std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count() / 100;

    // Adjust for .NET DateTime epoch (which starts from year 0001 instead of 1970)
    long long dotNetEpochDifference = 621355968000000000LL; // Number of 100-ns intervals between 0001-01-01 and 1970-01-01

    return ticks + dotNetEpochDifference;
}


class TimeTrackerSummaryInfo
{
public:
    TimeTrackerSummaryInfo()
    {
        TrackSummaryType = _T("TODAY"); // Initialize TrackSummaryType
        DateTicks = GetCurrentDateTicks();
    }

    CString TrackSummaryType; 
     long long DateTicks;          
};

class TimeTrackerSummaryResponse
{
public:
    TimeTrackerSummaryResponse()
    {
     
    }

    CString NoOfHoursWorked;
    CString NoOfOfflineHoursWorked;
};

//Upload WorkLog Class


class CurrentApplicationDetails;
class WorkMemoDetails;

// Define CurrentApplicationDetails class
class CurrentApplicationDetails
{
public:
    CurrentApplicationDetails() {}

    CString ApplicationExeName;
    CString ApplicationWindowTitle;
    CString ActiveAppScreenShot;
};

// Define WorkMemoDetails class
class WorkMemoDetails
{
public:
    WorkMemoDetails() {}

    CString MemoTitle;
    CString MemoDesc;
    CString CompletionPercentage;
    CString BugServerDetails;
};

// Define WorkDairyData class
class WorkDairyData
{
public:
    WorkDairyData() {}


    CurrentApplicationDetails CurrentActiveAppDetails;
    WorkMemoDetails MemoDetails;
    bool IsUploaded;
    CString UserName;
    CString CameraImage;
    bool IsOfflineTime;
    CString UploadedServerURLList;
    CString CaptureTime;
};

// Define WorkDairyDataReq class
class WorkDairyDataReq
{
public:
    WorkDairyDataReq() {}

    WorkDairyData WorkDairyData;
    CString AdditionalParms;
};

// Define WorkDairyDataResp class
class WorkDairyDataResp
{
public:
    WorkDairyDataResp() {}

    bool Success;
    CString ErrorDesc;
};