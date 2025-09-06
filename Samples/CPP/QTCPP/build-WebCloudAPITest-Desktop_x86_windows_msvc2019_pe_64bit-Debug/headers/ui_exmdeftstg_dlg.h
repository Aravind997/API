/********************************************************************************
** Form generated from reading UI file 'exmdeftstg_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXMDEFTSTG_DLG_H
#define UI_EXMDEFTSTG_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_exmdeftstg_Dlg
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *exmdeftstg_Dlg)
    {
        if (exmdeftstg_Dlg->objectName().isEmpty())
            exmdeftstg_Dlg->setObjectName(QString::fromUtf8("exmdeftstg_Dlg"));
        exmdeftstg_Dlg->resize(310, 177);
        label = new QLabel(exmdeftstg_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 121, 16));
        lineEdit = new QLineEdit(exmdeftstg_Dlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 50, 113, 24));
        pushButton = new QPushButton(exmdeftstg_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 110, 80, 24));
        pushButton_2 = new QPushButton(exmdeftstg_Dlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 110, 80, 24));

        retranslateUi(exmdeftstg_Dlg);

        QMetaObject::connectSlotsByName(exmdeftstg_Dlg);
    } // setupUi

    void retranslateUi(QDialog *exmdeftstg_Dlg)
    {
        exmdeftstg_Dlg->setWindowTitle(QCoreApplication::translate("exmdeftstg_Dlg", "ExamDefaultSettings", nullptr));
        label->setText(QCoreApplication::translate("exmdeftstg_Dlg", "Default Question No", nullptr));
        pushButton->setText(QCoreApplication::translate("exmdeftstg_Dlg", "Reset", nullptr));
        pushButton_2->setText(QCoreApplication::translate("exmdeftstg_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exmdeftstg_Dlg: public Ui_exmdeftstg_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXMDEFTSTG_DLG_H
