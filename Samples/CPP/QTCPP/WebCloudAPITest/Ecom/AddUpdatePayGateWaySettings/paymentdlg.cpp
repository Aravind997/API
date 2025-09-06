#include "paymentdlg.h"
#include "ui_paymentdlg.h"

Paymentdlg::Paymentdlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paymentdlg)
{
    ui->setupUi(this);
    HideAllControlls();
}

Paymentdlg::~Paymentdlg()
{
    delete ui;
}
void Paymentdlg::showEvent(QShowEvent* event){
    Q_UNUSED(event);


    try
    {
         QJsonDocument Doc=m_ecomService->GetAllCompanies();
        jArray = Doc.array();
        for(int i=0;i<jArray.count();i++)
        {
            QJsonObject jobj=jArray[i].toObject();
            QString venderName(jobj.value("VenderCompanyName").toString());

            ui->comboBoxCo->addItem(venderName);
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}
QString Paymentdlg:: StringifyJson(QJsonDocument jsonDoc){
    QByteArray data = jsonDoc.toJson();
    return QString::fromStdString(data.toStdString());
}

void Paymentdlg::on_comboBoxCo_currentIndexChanged(int index)
{
    if(index != -1){
        QJsonObject elementobj=jArray[index].toObject();
        QString  ComapnyId(elementobj.value("VenderUserId").toString());
        PcompanyId =ComapnyId;
        qDebug()<<"selected comapnyId"<<PcompanyId;
    }
}
void Paymentdlg:: HideAllControlls(){
    HideRazorPay();
    HidePayPal();
    HideRazorPay();
    HideStripe();
    HidePayUMoney();
    HideBusiness();
    HideBank();
    HideShip();
    HideEmail();
}

void Paymentdlg::on_radioButtonPayPal_clicked()
{
    if(PcompanyId != ""){
       HideRazorPay();
       HideStripe();
       HidePayUMoney();
       HideEmail();
       HideBusiness();
       HideBank();
       HideShip();
       ShowPayPal();


       try{
            QJsonDocument Doc=m_ecomService->GetPayPalSettings(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();
            QString Id = obj["PaypalClientID"].toString();
             ui->lineEditPayPalID->setText(Id);
             ui->lineEditPayPalKey->setText(obj["PaypalClientSecretKey"].toString());
             if(Id!=""){
                 ui->pushButtonPayPal->setText("Update Settings");
             }

             bool checkpaypal =obj["EnablePaypal"].isBool();
             if(checkpaypal==true){
                 ui->checkBoxPayPal->setChecked(true);
             }
       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }
    }
}

void Paymentdlg::HideRazorPay(){
    ui->checkBoxRazor->hide();
    ui->groupBoxRazor->hide();
    ui->labelRazorKey->hide();
    ui->labelRazorKey2->hide();
    ui->lineEditRazorKey->hide();
    ui->lineEditRazorKey2->hide();
    ui->pushButtonRazor->hide();
}
void Paymentdlg::ShowRazorPay(){
    ui->checkBoxRazor->show();
    ui->groupBoxRazor->show();
    ui->labelRazorKey->show();
    ui->labelRazorKey2->show();
    ui->lineEditRazorKey->show();
    ui->lineEditRazorKey2->show();
    ui->pushButtonRazor->show();
}

void Paymentdlg::HidePayPal(){
    ui->checkBoxPayPal->hide();
    ui->groupBoxPayPal->hide();
    ui->labelPayPalID->hide();
    ui->labelPayPalKey->hide();
    ui->lineEditPayPalID->hide();
    ui->lineEditPayPalKey->hide();
    ui->pushButtonPayPal->hide();
}
void Paymentdlg::ShowPayPal(){
    ui->checkBoxPayPal->show();
    ui->groupBoxPayPal->show();
    ui->labelPayPalID->show();
    ui->labelPayPalKey->show();
    ui->lineEditPayPalID->show();
    ui->lineEditPayPalKey->show();
    ui->pushButtonPayPal->show();


}
void Paymentdlg::HideStripe(){

    ui->checkBoxStripe->hide();
    ui->groupBoxStripe->hide();
    ui->labelStripeKey->hide();
    ui->labelStripeKey2->hide();
    ui->lineEditStripeKey->hide();
    ui->lineEditStripeKey2->hide();
    ui->pushButtonStripe->hide();
}
void Paymentdlg::ShowStripe(){
    ui->checkBoxStripe->show();
    ui->groupBoxStripe->show();
    ui->labelStripeKey->show();
    ui->labelStripeKey2->show();
    ui->lineEditStripeKey->show();
    ui->lineEditStripeKey2->show();
    ui->pushButtonStripe->show();
}

void Paymentdlg::on_radioButton_Stripe_clicked()
{
    if(PcompanyId != ""){
       HideRazorPay();
       HidePayPal();
       HidePayUMoney();
       HideEmail();
       HideBusiness();
       HideBank();
       HideShip();
       ShowStripe();
       try{
            QJsonDocument Doc=m_ecomService->GetStripeSettings(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();
            QString SecretKey =obj["SecretKey"].toString();
            ui->lineEditStripeKey->setText(SecretKey);
            ui->lineEditStripeKey2->setText(obj["PublishableKey"].toString());

            if(SecretKey!=""){
                 ui->pushButtonStripe->setText("Update Settings");
            }

            bool check =obj["EnableStripeSettings"].isBool();
            if(check==true){
                 ui->checkBoxStripe->setChecked(true);
            }
       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }

    }
}


void Paymentdlg::on_radioButton_RazorPay_clicked()
{
    if(PcompanyId != ""){
       HidePayPal();
       HideStripe();
       HidePayUMoney();
       HideEmail();
       HideBusiness();
       HideShip();
       HideBank();
       ShowRazorPay();

       try{
            QJsonDocument Doc=m_ecomService->GetRazorPaySettings(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();
            QString  Id =obj["RazorpayKeyID"].toString();
            ui->lineEditRazorKey->setText(Id);
            ui->lineEditRazorKey2->setText(obj["RazorpayKeySecret"].toString());

            if(Id!=""){
                 ui->pushButtonRazor->setText("Update Settings");
            }

            bool check =obj["EnableRazorpaySettings"].isBool();
            if(check==true){
                 ui->checkBoxRazor->setChecked(true);
            }
       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }

    }
}

void Paymentdlg::ShowPayUMoney(){
    ui->checkBoxPayU->show();
    ui->groupBoxPayU->show();
    ui->labelPayUId->show();
    ui->labelPayUKey->show();
    ui->labelPayUSalt->show();
    ui->lineEditPayUID->show();
    ui->lineEditPayUKey->show();
    ui->lineEditPayUSalt->show();
     ui->pushButtonPayU->show();
}
void Paymentdlg::HidePayUMoney(){
     ui->checkBoxPayU->hide();
     ui->groupBoxPayU->hide();
     ui->labelPayUId->hide();
     ui->labelPayUKey->hide();
     ui->labelPayUSalt->hide();
     ui->lineEditPayUID->hide();
     ui->lineEditPayUKey->hide();
     ui->lineEditPayUSalt->hide();
     ui->pushButtonPayU->hide();
}
void Paymentdlg::on_radioButton_PayUMoney_clicked()
{
     if(PcompanyId != ""){
       HidePayPal();
       HideStripe();
       HideRazorPay();
       HideEmail();
       HideBusiness();
       HideBank();
       HideShip();
       ShowPayUMoney();

       try{
            QJsonDocument Doc=m_ecomService->GetPayUMoneySettings(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();
            QString  Id =obj["MerchantID"].toString();
            ui->lineEditPayUID->setText(Id);
            ui->lineEditPayUKey->setText(obj["MerchantKey"].toString());
            ui->lineEditPayUSalt->setText(obj["Salt"].toString());

            if(Id!=""){
                 ui->pushButtonPayU->setText("Update Settings");
            }

            bool check =obj["EnablePayumoney"].isBool();
            if(check==true){
                 ui->checkBoxPayU->setChecked(true);
            }
       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }
     }
}
void Paymentdlg::HideEmail(){
     ui->groupBoxEmail->hide();
     ui->labelAE->hide();
     ui->labelAE->hide();
     ui->labelDE->hide();
     ui->labelSE->hide();
     ui->labelBE->hide();
     ui->lineEditSE->hide();
     ui->lineEditAE->hide();
     ui->lineEditDE->hide();
     ui->lineEditBE->hide();
     ui->pushButtonEmail->hide();
}
void Paymentdlg::ShowEmail(){
     ui->groupBoxEmail->show();
     ui->labelAE->show();
     ui->labelAE->show();
     ui->labelDE->show();
     ui->labelSE->show();
     ui->lineEditSE->show();
     ui->lineEditAE->show();
     ui->lineEditDE->show();
     ui->lineEditBE->show();
     ui->pushButtonEmail->show();
}

void Paymentdlg::on_radioButton_Email_clicked()
{
     if(PcompanyId != ""){
       HidePayPal();
       HideStripe();
       HideRazorPay();
       HidePayUMoney();
       HideBusiness();
       HideBank();
       HideShip();
       ShowEmail();
       try{
            QJsonDocument Doc=m_ecomService->GetEmailDetails(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();

             QString  AdminEmail =obj["AdminEmail"].toString();
            ui->lineEditAE->setText(AdminEmail);
            ui->lineEditBE->setText(obj["BusinessEmail"].toString());
            ui->lineEditDE->setText(obj["DefaultEmail"].toString());
            ui->lineEditSE->setText(obj["SupportEmail"].toString());

            if(AdminEmail!=""){
                 ui->pushButtonEmail->setText("Update Settings");
            }

       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }

     }
}

void Paymentdlg::ShowBusiness(){
     ui->labelON->show();
     ui->label_Adress->show();
     ui->label_Pin->show();
     ui->label_PH1->show();
     ui->label_PH2->show();
     ui->label_Fax->show();
     ui->label_Web->show();
     ui->lineEditON->show();
     ui->lineEdit_Adress->show();
     ui->lineEdit_Web->show();
     ui->lineEdit_Ph1->show();
     ui->lineEdit_Ph1_2->show();
    ui->lineEdit_Pin->show();
    ui->lineEdit_fax->show();
    ui->groupBox_Business->show();
    ui->pushButtonBusiness->show();
}
void Paymentdlg::HideBusiness(){
    ui->labelON->hide();
    ui->label_Adress->hide();
    ui->label_Pin->hide();
    ui->label_PH1->hide();
    ui->label_PH2->hide();
    ui->label_Fax->hide();
    ui->label_Web->hide();
    ui->lineEditON->hide();
    ui->lineEdit_Adress->hide();
    ui->lineEdit_Web->hide();
    ui->lineEdit_Ph1->hide();
    ui->lineEdit_Ph1_2->hide();
    ui->lineEdit_Pin->hide();
    ui->lineEdit_fax->hide();
    ui->groupBox_Business->hide();
    ui->pushButtonBusiness->hide();
}
void Paymentdlg::on_radioButton_Business_clicked()
{
    if(PcompanyId != ""){
       HidePayPal();
       HideStripe();
       HideRazorPay();
       HidePayUMoney();
       HideEmail();
       HideBank();
       HideShip();
       ShowBusiness();
       try{
            QJsonDocument Doc=m_ecomService->GetBusinessDetails(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();

            QString  OrganizationName = obj["OrganizationName"].toString();

            ui->lineEditON->setText(OrganizationName);
            ui->lineEdit_Adress->setText(obj["Address"].toString());
            ui->lineEdit_Web->setText(obj["WebSiteURL"].toString());
            ui->lineEdit_Ph1->setText(obj["PhoneNo1"].toString());
            ui->lineEdit_Ph1_2->setText(obj["PhoneNo2"].toString());
            ui->lineEdit_Pin->setText(obj["PinCode"].toString());
            ui->lineEdit_fax->setText(obj["FaxNo"].toString());

            if(OrganizationName!=""){
                 ui->pushButtonBusiness->setText("Update Settings");
            }

       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }

    }
}
void Paymentdlg::ShowBank(){
    ui->label_account->show();
    ui->groupBox_Bank->show();
    ui->labelBankName->show();
    ui->label_ifsc->show();
    ui->label_order->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->lineEditBankName->show();
    ui->lineEdit_Accoutntno->show();
    ui->lineEdit_ifsc->show();
    ui->textEditOrderDaetials->show();
    ui->checkBoxBank->show();
    ui->pushButtonBank->show();
}
void Paymentdlg::HideBank(){
    ui->label_account->hide();
    ui->groupBox_Bank->hide();
    ui->labelBankName->hide();
    ui->label_ifsc->hide();
    ui->label_order->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->lineEditBankName->hide();
    ui->lineEdit_Accoutntno->hide();
    ui->lineEdit_ifsc->hide();
    ui->textEditOrderDaetials->hide();
    ui->checkBoxBank->hide();
    ui->pushButtonBank->hide();
}


void Paymentdlg::on_radioButton_Bank_clicked()
{
    if(PcompanyId != ""){
       HidePayPal();
       HideStripe();
       HideRazorPay();
       HidePayUMoney();
       HideEmail();
       HideBusiness();
       HideShip();
       ShowBank();
       try{
            QJsonDocument Doc=m_ecomService->GetBankDetails(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();

            QString  AccountNo = obj["AccountNo"].toString();
            ui->lineEditBankName->setText(obj["BankName"].toString());
            ui->lineEdit_Accoutntno->setText(AccountNo);
            ui->lineEdit_ifsc->setText(obj["SWIFTIFSCCodeBankAddress"].toString());
            ui->textEditOrderDaetials->setText(obj["OrderRequestEmail"].toString());

            if(AccountNo!=""){
                 ui->pushButtonBank->setText("Update Settings");
            }
            bool check =obj["EnableBankTransfer"].isBool();
            if(check==true){
                 ui->checkBoxBank->setChecked(true);
            }


       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }

    }
}
void Paymentdlg::ShowShip(){
    ui->groupBoxShip->show();
    ui->labelShipAdress->show();
    ui->labelShipEmail->show();
    ui->labelShipPhone->show();
    ui->lineEditShipEmail->show();
    ui->lineEditShipPhone->show();
    ui->textEditShipAdress->show();
    ui->pushButtonShip->show();

}
void Paymentdlg::HideShip(){
    ui->groupBoxShip->hide();
    ui->labelShipAdress->hide();
    ui->labelShipEmail->hide();
    ui->labelShipPhone->hide();
    ui->lineEditShipEmail->hide();
    ui->lineEditShipPhone->hide();
    ui->textEditShipAdress->hide();
    ui->pushButtonShip->hide();

}

void Paymentdlg::on_radioButton_Shipping_clicked()
{
    if(PcompanyId != ""){
       HidePayPal();
       HideStripe();
       HideRazorPay();
       HidePayUMoney();
       HideEmail();
       HideBusiness();
       HideBank();
       ShowShip();

       try{
            QJsonDocument Doc=m_ecomService->GetShipDetails(PcompanyId);
            MainWindow::SetResponseData(StringifyJson(Doc));
            QJsonObject obj = Doc.object();

            QString  PhoneNumber = obj["PhoneNumber"].toString();
            ui->textEditShipAdress->setText(obj["ShippingAddress"].toString());
            ui->lineEditShipPhone->setText(PhoneNumber);
            ui->lineEditShipEmail->setText(obj["EmailAddress"].toString());


            if(PhoneNumber!=""){
                 ui->pushButtonShip->setText("Update Settings");
            }

            bool check =obj["EnableBankTransfer"].isBool();
            if(check==true){
                 ui->checkBoxBank->setChecked(true);
            }


       }
       catch (std::exception& es)
       {
            MainWindow::SetResponseData(es.what());
       }
    }
}


void Paymentdlg::on_pushButtonPayPal_clicked()
{
     QPushButton *btn = findChild<QPushButton*>("pushButtonPayPal");

    if(btn->text()=="Update Settings"){

       QString Id = ui->lineEditPayPalID->text();
       QString Key =ui->lineEditPayPalKey->text();
       bool enablepaypal =ui->checkBoxPayPal->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VenderUserId\":\""+venderId +"\",\"PaypalClientID\":\"" + Id + "\",\"PaypalClientSecretKey\":\"" + Key + "\",\"EnablePaypal\":\"" + enablepaypal + "\" }";


            m_ecomService->UpdatePayPal(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString Id = ui->lineEditPayPalID->text();
       QString Key =ui->lineEditPayPalKey->text();
       bool enablepaypal =ui->checkBoxPayPal->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VenderUserId\":\""+venderId +"\",\"PaypalClientID\":\"" + Id + "\",\"PaypalClientSecretKey\":\"" + Key + "\",\"EnablePaypal\":\"" + enablepaypal + "\" }";


            m_ecomService->AddPayPal(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }

}





void Paymentdlg::on_pushButtonStripe_clicked()
{
    QPushButton *btn = findChild<QPushButton*>("pushButtonStripe");

    if(btn->text()=="Update Settings"){

       QString secretkey = ui->lineEditStripeKey->text();
       QString publishkey =ui->labelStripeKey2->text();
       bool enablestripe =ui->checkBoxStripe->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"PublishableKey\":\"" + publishkey + "\",\"SecretKey\":\"" + secretkey + "\",\"EnableStripeSettings\":\"" + enablestripe + "\" }";


            m_ecomService->UpdateStripeSettings(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString secretkey = ui->lineEditStripeKey->text();
       QString publishkey =ui->labelStripeKey2->text();
       bool enablestripe =ui->checkBoxStripe->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"PublishableKey\":\"" + publishkey + "\",\"SecretKey\":\"" + secretkey + "\",\"EnableStripeSettings\":\"" + enablestripe + "\" }";


            m_ecomService->AddStripeSettings(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }
}


void Paymentdlg::on_pushButtonRazor_clicked()
{
    QPushButton *btn = findChild<QPushButton*>("pushButtonRazor");

    if(btn->text()=="Update Settings"){

       QString id = ui->lineEditRazorKey->text();
       QString key =ui->lineEditRazorKey2->text();
       bool enablerazorpay =ui->checkBoxRazor->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"RazorpayKeyID\":\"" + id + "\",\"RazorpayKeySecret\":\"" + key + "\",\"EnableRazorpaySettings\":\"" + enablerazorpay + "\" }";


            m_ecomService->UpdateRazorPaySettings(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString id = ui->lineEditRazorKey->text();
       QString key =ui->lineEditRazorKey2->text();
       bool enablerazorpay =ui->checkBoxRazor->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"RazorpayKeyID\":\"" + id + "\",\"RazorpayKeySecret\":\"" + key + "\",\"EnableRazorpaySettings\":\"" + enablerazorpay + "\" }";


            m_ecomService->AddRazorPaySettings(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }
}


void Paymentdlg::on_pushButtonPayU_clicked()
{
    QPushButton *btn = findChild<QPushButton*>("pushButtonPayU");

    if(btn->text()=="Update Settings"){
       QString id = ui->lineEditPayUID->text();
       QString key =ui->lineEditPayUKey->text();
       QString salt =ui->lineEditPayUSalt->text();
       bool enablerpayu =ui->checkBoxPayU->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"MerchantID\":\"" + id + "\",\"MerchantKey\":\"" + key + "\",\"Salt\":\"" + salt + "\",\"EnablePayumoney\":\"" + enablerpayu + "\" }";


            m_ecomService->UpdatePayUMoneySettings(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Update Settings"){

       QString id = ui->lineEditPayUID->text();
       QString key =ui->lineEditPayUKey->text();
       QString salt =ui->lineEditPayUSalt->text();
       bool enablerpayu =ui->checkBoxPayU->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"MerchantID\":\"" + id + "\",\"MerchantKey\":\"" + key + "\",\"Salt\":\"" + salt + "\",\"EnablePayumoney\":\"" + enablerpayu + "\" }";


            m_ecomService->AddPayUMoneySettings(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }
}


void Paymentdlg::on_pushButtonEmail_clicked()
{
    QPushButton *btn = findChild<QPushButton*>("pushButtonEmail");
    if(btn->text()=="Update Settings"){
       QString  Ae = ui->lineEditAE->text();
       QString Be =ui->lineEditBE->text();
       QString Se =ui->lineEditSE->text();
       QString De =ui->lineEditDE->text();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"AdminEmail\":\"" + Ae + "\",\"BusinessEmail\":\"" + Be + "\",\"DefaultEmail\":\"" + De + "\",\"SupportEmail\":\"" + Se + "\" }";


            m_ecomService->UpdateEmailDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString  Ae = ui->lineEditAE->text();
       QString Be =ui->lineEditBE->text();
       QString Se =ui->lineEditSE->text();
       QString De =ui->lineEditDE->text();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"AdminEmail\":\"" + Ae + "\",\"BusinessEmail\":\"" + Be + "\",\"DefaultEmail\":\"" + De + "\",\"SupportEmail\":\"" + Se + "\" }";


            m_ecomService->AddEmailDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }
}


void Paymentdlg::on_pushButtonBank_clicked()
{

    QPushButton *btn = findChild<QPushButton*>("pushButtonBank");
    if(btn->text()=="Update Settings"){
       QString bankname = ui->lineEditBankName->text();
       QString account =ui->lineEdit_Accoutntno->text();
       QString ifsc =ui->lineEdit_ifsc->text();
       QString order =ui->textEditOrderDaetials->toPlainText();
       bool enablebank =ui->checkBoxBank->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"BankName\":\"" + bankname + "\",\"AccountNo\":\"" + account + "\",\"EnableBankTransfer\":\"" + enablebank + "\",\"OrderRequestEmail\":\"" + order + "\",\"SWIFTIFSCCodeBankAddress\":\"" + ifsc + "\" }";


            m_ecomService->UpdateBankDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString bankname = ui->lineEditBankName->text();
       QString account =ui->lineEdit_Accoutntno->text();
       QString ifsc =ui->lineEdit_ifsc->text();
       QString order =ui->textEditOrderDaetials->toPlainText();
       bool enablebank =ui->checkBoxBank->checkState();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"BankName\":\"" + bankname + "\",\"AccountNo\":\"" + account + "\",\"EnableBankTransfer\":\"" + enablebank + "\",\"OrderRequestEmail\":\"" + order + "\",\"SWIFTIFSCCodeBankAddress\":\"" + ifsc + "\" }";


            m_ecomService->AddBankDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }
}


void Paymentdlg::on_pushButtonShip_clicked()
{
    QPushButton *btn = findChild<QPushButton*>("pushButtonShip");
    if(btn->text()=="Update Settings"){
       QString  phone = ui->lineEditShipPhone->text();
       QString email =ui->lineEditShipEmail->text();
       QString adress =ui->textEditShipAdress->toPlainText();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"EmailAddress\":\"" + email + "\",\"PhoneNumber\":\"" + phone + "\",\"ShippingAddress\":\"" + adress + "\"}";


            m_ecomService->UpdateShipDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString  phone = ui->lineEditShipPhone->text();
       QString email =ui->lineEditShipEmail->text();
       QString adress =ui->textEditShipAdress->toPlainText();
       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"EmailAddress\":\"" + email + "\",\"PhoneNumber\":\"" + phone + "\",\"ShippingAddress\":\"" + adress + "\"}";


            m_ecomService->AddShipDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }
}


void Paymentdlg::on_pushButtonBusiness_clicked()
{
    QPushButton *btn = findChild<QPushButton*>("pushButtonBusiness");
    if(btn->text()=="Update Settings"){
       QString  orgname = ui->lineEditON->text();
       QString adress =ui->lineEdit_Adress->text();
       QString pin =ui->lineEdit_Pin->text();
       QString fax =ui->lineEdit_fax->text();
       QString web =ui->lineEdit_Web->text();
       QString ph1 =ui->lineEdit_Ph1->text();
       QString ph2 =ui->lineEdit_Ph1_2->text();

       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"OrganizationName\":\"" + orgname + "\",\"Address\":\"" + adress + "\",\"PhoneNo1\":\"" + ph1 + "\",\"PhoneNo2\":\"" + ph2 + "\",\"FaxNo\":\"" + fax + "\",\"PinCode\":\"" + pin + "\",\"WebSiteURL\":\"" + web + "\" }";


            m_ecomService->UpdateBusinessDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }

    }else if(btn->text()=="Save Settings"){

       QString  orgname = ui->lineEditON->text();
       QString adress =ui->lineEdit_Adress->text();
       QString pin =ui->lineEdit_Pin->text();
       QString fax =ui->lineEdit_fax->text();
       QString web =ui->lineEdit_Web->text();
       QString ph1 =ui->lineEdit_Ph1->text();
       QString ph2 =ui->lineEdit_Ph1_2->text();

       QString venderId =PcompanyId;
       try {
            //serializiation of json.
            QString Data = "{\"VendorId\":\""+venderId +"\",\"OrganizationName\":\"" + orgname + "\",\"Address\":\"" + adress + "\",\"PhoneNo1\":\"" + ph1 + "\",\"PhoneNo2\":\"" + ph2 + "\",\"FaxNo\":\"" + fax + "\",\"PinCode\":\"" + pin + "\",\"WebSiteURL\":\"" + web + "\" }";


            m_ecomService->AddBusinessDetails(Data.toUtf8());

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(Data.toUtf8());
            MainWindow::SetRequestData(reqData);


       }
       catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
       }
    }
}

