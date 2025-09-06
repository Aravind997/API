#include "licenseservice.h"
#include "qjsonobject.h"
#include "qnetworkreply.h"
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <mainwindow.h>
#include <stdexcept>
#include "networkrequest.h"

LicenseService::LicenseService()
{
    m_NetworkReq = new NetWorkRequest();
}

void OnStatusMessage(const QString& message)
{
    QMessageBox::information(nullptr, "Information", message);
}

QJsonDocument LicenseService::RegisterNewLicense(QString strPdtSubscriptionId, QString strUniqueRegistrationId, QString strCustomerName, QString strCustomerEmailID)
{
    QJsonDocument responseDoc;
    try
    {
        // Form the URL with query parameters for GET request
        QString url = "api/License/RegisterNewLicense?strPdtSubscriptionId=" + strPdtSubscriptionId +
                      "&strUniqueRegistrationID=" + strUniqueRegistrationId +
                      "&strCustomerName=" + strCustomerName +
                      "&strCustomerEmailID=" + strCustomerEmailID;

        // Use GET request instead of POST
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(url);  // Use GetRequest method

        if (reply->error() == QNetworkReply::NoError)
        {
            responseDoc = QJsonDocument::fromJson(reply->readAll());
            MainWindow::SetResponseData(responseDoc.toJson());  // Optionally log the response
        }
        else
        {
            QString errorMessage = reply->errorString();
            throw std::runtime_error(errorMessage.toStdString());
        }

        reply->deleteLater();  // Clean up reply object
    }
    catch (const std::exception& e)
    {
        MainWindow::SetResponseData(QString::fromStdString(e.what()));

        // Return error message as JSON
        QJsonObject errorObj;
        errorObj["Message"] = QString::fromStdString(e.what());
        errorObj["Result"] = "Failed";
        responseDoc = QJsonDocument(errorObj);
    }

    return responseDoc;
}


// Implementation for RegisterNewLicense (POST request with user info)
QJsonDocument LicenseService::RegisterNewLicense(NewUserRegInfo info, LicenseInfo infoo)
{
    QJsonDocument responseDoc;
    try
    {
        QJsonObject jsonObj;



        jsonObj["CustomerName"] = infoo.PersonName;
        jsonObj["HardwareID"] = infoo.HardwareID;
        jsonObj["PhoneNo"] = infoo.PhoneNo;
        jsonObj["EmailID"] = infoo.EmailID;
        jsonObj["Address"] = infoo.Address;
        jsonObj["RegKey"] = infoo.RegKey;
        jsonObj["ProductSubID"] = infoo.AdditionalSubscriptionInfo.ProductSubscriptionId;


        QJsonDocument serializedItem(jsonObj);
        QByteArray requestData = serializedItem.toJson();

        // Debug: Print JSON data before sending
        qDebug() << "Request JSON: " << QString::fromUtf8(requestData);

        // Ensure API endpoint is not empty
        QString registerNewLicense = "api/License/RegisterNewLicense";
        if (registerNewLicense.isEmpty())
        {
            emit OnStatusMessage("API endpoint is empty.");  // Corrected function call
            return responseDoc;
        }

        try
        {
            NetWorkRequest* networkRequest = new NetWorkRequest();
            QNetworkReply* reply = networkRequest->PostRequest(registerNewLicense, requestData);

            if (reply->error() != QNetworkReply::NoError)
            {
                QString errorStr = reply->errorString();
                QMessageBox::critical(nullptr, QObject::tr("Network Error"), errorStr);
                delete reply;
                return responseDoc;
            }

            // Read API response
            QByteArray responseData = reply->readAll();
            QString qstrRes = QString::fromUtf8(responseData);

            // Debug: Print API response
            qDebug() << "Server Response: " << qstrRes;

            if (qstrRes.isEmpty())
            {
                MainWindow::SetResponseData(qstrRes);
                QMessageBox::warning(nullptr, QObject::tr("No response"), QObject::tr("No response from server"));
            }
            else
            {
                MainWindow::SetResponseData(qstrRes);
                QMessageBox::information(nullptr, QObject::tr("Response"), qstrRes);
            }

            responseDoc = QJsonDocument::fromJson(responseData);
            delete reply;
        }
        catch (const std::exception& e)
        {
            QString errorStr = QString::fromStdString(e.what());
            QMessageBox::critical(nullptr, QObject::tr("Error"), errorStr);
        }

        return responseDoc;
    }
    catch (...)
    {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Unknown error occurred."));
        return responseDoc;
    }
}

QJsonDocument LicenseService::RequestOneTimeReg(NewUserRegInfo info,LicenseInfo infoo)
{
    QJsonDocument responseDoc;

    try
    {
        QJsonObject jsonObj;
        jsonObj["CustomerName"] = info.CustomerName;
        jsonObj["ProductSubscriptionId"] = infoo.AdditionalSubscriptionInfo.ProductSubscriptionId;
        jsonObj["HardwareID"] = info.HardwareID;
        jsonObj["PhoneNo"] = info.PhoneNo;
        jsonObj["EmailID"] = info.EmailID;
        jsonObj["Address"] = info.Address;
        jsonObj["RegKey"] = info.RegKey;

        QJsonDocument serializedItem(jsonObj);
        QByteArray requestData = serializedItem.toJson();

        QString registerNewLicense = "api/License/RequestOneTimeReg";

        if (registerNewLicense.isEmpty())
        {
            emit OnStatusMessage;
            return responseDoc;
        }

        try
        {
            NetWorkRequest* networkRequest = new NetWorkRequest();
            QNetworkReply* reply = networkRequest->PostRequest(registerNewLicense, requestData);

            if (reply->error() != QNetworkReply::NoError)
            {
                QString errorStr = reply->errorString();
                QMessageBox::critical(nullptr, QObject::tr("Network Error"), errorStr);
                delete reply;
                return responseDoc;
            }

            // Read the response
            QByteArray responseData = reply->readAll();
            QString qstrRes = QString::fromUtf8(responseData);

            if (qstrRes.isEmpty())
            {
                MainWindow::SetResponseData(qstrRes);
                QMessageBox::warning(nullptr, QObject::tr("No response"), QObject::tr("No response"));
            }
            else
            {
                MainWindow::SetResponseData(qstrRes);
                QMessageBox::information(nullptr, QObject::tr("Response"), qstrRes);
            }

            responseDoc = QJsonDocument::fromJson(responseData);

            delete reply;
        }
        catch (const std::exception& e)
        {
            QString errorStr = QString::fromStdString(e.what());
            QMessageBox::critical(nullptr, QObject::tr("Error"), errorStr);
        }

        return responseDoc;
    }
    catch (...)
    {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Unknown error occurred."));
        return responseDoc;
    }
}

QJsonDocument LicenseService::RequestSubscription(NewUserRegInfo info,LicenseInfo infoo)

{
    QJsonDocument responseDoc;

    try
    {
        QJsonObject jsonObj;
        jsonObj["CustomerName"] = info.CustomerName;
        jsonObj["ProductSubscriptionId"] = infoo.AdditionalSubscriptionInfo.ProductSubscriptionId;
        jsonObj["HardwareID"] = info.HardwareID;
        jsonObj["PhoneNo"] = info.PhoneNo;
        jsonObj["EmailID"] = info.EmailID;
        jsonObj["Address"] = info.Address;
        jsonObj["RegKey"] = info.RegKey;

        QJsonDocument serializedItem(jsonObj);
        QByteArray requestData = serializedItem.toJson();

        QString registerNewLicense = "api/License/RequestSubscription";

        if (registerNewLicense.isEmpty())
        {
            emit OnStatusMessage;
            return responseDoc;
        }

        try
        {
            NetWorkRequest* networkRequest = new NetWorkRequest();
            QNetworkReply* reply = networkRequest->PostRequest(registerNewLicense, requestData);

            if (reply->error() != QNetworkReply::NoError)
            {
                QString errorStr = reply->errorString();
                QMessageBox::critical(nullptr, QObject::tr("Network Error"), errorStr);
                delete reply;
                return responseDoc;
            }

            // Read the response
            QByteArray responseData = reply->readAll();
            QString qstrRes = QString::fromUtf8(responseData);

            if (qstrRes.isEmpty())
            {
                MainWindow::SetResponseData(qstrRes);
                QMessageBox::warning(nullptr, QObject::tr("No response"), QObject::tr("No response"));
            }
            else
            {
                MainWindow::SetResponseData(qstrRes);
                QMessageBox::information(nullptr, QObject::tr("Response"), qstrRes);
            }

            responseDoc = QJsonDocument::fromJson(responseData);

            delete reply;
        }
        catch (const std::exception& e)
        {
            QString errorStr = QString::fromStdString(e.what());
            QMessageBox::critical(nullptr, QObject::tr("Error"), errorStr);
        }

        return responseDoc;
    }
    catch (...)
    {
        QMessageBox::critical(nullptr, QObject::tr("Error"), QObject::tr("Unknown error occurred."));
        return responseDoc;
    }
}




QJsonDocument LicenseService::GetLicenseInfo(QString selectPrdt, QString MacId)
{
    QJsonDocument License;
    try
    {

        QString Parameters = "api/License/GetLicenseInfo?strPdtSubscriptionId=" + selectPrdt + "&&strUniqueRegistrationID=" + MacId;
        NetWorkRequest* networkRequest = new NetWorkRequest();

        QNetworkReply* reply = networkRequest->GetRequest(Parameters);

        License = QJsonDocument::fromJson(reply->readAll());

        MainWindow::SetResponseData(License.toJson());

    }
    catch (const std::exception& e)
    {
        MainWindow::SetResponseData(QString::fromStdString(e.what()));
    }
    return License;
}
