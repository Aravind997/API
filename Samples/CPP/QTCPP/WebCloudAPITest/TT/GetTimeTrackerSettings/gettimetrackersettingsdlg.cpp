#include "gettimetrackersettingsdlg.h"
#include "qjsonobject.h"
#include "ui_gettimetrackersettingsdlg.h"
#include <QApplication>
#include <QTimeZone>
#include <QDebug>
#include <QScreen>
#include <QLineEdit>
#include "mainwindow.h"



GetTimeTrackerSettingsDlg::GetTimeTrackerSettingsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetTimeTrackerSettingsDlg),
    m_TTService(new TTService)  // Initialize m_TTService
{
    ui->setupUi(this);

    QJsonDocument Doc = m_TTService->GetTimeTrackerSettings("TimeTrackerSettings");
    MainWindow::SetResponseData(StringifyJson(Doc));
    QJsonObject obj = Doc.object();
    ui->lineEdit->setText(obj["TimeZone"].toString());
    ui->lineEdit_2->setText(QString::number(obj["IdleTimeDuration"].toInt()));
    ui->lineEdit_3->setText(obj["TimeZoneCode"].toString());
    ui->lineEdit_4->setText(QString::number(obj["ActivityCaptureInterval"].toInt()));
    ui->lineEdit_5->setText(obj["ScreenCaptureResolution"].toString());

    MainWindow::SetResponseData("Tracking Completed");
}

GetTimeTrackerSettingsDlg::~GetTimeTrackerSettingsDlg()
{
    delete ui;
    delete m_TTService;
}

QString GetTimeTrackerSettingsDlg::StringifyJson(const QJsonDocument& jsonDoc) {
    return QString::fromUtf8(jsonDoc.toJson(QJsonDocument::Compact));
}

void GetTimeTrackerSettingsDlg::on_CloseButton_clicked()
{
    reject();
}
