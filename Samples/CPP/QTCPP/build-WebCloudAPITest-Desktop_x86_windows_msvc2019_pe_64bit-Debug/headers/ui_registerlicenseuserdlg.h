/********************************************************************************
** Form generated from reading UI file 'registerlicenseuserdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERLICENSEUSERDLG_H
#define UI_REGISTERLICENSEUSERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterLicenseUserDlg
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *CancelButton;
    QPushButton *RegisterButton;
    QPushButton *ValidateButton;
    QPushButton *BuyButton;

    void setupUi(QDialog *RegisterLicenseUserDlg)
    {
        if (RegisterLicenseUserDlg->objectName().isEmpty())
            RegisterLicenseUserDlg->setObjectName(QString::fromUtf8("RegisterLicenseUserDlg"));
        RegisterLicenseUserDlg->resize(710, 576);
        groupBox = new QGroupBox(RegisterLicenseUserDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 661, 491));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 311, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 321, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 311, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 190, 311, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 240, 301, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 290, 301, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 340, 301, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 390, 301, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 440, 301, 31));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(340, 40, 291, 31));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 90, 291, 31));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(340, 140, 291, 31));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(340, 190, 291, 31));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(340, 240, 291, 31));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(340, 290, 291, 31));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(340, 340, 291, 31));
        lineEdit_5->setReadOnly(false);
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(340, 390, 291, 31));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(340, 440, 291, 31));
        CancelButton = new QPushButton(RegisterLicenseUserDlg);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(590, 520, 91, 31));
        RegisterButton = new QPushButton(RegisterLicenseUserDlg);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(480, 520, 91, 31));
        ValidateButton = new QPushButton(RegisterLicenseUserDlg);
        ValidateButton->setObjectName(QString::fromUtf8("ValidateButton"));
        ValidateButton->setGeometry(QRect(370, 520, 91, 31));
        BuyButton = new QPushButton(RegisterLicenseUserDlg);
        BuyButton->setObjectName(QString::fromUtf8("BuyButton"));
        BuyButton->setGeometry(QRect(260, 520, 91, 31));

        retranslateUi(RegisterLicenseUserDlg);

        QMetaObject::connectSlotsByName(RegisterLicenseUserDlg);
    } // setupUi

    void retranslateUi(QDialog *RegisterLicenseUserDlg)
    {
        RegisterLicenseUserDlg->setWindowTitle(QCoreApplication::translate("RegisterLicenseUserDlg", "FormRegister", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterLicenseUserDlg", "Enter Your Registration Details", nullptr));
        label->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Select the Product*              :                                                  ", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "URL                                   :", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Your Name*                       :", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Your Phone Number*          :                                                 ", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Your Email_ID*                  :", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Select License option*         :", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Machine Unique ID             :", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Registration Key                 :", nullptr));
        label_9->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Your Address                    :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("RegisterLicenseUserDlg", "Desktop Streamer", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("RegisterLicenseUserDlg", "WebCloud", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("RegisterLicenseUserDlg", "Desktop Streamer", nullptr));
        lineEdit->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "http://webcloudtest.virtualtutor.co.in", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("RegisterLicenseUserDlg", "Trial", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("RegisterLicenseUserDlg", "One Time", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("RegisterLicenseUserDlg", "Subscription", nullptr));

        CancelButton->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Cancel", nullptr));
        RegisterButton->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Register", nullptr));
        ValidateButton->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Validate", nullptr));
        BuyButton->setText(QCoreApplication::translate("RegisterLicenseUserDlg", "Buy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterLicenseUserDlg: public Ui_RegisterLicenseUserDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERLICENSEUSERDLG_H
