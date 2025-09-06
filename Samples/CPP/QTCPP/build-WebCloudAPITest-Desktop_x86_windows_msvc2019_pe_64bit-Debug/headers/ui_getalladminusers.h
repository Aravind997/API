/********************************************************************************
** Form generated from reading UI file 'getalladminusers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLADMINUSERS_H
#define UI_GETALLADMINUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetAllAdminUsers
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboAllAdminNameComm;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblAllAdminCtgryNameComm;
    QLabel *lblAllAdminEmailComm;
    QLabel *lblAllAdminPhComm;
    QLabel *lblAllAdminAddressComm;
    QPushButton *btnAllAdminCancelComm;

    void setupUi(QDialog *GetAllAdminUsers)
    {
        if (GetAllAdminUsers->objectName().isEmpty())
            GetAllAdminUsers->setObjectName(QString::fromUtf8("GetAllAdminUsers"));
        GetAllAdminUsers->resize(615, 536);
        groupBox = new QGroupBox(GetAllAdminUsers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 571, 111));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 63, 20));
        comboAllAdminNameComm = new QComboBox(groupBox);
        comboAllAdminNameComm->setObjectName(QString::fromUtf8("comboAllAdminNameComm"));
        comboAllAdminNameComm->setGeometry(QRect(130, 50, 431, 26));
        groupBox_2 = new QGroupBox(GetAllAdminUsers);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 170, 571, 291));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 111, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 120, 63, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 180, 71, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 240, 63, 20));
        lblAllAdminCtgryNameComm = new QLabel(groupBox_2);
        lblAllAdminCtgryNameComm->setObjectName(QString::fromUtf8("lblAllAdminCtgryNameComm"));
        lblAllAdminCtgryNameComm->setGeometry(QRect(190, 60, 150, 20));
        lblAllAdminEmailComm = new QLabel(groupBox_2);
        lblAllAdminEmailComm->setObjectName(QString::fromUtf8("lblAllAdminEmailComm"));
        lblAllAdminEmailComm->setGeometry(QRect(190, 120, 150, 20));
        lblAllAdminPhComm = new QLabel(groupBox_2);
        lblAllAdminPhComm->setObjectName(QString::fromUtf8("lblAllAdminPhComm"));
        lblAllAdminPhComm->setGeometry(QRect(190, 180, 150, 20));
        lblAllAdminAddressComm = new QLabel(groupBox_2);
        lblAllAdminAddressComm->setObjectName(QString::fromUtf8("lblAllAdminAddressComm"));
        lblAllAdminAddressComm->setGeometry(QRect(190, 240, 150, 20));
        btnAllAdminCancelComm = new QPushButton(GetAllAdminUsers);
        btnAllAdminCancelComm->setObjectName(QString::fromUtf8("btnAllAdminCancelComm"));
        btnAllAdminCancelComm->setGeometry(QRect(500, 480, 93, 29));

        retranslateUi(GetAllAdminUsers);

        QMetaObject::connectSlotsByName(GetAllAdminUsers);
    } // setupUi

    void retranslateUi(QDialog *GetAllAdminUsers)
    {
        GetAllAdminUsers->setWindowTitle(QCoreApplication::translate("GetAllAdminUsers", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllAdminUsers", "Select Name Of Admin User", nullptr));
        label->setText(QCoreApplication::translate("GetAllAdminUsers", "Name:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllAdminUsers", "User Info", nullptr));
        label_2->setText(QCoreApplication::translate("GetAllAdminUsers", "Category Name:", nullptr));
        label_3->setText(QCoreApplication::translate("GetAllAdminUsers", "Email ID:", nullptr));
        label_4->setText(QCoreApplication::translate("GetAllAdminUsers", "Phone No:", nullptr));
        label_5->setText(QCoreApplication::translate("GetAllAdminUsers", "Address:", nullptr));
        lblAllAdminCtgryNameComm->setText(QString());
        lblAllAdminEmailComm->setText(QString());
        lblAllAdminPhComm->setText(QString());
        lblAllAdminAddressComm->setText(QString());
        btnAllAdminCancelComm->setText(QCoreApplication::translate("GetAllAdminUsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllAdminUsers: public Ui_GetAllAdminUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLADMINUSERS_H
