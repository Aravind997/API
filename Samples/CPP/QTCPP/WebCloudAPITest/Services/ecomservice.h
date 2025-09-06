#ifndef ECOMSERVICE_H
#define ECOMSERVICE_H
#include <QString>
#include <QJsonDocument>
#include<QMessageBox>
#include "networkrequest.h"
class EcomService
{
public:
    EcomService();
    NetWorkRequest *m_NetworkReq;
    QJsonDocument GetAllCompanies();
    QJsonDocument GetAllProductCategory();
    QJsonDocument GetAllSubCategory(QString CategoryId);
    QJsonDocument GetAllProducts(QString CompanyId,QString CategoryId,QString SubCategoryId );

    QJsonDocument AddCompanie(QByteArray Data);
    QJsonDocument UpdateCompanie(QByteArray Data);
    QJsonDocument DeleteCompany(QString VenderId);

    QJsonDocument AddProduct(QByteArray Data);
    QJsonDocument DeleteProduct(QString ProductId);
    QJsonDocument  UpdateProduct(QByteArray Data);

    QJsonDocument GetPayPalSettings(QString venderId);
    QJsonDocument GetStripeSettings(QString venderId);
    QJsonDocument GetPayUMoneySettings(QString venderId);
    QJsonDocument GetRazorPaySettings(QString venderId);
    QJsonDocument GetEmailDetails(QString venderId);
    QJsonDocument GetBusinessDetails(QString venderId);
    QJsonDocument GetBankDetails(QString venderId);
    QJsonDocument GetShipDetails(QString venderId);

    QJsonDocument UpdatePayPal(QByteArray Data);
    QJsonDocument UpdateStripeSettings(QByteArray Data);
    QJsonDocument UpdatePayUMoneySettings(QByteArray Data);
    QJsonDocument UpdateRazorPaySettings(QByteArray Data);
    QJsonDocument UpdateEmailDetails(QByteArray Data);
    QJsonDocument UpdateBusinessDetails(QByteArray Data);
    QJsonDocument UpdateBankDetails(QByteArray Data);
    QJsonDocument UpdateShipDetails(QByteArray Data);

    QJsonDocument AddPayPal(QByteArray Data);
    QJsonDocument AddStripeSettings(QByteArray Data);
    QJsonDocument AddPayUMoneySettings(QByteArray Data);
    QJsonDocument AddRazorPaySettings(QByteArray Data);
    QJsonDocument AddEmailDetails(QByteArray Data);
    QJsonDocument AddBusinessDetails(QByteArray Data);
    QJsonDocument AddBankDetails(QByteArray Data);
    QJsonDocument AddShipDetails(QByteArray Data);
};

#endif // ECOMSERVICE_H
