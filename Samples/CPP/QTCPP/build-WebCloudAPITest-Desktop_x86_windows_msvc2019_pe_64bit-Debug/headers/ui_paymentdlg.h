/********************************************************************************
** Form generated from reading UI file 'paymentdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENTDLG_H
#define UI_PAYMENTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paymentdlg
{
public:
    QGroupBox *groupBox;
    QComboBox *comboBoxCo;
    QGroupBox *groupBox_2;
    QRadioButton *radioButtonPayPal;
    QRadioButton *radioButton_Stripe;
    QRadioButton *radioButton_PayUMoney;
    QRadioButton *radioButton_RazorPay;
    QRadioButton *radioButton_Email;
    QRadioButton *radioButton_Business;
    QRadioButton *radioButton_Bank;
    QRadioButton *radioButton_Shipping;
    QGroupBox *groupBoxPayPal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelPayPalID;
    QLabel *labelPayPalKey;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditPayPalID;
    QLineEdit *lineEditPayPalKey;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxPayPal;
    QPushButton *pushButtonPayPal;
    QGroupBox *groupBoxStripe;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelStripeKey;
    QLabel *labelStripeKey2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditStripeKey;
    QLineEdit *lineEditStripeKey2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxStripe;
    QPushButton *pushButtonStripe;
    QGroupBox *groupBoxEmail;
    QPushButton *pushButtonEmail;
    QGroupBox *groupBoxPayU;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelPayUId;
    QLabel *labelPayUKey;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEditPayUID;
    QLineEdit *lineEditPayUKey;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxPayU;
    QPushButton *pushButtonPayU;
    QLabel *labelPayUSalt;
    QLineEdit *lineEditPayUSalt;
    QGroupBox *groupBoxRazor;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelRazorKey;
    QLabel *labelRazorKey2;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEditRazorKey;
    QLineEdit *lineEditRazorKey2;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxRazor;
    QPushButton *pushButtonRazor;
    QGroupBox *groupBoxShip;
    QTextEdit *textEditShipAdress;
    QPushButton *pushButtonShip;
    QLabel *labelShipAdress;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEditShipEmail;
    QLineEdit *lineEditShipPhone;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelShipEmail;
    QLabel *labelShipPhone;
    QGroupBox *groupBox_Business;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_14;
    QLabel *labelON;
    QLabel *label_Adress;
    QLabel *label_Pin;
    QLabel *label_PH1;
    QLabel *label_PH2;
    QLabel *label_Fax;
    QLabel *label_Web;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *lineEditON;
    QLineEdit *lineEdit_Adress;
    QLineEdit *lineEdit_Pin;
    QLineEdit *lineEdit_Ph1;
    QLineEdit *lineEdit_Ph1_2;
    QLineEdit *lineEdit_fax;
    QLineEdit *lineEdit_Web;
    QPushButton *pushButtonBusiness;
    QGroupBox *groupBox_Bank;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_18;
    QLabel *labelBankName;
    QLabel *label_account;
    QLabel *label_ifsc;
    QLabel *label_order;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *lineEditBankName;
    QLineEdit *lineEdit_Accoutntno;
    QLineEdit *lineEdit_ifsc;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_8;
    QCheckBox *checkBoxBank;
    QPushButton *pushButtonBank;
    QTextEdit *textEditOrderDaetials;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelAE;
    QLabel *labelBE;
    QLabel *labelSE;
    QLabel *labelDE;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEditAE;
    QLineEdit *lineEditBE;
    QLineEdit *lineEditSE;
    QLineEdit *lineEditDE;

    void setupUi(QDialog *Paymentdlg)
    {
        if (Paymentdlg->objectName().isEmpty())
            Paymentdlg->setObjectName(QString::fromUtf8("Paymentdlg"));
        Paymentdlg->resize(1870, 974);
        groupBox = new QGroupBox(Paymentdlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 341, 91));
        comboBoxCo = new QComboBox(groupBox);
        comboBoxCo->setObjectName(QString::fromUtf8("comboBoxCo"));
        comboBoxCo->setGeometry(QRect(30, 40, 271, 25));
        groupBox_2 = new QGroupBox(Paymentdlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 0, 1491, 91));
        radioButtonPayPal = new QRadioButton(groupBox_2);
        radioButtonPayPal->setObjectName(QString::fromUtf8("radioButtonPayPal"));
        radioButtonPayPal->setGeometry(QRect(30, 40, 141, 24));
        radioButton_Stripe = new QRadioButton(groupBox_2);
        radioButton_Stripe->setObjectName(QString::fromUtf8("radioButton_Stripe"));
        radioButton_Stripe->setGeometry(QRect(190, 40, 141, 24));
        radioButton_PayUMoney = new QRadioButton(groupBox_2);
        radioButton_PayUMoney->setObjectName(QString::fromUtf8("radioButton_PayUMoney"));
        radioButton_PayUMoney->setGeometry(QRect(340, 40, 141, 24));
        radioButton_RazorPay = new QRadioButton(groupBox_2);
        radioButton_RazorPay->setObjectName(QString::fromUtf8("radioButton_RazorPay"));
        radioButton_RazorPay->setGeometry(QRect(510, 40, 141, 24));
        radioButton_Email = new QRadioButton(groupBox_2);
        radioButton_Email->setObjectName(QString::fromUtf8("radioButton_Email"));
        radioButton_Email->setGeometry(QRect(690, 40, 141, 24));
        radioButton_Business = new QRadioButton(groupBox_2);
        radioButton_Business->setObjectName(QString::fromUtf8("radioButton_Business"));
        radioButton_Business->setGeometry(QRect(890, 40, 141, 24));
        radioButton_Bank = new QRadioButton(groupBox_2);
        radioButton_Bank->setObjectName(QString::fromUtf8("radioButton_Bank"));
        radioButton_Bank->setGeometry(QRect(1090, 40, 141, 24));
        radioButton_Shipping = new QRadioButton(groupBox_2);
        radioButton_Shipping->setObjectName(QString::fromUtf8("radioButton_Shipping"));
        radioButton_Shipping->setGeometry(QRect(1270, 40, 141, 24));
        groupBoxPayPal = new QGroupBox(Paymentdlg);
        groupBoxPayPal->setObjectName(QString::fromUtf8("groupBoxPayPal"));
        groupBoxPayPal->setGeometry(QRect(10, 100, 521, 171));
        layoutWidget = new QWidget(groupBoxPayPal);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 131, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelPayPalID = new QLabel(layoutWidget);
        labelPayPalID->setObjectName(QString::fromUtf8("labelPayPalID"));

        verticalLayout->addWidget(labelPayPalID);

        labelPayPalKey = new QLabel(layoutWidget);
        labelPayPalKey->setObjectName(QString::fromUtf8("labelPayPalKey"));

        verticalLayout->addWidget(labelPayPalKey);

        layoutWidget1 = new QWidget(groupBoxPayPal);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 30, 301, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditPayPalID = new QLineEdit(layoutWidget1);
        lineEditPayPalID->setObjectName(QString::fromUtf8("lineEditPayPalID"));

        verticalLayout_2->addWidget(lineEditPayPalID);

        lineEditPayPalKey = new QLineEdit(layoutWidget1);
        lineEditPayPalKey->setObjectName(QString::fromUtf8("lineEditPayPalKey"));

        verticalLayout_2->addWidget(lineEditPayPalKey);

        layoutWidget2 = new QWidget(groupBoxPayPal);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(180, 110, 301, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxPayPal = new QCheckBox(layoutWidget2);
        checkBoxPayPal->setObjectName(QString::fromUtf8("checkBoxPayPal"));

        horizontalLayout->addWidget(checkBoxPayPal);

        pushButtonPayPal = new QPushButton(layoutWidget2);
        pushButtonPayPal->setObjectName(QString::fromUtf8("pushButtonPayPal"));

        horizontalLayout->addWidget(pushButtonPayPal);

        groupBoxStripe = new QGroupBox(Paymentdlg);
        groupBoxStripe->setObjectName(QString::fromUtf8("groupBoxStripe"));
        groupBoxStripe->setGeometry(QRect(540, 100, 521, 171));
        layoutWidget3 = new QWidget(groupBoxStripe);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 40, 131, 61));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelStripeKey = new QLabel(layoutWidget3);
        labelStripeKey->setObjectName(QString::fromUtf8("labelStripeKey"));

        verticalLayout_3->addWidget(labelStripeKey);

        labelStripeKey2 = new QLabel(layoutWidget3);
        labelStripeKey2->setObjectName(QString::fromUtf8("labelStripeKey2"));

        verticalLayout_3->addWidget(labelStripeKey2);

        layoutWidget_2 = new QWidget(groupBoxStripe);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(180, 30, 301, 86));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEditStripeKey = new QLineEdit(layoutWidget_2);
        lineEditStripeKey->setObjectName(QString::fromUtf8("lineEditStripeKey"));

        verticalLayout_4->addWidget(lineEditStripeKey);

        lineEditStripeKey2 = new QLineEdit(layoutWidget_2);
        lineEditStripeKey2->setObjectName(QString::fromUtf8("lineEditStripeKey2"));

        verticalLayout_4->addWidget(lineEditStripeKey2);

        layoutWidget_3 = new QWidget(groupBoxStripe);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(180, 110, 301, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxStripe = new QCheckBox(layoutWidget_3);
        checkBoxStripe->setObjectName(QString::fromUtf8("checkBoxStripe"));

        horizontalLayout_2->addWidget(checkBoxStripe);

        pushButtonStripe = new QPushButton(layoutWidget_3);
        pushButtonStripe->setObjectName(QString::fromUtf8("pushButtonStripe"));

        horizontalLayout_2->addWidget(pushButtonStripe);

        groupBoxEmail = new QGroupBox(Paymentdlg);
        groupBoxEmail->setObjectName(QString::fromUtf8("groupBoxEmail"));
        groupBoxEmail->setGeometry(QRect(1090, 100, 681, 221));
        pushButtonEmail = new QPushButton(groupBoxEmail);
        pushButtonEmail->setObjectName(QString::fromUtf8("pushButtonEmail"));
        pushButtonEmail->setGeometry(QRect(330, 180, 146, 29));
        groupBoxPayU = new QGroupBox(Paymentdlg);
        groupBoxPayU->setObjectName(QString::fromUtf8("groupBoxPayU"));
        groupBoxPayU->setGeometry(QRect(10, 270, 521, 191));
        layoutWidget_4 = new QWidget(groupBoxPayU);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 30, 131, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelPayUId = new QLabel(layoutWidget_4);
        labelPayUId->setObjectName(QString::fromUtf8("labelPayUId"));

        verticalLayout_7->addWidget(labelPayUId);

        labelPayUKey = new QLabel(layoutWidget_4);
        labelPayUKey->setObjectName(QString::fromUtf8("labelPayUKey"));

        verticalLayout_7->addWidget(labelPayUKey);

        layoutWidget_5 = new QWidget(groupBoxPayU);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(180, 30, 301, 71));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEditPayUID = new QLineEdit(layoutWidget_5);
        lineEditPayUID->setObjectName(QString::fromUtf8("lineEditPayUID"));

        verticalLayout_8->addWidget(lineEditPayUID);

        lineEditPayUKey = new QLineEdit(layoutWidget_5);
        lineEditPayUKey->setObjectName(QString::fromUtf8("lineEditPayUKey"));

        verticalLayout_8->addWidget(lineEditPayUKey);

        layoutWidget_6 = new QWidget(groupBoxPayU);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(180, 150, 301, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBoxPayU = new QCheckBox(layoutWidget_6);
        checkBoxPayU->setObjectName(QString::fromUtf8("checkBoxPayU"));

        horizontalLayout_3->addWidget(checkBoxPayU);

        pushButtonPayU = new QPushButton(layoutWidget_6);
        pushButtonPayU->setObjectName(QString::fromUtf8("pushButtonPayU"));

        horizontalLayout_3->addWidget(pushButtonPayU);

        labelPayUSalt = new QLabel(groupBoxPayU);
        labelPayUSalt->setObjectName(QString::fromUtf8("labelPayUSalt"));
        labelPayUSalt->setGeometry(QRect(10, 110, 129, 26));
        lineEditPayUSalt = new QLineEdit(groupBoxPayU);
        lineEditPayUSalt->setObjectName(QString::fromUtf8("lineEditPayUSalt"));
        lineEditPayUSalt->setGeometry(QRect(180, 110, 301, 25));
        groupBoxRazor = new QGroupBox(Paymentdlg);
        groupBoxRazor->setObjectName(QString::fromUtf8("groupBoxRazor"));
        groupBoxRazor->setGeometry(QRect(540, 280, 521, 171));
        layoutWidget_7 = new QWidget(groupBoxRazor);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 40, 131, 61));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        labelRazorKey = new QLabel(layoutWidget_7);
        labelRazorKey->setObjectName(QString::fromUtf8("labelRazorKey"));

        verticalLayout_9->addWidget(labelRazorKey);

        labelRazorKey2 = new QLabel(layoutWidget_7);
        labelRazorKey2->setObjectName(QString::fromUtf8("labelRazorKey2"));

        verticalLayout_9->addWidget(labelRazorKey2);

        layoutWidget_8 = new QWidget(groupBoxRazor);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(180, 30, 301, 71));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        lineEditRazorKey = new QLineEdit(layoutWidget_8);
        lineEditRazorKey->setObjectName(QString::fromUtf8("lineEditRazorKey"));

        verticalLayout_10->addWidget(lineEditRazorKey);

        lineEditRazorKey2 = new QLineEdit(layoutWidget_8);
        lineEditRazorKey2->setObjectName(QString::fromUtf8("lineEditRazorKey2"));

        verticalLayout_10->addWidget(lineEditRazorKey2);

        layoutWidget_9 = new QWidget(groupBoxRazor);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(180, 110, 301, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxRazor = new QCheckBox(layoutWidget_9);
        checkBoxRazor->setObjectName(QString::fromUtf8("checkBoxRazor"));

        horizontalLayout_4->addWidget(checkBoxRazor);

        pushButtonRazor = new QPushButton(layoutWidget_9);
        pushButtonRazor->setObjectName(QString::fromUtf8("pushButtonRazor"));

        horizontalLayout_4->addWidget(pushButtonRazor);

        groupBoxShip = new QGroupBox(Paymentdlg);
        groupBoxShip->setObjectName(QString::fromUtf8("groupBoxShip"));
        groupBoxShip->setGeometry(QRect(1260, 330, 551, 221));
        textEditShipAdress = new QTextEdit(groupBoxShip);
        textEditShipAdress->setObjectName(QString::fromUtf8("textEditShipAdress"));
        textEditShipAdress->setGeometry(QRect(220, 20, 311, 91));
        pushButtonShip = new QPushButton(groupBoxShip);
        pushButtonShip->setObjectName(QString::fromUtf8("pushButtonShip"));
        pushButtonShip->setGeometry(QRect(330, 190, 161, 29));
        labelShipAdress = new QLabel(groupBoxShip);
        labelShipAdress->setObjectName(QString::fromUtf8("labelShipAdress"));
        labelShipAdress->setGeometry(QRect(20, 50, 107, 20));
        layoutWidget4 = new QWidget(groupBoxShip);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(220, 120, 311, 61));
        verticalLayout_11 = new QVBoxLayout(layoutWidget4);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        lineEditShipEmail = new QLineEdit(layoutWidget4);
        lineEditShipEmail->setObjectName(QString::fromUtf8("lineEditShipEmail"));

        verticalLayout_11->addWidget(lineEditShipEmail);

        lineEditShipPhone = new QLineEdit(layoutWidget4);
        lineEditShipPhone->setObjectName(QString::fromUtf8("lineEditShipPhone"));

        verticalLayout_11->addWidget(lineEditShipPhone);

        layoutWidget5 = new QWidget(groupBoxShip);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 120, 141, 61));
        verticalLayout_12 = new QVBoxLayout(layoutWidget5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelShipEmail = new QLabel(layoutWidget5);
        labelShipEmail->setObjectName(QString::fromUtf8("labelShipEmail"));

        verticalLayout_12->addWidget(labelShipEmail);

        labelShipPhone = new QLabel(layoutWidget5);
        labelShipPhone->setObjectName(QString::fromUtf8("labelShipPhone"));

        verticalLayout_12->addWidget(labelShipPhone);

        groupBox_Business = new QGroupBox(Paymentdlg);
        groupBox_Business->setObjectName(QString::fromUtf8("groupBox_Business"));
        groupBox_Business->setGeometry(QRect(10, 460, 521, 391));
        layoutWidget_10 = new QWidget(groupBox_Business);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 30, 151, 291));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        labelON = new QLabel(layoutWidget_10);
        labelON->setObjectName(QString::fromUtf8("labelON"));

        verticalLayout_14->addWidget(labelON);

        label_Adress = new QLabel(layoutWidget_10);
        label_Adress->setObjectName(QString::fromUtf8("label_Adress"));

        verticalLayout_14->addWidget(label_Adress);

        label_Pin = new QLabel(layoutWidget_10);
        label_Pin->setObjectName(QString::fromUtf8("label_Pin"));

        verticalLayout_14->addWidget(label_Pin);

        label_PH1 = new QLabel(layoutWidget_10);
        label_PH1->setObjectName(QString::fromUtf8("label_PH1"));

        verticalLayout_14->addWidget(label_PH1);

        label_PH2 = new QLabel(layoutWidget_10);
        label_PH2->setObjectName(QString::fromUtf8("label_PH2"));

        verticalLayout_14->addWidget(label_PH2);

        label_Fax = new QLabel(layoutWidget_10);
        label_Fax->setObjectName(QString::fromUtf8("label_Fax"));

        verticalLayout_14->addWidget(label_Fax);

        label_Web = new QLabel(layoutWidget_10);
        label_Web->setObjectName(QString::fromUtf8("label_Web"));

        verticalLayout_14->addWidget(label_Web);

        layoutWidget_11 = new QWidget(groupBox_Business);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(160, 30, 351, 301));
        verticalLayout_15 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        lineEditON = new QLineEdit(layoutWidget_11);
        lineEditON->setObjectName(QString::fromUtf8("lineEditON"));

        verticalLayout_15->addWidget(lineEditON);

        lineEdit_Adress = new QLineEdit(layoutWidget_11);
        lineEdit_Adress->setObjectName(QString::fromUtf8("lineEdit_Adress"));

        verticalLayout_15->addWidget(lineEdit_Adress);

        lineEdit_Pin = new QLineEdit(layoutWidget_11);
        lineEdit_Pin->setObjectName(QString::fromUtf8("lineEdit_Pin"));

        verticalLayout_15->addWidget(lineEdit_Pin);

        lineEdit_Ph1 = new QLineEdit(layoutWidget_11);
        lineEdit_Ph1->setObjectName(QString::fromUtf8("lineEdit_Ph1"));

        verticalLayout_15->addWidget(lineEdit_Ph1);

        lineEdit_Ph1_2 = new QLineEdit(layoutWidget_11);
        lineEdit_Ph1_2->setObjectName(QString::fromUtf8("lineEdit_Ph1_2"));

        verticalLayout_15->addWidget(lineEdit_Ph1_2);

        lineEdit_fax = new QLineEdit(layoutWidget_11);
        lineEdit_fax->setObjectName(QString::fromUtf8("lineEdit_fax"));

        verticalLayout_15->addWidget(lineEdit_fax);

        lineEdit_Web = new QLineEdit(layoutWidget_11);
        lineEdit_Web->setObjectName(QString::fromUtf8("lineEdit_Web"));

        verticalLayout_15->addWidget(lineEdit_Web);

        pushButtonBusiness = new QPushButton(groupBox_Business);
        pushButtonBusiness->setObjectName(QString::fromUtf8("pushButtonBusiness"));
        pushButtonBusiness->setGeometry(QRect(220, 340, 201, 29));
        groupBox_Bank = new QGroupBox(Paymentdlg);
        groupBox_Bank->setObjectName(QString::fromUtf8("groupBox_Bank"));
        groupBox_Bank->setGeometry(QRect(540, 460, 701, 471));
        layoutWidget6 = new QWidget(groupBox_Bank);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 30, 231, 141));
        verticalLayout_18 = new QVBoxLayout(layoutWidget6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        labelBankName = new QLabel(layoutWidget6);
        labelBankName->setObjectName(QString::fromUtf8("labelBankName"));

        verticalLayout_18->addWidget(labelBankName);

        label_account = new QLabel(layoutWidget6);
        label_account->setObjectName(QString::fromUtf8("label_account"));

        verticalLayout_18->addWidget(label_account);

        label_ifsc = new QLabel(layoutWidget6);
        label_ifsc->setObjectName(QString::fromUtf8("label_ifsc"));

        verticalLayout_18->addWidget(label_ifsc);

        label_order = new QLabel(layoutWidget6);
        label_order->setObjectName(QString::fromUtf8("label_order"));

        verticalLayout_18->addWidget(label_order);

        layoutWidget7 = new QWidget(groupBox_Bank);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(290, 30, 341, 111));
        verticalLayout_17 = new QVBoxLayout(layoutWidget7);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        lineEditBankName = new QLineEdit(layoutWidget7);
        lineEditBankName->setObjectName(QString::fromUtf8("lineEditBankName"));

        verticalLayout_17->addWidget(lineEditBankName);

        lineEdit_Accoutntno = new QLineEdit(layoutWidget7);
        lineEdit_Accoutntno->setObjectName(QString::fromUtf8("lineEdit_Accoutntno"));

        verticalLayout_17->addWidget(lineEdit_Accoutntno);

        lineEdit_ifsc = new QLineEdit(layoutWidget7);
        lineEdit_ifsc->setObjectName(QString::fromUtf8("lineEdit_ifsc"));

        verticalLayout_17->addWidget(lineEdit_ifsc);

        layoutWidget8 = new QWidget(groupBox_Bank);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 170, 244, 238));
        verticalLayout_16 = new QVBoxLayout(layoutWidget8);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget8);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_16->addWidget(label_5);

        label_6 = new QLabel(layoutWidget8);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_16->addWidget(label_6);

        label_7 = new QLabel(layoutWidget8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_16->addWidget(label_7);

        label_10 = new QLabel(layoutWidget8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_16->addWidget(label_10);

        label_11 = new QLabel(layoutWidget8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_16->addWidget(label_11);

        label_12 = new QLabel(layoutWidget8);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_16->addWidget(label_12);

        label_13 = new QLabel(layoutWidget8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_16->addWidget(label_13);

        label_9 = new QLabel(layoutWidget8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_16->addWidget(label_9);

        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_16->addWidget(label_8);

        checkBoxBank = new QCheckBox(groupBox_Bank);
        checkBoxBank->setObjectName(QString::fromUtf8("checkBoxBank"));
        checkBoxBank->setGeometry(QRect(280, 400, 181, 24));
        pushButtonBank = new QPushButton(groupBox_Bank);
        pushButtonBank->setObjectName(QString::fromUtf8("pushButtonBank"));
        pushButtonBank->setGeometry(QRect(485, 400, 121, 29));
        textEditOrderDaetials = new QTextEdit(groupBox_Bank);
        textEditOrderDaetials->setObjectName(QString::fromUtf8("textEditOrderDaetials"));
        textEditOrderDaetials->setGeometry(QRect(280, 170, 351, 231));
        layoutWidget9 = new QWidget(Paymentdlg);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(1120, 130, 211, 141));
        verticalLayout_5 = new QVBoxLayout(layoutWidget9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelAE = new QLabel(layoutWidget9);
        labelAE->setObjectName(QString::fromUtf8("labelAE"));

        verticalLayout_5->addWidget(labelAE);

        labelBE = new QLabel(layoutWidget9);
        labelBE->setObjectName(QString::fromUtf8("labelBE"));

        verticalLayout_5->addWidget(labelBE);

        labelSE = new QLabel(layoutWidget9);
        labelSE->setObjectName(QString::fromUtf8("labelSE"));

        verticalLayout_5->addWidget(labelSE);

        labelDE = new QLabel(layoutWidget9);
        labelDE->setObjectName(QString::fromUtf8("labelDE"));

        verticalLayout_5->addWidget(labelDE);

        layoutWidget10 = new QWidget(Paymentdlg);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(1340, 130, 361, 141));
        verticalLayout_6 = new QVBoxLayout(layoutWidget10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEditAE = new QLineEdit(layoutWidget10);
        lineEditAE->setObjectName(QString::fromUtf8("lineEditAE"));

        verticalLayout_6->addWidget(lineEditAE);

        lineEditBE = new QLineEdit(layoutWidget10);
        lineEditBE->setObjectName(QString::fromUtf8("lineEditBE"));

        verticalLayout_6->addWidget(lineEditBE);

        lineEditSE = new QLineEdit(layoutWidget10);
        lineEditSE->setObjectName(QString::fromUtf8("lineEditSE"));

        verticalLayout_6->addWidget(lineEditSE);

        lineEditDE = new QLineEdit(layoutWidget10);
        lineEditDE->setObjectName(QString::fromUtf8("lineEditDE"));

        verticalLayout_6->addWidget(lineEditDE);


        retranslateUi(Paymentdlg);

        QMetaObject::connectSlotsByName(Paymentdlg);
    } // setupUi

    void retranslateUi(QDialog *Paymentdlg)
    {
        Paymentdlg->setWindowTitle(QCoreApplication::translate("Paymentdlg", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Paymentdlg", "Select Company", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Paymentdlg", "GroupBox", nullptr));
        radioButtonPayPal->setText(QCoreApplication::translate("Paymentdlg", "PayPal Money", nullptr));
        radioButton_Stripe->setText(QCoreApplication::translate("Paymentdlg", "Stripe", nullptr));
        radioButton_PayUMoney->setText(QCoreApplication::translate("Paymentdlg", "PayUMoney", nullptr));
        radioButton_RazorPay->setText(QCoreApplication::translate("Paymentdlg", "RazorPay", nullptr));
        radioButton_Email->setText(QCoreApplication::translate("Paymentdlg", "Email Settings", nullptr));
        radioButton_Business->setText(QCoreApplication::translate("Paymentdlg", "Business Settings", nullptr));
        radioButton_Bank->setText(QCoreApplication::translate("Paymentdlg", "Bank Details", nullptr));
        radioButton_Shipping->setText(QCoreApplication::translate("Paymentdlg", "Shipping Detials", nullptr));
        groupBoxPayPal->setTitle(QCoreApplication::translate("Paymentdlg", "PayPal Settings", nullptr));
        labelPayPalID->setText(QCoreApplication::translate("Paymentdlg", "Client Id", nullptr));
        labelPayPalKey->setText(QCoreApplication::translate("Paymentdlg", "Clinet Secret Key", nullptr));
        checkBoxPayPal->setText(QCoreApplication::translate("Paymentdlg", "Enable PayPal", nullptr));
        pushButtonPayPal->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        groupBoxStripe->setTitle(QCoreApplication::translate("Paymentdlg", "Stripe Settings", nullptr));
        labelStripeKey->setText(QCoreApplication::translate("Paymentdlg", "Secret Key", nullptr));
        labelStripeKey2->setText(QCoreApplication::translate("Paymentdlg", "Clinet Secret Key", nullptr));
        checkBoxStripe->setText(QCoreApplication::translate("Paymentdlg", "Enable Stripe", nullptr));
        pushButtonStripe->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        groupBoxEmail->setTitle(QCoreApplication::translate("Paymentdlg", "Email Settings", nullptr));
        pushButtonEmail->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        groupBoxPayU->setTitle(QCoreApplication::translate("Paymentdlg", "PayUMoney Settings", nullptr));
        labelPayUId->setText(QCoreApplication::translate("Paymentdlg", "Merchent Id", nullptr));
        labelPayUKey->setText(QCoreApplication::translate("Paymentdlg", "Merchent Key", nullptr));
        checkBoxPayU->setText(QCoreApplication::translate("Paymentdlg", "Enable PayUMoney", nullptr));
        pushButtonPayU->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        labelPayUSalt->setText(QCoreApplication::translate("Paymentdlg", "Salt", nullptr));
        groupBoxRazor->setTitle(QCoreApplication::translate("Paymentdlg", "RazorPay Settings", nullptr));
        labelRazorKey->setText(QCoreApplication::translate("Paymentdlg", " Key ID", nullptr));
        labelRazorKey2->setText(QCoreApplication::translate("Paymentdlg", " Key Secret", nullptr));
        checkBoxRazor->setText(QCoreApplication::translate("Paymentdlg", "Enable RazorPay", nullptr));
        pushButtonRazor->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        groupBoxShip->setTitle(QCoreApplication::translate("Paymentdlg", "Shipping Details", nullptr));
        pushButtonShip->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        labelShipAdress->setText(QCoreApplication::translate("Paymentdlg", "Shipping Adress", nullptr));
        labelShipEmail->setText(QCoreApplication::translate("Paymentdlg", "Email Adress", nullptr));
        labelShipPhone->setText(QCoreApplication::translate("Paymentdlg", "Phone Number", nullptr));
        groupBox_Business->setTitle(QCoreApplication::translate("Paymentdlg", "Business Settings", nullptr));
        labelON->setText(QCoreApplication::translate("Paymentdlg", "Organization Name", nullptr));
        label_Adress->setText(QCoreApplication::translate("Paymentdlg", "Adress", nullptr));
        label_Pin->setText(QCoreApplication::translate("Paymentdlg", "Pin Code", nullptr));
        label_PH1->setText(QCoreApplication::translate("Paymentdlg", "Phone 1", nullptr));
        label_PH2->setText(QCoreApplication::translate("Paymentdlg", "Phone 2", nullptr));
        label_Fax->setText(QCoreApplication::translate("Paymentdlg", "Fax No", nullptr));
        label_Web->setText(QCoreApplication::translate("Paymentdlg", "Web Site", nullptr));
        pushButtonBusiness->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        groupBox_Bank->setTitle(QCoreApplication::translate("Paymentdlg", "Bank Details", nullptr));
        labelBankName->setText(QCoreApplication::translate("Paymentdlg", "Bank Name", nullptr));
        label_account->setText(QCoreApplication::translate("Paymentdlg", "Account No", nullptr));
        label_ifsc->setText(QCoreApplication::translate("Paymentdlg", "SWIFT |IFSC Code and", nullptr));
        label_order->setText(QCoreApplication::translate("Paymentdlg", "Order Request", nullptr));
        label_5->setText(QCoreApplication::translate("Paymentdlg", "Content", nullptr));
        label_6->setText(QCoreApplication::translate("Paymentdlg", "OderId=%orderid%", nullptr));
        label_7->setText(QCoreApplication::translate("Paymentdlg", "Product Name =% produsctname%", nullptr));
        label_10->setText(QCoreApplication::translate("Paymentdlg", "Order Amount =%ordeamount%", nullptr));
        label_11->setText(QCoreApplication::translate("Paymentdlg", "Account no=%accountno%", nullptr));
        label_12->setText(QCoreApplication::translate("Paymentdlg", "ifsc code =%ifsc code%", nullptr));
        label_13->setText(QCoreApplication::translate("Paymentdlg", "compayn name=%company name%", nullptr));
        label_9->setText(QCoreApplication::translate("Paymentdlg", "Bank Name =%bankname%", nullptr));
        label_8->setText(QCoreApplication::translate("Paymentdlg", "Shipping adress =%shippingadress%", nullptr));
        checkBoxBank->setText(QCoreApplication::translate("Paymentdlg", "Enable Bank Transfer", nullptr));
        pushButtonBank->setText(QCoreApplication::translate("Paymentdlg", "Save Settings", nullptr));
        labelAE->setText(QCoreApplication::translate("Paymentdlg", "Admin Email", nullptr));
        labelBE->setText(QCoreApplication::translate("Paymentdlg", "Business Email", nullptr));
        labelSE->setText(QCoreApplication::translate("Paymentdlg", "Support Email", nullptr));
        labelDE->setText(QCoreApplication::translate("Paymentdlg", "Default Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paymentdlg: public Ui_Paymentdlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENTDLG_H
