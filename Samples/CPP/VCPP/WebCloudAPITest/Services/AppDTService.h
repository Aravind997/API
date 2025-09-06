#pragma once
#include <afxstr.h>
#include "../Include/JSONvalue.h"
#include "AppApiService.h"
class TaskDetails
{
public:

	int TaskID;
	CString TaskTitle;
	CString TaskDescription;
};

class Assign_task_Details
{
public:
	int  TaskAssignmentId;
	CString UserID;
	CString EmployeeID;
	int ProjectID;
	int TaskID;
	int SubTaskID;
	CString TaskTitle;
	CString AssignmentDesc;
	CString TaskAssignedOn;
	CString TaskAssignedBy;

};
class projectDetails
{
public:
	int ProjectID;
	int iCheckActive;
	CString Projecttitle, ProjectDescription, userId;


};
class SubTaskDetails
{
public:
	int  SubTaskID;
	CString SubTaskTitle, SubTaskDescription;

};
class usergroupDetails
{
public:
	CString Email;
	CString FirstName;
	CString LastName;
	CString Password;
	CString Phoneno;
	CString Address;
	CString Status;
	CString inActive;
};

class BugTaskDetails
{
public:

	CString BugTaskTitle;
	CString BugStatus;
	CString BugTaskDescription;
};
class  WebCloudUserInfo
{
public:
	bool IsAdmin;
	CString UserGroup;
};
class UserBugTaskDetailsResponse
{
public:
	bool Success;
	CString ErrorReason;
	WebCloudUserInfo UserInfo;
	CArray <BugTaskDetails, BugTaskDetails>BugTaskDetailsList;


};


class DefectDetails
{
public:
	int TopicID;
	CString Username;
	CString BugLanguage;
	CString BugAssignedTo;
	CString BugAssignedToValue;
	CString BugTaskDescription;
	CString FormType;
	CString FileAttachment;
	CString FilePath;
	CString BugTaskTitle;
};
class TopicDetails
{
public:
	int TopicID;
	CString TopicName;
	CString TopicDescription;
};
class TaskAssignedTo
{
public:
	CString EmailId;
	CString Name;
};