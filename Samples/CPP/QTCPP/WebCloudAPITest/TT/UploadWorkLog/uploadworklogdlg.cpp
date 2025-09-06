#include "uploadworklogdlg.h"
#include "ui_uploadworklogdlg.h"
#include <QDateTime>
#include <QDebug>
#include <QScreen>
#include <QPixmap>
#include <QBuffer>          // Include for QBuffer
#include <QJsonDocument>    // Include for QJsonDocument
#include <QJsonObject>      // Include for QJsonObject
#include <mainwindow.h>

UploadWorkLogDlg::UploadWorkLogDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UploadWorkLogDlg)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Ongoing Task");
    ui->comboBox->addItem("5%");
    ui->comboBox->addItem("10%");
    ui->comboBox->addItem("15%");
    ui->comboBox->addItem("30%");
    ui->comboBox->addItem("45%");
    ui->comboBox->addItem("60%");
    ui->comboBox->addItem("75%");
    ui->comboBox->addItem("90%");
    ui->comboBox->addItem("100%");
}

UploadWorkLogDlg::~UploadWorkLogDlg()
{
    delete ui;
}

void UploadWorkLogDlg::on_ScreenShotButton_clicked()
{
    // Capture a screenshot
    QScreen *screen = QGuiApplication::primaryScreen();
    m_screenshot = screen->grabWindow(0); // Store the screenshot

    // Display the screenshot in ui->graphicsView
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->addPixmap(m_screenshot);
    ui->graphicsView->setScene(scene);

    // Get the current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString formattedTime = "CaptureTime::" + currentDateTime.toString("hh:mm:ss AP");

    // Set the text of the QLabel
    ui->label_6->setText(formattedTime);
    MainWindow::SetResponseData("Screenshot Captured");
}

void UploadWorkLogDlg::on_CancelButton_clicked()
{
    reject();
}

void UploadWorkLogDlg::on_pushButton_2_clicked()
{
    // Convert the screenshot to a byte array
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    m_screenshot.save(&buffer, "PNG");  // Convert the screenshot to PNG

    // Convert the byte array to Base64
    QString base64Screenshot = QString::fromLatin1(byteArray.toBase64());

    // Prepare WorkDairyDataReq JSON with the screenshot
    QJsonObject workDairyDataReq;

    workDairyDataReq["App Exe Name"] = ui->lineEdit_2->text();
    workDairyDataReq["Application Window Title"] = ui->lineEdit_2->text();
    workDairyDataReq["Memo Title"] = ui->lineEdit_2->text();
    workDairyDataReq["Memo Description"] = ui->lineEdit_2->text();
    workDairyDataReq["Completion Percentage"] = ui->comboBox->currentText();
    workDairyDataReq["Screenshot"] = base64Screenshot;


    QJsonDocument jsonDoc(workDairyDataReq);
    QString jsonString = jsonDoc.toJson(QJsonDocument::Compact);


    QString userID = "userID";
    TTService service;
    QJsonDocument response = service.UploadWorkDairy(jsonString, userID);

    // Display the server response
    MainWindow::SetResponseData("Screenshot Uploaded");
    MainWindow::SetResponseData(response.toJson());
    MainWindow::SetResponseData(QString(QJsonDocument(workDairyDataReq).toJson(QJsonDocument::Compact)));



}
