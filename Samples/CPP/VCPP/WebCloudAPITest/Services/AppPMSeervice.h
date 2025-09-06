#pragma once
#include <afxstr.h>
#include "../Include/JSONvalue.h"
#include "AppApiService.h"
class Task_Details
{
public:
	Task_Details()
	{
		//TaskID =NULL;
		TaskTitle = _T("");
		TaskDescription = _T("");
	}
	CString TaskID;

	CString TaskTitle, TaskDescription;
};
class username
{
public:
	CString User_Name;
};
class Task_Info
{
public:
	Task_Info()
	{

	}

	int TaskID;


	CString TaskTitle, TaskDescription;
};
class usergroup_info
{
public:
	usergroup_info()
	{

	}
	CString Email;
	CString FirstName;
	CString LastName;
	CString Password;
	CString Phoneno;
	CString Address;
	CString Status;
	CString inActive;



};
class usergroup_Details
{
public:
	usergroup_Details()
	{


	}
	CString Email;
	CString FirstName;
	CString LastName;
	CString Password;
	CString Phoneno;
	CString Address;
	CString Status;
	CString inActive;

};
class SubTask_Details
{
public:
	SubTask_Details()
	{
		//SubTaskID = _T("");
		SubTaskTitle = _T("");
		SubTaskDescription = _T("");
	}

	int SubTaskID;
	CString SubTaskTitle, SubTaskDescription;
};
class SubTask_Info
{
public:
	SubTask_Info()
	{

	}
	int  SubTaskID;
	CString SubTaskTitle, SubTaskDescription;
};
class Projet_Details
{
public:
	Projet_Details()
	{
		userId = _T("");
		Projecttitle = _T("");
		ProjectDescription = _T("");
	}

	CString ProjectID;
	int iCheckActive;
	CString Projecttitle, ProjectDescription, userId;
};
class Project_Info
{
public:
	Project_Info()
	{

	}
	int ProjectID;
	int iCheckActive;
	CString Projecttitle, ProjectDescription, userId;

};
class Assign_taskinfo
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
class Assign_taskDetails
{
public:
	Assign_taskDetails()
	{

		TaskTitle = _T("");
		AssignmentDesc = _T("");
		TaskAssignedOn = _T("");
		TaskAssignedBy = _T("");
	}

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
