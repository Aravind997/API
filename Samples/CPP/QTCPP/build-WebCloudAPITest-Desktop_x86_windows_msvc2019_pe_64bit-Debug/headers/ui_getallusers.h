/********************************************************************************
** Form generated from reading UI file 'getallusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLUSERS_H
#define UI_GETALLUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetAllUsers
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *ComboAllUserNamesComm;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblAllUsersCtgryNameComm;
    QLabel *lblAllUsersEmailComm;
    QLabel *lblAllUsersPhoneComm;
    QLabel *lblAllUsersAddressComm;
    QPushButton *BtnAllUsersCancelComm;

    void setupUi(QDialog *GetAllUsers)
    {
        if (GetAllUsers->objectName().isEmpty())
            GetAllUsers->setObjectName(QString::fromUtf8("GetAllUsers"));
        GetAllUsers->resize(654, 465);
        groupBox = new QGroupBox(GetAllUsers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 60, 571, 91));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 81, 20));
        ComboAllUserNamesComm = new QComboBox(groupBox);
        ComboAllUserNamesComm->setObjectName(QString::fromUtf8("ComboAllUserNamesComm"));
        ComboAllUserNamesComm->setGeometry(QRect(160, 40, 381, 26));
        groupBox_2 = new QGroupBox(GetAllUsers);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 180, 571, 211));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(22, 40, 111, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(22, 80, 61, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(22, 120, 71, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(22, 160, 61, 20));
        lblAllUsersCtgryNameComm = new QLabel(groupBox_2);
        lblAllUsersCtgryNameComm->setObjectName(QString::fromUtf8("lblAllUsersCtgryNameComm"));
        lblAllUsersCtgryNameComm->setGeometry(QRect(170, 40, 201, 20));
        lblAllUsersEmailComm = new QLabel(groupBox_2);
        lblAllUsersEmailComm->setObjectName(QString::fromUtf8("lblAllUsersEmailComm"));
        lblAllUsersEmailComm->setGeometry(QRect(170, 80, 191, 20));
        lblAllUsersPhoneComm = new QLabel(groupBox_2);
        lblAllUsersPhoneComm->setObjectName(QString::fromUtf8("lblAllUsersPhoneComm"));
        lblAllUsersPhoneComm->setGeometry(QRect(170, 120, 191, 20));
        lblAllUsersAddressComm = new QLabel(groupBox_2);
        lblAllUsersAddressComm->setObjectName(QString::fromUtf8("lblAllUsersAddressComm"));
        lblAllUsersAddressComm->setGeometry(QRect(170, 160, 171, 20));
        BtnAllUsersCancelComm = new QPushButton(GetAllUsers);
        BtnAllUsersCancelComm->setObjectName(QString::fromUtf8("BtnAllUsersCancelComm"));
        BtnAllUsersCancelComm->setGeometry(QRect(520, 410, 93, 29));

        retranslateUi(GetAllUsers);

        QMetaObject::connectSlotsByName(GetAllUsers);
    } // setupUi

    void retranslateUi(QDialog *GetAllUsers)
    {
        GetAllUsers->setWindowTitle(QCoreApplication::translate("GetAllUsers", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllUsers", "Select Name Of User", nullptr));
        label->setText(QCoreApplication::translate("GetAllUsers", "Name:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllUsers", "User Info", nullptr));
        label_2->setText(QCoreApplication::translate("GetAllUsers", "Category Name:", nullptr));
        label_3->setText(QCoreApplication::translate("GetAllUsers", "Email ID:", nullptr));
        label_4->setText(QCoreApplication::translate("GetAllUsers", "Phone No:", nullptr));
        label_5->setText(QCoreApplication::translate("GetAllUsers", "Address:", nullptr));
        lblAllUsersCtgryNameComm->setText(QString());
        lblAllUsersEmailComm->setText(QString());
        lblAllUsersPhoneComm->setText(QString());
        lblAllUsersAddressComm->setText(QString());
        BtnAllUsersCancelComm->setText(QCoreApplication::translate("GetAllUsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllUsers: public Ui_GetAllUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLUSERS_H
