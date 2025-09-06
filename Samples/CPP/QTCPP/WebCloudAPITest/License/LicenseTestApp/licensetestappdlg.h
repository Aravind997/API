#ifndef LICENSETESTAPPDLG_H
#define LICENSETESTAPPDLG_H

#include "Services/licenseservice.h"
#include <QJsonArray>
#include <QDialog>

namespace Ui {
class LicenseTestAppDlg;
}

class LicenseTestAppDlg : public QDialog
{
    Q_OBJECT

public:
    explicit LicenseTestAppDlg(QWidget *parent = nullptr);
    ~LicenseTestAppDlg();

    QString StringifyJson(const QJsonDocument &jsonDoc);  // Function to convert QJsonDocument to QString
    void ShowLicense(const QString &selectPrdt); // Corrected method declaration

private:
    Ui::LicenseTestAppDlg *ui;  // Pointer to the UI
    QJsonArray m_JsonArray;  // Holds the JSON data array
    LicenseService *m_LicenseService;  // Pointer to the LicenseService object
};

#endif // LICENSETESTAPPDLG_H
