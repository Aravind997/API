/********************************************************************************
** Form generated from reading UI file 'getlicenseinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETLICENSEINFODLG_H
#define UI_GETLICENSEINFODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetLicenseInfoDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_3;
    QComboBox *comboBox;
    QPushButton *GetInfoButton;
    QGroupBox *groupBox_4;
    QListWidget *listWidget;

    void setupUi(QDialog *GetLicenseInfoDlg)
    {
        if (GetLicenseInfoDlg->objectName().isEmpty())
            GetLicenseInfoDlg->setObjectName(QString::fromUtf8("GetLicenseInfoDlg"));
        GetLicenseInfoDlg->resize(1039, 850);
        groupBox = new QGroupBox(GetLicenseInfoDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1001, 861));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 30, 391, 91));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 40, 351, 31));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(440, 30, 381, 91));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 40, 341, 31));
        GetInfoButton = new QPushButton(groupBox);
        GetInfoButton->setObjectName(QString::fromUtf8("GetInfoButton"));
        GetInfoButton->setGeometry(QRect(850, 50, 111, 61));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 140, 941, 621));
        listWidget = new QListWidget(groupBox_4);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 50, 881, 531));
        QWidget::setTabOrder(lineEdit_2, comboBox);
        QWidget::setTabOrder(comboBox, GetInfoButton);

        retranslateUi(GetLicenseInfoDlg);

        QMetaObject::connectSlotsByName(GetLicenseInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *GetLicenseInfoDlg)
    {
        GetLicenseInfoDlg->setWindowTitle(QCoreApplication::translate("GetLicenseInfoDlg", "Get License Info", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetLicenseInfoDlg", "YourDetails", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetLicenseInfoDlg", "MAC Address", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetLicenseInfoDlg", "Select Product", nullptr));
        GetInfoButton->setText(QCoreApplication::translate("GetLicenseInfoDlg", "Get Info", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("GetLicenseInfoDlg", "Your Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetLicenseInfoDlg: public Ui_GetLicenseInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETLICENSEINFODLG_H
