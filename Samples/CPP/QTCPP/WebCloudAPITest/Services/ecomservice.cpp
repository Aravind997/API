#include "ecomservice.h"
#include "Services/networkrequest.h"
#include "mainwindow.h"
#include "qabstractitemmodel.h"
#include <QList>

EcomService::EcomService()
{

}

QJsonDocument EcomService::GetAllCompanies(){
   QString strUrl = "api/Ecom/GetCompanyList";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetAllProductCategory(){

    QString strUrl = "api/Ecom/GetAllProductCategory";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}

QJsonDocument EcomService::GetAllSubCategory(QString CategoryId ){

    QString strUrl = "api/Ecom/GetAllProductSubCategory?CategoryId="+CategoryId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetAllProducts(QString CompanyId,QString CategoryId,QString SubCategoryId ){
    QString strUrl = "api/Ecom/GetProductDetails?CompanyId="+CompanyId+"&CategoryId="+CategoryId+"&SubcategoryId="+SubCategoryId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddCompanie(QByteArray Data){
    QString  strUrl = "api/Ecom/AddCompany";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdateCompanie(QByteArray Data){
    QString  strUrl = "api/Ecom/UpadteCompany";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::DeleteCompany(QString CompanyId)
{

    QJsonDocument document;
    try {
        QString strUrl = "api/Ecom/DeleteCompany?CompanyId=" + CompanyId;
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);
        auto Doc=QString(reply->readAll());
        MainWindow::SetResponseData(Doc);
        QMessageBox::information(nullptr,"WebColudAPITest",Doc);

    } catch (std::exception& es) {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService:: AddProduct(QByteArray Data){

  //  qDebug()<<"Data"<<Data;
    QString  strUrl ="api/Ecom/AddCompanyProduct";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;

}
QJsonDocument EcomService:: DeleteProduct(QString ProductId){
    QJsonDocument document;
    try {
        QString strUrl = "api/Ecom/DeleteCompanyProduct?ProductId=" + ProductId;
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);
        auto Doc=QString(reply->readAll());
        MainWindow::SetResponseData(Doc);
        QMessageBox::information(nullptr,"WebColudAPITest",Doc);

    } catch (std::exception& es) {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::  UpdateProduct(QByteArray Data){

    QString  strUrl = "api/Ecom/UpadteCompanyProduct";
    QJsonDocument document;
    try
    {

        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}

QJsonDocument EcomService::GetPayPalSettings(QString venderId){

    QString  strUrl = "api/Ecom/GetPayPalSettings?VendorId=" +venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}

QJsonDocument EcomService::GetStripeSettings(QString venderId){

    QString  strUrl = "api/Ecom/GetStripeSettings?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetPayUMoneySettings(QString venderId){

    QString  strUrl = "api/Ecom/GetPayUMoneySettings?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetRazorPaySettings(QString venderId){

    QString  strUrl = "api/Ecom/GetRazorpaySettings?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetEmailDetails(QString venderId){

    QString  strUrl = "api/Ecom/GetEMailSettings?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetBusinessDetails(QString venderId){

    QString  strUrl = "api/Ecom/GetBusinessSettings?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetBankDetails(QString venderId){

    QString  strUrl = "api/Ecom/GetBankDetails?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::GetShipDetails(QString venderId){

    QString  strUrl = "api/Ecom/GetShippingDetails?VendorId=" + venderId;

    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->GetRequest(strUrl);

        document = QJsonDocument::fromJson(reply->readAll());
        MainWindow::SetResponseData(document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdatePayPal(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdatePayPalSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdatePayUMoneySettings(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdatePayumoneySettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdateRazorPaySettings(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdateRazorpaySettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}

QJsonDocument EcomService::UpdateStripeSettings(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdateStripeSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdateEmailDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdateEmailSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdateBusinessDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdateBusinessSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdateBankDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdateBankDetails";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::UpdateShipDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/UpdateShippingDetails";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}

QJsonDocument EcomService::AddPayPal(QByteArray Data){
    QString  strUrl = "api/Ecom/AddPayPalSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddStripeSettings(QByteArray Data){
    QString  strUrl = "api/Ecom/AddStripeSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddPayUMoneySettings(QByteArray Data){
    QString  strUrl = "api/Ecom/AddPayumoneySettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddRazorPaySettings(QByteArray Data){
    QString  strUrl = "api/Ecom/AddRazorpaySettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddEmailDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/AddEmailSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddBusinessDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/AddBusinessSettings";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddBankDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/AddBankDetails";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
QJsonDocument EcomService::AddShipDetails(QByteArray Data){
    QString  strUrl = "api/Ecom/AddShippingDetails";
    QJsonDocument document;
    try
    {
        NetWorkRequest* networkRequest = new NetWorkRequest();
        QNetworkReply* reply = networkRequest->PostRequest(strUrl, Data);

        auto document = QString(reply->readAll());
        MainWindow::SetResponseData(document);
        QMessageBox::information(nullptr,"WebColudAPITest",document);
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
    return document;
}
