#include "getallcompaniesdialog.h"
#include "ui_getallcompaniesdialog.h"
#include "Services/ecomservice.h"
#include "mainwindow.h"
#include <QJsonArray>
#include <QJsonObject>
#include "QListWidget"
GetAllCompaniesDialog::GetAllCompaniesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetAllCompaniesDialog)
{
    ui->setupUi(this);
}

GetAllCompaniesDialog::~GetAllCompaniesDialog()
{
    delete ui;
}
void GetAllCompaniesDialog::showEvent(QShowEvent* event){
    Q_UNUSED(event);

    EcomService* getecom =new EcomService();
    try
    {
        QJsonDocument document=getecom->GetAllCompanies();
        jArray = document.array();
        for(int i=0;i<jArray.count();i++)
        {
            QJsonObject jobj=jArray[i].toObject();
            QString venderName(jobj.value("VenderCompanyName").toString());

            ui->comboBoxSelectCo->addItem(venderName);
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}

void GetAllCompaniesDialog::on_comboBoxSelectCo_currentIndexChanged(int index)
{
    if(index != -1)
    {
        QJsonObject elementobj=jArray[index].toObject();
        QString Gst(elementobj.value("GstinVatID").toString());
        QString RegDate(elementobj.value("VenderRegistrationDate").toString());
        QString ProfileDesc(elementobj.value("VenderProfileDesc").toString());
        QString Email(elementobj.value("VenderEmailAddress").toString());
        QString Mobile(elementobj.value("VenderMobileNumber").toString());
        QString Phone(elementobj.value("VenderPhoneNumber").toString());
        QString Country(elementobj.value("VenderCountry").toString());
        QString Pincode(elementobj.value("VenderPinCode").toString());
        QString State(elementobj.value("VenderState").toString());
        QString City(elementobj.value("VenderCity").toString());
        QString WebSite(elementobj.value("VenderWebsiteUrl").toString());
        QString Adress2(elementobj.value("VenderAddress2").toString());
        QString Adress1(elementobj.value("VenderAddress1").toString());
        QString CoName(elementobj.value("VenderCompanyName").toString());
        QString UserID(elementobj.value("VenderUserId").toString());
        QString ReEmail(elementobj.value("ReEnterEmailAddress").toString());
        QString Invoice(elementobj.value("InvoicePrefix").toString());


        ui->listWidget->clear();
        QJsonObject jobj;

        ui->listWidget->addItem("Company Name : " + CoName);
        ui->listWidget->addItem(" Gst Number: " + Gst);
        ui->listWidget->addItem(" UserID  : " + UserID);
        ui->listWidget->addItem(" Regstration Date: " + RegDate);
        ui->listWidget->addItem("ProfileDescription : " + ProfileDesc);
        ui->listWidget->addItem("Email : " + Email);
        ui->listWidget->addItem("Mobile : " + Mobile);
        ui->listWidget->addItem("Phone  : " + Phone);
        ui->listWidget->addItem(" Country: " + Country);
        ui->listWidget->addItem("Pincode : " + Pincode);
        ui->listWidget->addItem("State : " + State);
        ui->listWidget->addItem("City : " + City);
        ui->listWidget->addItem("WebSite : " + WebSite);
        ui->listWidget->addItem("Adress1 : " + Adress1);
        ui->listWidget->addItem("Adress2 : " + Adress2);
        ui->listWidget->addItem("ReEnter Email : " + ReEmail);
        ui->listWidget->addItem("Invoice prefix : " + Invoice);




    }
}

