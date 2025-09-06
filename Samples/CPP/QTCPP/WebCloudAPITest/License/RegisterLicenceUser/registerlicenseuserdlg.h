#ifndef REGISTERLICENSEUSERDLG_H
#define REGISTERLICENSEUSERDLG_H

#include "Services/licenseservice.h"
#include <QDialog>
#include <QJsonArray>

namespace Ui {
class RegisterLicenseUserDlg;
}

class RegisterLicenseUserDlg : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterLicenseUserDlg(QWidget *parent = nullptr);
    ~RegisterLicenseUserDlg();

private:
    Ui::RegisterLicenseUserDlg *ui;
    LicenseService *m_LicenseService;  // Declare m_LicenseService here
    QJsonArray m_JsonArray;

    QString StringifyJson(QJsonDocument jsonDoc);

private slots:
    void on_BuyButton_clicked();
    void on_ValidateButton_clicked();
    void on_RegisterButton_clicked();
    void on_CancelButton_clicked();
    void RequestSubscription(NewUserRegInfo info,LicenseInfo infoo);
    void RequestOneTimeReg(NewUserRegInfo info,LicenseInfo infoo);
    void RequestTrialVersion(NewUserRegInfo info,LicenseInfo infoo);
};

#endif // REGISTERLICENSEUSERDLG_H
