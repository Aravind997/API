#ifndef GETTIMETRACKERSETTINGSDLG_H
#define GETTIMETRACKERSETTINGSDLG_H

#include "Services/ttservice.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QDialog>

namespace Ui {
class GetTimeTrackerSettingsDlg;
}

class GetTimeTrackerSettingsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit GetTimeTrackerSettingsDlg(QWidget *parent = nullptr);
    ~GetTimeTrackerSettingsDlg();

    QString StringifyJson(const QJsonDocument& jsonDoc);
    void GetTimeTrackerSettings(const QString& TimeTrackerSettings);

private slots:
    void on_CloseButton_clicked();

private:
    Ui::GetTimeTrackerSettingsDlg *ui;
    QJsonArray m_JsonArray;
    TTService *m_TTService;
};

#endif // GETTIMETRACKERSETTINGSDLG_H
