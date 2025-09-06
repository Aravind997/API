#include "ttservice.h"
#include "qjsonobject.h"
#include "qnetworkreply.h"
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <mainwindow.h>

TTService::TTService()
{

}
QJsonDocument TTService::GetTimeTrackerSettings(QString TimeTrackerSettings)
{
    QJsonDocument TimeTracker;
    try
    {

        QString Parameters = "api/TT/GetTimeTrackerSettings";
        NetWorkRequest* networkRequest = new NetWorkRequest();

        QNetworkReply* reply = networkRequest->GetRequest(Parameters);

        TimeTracker = QJsonDocument::fromJson(reply->readAll());

        MainWindow::SetResponseData(TimeTracker.toJson());

    }
    catch (const std::exception& e)
    {
        MainWindow::SetResponseData(QString::fromStdString(e.what()));
    }
    return TimeTracker;
}

QJsonDocument TTService::TTDataSummaryInfo(QString TimeTrackerSummaryResponse,QString TimeTrackerSummaryInfo, QString UserID)
{
    QJsonDocument SummaryInfo;
    try
    {

        QString Parameters = "api/TT/TTDataSummaryInfo?UserID=" + UserID;
        NetWorkRequest* networkRequest = new NetWorkRequest();

        QNetworkReply* reply = networkRequest->GetRequest(Parameters);

        SummaryInfo = QJsonDocument::fromJson(reply->readAll());

        MainWindow::SetResponseData(SummaryInfo.toJson());

    }
    catch (const std::exception& e)
    {
        MainWindow::SetResponseData(QString::fromStdString(e.what()));
    }
    return SummaryInfo;
}

QJsonDocument TTService::UploadWorkDairy(QString WorkDairyDataReq, QString UserID)
{
    QJsonDocument WorkDairyData;
    try
    {

        QString Parameters = "api/TT/UploadWorkDairy?UserID=" + UserID;
        NetWorkRequest* networkRequest = new NetWorkRequest();

        QByteArray WorkDairyDataReqByteArray = WorkDairyDataReq.toUtf8();

        QNetworkReply* reply = networkRequest->PostRequest(Parameters, WorkDairyDataReqByteArray);

        WorkDairyData = QJsonDocument::fromJson(reply->readAll());

        MainWindow::SetResponseData(WorkDairyData.toJson());
    }
    catch (const std::exception& e)
    {
        MainWindow::SetResponseData(QString::fromStdString(e.what()));
    }
    return WorkDairyData;
}
