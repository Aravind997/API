/********************************************************************************
** Form generated from reading UI file 'getdetailedpageinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETDETAILEDPAGEINFODLG_H
#define UI_GETDETAILEDPAGEINFODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetDetailedPageInfoDlg
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidgetMenu;
    QGroupBox *groupBox_2;
    QListWidget *listWidgetDetails;
    QListWidget *listWidgetDesc;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetDetailedPageInfoDlg)
    {
        if (GetDetailedPageInfoDlg->objectName().isEmpty())
            GetDetailedPageInfoDlg->setObjectName(QString::fromUtf8("GetDetailedPageInfoDlg"));
        GetDetailedPageInfoDlg->resize(826, 432);
        groupBox = new QGroupBox(GetDetailedPageInfoDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 291, 371));
        listWidgetMenu = new QListWidget(groupBox);
        listWidgetMenu->setObjectName(QString::fromUtf8("listWidgetMenu"));
        listWidgetMenu->setGeometry(QRect(10, 20, 271, 341));
        groupBox_2 = new QGroupBox(GetDetailedPageInfoDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 10, 491, 371));
        listWidgetDetails = new QListWidget(groupBox_2);
        listWidgetDetails->setObjectName(QString::fromUtf8("listWidgetDetails"));
        listWidgetDetails->setGeometry(QRect(10, 20, 471, 192));
        listWidgetDesc = new QListWidget(groupBox_2);
        listWidgetDesc->setObjectName(QString::fromUtf8("listWidgetDesc"));
        listWidgetDesc->setGeometry(QRect(10, 220, 471, 141));
        listWidgetDesc->setStyleSheet(QString::fromUtf8("\n"
"font: 600 16pt \"Segoe UI\";\n"
"\n"
""));
        listWidgetDesc->setViewMode(QListView::ListMode);
        pushButtonClose = new QPushButton(GetDetailedPageInfoDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(680, 390, 91, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(GetDetailedPageInfoDlg);

        QMetaObject::connectSlotsByName(GetDetailedPageInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *GetDetailedPageInfoDlg)
    {
        GetDetailedPageInfoDlg->setWindowTitle(QCoreApplication::translate("GetDetailedPageInfoDlg", "Get Detailed Page Info", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetDetailedPageInfoDlg", "Select Menu Name(Menu ID)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetDetailedPageInfoDlg", "Details of Selected Item", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetDetailedPageInfoDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetDetailedPageInfoDlg: public Ui_GetDetailedPageInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETDETAILEDPAGEINFODLG_H
