#ifndef TTSERVICE_H
#define TTSERVICE_H

#include <QString>
#include <QJsonDocument>
#include "networkrequest.h"

class TTService
{
public:
    TTService();
    QJsonDocument GetTimeTrackerSettings(QString TimeTrackerSettings);
    QJsonDocument TTDataSummaryInfo(QString TimeTrackerSummaryResponse,QString TimeTrackerSummaryInfo , QString UserID);
    QJsonDocument UploadWorkDairy(QString WorkDairyDataReq , QString UserID);


};

#endif // TTSERVICE_H
