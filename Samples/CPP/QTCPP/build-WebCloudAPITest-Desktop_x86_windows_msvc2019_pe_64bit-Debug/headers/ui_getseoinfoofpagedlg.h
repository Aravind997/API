/********************************************************************************
** Form generated from reading UI file 'getseoinfoofpagedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSEOINFOOFPAGEDLG_H
#define UI_GETSEOINFOOFPAGEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetSeoInfoOfPageDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QComboBox *comboBoxMenuID;
    QGroupBox *groupBox_3;
    QListWidget *listItem;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetSeoInfoOfPageDlg)
    {
        if (GetSeoInfoOfPageDlg->objectName().isEmpty())
            GetSeoInfoOfPageDlg->setObjectName(QString::fromUtf8("GetSeoInfoOfPageDlg"));
        GetSeoInfoOfPageDlg->resize(740, 423);
        groupBox = new QGroupBox(GetSeoInfoOfPageDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 721, 371));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 701, 81));
        comboBoxMenuID = new QComboBox(groupBox_2);
        comboBoxMenuID->setObjectName(QString::fromUtf8("comboBoxMenuID"));
        comboBoxMenuID->setGeometry(QRect(300, 30, 171, 22));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 120, 691, 241));
        listItem = new QListWidget(groupBox_3);
        listItem->setObjectName(QString::fromUtf8("listItem"));
        listItem->setGeometry(QRect(20, 20, 651, 201));
        pushButtonClose = new QPushButton(GetSeoInfoOfPageDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(590, 390, 91, 24));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(GetSeoInfoOfPageDlg);

        QMetaObject::connectSlotsByName(GetSeoInfoOfPageDlg);
    } // setupUi

    void retranslateUi(QDialog *GetSeoInfoOfPageDlg)
    {
        GetSeoInfoOfPageDlg->setWindowTitle(QCoreApplication::translate("GetSeoInfoOfPageDlg", "Get Seo Page Info", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetSeoInfoOfPageDlg", "SEO Page Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetSeoInfoOfPageDlg", "Select Menu ID", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetSeoInfoOfPageDlg", "SEO Details", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetSeoInfoOfPageDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetSeoInfoOfPageDlg: public Ui_GetSeoInfoOfPageDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSEOINFOOFPAGEDLG_H
