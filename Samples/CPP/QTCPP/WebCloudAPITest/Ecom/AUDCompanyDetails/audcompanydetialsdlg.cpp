#include "audcompanydetialsdlg.h"
#include "ui_audcompanydetialsdlg.h"
#include "mainwindow.h"
#include<QDebug>
AUDCompanyDetialsDlg::AUDCompanyDetialsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AUDCompanyDetialsDlg)
{
    ui->setupUi(this);
    ShowTable();
    AddItemToTable();
}

AUDCompanyDetialsDlg::~AUDCompanyDetialsDlg()
{
    delete ui;
}

void AUDCompanyDetialsDlg::on_pushButton_Save_clicked()
{
     QPushButton *btnSave = findChild<QPushButton*>("pushButton_Save");
    if(btnSave->text() == "Save"){
        QString CompanyName = ui->lineEditCoName->text();
        QString Gst = ui->lineEdit_Gst->text();
        QString Web = ui->lineEdit_Web->text();
        QString Tele = ui->lineEdit_Tele->text();
        QString Mob = ui->lineEdit_Mobile->text();
        QString Email = ui->lineEdit_Email->text();
        QString ReEmail = ui->lineEdit_ReEmail->text();
        QString Invoice = ui->lineEdit_Invoice->text();
        QString Country = ui->lineEdit_Country ->text();
        QString State = ui->lineEdit_State->text();
        QString City = ui->lineEdit_City->text();
        QString Pin  = ui->lineEdit_Pin->text();
        QString Adress1 = ui->textEdit_Adress1->toPlainText();
        QString Adress2 = ui->textEdit_Adress2->toPlainText();
        QString Desc = ui->textEdit_Desc->toPlainText();
        try {
            //serializiation of json.
            QString Data = "{\"VenderUserId\":\"\",\"VenderCompanyName\":\"" + CompanyName + "\",\"GstinVatID\":\"" + Gst + "\",\"VenderProfileDesc\":\"" + Desc + "\",\"VenderMobileNumber\":\"" +Mob + "\",\"VenderPhoneNumber\":\"" + Tele + "\",\"VenderCountry\":\"" + Country + "\",\"VenderPinCode\":\"" + Pin + "\",\"VenderState\":\"" + State + "\",\"VenderCity\":\"" + City + "\",\"VenderWebsiteUrl\":\"" + Web + "\",\"VenderAddress2\":\"" + Adress2 + "\",\"VenderAddress1\":\"" + Adress1 + "\",\"InvoicePrefix\":\"" + Invoice + "\",\"VenderEmailAddress\":\"" + Email + "\",\"ReEnterEmailAddress\":\"" + ReEmail + "\" }";


            m_ecomService->AddCompanie(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);
            AddItemToTable();
            ClearData();

        }
        catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
        }
    }else if(btnSave->text()=="Update"){
        QString CompanyName = ui->lineEditCoName->text();
        QString Gst = ui->lineEdit_Gst->text();
        QString Web = ui->lineEdit_Web->text();
        QString Tele = ui->lineEdit_Tele->text();
        QString Mob = ui->lineEdit_Mobile->text();
        QString Email = ui->lineEdit_Email->text();
        QString ReEmail = ui->lineEdit_ReEmail->text();
        QString Invoice = ui->lineEdit_Invoice->text();
        QString Country = ui->lineEdit_Country ->text();
        QString State = ui->lineEdit_State->text();
        QString City = ui->lineEdit_City->text();
        QString Pin  = ui->lineEdit_Pin->text();
        QString Adress1 = ui->textEdit_Adress1->toPlainText();
        QString Adress2 = ui->textEdit_Adress2->toPlainText();
        QString Desc = ui->textEdit_Desc->toPlainText();
        try {
            //serializiation of json.
            QString Data = "{\"VenderUserId\":\""+GcompanyId +"\",\"VenderCompanyName\":\"" + CompanyName + "\",\"GstinVatID\":\"" + Gst + "\",\"VenderProfileDesc\":\"" + Desc + "\",\"VenderMobileNumber\":\"" +Mob + "\",\"VenderPhoneNumber\":\"" + Tele + "\",\"VenderCountry\":\"" + Country + "\",\"VenderPinCode\":\"" + Pin + "\",\"VenderState\":\"" + State + "\",\"VenderCity\":\"" + City + "\",\"VenderWebsiteUrl\":\"" + Web + "\",\"VenderAddress2\":\"" + Adress2 + "\",\"VenderAddress1\":\"" + Adress1 + "\",\"InvoicePrefix\":\"" + Invoice + "\",\"VenderEmailAddress\":\"" + Email + "\",\"ReEnterEmailAddress\":\"" + ReEmail + "\" }";


            m_ecomService->UpdateCompanie(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);
            //AddItemtotable();

        }
        catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
        }
        ui->pushButton_Save->setText("Save");
        ClearData();
    }
}

void AUDCompanyDetialsDlg::ShowTable(){
    CompanyModel = new QStandardItemModel();

    CompanyModel->setHorizontalHeaderItem(0,new QStandardItem(tr("Company Name")));
    CompanyModel->setHorizontalHeaderItem(1,new QStandardItem(tr("Email")));
    CompanyModel->setHorizontalHeaderItem(2,new QStandardItem(tr("City")));
    CompanyModel->setHorizontalHeaderItem(3,new QStandardItem(tr("State")));
    CompanyModel->setHorizontalHeaderItem(4,new QStandardItem(tr("Mobile")));


    ui->tableView->setModel(CompanyModel);
}
void AUDCompanyDetialsDlg::AddItemToTable(){
    try
    {

        QJsonDocument Doc=m_ecomService->GetAllCompanies();

        m_JsonArray=Doc.array();
        // QDebug() << m_JsonArray;
        for(int i=0;i<m_JsonArray.count();i++)
        {
            QJsonObject obj=m_JsonArray[i].toObject();

            QString Email(obj.value("VenderEmailAddress").toString());
            QString Mobile(obj.value("VenderMobileNumber").toString());
            QString State(obj.value("VenderState").toString());
            QString City(obj.value("VenderCity").toString());
            QString CoName(obj.value("VenderCompanyName").toString());

            CompanyModel->setItem(i,0,new QStandardItem(CoName));
            CompanyModel->setItem(i,1,new QStandardItem(Email));
            CompanyModel->setItem(i,2,new QStandardItem(City));
            CompanyModel->setItem(i,3,new QStandardItem(State));
            CompanyModel->setItem(i,4,new QStandardItem(Mobile));

        }



    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}




void AUDCompanyDetialsDlg::on_pushButton_Edit_clicked()
{
    ui->pushButton_Save->setText("Update");


    QTableView *tableView = findChild<QTableView*>("tableView");
    // replace with your table view object name

    QItemSelectionModel *selectionModel = tableView->selectionModel();
    QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

    int numRows = 0;
    if (selectionModel->hasSelection()) {
        numRows = tableView->model()->rowCount();

    }

    int rowIndex = -1;
    if (selectionModel->hasSelection()) {
        QModelIndex currentIndex = selectionModel->currentIndex();
        rowIndex = currentIndex.row();

    }

    m_JsonArray= m_ecomService->GetAllCompanies().array();

    for (int i = 0; i < m_JsonArray.size(); i++)
    {
        QJsonObject obj = m_JsonArray[rowIndex].toObject();
        QString companyId(obj.value("VenderUserId").toString());
        QString VenderCompanyName = obj["VenderCompanyName"].toString();
        QString Gst(obj.value("GstinVatID").toString());
        //QString RegDate(obj.value("VenderRegistrationDate").toString());
        QString ProfileDesc(obj.value("VenderProfileDesc").toString());
        QString Email(obj.value("VenderEmailAddress").toString());
        QString Mobile(obj.value("VenderMobileNumber").toString());
        QString Phone(obj.value("VenderPhoneNumber").toString());
        QString Country(obj.value("VenderCountry").toString());
        QString Pincode(obj.value("VenderPinCode").toString());
        QString State(obj.value("VenderState").toString());
        QString City(obj.value("VenderCity").toString());
        QString WebSite(obj.value("VenderWebsiteUrl").toString());
        QString Adress2(obj.value("VenderAddress2").toString());
        QString Adress1(obj.value("VenderAddress1").toString());
        QString ReEmail(obj.value("ReEnterEmailAddress").toString());
        QString Invoice(obj.value("InvoicePrefix").toString());
        GcompanyId =companyId;

        ui->lineEditCoName->setText(VenderCompanyName);
        ui->lineEdit_Gst->setText(Gst);
        ui->lineEdit_Email->setText(Email);
        ui->lineEdit_ReEmail->setText(ReEmail);
        ui->lineEdit_Mobile->setText(Mobile);
        ui->lineEdit_Tele->setText(Phone);
        ui->textEdit_Adress1->setText(Adress1);
        ui->textEdit_Adress2->setText(Adress2);
        ui->lineEdit_City->setText(City);
        ui->lineEdit_State->setText(State);
        ui->lineEdit_Country->setText(Country);
        ui->lineEdit_Pin->setText(Pincode);
        ui->lineEdit_Invoice->setText(Invoice);
        ui->textEdit_Desc->setText(ProfileDesc);
        ui->lineEdit_Web->setText(WebSite);

}
}

void AUDCompanyDetialsDlg::on_pushButton_Delete_clicked()
{
        QTableView *tableView = findChild<QTableView*>("tableView");
        QItemSelectionModel *selectionModel = tableView->selectionModel();
        int rowIndex = -1;
        if (selectionModel->hasSelection()) {
                QModelIndex currentIndex = selectionModel->currentIndex();
                rowIndex = currentIndex.row();
                qDebug() << "Selected row index: " << rowIndex;
        }
             m_JsonArray = m_ecomService->GetAllCompanies().array();

        // Loop through the array to find the employee with the matching ID
        QString CompanyId;
        for (int i = 0; i < m_JsonArray.size(); i++) {
                QJsonObject obj = m_JsonArray[rowIndex].toObject();
                QString companyId = obj["VenderUserId"].toString();
                 qDebug()<<"Company Id local"<<companyId;
                CompanyId =companyId;
        }
        qDebug()<<"Company Id"<<CompanyId;
        try {
                QJsonDocument Doc=m_ecomService->DeleteCompany(CompanyId);
               ShowTable();
                AddItemToTable();
        } catch (std::exception& es) {
                MainWindow::SetResponseData(es.what());
        }
}
void AUDCompanyDetialsDlg::ClearData(){
        ui->lineEditCoName->setText("");
        ui->lineEdit_Gst->setText("");
        ui->lineEdit_Email->setText("");
        ui->lineEdit_ReEmail->setText("");
        ui->lineEdit_Mobile->setText("");
        ui->lineEdit_Tele->setText("");
        ui->textEdit_Adress1->setText("");
        ui->textEdit_Adress2->setText("");
        ui->lineEdit_City->setText("");
        ui->lineEdit_State->setText("");
        ui->lineEdit_Country->setText("");
        ui->lineEdit_Pin->setText("");
        ui->lineEdit_Invoice->setText("");
        ui->textEdit_Desc->setText("");
        ui->lineEdit_Web->setText("");
}


