#ifndef TTDATASUMMARYINFODLG_H
#define TTDATASUMMARYINFODLG_H

#include "Services/ttservice.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QDialog>

namespace Ui {
class TTDataSummaryInfoDlg;
}

class TTDataSummaryInfoDlg : public QDialog
{
    Q_OBJECT

public:
    explicit TTDataSummaryInfoDlg(QWidget *parent = nullptr);  // Constructor
    ~TTDataSummaryInfoDlg();  // Destructor

    // Method to convert QJsonDocument to QString
    QString StringifyJson(const QJsonDocument& jsonDoc);

private:
    Ui::TTDataSummaryInfoDlg *ui;  // Pointer to the UI class
    QJsonArray m_JsonArray;  // Member variable for storing JSON data
    TTService *m_TTService;  // Pointer to TTService class

    // Declare these functions in the header file
    void ShowTodayHours(int ihrs);
    void ShowThisWeekHours(int ihrs);
    void ShowThisMonthHours(int ihrs);
};

#endif // TTDATASUMMARYINFODLG_H
