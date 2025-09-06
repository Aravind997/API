#include "licensetestappdlg.h"
#include "ui_licensetestappdlg.h"
#include <QDateTime>
#include <QString>
#include <iostream>
#include <QtNetwork/QNetworkInterface>
#include <QDebug>
#include <mainwindow.h>
#include <winsock2.h>
#include <iphlpapi.h>
#include <stdio.h>
#include <Winbase.h>
#include <memory>
#include <QJsonObject>
#include <QJsonDocument>
#pragma comment(lib, "iphlpapi.lib")

QString GetMaccAddress()
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
        char buffer[18]; // Buffer for MAC address in the format "XX-XX-XX-XX-XX-XX\0"
        snprintf(buffer, sizeof(buffer), "%02X%02X%02X%02X%02X%02X",
                 pAdapterInfo->Address[0], pAdapterInfo->Address[1], pAdapterInfo->Address[2],
                 pAdapterInfo->Address[3], pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
        maccAddress = QString(buffer);
        // Only return the first MAC address found
        if (!maccAddress.isEmpty()) {
            break;
        }
        pAdapterInfo = pAdapterInfo->Next;
    }

    return maccAddress;
}




LicenseTestAppDlg::LicenseTestAppDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LicenseTestAppDlg),
    m_LicenseService(new LicenseService())
{
    ui->setupUi(this);
    QString selectPrdt = "DKST1";
    QString macId = GetMaccAddress();
    QJsonDocument doc = m_LicenseService->GetLicenseInfo(selectPrdt, macId);
    MainWindow::SetResponseData(StringifyJson(doc));
    QJsonObject obj = doc.object();
    QString remainingDaysStr = obj["RemainingDays"].toString();
    int remainingDays = remainingDaysStr.toInt();

    if (remainingDays < 0 || remainingDays > 30)
    {
        ui->ClickMeButton->setDisabled(true);
        ui->plainTextEdit->setPlainText("Product Expired Please Purchase");

    }
    else
    {
        ui->ClickMeButton->setDisabled(false);
        ui->plainTextEdit->setPlainText("Product is Active");

    }
    MainWindow::SetResponseData("Product Status Updated");
}

LicenseTestAppDlg::~LicenseTestAppDlg()
{
    delete ui;
    delete m_LicenseService;
}



QString LicenseTestAppDlg::StringifyJson(const QJsonDocument& jsonDoc)
{
    return QString::fromUtf8(jsonDoc.toJson(QJsonDocument::Compact));
}
