#ifndef GETLICENSEINFODLG_H
#define GETLICENSEINFODLG_H
#include "Services/licenseservice.h"
#include <QJsonArray>
#include <QDialog>

namespace Ui {
class GetLicenseInfoDlg;
}

class GetLicenseInfoDlg : public QDialog
{
    Q_OBJECT

public:
    explicit GetLicenseInfoDlg(QWidget *parent = nullptr);
    ~GetLicenseInfoDlg();
    QJsonArray m_JsonArray;
    LicenseService *m_LicenseService;
    QString StringifyJson(QJsonDocument jsonDoc);
    void ShowLicense(QString selectPrdt, QString MacId);

private slots:
    void on_GetInfoButton_clicked();
    QString Details();

private:
    Ui::GetLicenseInfoDlg *ui;
};

#endif // GETLICENSEINFODLG_H
