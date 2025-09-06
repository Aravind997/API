#include "pch.h"
#include "AppApiService.h"
#include <afxwin.h>
#include "../NetworkRequest.h"
//#include"../WebCloudAPITestView.h"




using namespace std;

CString AppApiService::AddNewTask(Task_Details info)
{
	CString url;
	url = _T("api/PM/UploadNewTaskDetails");
	//OnStatusMessage(url);
	CString data;
	data.Format(_T("{ \"TaskID\":\"%s\", \
					   \"TaskTitle\" : \"%s\", \
						\"TaskDescription\" : \"%s\"}"),
		info.TaskID, info.TaskTitle, info.TaskDescription);
	try
	{
		//OnRequestData(data);
		JSONValue* jval = NetworkRequest::PostReq(url, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
void AppApiService::TASKVIEWLIST(CArray<Task_Info>& InfoArray)
{


	try {
		CString getAllMessages;
		getAllMessages.Format(_T("api/PM/GetAllTaskList"));
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			Task_Info Info;


			Info.TaskID = Jobj[L"TaskID"]->AsNumber();
			Info.TaskTitle = Jobj[L"TaskTitle"]->AsString().c_str();
			Info.TaskDescription = Jobj[L"TaskDescription"]->AsString().c_str();


			InfoArray.Add(Info);
		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
	//	OnResponseData(CString(e.what()));
	}

}
CString AppApiService::AddNewSubTask(SubTask_Details info)
{
	CString url;
	url = _T("api/PM/AddSubTask");
	//OnStatusMessage(url);
	CString data;
	data.Format(_T("{ \"SubTaskID\":\"%d\", \
					   \"SubTaskTitle\" : \"%s\", \
						\"SubTaskDescription\" : \"%s\"}"),
		info.SubTaskID, info.SubTaskTitle, info.SubTaskDescription);
	try
	{
		//OnRequestData(data);
		JSONValue* jval = NetworkRequest::PostReq(url, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
void AppApiService::SUBTASKVIEWLIST(CArray<SubTask_Info>& InfoArray)
{


	try {
		CString getAllMessages;
		getAllMessages.Format(_T("api/PM/GetAllSubTaskList"));
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			SubTask_Info Info;
			Info.SubTaskID = Jobj[L"SubTaskID"]->AsNumber();
			Info.SubTaskTitle = Jobj[L"SubTaskTitle"]->AsString().c_str();
			Info.SubTaskDescription = Jobj[L"SubTaskDescription"]->AsString().c_str();
			//Info.SubTaskID = Jobj[L"SubTaskID"]->AsString().c_str();

			InfoArray.Add(Info);
		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}

}
CString AppApiService::Deletetask(int taskID)
{


	CString DELETETASK;
	CString ResponseMessage;
	int task;


	try {
		CString getAllMessages;
		getAllMessages.Format(_T("api/PM/GetAllTaskList"));
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();



			if (i == taskID)
			{
				task = Jobj[L"TaskID"]->AsNumber();

			}


		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
	DELETETASK.Format(_T("api/PM/DeleteTask?TaskId=%d"), task);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(DELETETASK);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		//OnStatusMessage(DELETETASK);
		ResponseMessage = Jvalue->AsString().c_str();
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		OnResponseData(errorStr);
		AfxMessageBox(errorStr);
	}
	return ResponseMessage;
}

CString AppApiService::updatetask(TaskDetails info)
{
	CString updateTask = _T("api/PM/UpdateTask");
	CString dataUpdate;
	JSONObject obj;
	obj[L"TaskTitle"] = new JSONValue(info.TaskTitle);
	obj[L"TaskDescription"] = new JSONValue(info.TaskDescription);
	obj[L"TaskID"] = new JSONValue(info.TaskID);

	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	dataUpdate = CString(res.c_str());


	try
	{
		CString UpdateTask = _T("api/PM/UpdateTask");
		//OnStatusMessage(updateTask);
		//OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(UpdateTask, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		//AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}
void AppApiService::PROJECTVIEWLIST(CArray<Project_Info>& InfoArray)
{


	try {
		CString getAllMessages;
		getAllMessages.Format(_T("api/PM/GetProjectList"));
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			Project_Info Info;
			if (Jobj[L"ProjectID"] != nullptr && Jobj[L"ProjectID"]->IsNumber())
			{
				Info.ProjectID = Jobj[L"ProjectID"]->AsNumber();
			}
			//Info.ProjectID = Jobj[L"ProjectID "]->AsNumber();
			Info.Projecttitle = Jobj[L"ProjectName"]->AsString().c_str();
			Info.ProjectDescription = Jobj[L"ProjectDescription"]->AsString().c_str();
			Info.iCheckActive = Jobj[L"iCheckActive"]->AsNumber();
			//if (Jobj[L"UserID"] != nullptr && Jobj[L"UserID"]->AsString().c_str())
			//{
			//	//Info.ProjectID = Jobj[L"ProjectID"]->AsNumber();

			//	Info.userId = Jobj[L"UserID"]->AsString().c_str();
			//}

			InfoArray.Add(Info);
		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
		//OnResponseData(CString(e.what()));
	}
}

CString AppApiService::AddNewProject(projectDetails info)
{
	CString url;
	url = _T("api/PM/UploadNewProjectDetails");
	//OnStatusMessage(url);
	CString data;
	data.Format(_T("{ \"ProjectID\":\"%d\", \
					   \"ProjectName\" : \"%s\", \
                        \"ProjectDescription\" : \"%s\", \
                         \"iCheckActive\" : \"%d\", \
						  \"userId\" : \"%s\"}"),
		info.ProjectID, info.Projecttitle, info.ProjectDescription, info.iCheckActive, info.userId);
	try
	{
		//OnRequestData(data);
		JSONValue* jval = NetworkRequest::PostReq(url, data);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}

CString AppApiService::updateproject(projectDetails info)
{
	CString updateTask = _T("api/PM/UpdateProjectInfo");
	CString dataUpdate;
	JSONObject obj;
	obj[L"ProjectID"]= new JSONValue(info.ProjectID);
	obj[L"ProjectName"] = new JSONValue(info.Projecttitle);
	obj[L"ProjectDescription"] = new JSONValue(info.ProjectDescription);
	obj[L"iCheckActive"] = new JSONValue(info.iCheckActive);

	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	dataUpdate = CString(res.c_str());


	try
	{
		CString updateproject = _T("api/PM/UpdateProjectInfo");
		//OnStatusMessage(updateTask);
		//OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(updateproject, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}

CString AppApiService::DeleteProject(int projectID)
{


	CString DELETEPROJECT;
	CString ResponseMessage;
	int projectid;


	try {
		CString getAllMessages;
		getAllMessages.Format(_T("api/PM/GetProjectList"));
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();



			if (i == projectID)
			{
				if (Jobj[L"ProjectID"] != nullptr && Jobj[L"ProjectID"]->IsNumber())
				{
					projectid = Jobj[L"ProjectID"]->AsNumber();
				}

			}


		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
	DELETEPROJECT.Format(_T("api/PM/DeleteProject?ProjectId=%d"), projectid);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(DELETEPROJECT);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		//OnStatusMessage(DELETEPROJECT);
		ResponseMessage = Jvalue->AsString().c_str();
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		OnResponseData(errorStr);
		AfxMessageBox(errorStr);
	}
	return ResponseMessage;

}
CString AppApiService::Deletesubtask(int SubTaskID)
{


	CString DELETESUBTASK;
	CString ResponseMessage;
	int subtask;


	try {
		CString getAllMessages;
		getAllMessages.Format(_T("api/PM/GetAllSubTaskList"));
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();



			if (i == SubTaskID)
			{
				subtask = Jobj[L"SubTaskID"]->AsNumber();

			}


		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}
	DELETESUBTASK.Format(_T("api/PM/DeleteSubTask?SubTaskId=%d"), subtask);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(DELETESUBTASK);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		//OnStatusMessage(DELETETASK);
		ResponseMessage = Jvalue->AsString().c_str();
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		OnResponseData(errorStr);
		AfxMessageBox(errorStr);
	}
	return ResponseMessage;
}
CString AppApiService::updatesubtask(SubTaskDetails info)
{
	CString updateSubTask = _T("api/PM/UpdateSubTask");
	CString dataUpdate;
	JSONObject obj;
	obj[L"SubTaskTitle"] = new JSONValue(info.SubTaskTitle);
	obj[L"SubTaskDescription"] = new JSONValue(info.SubTaskDescription);
	obj[L"SubTaskID"] = new JSONValue(info.SubTaskID);

	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	dataUpdate = CString(res.c_str());


	try
	{
		CString UpdateSubTask = _T("api/PM/UpdateSubTask");
		//OnStatusMessage(updateTask);
		//OnRequestData(dataUpdate);
		JSONValue* jval = NetworkRequest::PostReq(UpdateSubTask, dataUpdate);
		std::wstring res = jval->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		// AfxMessageBox(cstrRes);
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		AfxMessageBox(errorStr);
	}
	return CString();
}

void AppApiService::GETTEMMEMBER_BY_GROUP(int user_id, CArray<usergroup_info>& InfoArray)
{


	try {

		CString CategoryID;
		CString getExistingGroups = _T("Api/Forum/GetExistingGroups");
		//OnStatusMessage(getExistingGroups);
		JSONValue* jvalue = NetworkRequest::GetReqEx(getExistingGroups);
		std::wstring res1 = jvalue->Stringify(true);
		CString cstrRes1(res1.c_str());
		//OnResponseData(CString(res1.c_str()));
		JSONArray root2 = jvalue->AsArray();
		for (unsigned int i = 0; i < root2.size(); i++)
		{
			JSONObject jobj = root2[i]->AsObject();


			if (i == user_id)
			{
				CategoryID = jobj[L"CategoryID"]->AsString().c_str();
			}

		}



		CString getAllMessages;
		getAllMessages.Format(_T("Api/PM/GetTeamMemberByGroup?GroupId=%s"), CategoryID);
		//OnStatusMessage(getAllMessages);
		JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
		JSONArray root = Jvalue->AsArray();
		for (unsigned int i = 0; i < root.size(); i++)
		{
			JSONObject Jobj = root[i]->AsObject();
			usergroup_info Info;


			//int  name = Jobj[L"EmployeeID"]->AsNumber();
			if (!Jobj[L"Email"]->IsNull())
			{

				Info.Email = Jobj[L"Email"]->AsString().c_str();
			}
			if (!Jobj[L"FirstName"]->IsNull())
			{
				Info.FirstName = Jobj[L"FirstName"]->AsString().c_str();
			}
			if (!Jobj[L"LastName"]->IsNull())
			{
				Info.LastName = Jobj[L"LastName"]->AsString().c_str();
			}
			if (!Jobj[L"PhoneNo"]->IsNull())
			{
				Info.Phoneno = Jobj[L"PhoneNo"]->AsString().c_str();
			}
			if (!Jobj[L"Status"]->IsNull())
			{
				Info.Status = Jobj[L"Status"]->AsString().c_str();
			}

			InfoArray.Add(Info);
		}
		std::wstring res = Jvalue->Stringify(true);
		//OnResponseData(CString(res.c_str()));
	}
	catch (const std::exception& e)
	{
		OnResponseData(CString(e.what()));
	}


}



void AppApiService::getalltak(CString username)
{

	CString getAllMessages;
	CString ResponseMessage;
	getAllMessages.Format(_T("api/PM/GetTaskDetailsList?strUserName=%s"), username);
	JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
	std::wstring res = Jvalue->Stringify(true);
	CString cstrRes(res.c_str());
	OnResponseData(cstrRes);
}
void AppApiService::getallproject()
{
	CString getAllMessages;
	CString ResponseMessage;
	getAllMessages.Format(_T("api/PM/GetProjectList"));
	CString username;


	JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
	std::wstring res = Jvalue->Stringify(true);
	CString cstrRes(res.c_str());
	OnResponseData(cstrRes);



}
void AppApiService::getalltask()
{
	CString getAllMessages;
	CString ResponseMessage;


	getAllMessages.Format(_T("api/PM/GetTaskDetailsList?strUserName="));

	JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
	std::wstring res = Jvalue->Stringify(true);
	CString cstrRes(res.c_str());

	OnResponseData(cstrRes);

}
void AppApiService::viewassintask(Assign_task_Details task)
{

	CString getAllMessages;
	CString ResponseMessage;


	getAllMessages.Format(_T("api/PM/AssignTaskToEmp"));
	JSONObject obj;
	obj[L"EmployeeID"] = new JSONValue(task.EmployeeID);
	obj[L"ProjectID"] = new JSONValue(task.ProjectID);
	obj[L"TaskID"] = new JSONValue(task.TaskID);
	obj[L"SubTaskID"] = new JSONValue(task.SubTaskID);
	obj[L"UserID"] = new JSONValue(task.UserID);
	//obj[L"TaskAssignedBy"] = new JSONValue(task.TaskAssignedBy);
	obj[L"TaskTitle"] = new JSONValue(task.TaskTitle);

	JSONValue* val = new JSONValue(obj);
	std::wstring res = val->Stringify(false);
	CString dataUpdate = CString(res.c_str());
	JSONValue* jval = NetworkRequest::PostReq(getAllMessages, dataUpdate);
	std::wstring res1 = jval->Stringify(true);
	
	CString cstrRes(res1.c_str());

	AfxMessageBox(cstrRes);
	//JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
}
//api / PM / GetAssignedTaskofEmp ? EmpId =
void AppApiService::getalltaskbyemp(CString empid, CArray<Assign_taskinfo>& InfoArray)
{
	CString getAllMessages;
	getAllMessages.Format(_T("api/PM/GetAssignedTaskofEmp?EmpId=%s"), empid);
	JSONValue* Jvalue = NetworkRequest::GetReqEx(getAllMessages);
	std::wstring res1 = Jvalue->Stringify(true);
	CString cstrRes(res1.c_str());

	JSONArray root = Jvalue->AsArray();
	for (unsigned int i = 0; i < root.size(); i++)
	{
		JSONObject Jobj = root[i]->AsObject();
		Assign_taskinfo Info;


		//int  name = Jobj[L"EmployeeID"]->AsNumber();
		if (!Jobj[L"TaskAssignmentId"]->IsNull())
		{
			Info.TaskAssignmentId = Jobj[L"TaskAssignmentId"]->AsNumber();
		}
		if (!Jobj[L"UserID"]->IsNull())
		{
			//AsNumber()
			Info.UserID = Jobj[L"UserID"]->AsString().c_str();

		}
		if (!Jobj[L"EmployeeID"]->IsNull())
		{
			//AsNumber()
			Info.EmployeeID = Jobj[L"EmployeeID"]->AsString().c_str();

		}
		if (!Jobj[L"TaskID"]->IsNull())
		{
			//AsNumber()
			Info.TaskID = Jobj[L"TaskID"]->AsNumber();

		}
		if (!Jobj[L"SubTaskID"]->IsNull())
		{
			//AsNumber()
			Info.SubTaskID = Jobj[L"SubTaskID"]->AsNumber();

		}
		if (!Jobj[L"TaskTitle"]->IsNull())
		{
			//AsNumber()
			Info.TaskTitle = Jobj[L"TaskTitle"]->AsString().c_str();

		}
		if (!Jobj[L"AssignmentDesc"]->IsNull())
		{
			//AsNumber()
			Info.AssignmentDesc = Jobj[L"AssignmentDesc"]->AsString().c_str();

		}
		if (!Jobj[L"TaskAssignedOn"]->IsNull())
		{
			//AsNumber()
			Info.TaskAssignedOn = Jobj[L"TaskAssignedOn"]->AsString().c_str();
		}
		if (!Jobj[L"TaskAssignedBy"]->IsNull())
		{
			//AsNumber()
			Info.TaskAssignedBy = Jobj[L"TaskAssignedBy"]->AsString().c_str();

		}
		InfoArray.Add(Info);
	}


}
void AppApiService::deleteassigntask(CString empid)
{
	int convertedInt = _tstoi(empid);
	CString DELETEPROJECT;
	CString ResponseMessage;
	DELETEPROJECT.Format(_T("api/PM/DeleteAssignedTask?TaskAssignmentId=%d"), convertedInt);
	try
	{
		JSONValue* Jvalue = NetworkRequest::GetReqEx(DELETEPROJECT);
		std::wstring res = Jvalue->Stringify(true);
		CString cstrRes(res.c_str());
		//OnResponseData(cstrRes);
		//OnStatusMessage(DELETEPROJECT);
		ResponseMessage = Jvalue->AsString().c_str();
		AfxMessageBox(_T("deleted sucessfiully"));
	}
	catch (const std::exception& e)
	{
		CString errorStr(e.what());
		//OnResponseData(errorStr);
		AfxMessageBox(errorStr);
	}
}