/********************************************************************************
** Form generated from reading UI file 'getallonlinesupportusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLONLINESUPPORTUSERS_H
#define UI_GETALLONLINESUPPORTUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetAllOnlineSupportUsers
{
public:
    QGroupBox *groupBox;
    QListWidget *listOnSupportComm;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *lblOnSupportCntnIdComm;
    QGroupBox *groupBox_4;
    QLabel *lblOnSupportUsrTypeComm;
    QGroupBox *groupBox_5;
    QLabel *lblOnSupportNameComm;
    QGroupBox *groupBox_6;
    QLabel *lblOnSupportPhComm;
    QGroupBox *groupBox_7;
    QLabel *lblOnSupportAddressComm;
    QPushButton *btnOnSupportClose;

    void setupUi(QDialog *GetAllOnlineSupportUsers)
    {
        if (GetAllOnlineSupportUsers->objectName().isEmpty())
            GetAllOnlineSupportUsers->setObjectName(QString::fromUtf8("GetAllOnlineSupportUsers"));
        GetAllOnlineSupportUsers->resize(593, 579);
        groupBox = new QGroupBox(GetAllOnlineSupportUsers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 211, 491));
        listOnSupportComm = new QListWidget(groupBox);
        listOnSupportComm->setObjectName(QString::fromUtf8("listOnSupportComm"));
        listOnSupportComm->setGeometry(QRect(10, 30, 191, 441));
        groupBox_2 = new QGroupBox(GetAllOnlineSupportUsers);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 30, 341, 491));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 30, 320, 80));
        lblOnSupportCntnIdComm = new QLabel(groupBox_3);
        lblOnSupportCntnIdComm->setObjectName(QString::fromUtf8("lblOnSupportCntnIdComm"));
        lblOnSupportCntnIdComm->setGeometry(QRect(110, 30, 150, 20));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 120, 320, 80));
        lblOnSupportUsrTypeComm = new QLabel(groupBox_4);
        lblOnSupportUsrTypeComm->setObjectName(QString::fromUtf8("lblOnSupportUsrTypeComm"));
        lblOnSupportUsrTypeComm->setGeometry(QRect(110, 30, 150, 20));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 210, 320, 80));
        lblOnSupportNameComm = new QLabel(groupBox_5);
        lblOnSupportNameComm->setObjectName(QString::fromUtf8("lblOnSupportNameComm"));
        lblOnSupportNameComm->setGeometry(QRect(110, 30, 150, 20));
        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 310, 320, 71));
        lblOnSupportPhComm = new QLabel(groupBox_6);
        lblOnSupportPhComm->setObjectName(QString::fromUtf8("lblOnSupportPhComm"));
        lblOnSupportPhComm->setGeometry(QRect(110, 30, 150, 20));
        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 390, 320, 80));
        lblOnSupportAddressComm = new QLabel(groupBox_7);
        lblOnSupportAddressComm->setObjectName(QString::fromUtf8("lblOnSupportAddressComm"));
        lblOnSupportAddressComm->setGeometry(QRect(110, 30, 150, 20));
        btnOnSupportClose = new QPushButton(GetAllOnlineSupportUsers);
        btnOnSupportClose->setObjectName(QString::fromUtf8("btnOnSupportClose"));
        btnOnSupportClose->setGeometry(QRect(480, 540, 93, 29));

        retranslateUi(GetAllOnlineSupportUsers);

        QMetaObject::connectSlotsByName(GetAllOnlineSupportUsers);
    } // setupUi

    void retranslateUi(QDialog *GetAllOnlineSupportUsers)
    {
        GetAllOnlineSupportUsers->setWindowTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "Online Support Users", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "User Details", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "Connection ID", nullptr));
        lblOnSupportCntnIdComm->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "User Type", nullptr));
        lblOnSupportUsrTypeComm->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "Name", nullptr));
        lblOnSupportNameComm->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "Phone Number", nullptr));
        lblOnSupportPhComm->setText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("GetAllOnlineSupportUsers", "Address", nullptr));
        lblOnSupportAddressComm->setText(QString());
        btnOnSupportClose->setText(QCoreApplication::translate("GetAllOnlineSupportUsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllOnlineSupportUsers: public Ui_GetAllOnlineSupportUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLONLINESUPPORTUSERS_H
