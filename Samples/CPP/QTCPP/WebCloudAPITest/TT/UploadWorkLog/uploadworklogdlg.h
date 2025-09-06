#ifndef UPLOADWORKLOGDLG_H
#define UPLOADWORKLOGDLG_H

#include <QDialog>
#include "Services/ttservice.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QPixmap>


namespace Ui {
class UploadWorkLogDlg;
}

class UploadWorkLogDlg : public QDialog
{
    Q_OBJECT

public:
    explicit UploadWorkLogDlg(QWidget *parent = nullptr);
    ~UploadWorkLogDlg();

private slots:
    void on_ScreenShotButton_clicked();

    void on_CancelButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UploadWorkLogDlg *ui;
    QJsonArray m_JsonArray;  // Member variable for storing JSON data
    TTService *m_TTService;  // Pointer to TTService class
    QPixmap m_screenshot;

};

#endif // UPLOADWORKLOGDLG_H
