/********************************************************************************
** Form generated from reading UI file 'getallonlinenormalusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLONLINENORMALUSERS_H
#define UI_GETALLONLINENORMALUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetAllOnlineNormalUsers
{
public:
    QGroupBox *groupBox;
    QListWidget *listOnlnNormalComm;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *lblOnlnNormalCntnIdComm;
    QGroupBox *groupBox_4;
    QLabel *lblOnlnNormalUsrTypeComm;
    QGroupBox *groupBox_5;
    QLabel *lblOnlnNormalNameComm;
    QGroupBox *groupBox_6;
    QLabel *lblOnlnNormalPhComm;
    QGroupBox *groupBox_7;
    QLabel *lblOnlnNormalAddressComm;
    QPushButton *pushButton;

    void setupUi(QDialog *GetAllOnlineNormalUsers)
    {
        if (GetAllOnlineNormalUsers->objectName().isEmpty())
            GetAllOnlineNormalUsers->setObjectName(QString::fromUtf8("GetAllOnlineNormalUsers"));
        GetAllOnlineNormalUsers->resize(581, 566);
        groupBox = new QGroupBox(GetAllOnlineNormalUsers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 201, 481));
        listOnlnNormalComm = new QListWidget(groupBox);
        listOnlnNormalComm->setObjectName(QString::fromUtf8("listOnlnNormalComm"));
        listOnlnNormalComm->setGeometry(QRect(10, 30, 181, 431));
        groupBox_2 = new QGroupBox(GetAllOnlineNormalUsers);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 30, 331, 481));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 30, 301, 80));
        lblOnlnNormalCntnIdComm = new QLabel(groupBox_3);
        lblOnlnNormalCntnIdComm->setObjectName(QString::fromUtf8("lblOnlnNormalCntnIdComm"));
        lblOnlnNormalCntnIdComm->setGeometry(QRect(100, 40, 150, 20));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 110, 301, 80));
        lblOnlnNormalUsrTypeComm = new QLabel(groupBox_4);
        lblOnlnNormalUsrTypeComm->setObjectName(QString::fromUtf8("lblOnlnNormalUsrTypeComm"));
        lblOnlnNormalUsrTypeComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 200, 301, 80));
        lblOnlnNormalNameComm = new QLabel(groupBox_5);
        lblOnlnNormalNameComm->setObjectName(QString::fromUtf8("lblOnlnNormalNameComm"));
        lblOnlnNormalNameComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 290, 301, 80));
        lblOnlnNormalPhComm = new QLabel(groupBox_6);
        lblOnlnNormalPhComm->setObjectName(QString::fromUtf8("lblOnlnNormalPhComm"));
        lblOnlnNormalPhComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 380, 301, 80));
        lblOnlnNormalAddressComm = new QLabel(groupBox_7);
        lblOnlnNormalAddressComm->setObjectName(QString::fromUtf8("lblOnlnNormalAddressComm"));
        lblOnlnNormalAddressComm->setGeometry(QRect(100, 30, 150, 20));
        pushButton = new QPushButton(GetAllOnlineNormalUsers);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 520, 93, 29));

        retranslateUi(GetAllOnlineNormalUsers);

        QMetaObject::connectSlotsByName(GetAllOnlineNormalUsers);
    } // setupUi

    void retranslateUi(QDialog *GetAllOnlineNormalUsers)
    {
        GetAllOnlineNormalUsers->setWindowTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "Online Normal Users", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "User Details", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "Connection ID", nullptr));
        lblOnlnNormalCntnIdComm->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "User Type", nullptr));
        lblOnlnNormalUsrTypeComm->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "Name", nullptr));
        lblOnlnNormalNameComm->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "Phone Number", nullptr));
        lblOnlnNormalPhComm->setText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("GetAllOnlineNormalUsers", "Address", nullptr));
        lblOnlnNormalAddressComm->setText(QString());
        pushButton->setText(QCoreApplication::translate("GetAllOnlineNormalUsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllOnlineNormalUsers: public Ui_GetAllOnlineNormalUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLONLINENORMALUSERS_H
