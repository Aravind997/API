/********************************************************************************
** Form generated from reading UI file 'getallonlineusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLONLINEUSERS_H
#define UI_GETALLONLINEUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetAllOnlineUsers
{
public:
    QGroupBox *groupBox;
    QListWidget *listOnlineUsersComm;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *lblOnlineUsersContnIdComm;
    QGroupBox *groupBox_4;
    QLabel *lblOnlineUsersUsrTypeComm;
    QGroupBox *groupBox_5;
    QLabel *lblOnlineUsersNameComm;
    QGroupBox *groupBox_6;
    QLabel *lblOnlineUsersPhNoComm;
    QGroupBox *groupBox_7;
    QLabel *lblOnlineUsersAddressComm;
    QPushButton *pushButton;

    void setupUi(QDialog *GetAllOnlineUsers)
    {
        if (GetAllOnlineUsers->objectName().isEmpty())
            GetAllOnlineUsers->setObjectName(QString::fromUtf8("GetAllOnlineUsers"));
        GetAllOnlineUsers->resize(647, 600);
        groupBox = new QGroupBox(GetAllOnlineUsers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 221, 481));
        listOnlineUsersComm = new QListWidget(groupBox);
        listOnlineUsersComm->setObjectName(QString::fromUtf8("listOnlineUsersComm"));
        listOnlineUsersComm->setGeometry(QRect(10, 40, 201, 431));
        groupBox_2 = new QGroupBox(GetAllOnlineUsers);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 50, 351, 481));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 40, 311, 61));
        lblOnlineUsersContnIdComm = new QLabel(groupBox_3);
        lblOnlineUsersContnIdComm->setObjectName(QString::fromUtf8("lblOnlineUsersContnIdComm"));
        lblOnlineUsersContnIdComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 110, 311, 80));
        lblOnlineUsersUsrTypeComm = new QLabel(groupBox_4);
        lblOnlineUsersUsrTypeComm->setObjectName(QString::fromUtf8("lblOnlineUsersUsrTypeComm"));
        lblOnlineUsersUsrTypeComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 200, 311, 80));
        lblOnlineUsersNameComm = new QLabel(groupBox_5);
        lblOnlineUsersNameComm->setObjectName(QString::fromUtf8("lblOnlineUsersNameComm"));
        lblOnlineUsersNameComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 290, 311, 71));
        lblOnlineUsersPhNoComm = new QLabel(groupBox_6);
        lblOnlineUsersPhNoComm->setObjectName(QString::fromUtf8("lblOnlineUsersPhNoComm"));
        lblOnlineUsersPhNoComm->setGeometry(QRect(100, 30, 150, 20));
        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 379, 311, 91));
        lblOnlineUsersAddressComm = new QLabel(groupBox_7);
        lblOnlineUsersAddressComm->setObjectName(QString::fromUtf8("lblOnlineUsersAddressComm"));
        lblOnlineUsersAddressComm->setGeometry(QRect(100, 30, 150, 41));
        pushButton = new QPushButton(GetAllOnlineUsers);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 550, 93, 29));

        retranslateUi(GetAllOnlineUsers);

        QMetaObject::connectSlotsByName(GetAllOnlineUsers);
    } // setupUi

    void retranslateUi(QDialog *GetAllOnlineUsers)
    {
        GetAllOnlineUsers->setWindowTitle(QCoreApplication::translate("GetAllOnlineUsers", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "Online Users", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "User Details", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "Connection ID", nullptr));
        lblOnlineUsersContnIdComm->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "User Type", nullptr));
        lblOnlineUsersUsrTypeComm->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "Name", nullptr));
        lblOnlineUsersNameComm->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "Phone Number", nullptr));
        lblOnlineUsersPhNoComm->setText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("GetAllOnlineUsers", "Address", nullptr));
        lblOnlineUsersAddressComm->setText(QString());
        pushButton->setText(QCoreApplication::translate("GetAllOnlineUsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllOnlineUsers: public Ui_GetAllOnlineUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLONLINEUSERS_H
