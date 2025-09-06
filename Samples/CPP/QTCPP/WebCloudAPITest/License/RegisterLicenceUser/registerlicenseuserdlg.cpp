//registerlicenseuserdlg.cpp
#include "registerlicenseuserdlg.h"
#include "qjsonobject.h"
#include "ui_registerlicenseuserdlg.h"
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
#include <QDesktopServices>
#include <QUrl>
#include<QMessageBox>

#pragma comment(lib, "iphlpapi.lib")

QString GetMacsAddress()
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



// Constructor
RegisterLicenseUserDlg::RegisterLicenseUserDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterLicenseUserDlg),
    m_LicenseService(new LicenseService())  // Initialize m_LicenseService here
{
    ui->setupUi(this);
    ui->lineEdit_5->setText(GetMacsAddress());
}

// Destructor
RegisterLicenseUserDlg::~RegisterLicenseUserDlg()
{
    delete ui;
    delete m_LicenseService;  // Clean up m_LicenseService here
}
QString RegisterLicenseUserDlg::StringifyJson(QJsonDocument doc)
{
    return doc.toJson(QJsonDocument::Indented);
}


void RegisterLicenseUserDlg::on_BuyButton_clicked()
{
    QString selectedOption = ui->comboBox->currentText();

    if (selectedOption == "Desktop Streamer")
    {
       QString url = "http://test2.virtualtutor.co.in///buy-renew.aspx?productsubid=DKST1";
       qDebug() << "Redirecting to URL: " << url;

        QDesktopServices::openUrl(QUrl(url));
    }
    else if (selectedOption == "WebCloud")
    {
        QString url = "http://test2.virtualtutor.co.in///buy-renew.aspx";
        qDebug() << "Redirecting to URL: " << url;

        QDesktopServices::openUrl(QUrl(url));
    }
}


void RegisterLicenseUserDlg::on_ValidateButton_clicked()
{
    QString selectPrdt;

    QString option = ui->comboBox->currentText();
    if (option == "Desktop Streamer") {
        selectPrdt = "DKST1";
    } else {
        selectPrdt = "WC45E";
    }

    QString macId = GetMacsAddress();
    QJsonDocument doc = m_LicenseService->GetLicenseInfo(selectPrdt, macId);
    MainWindow::SetResponseData(StringifyJson(doc));

    QJsonObject obj = doc.object();
    QString remainingDays = obj["RemainingDays"].toString();

    // Display the remaining days in a message box
    QMessageBox msgBox;
    msgBox.setText("Remaining days: " + remainingDays);
    msgBox.exec();
}



// Request a subscription for the user
void RegisterLicenseUserDlg::RequestSubscription(NewUserRegInfo info,LicenseInfo infoo)
{
    try
    {
        QJsonDocument responseDoc = m_LicenseService->RequestSubscription(info,infoo);
        QMessageBox::information(this, "Info", responseDoc.toJson(QJsonDocument::Indented));
    }
    catch (std::exception& Ex)
    {
        QMessageBox::information(this, "Error", Ex.what());
    }
}

// Request one-time registration for the user
void RegisterLicenseUserDlg::RequestOneTimeReg(NewUserRegInfo info,LicenseInfo infoo)
{
    try
    {
        QJsonDocument responseDoc = m_LicenseService->RequestOneTimeReg(info,infoo);
        QMessageBox::information(this, "Info", responseDoc.toJson(QJsonDocument::Indented));
        MainWindow::SetResponseData(responseDoc);


    }
    catch (std::exception& Ex)
    {
        QMessageBox::information(this, "Error", Ex.what());
    }
}

// Request trial version for the user
void RegisterLicenseUserDlg::RequestTrialVersion(NewUserRegInfo info,LicenseInfo infoo)
{
    try
    {
        QJsonDocument responseDoc = m_LicenseService->RegisterNewLicense(info, infoo);
        QMessageBox::information(this, "Info", responseDoc.toJson(QJsonDocument::Indented));
    }
    catch (std::exception& Ex)
    {
        QMessageBox::information(this, "Error", Ex.what());
    }
}
void RegisterLicenseUserDlg::on_RegisterButton_clicked()
{
    if (ui->comboBox->currentIndex() == -1)
        return;

    QString selectedPrdt = ui->comboBox->currentText();
    QString Option = ui->comboBox_2->currentText();
    QString PrdId;

    if (selectedPrdt == "Desktop Streamer") {
        PrdId = "DSKT1";
    } else if (selectedPrdt == "WebCloud") {
        PrdId = "WC45E";
    }

    NewUserRegInfo info;
    LicenseInfo infoo;
    infoo.PersonName=ui->lineEdit_2->text();
    infoo.PhoneNo = ui->lineEdit_3->text();
    infoo.EmailID = ui->lineEdit_4->text();
    infoo.HardwareID = GetMacsAddress();
    infoo.AdditionalSubscriptionInfo.ProductSubscriptionId = PrdId;




    switch (ui->comboBox_2->currentIndex())
    {
    case 0:
        RequestTrialVersion(info, infoo);
        break;
    case 1:
        RequestOneTimeReg(info, infoo);
        break;
    case 2:
        RequestSubscription(info, infoo);
        break;
    }
}


void RegisterLicenseUserDlg::on_CancelButton_clicked()
{
    reject();
}
