/********************************************************************************
** Form generated from reading UI file 'getallcompaniesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLCOMPANIESDIALOG_H
#define UI_GETALLCOMPANIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_GetAllCompaniesDialog
{
public:
    QGroupBox *groupBoxComboAll;
    QLabel *label;
    QComboBox *comboBoxSelectCo;
    QGroupBox *groupBox;
    QListWidget *listWidget;

    void setupUi(QDialog *GetAllCompaniesDialog)
    {
        if (GetAllCompaniesDialog->objectName().isEmpty())
            GetAllCompaniesDialog->setObjectName(QString::fromUtf8("GetAllCompaniesDialog"));
        GetAllCompaniesDialog->resize(969, 559);
        groupBoxComboAll = new QGroupBox(GetAllCompaniesDialog);
        groupBoxComboAll->setObjectName(QString::fromUtf8("groupBoxComboAll"));
        groupBoxComboAll->setGeometry(QRect(20, 30, 931, 511));
        label = new QLabel(groupBoxComboAll);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 201, 20));
        comboBoxSelectCo = new QComboBox(groupBoxComboAll);
        comboBoxSelectCo->setObjectName(QString::fromUtf8("comboBoxSelectCo"));
        comboBoxSelectCo->setGeometry(QRect(390, 70, 321, 25));
        groupBox = new QGroupBox(groupBoxComboAll);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 170, 901, 331));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 871, 291));

        retranslateUi(GetAllCompaniesDialog);

        QMetaObject::connectSlotsByName(GetAllCompaniesDialog);
    } // setupUi

    void retranslateUi(QDialog *GetAllCompaniesDialog)
    {
        GetAllCompaniesDialog->setWindowTitle(QCoreApplication::translate("GetAllCompaniesDialog", "Get All Compnies Details", nullptr));
        groupBoxComboAll->setTitle(QCoreApplication::translate("GetAllCompaniesDialog", "Companies Detials", nullptr));
        label->setText(QCoreApplication::translate("GetAllCompaniesDialog", "Select Companies", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllCompaniesDialog", "Companie Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllCompaniesDialog: public Ui_GetAllCompaniesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLCOMPANIESDIALOG_H
