/********************************************************************************
** Form generated from reading UI file 'ttdatasummaryinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTDATASUMMARYINFODLG_H
#define UI_TTDATASUMMARYINFODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TTDataSummaryInfoDlg
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *TTDataSummaryInfoDlg)
    {
        if (TTDataSummaryInfoDlg->objectName().isEmpty())
            TTDataSummaryInfoDlg->setObjectName(QString::fromUtf8("TTDataSummaryInfoDlg"));
        TTDataSummaryInfoDlg->resize(608, 300);
        groupBox = new QGroupBox(TTDataSummaryInfoDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 0, 551, 271));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 171, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 171, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 190, 171, 41));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(222, 50, 281, 41));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 120, 281, 41));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 183, 281, 41));

        retranslateUi(TTDataSummaryInfoDlg);

        QMetaObject::connectSlotsByName(TTDataSummaryInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *TTDataSummaryInfoDlg)
    {
        TTDataSummaryInfoDlg->setWindowTitle(QCoreApplication::translate("TTDataSummaryInfoDlg", "TTDataSummary", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TTDataSummaryInfoDlg", "Data Summary", nullptr));
        label->setText(QCoreApplication::translate("TTDataSummaryInfoDlg", "Today Hours             :", nullptr));
        label_2->setText(QCoreApplication::translate("TTDataSummaryInfoDlg", "This Week Hours       :", nullptr));
        label_3->setText(QCoreApplication::translate("TTDataSummaryInfoDlg", "This Month Hours      :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TTDataSummaryInfoDlg: public Ui_TTDataSummaryInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTDATASUMMARYINFODLG_H
