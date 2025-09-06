#include "ttdatasummaryinfodlg.h"
#include "qjsonobject.h"
#include "ui_ttdatasummaryinfodlg.h"
#include <QCoreApplication>
#include <QDateTime>
#include <QElapsedTimer>
#include <QString>
#include <QScreen>
#include <QTimer>
#include <mainwindow.h>

TTDataSummaryInfoDlg::TTDataSummaryInfoDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TTDataSummaryInfoDlg),
    m_TTService(new TTService)
{
    ui->setupUi(this);

    QJsonDocument Doc = m_TTService->TTDataSummaryInfo("TimeTrackerSummaryResponse","TimeTrackerSummaryInfo","UserID");
    MainWindow::SetResponseData(StringifyJson(Doc));
    QJsonObject obj = Doc.object();

    int noOfHoursWorked = obj["NoOfHoursWorked"].toInt();

    ShowTodayHours(noOfHoursWorked);
    ShowThisWeekHours(noOfHoursWorked);
    ShowThisMonthHours(noOfHoursWorked);

}

TTDataSummaryInfoDlg::~TTDataSummaryInfoDlg()
{
    delete ui;
}

void TTDataSummaryInfoDlg::ShowTodayHours(int ihrs)
{
    int totalMinutes = ihrs * 10;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    QString strDay = QString("%1:%2")
                         .arg(hours, 2, 10, QChar('0'))
                         .arg(minutes, 2, 10, QChar('0'));
    ui->lineEdit->setText(strDay);
}

void TTDataSummaryInfoDlg::ShowThisWeekHours(int ihrs)
{
    int totalMinutes = ihrs * 10;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    QString strWeek = QString("%1:%2")
                          .arg(hours, 2, 10, QChar('0'))
                          .arg(minutes, 2, 10, QChar('0'));
    ui->lineEdit_2->setText(strWeek);
}

void TTDataSummaryInfoDlg::ShowThisMonthHours(int ihrs)
{
    int totalMinutes = ihrs * 10;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    QString strMonth = QString("%1:%2")
                           .arg(hours, 2, 10, QChar('0'))
                           .arg(minutes, 2, 10, QChar('0'));
    ui->lineEdit_3->setText(strMonth);
}

QString TTDataSummaryInfoDlg::StringifyJson(const QJsonDocument &doc)
{
    return QString(doc.toJson(QJsonDocument::Compact));
}
