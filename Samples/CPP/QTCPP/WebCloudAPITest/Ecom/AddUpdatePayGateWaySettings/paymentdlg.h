#ifndef PAYMENTDLG_H
#define PAYMENTDLG_H

#include <QDialog>
#include "Services/ecomservice.h"
#include "mainwindow.h"
#include <QJsonArray>
#include <QJsonObject>
#include "QListWidget"
#include <QJsonArray>
namespace Ui {
class Paymentdlg;
}

class Paymentdlg : public QDialog
{
    Q_OBJECT

public:
    explicit Paymentdlg(QWidget *parent = nullptr);
    ~Paymentdlg();
      QString PcompanyId;
     QString StringifyJson(QJsonDocument jsonDoc);
    void HideAllControlls();
    void HidePayPal();
    void ShowPayPal();
    void ShowRazorPay();
    void HideRazorPay();
    void HideStripe();
    void ShowStripe();
    void ShowPayUMoney();
    void HidePayUMoney();
    void HideEmail();
    void ShowEmail();
    void ShowBusiness();
    void HideBusiness();
    void HideBank();
    void ShowBank();
    void ShowShip();
    void HideShip();
protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_comboBoxCo_currentIndexChanged(int index);

    void on_radioButtonPayPal_clicked();



    void on_radioButton_Stripe_clicked();

    void on_radioButton_RazorPay_clicked();

    void on_radioButton_PayUMoney_clicked();

    void on_radioButton_Email_clicked();

    void on_radioButton_Business_clicked();

    void on_radioButton_Bank_clicked();

    void on_radioButton_Shipping_clicked();

    void on_pushButtonPayPal_clicked();


    void on_pushButtonStripe_clicked();

    void on_pushButtonRazor_clicked();

    void on_pushButtonPayU_clicked();

    void on_pushButtonEmail_clicked();

    void on_pushButtonBank_clicked();

    void on_pushButtonShip_clicked();

    void on_pushButtonBusiness_clicked();

private:
    Ui::Paymentdlg *ui;
     QJsonArray jArray;
      EcomService* m_ecomService;

};

#endif // PAYMENTDLG_H
