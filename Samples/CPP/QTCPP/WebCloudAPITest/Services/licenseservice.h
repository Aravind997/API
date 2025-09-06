#ifndef LICENSESERVICE_H
#define LICENSESERVICE_H

#include <QString>
#include <QJsonDocument>
#include "networkrequest.h"


class ProductLicenseAdditionalInfo
{
public:
    ProductLicenseAdditionalInfo()
    {

    }

    QString AllowedFeatures;
    QString DisabledFeatures;
    bool InitialLicense;
    QString ProductSubscriptionId;
};

class LicenseInfo
{
public:
    LicenseInfo()
    {

    }

    QString LicenseStatus;
    QString ProductName;
    QString ProductID;
    QString EmailID;
    bool IsUnlimitedLicense;
    QString LicenseName;
    int NoOfDays;
    QString PhoneNo;
    QString Address;
    QDateTime EntryDate;
    QString RegKey;
    QString EmailStatus;
    QString PersonName;
    QString LicensePassword;
    QString HardwareID;
    QString LicenseID;
    ProductLicenseAdditionalInfo AdditionalSubscriptionInfo;
    QString RemainingDays;
};



class NewUserRegInfo
{
public:
    NewUserRegInfo() {}

    QString CustomerName,  ProductSubscriptionId, HardwareID, PhoneNo, EmailID, Address, RegKey;
};

class LicenseService
{
public:
    LicenseService();
    NetWorkRequest *m_NetworkReq;
    QNetworkReply* PostRequest(const QString& url, const QByteArray& data, const QString& contentType = "application/json");
    QJsonDocument RegisterNewLicense(QString strPdtSubscriptionId, QString strUniqueRegistrationId, QString strCustomerName, QString strCustomerEmailID);
    QJsonDocument RegisterNewLicense(NewUserRegInfo info,LicenseInfo infoo);
    QJsonDocument RequestOneTimeReg(NewUserRegInfo info,LicenseInfo infoo);
    QJsonDocument RequestSubscription(NewUserRegInfo info,LicenseInfo infoo);
    QJsonDocument GetLicenseInfo(QString selectPrdt, QString MacId);



private:
    void handleResponse(QNetworkReply* reply);
};

void OnStatusMessage(const QString& message);

#endif // LICENSESERVICE_H
