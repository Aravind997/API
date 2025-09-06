#include "getlicenseinfodlg.h"
#include "qjsonobject.h"
#include "ui_getlicenseinfodlg.h"
#include <QString>
#include <iostream>
#include <QtNetwork/QNetworkInterface>
#include <QString>
#include <QDebug>
#include <mainwindow.h>
#include <winsock2.h>
#include <iphlpapi.h>
#include <stdio.h>
#include <QString>
#include <QDebug>
#include <QString>
#include <Winbase.h>
#include <iphlpapi.h>
#include <memory>

#pragma comment(lib, "iphlpapi.lib")



QString GetMacAddress()
{
    QString maccAddress;
    ULONG bufferSize = sizeof(IP_ADAPTER_INFO);
    std::unique_ptr<IP_ADAPTER_INFO[]> adapterInfo(new IP_ADAPTER_INFO[bufferSize / sizeof(IP_ADAPTER_INFO)]);

    if (GetAdaptersInfo(adapterInfo.get(), &bufferSize) == ERROR_BUFFER_OVERFLOW) {
        adapterInfo.reset(new IP_ADAPTER_INFO[bufferSize / sizeof(IP_ADAPTER_INFO)]);
        if (GetAdaptersInfo(adapterInfo.get(), &bufferSize) != NO_ERROR) {
            qWarning() << "GetAdaptersInfo failed with error:" << GetLastError();
            return maccAddress;
        }
    } else if (GetAdaptersInfo(adapterInfo.get(), &bufferSize) != NO_ERROR) {
        qWarning() << "GetAdaptersInfo failed with error:" << GetLastError();
        return maccAddress;
    }

    PIP_ADAPTER_INFO pAdapterInfo = adapterInfo.get();
    while (pAdapterInfo) {
        char buffer[18];
        snprintf(buffer, sizeof(buffer), "%02X%02X%02X%02X%02X%02X",
                 pAdapterInfo->Address[0], pAdapterInfo->Address[1], pAdapterInfo->Address[2],
                 pAdapterInfo->Address[3], pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
        maccAddress = QString(buffer);

        if (!maccAddress.isEmpty()) {
            break;
        }
        pAdapterInfo = pAdapterInfo->Next;
    }

    return maccAddress;
}

QString GetLicenseInfoDlg::StringifyJson(QJsonDocument jsonDoc)
{
    QByteArray data = jsonDoc.toJson();
    return QString::fromStdString(data.toStdString());
}
QString GetLicenseInfoDlg::Details()
{

    QString selectPrdt = ui->comboBox->currentText();

    QString newText;
    QString MacId=GetMacAddress();
    if (selectPrdt == "DesktopStreamer")
    {
        selectPrdt="DKST1";
        ShowLicense(selectPrdt, MacId);



    }
    else if (selectPrdt == "WebCloud")
    {
        selectPrdt="WC45E";
        ShowLicense(selectPrdt, MacId);
    }

    return newText;
}

GetLicenseInfoDlg::GetLicenseInfoDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetLicenseInfoDlg)
{
    ui->setupUi(this);
    ui->comboBox->addItem("DesktopStreamer");
    ui->comboBox->addItem("WebCloud");
    ui->lineEdit_2->setText(GetMacAddress());




}


GetLicenseInfoDlg::~GetLicenseInfoDlg()
{
    delete ui;
}
QString boolToString(bool value)
{
    return value ? "True" : "False";
}

void GetLicenseInfoDlg::ShowLicense(QString selectPrdt, QString MacId)
{
    try {
        QJsonDocument Doc = m_LicenseService->GetLicenseInfo(selectPrdt, MacId);
        MainWindow::SetResponseData(StringifyJson(Doc));
        QJsonObject obj = Doc.object();

        ui->listWidget->clear();

        ui->listWidget->addItem("LicenseStatus		: " + obj["LicenseStatus"].toString());
        ui->listWidget->addItem("Machine Name		: " + obj["MachineName"].toString());
        ui->listWidget->addItem("Product Name		: " + obj["ProductName"].toString());
        ui->listWidget->addItem("Product ID		: " + obj["ProductID"].toString());
        ui->listWidget->addItem("Email ID			: " + obj["EmailID"].toString());
        ui->listWidget->addItem("Is Unlimited License                 : " + boolToString(obj.value("IsUnlimitedLicense").toBool()));
        ui->listWidget->addItem("License Name		: " + obj["LicenseName"].toString());
        ui->listWidget->addItem("No Of Days		: " + obj["NoOfDays"].toString());
        ui->listWidget->addItem("Date of Entry		: " + obj["EntryDate"].toString());
        ui->listWidget->addItem("RegKey		                : " + obj["RegKey"].toString());
        ui->listWidget->addItem("Email Status		: " + obj["EmailStatus"].toString());
        ui->listWidget->addItem("LicensePassword		: " + obj["LicensePassword"].toString());
        ui->listWidget->addItem("Hardware ID		: " + obj["HardwareID"].toString());
        ui->listWidget->addItem("License ID		                : " + obj["LicenseID"].toString());
        ui->listWidget->addItem("Remaining Days		: " + obj["RemainingDays"].toString());
        QJsonObject additionalInfo = obj["AdditionalSubscriptionInfo"].toObject();
        ui->listWidget->addItem("Allowed Features		: " + additionalInfo["AllowedFeatures"].toString());
        ui->listWidget->addItem("Disabled Features		: " + additionalInfo["DisabledFeatures"].toString());
        ui->listWidget->addItem("Initial License                           : " + boolToString(additionalInfo["InitialLicense"].toBool()));
        ui->listWidget->addItem("Product Subscription Id          : " + additionalInfo["ProductSubscriptionId"].toString());


    } catch (std::exception& es) {
        MainWindow::SetResponseData(es.what());
    }
}
void GetLicenseInfoDlg::on_GetInfoButton_clicked()
{
    // Call the Details method or other logic
    Details();
    MainWindow::SetResponseData("MAC Address : " + GetMacAddress() + "   Details Listed");
}
