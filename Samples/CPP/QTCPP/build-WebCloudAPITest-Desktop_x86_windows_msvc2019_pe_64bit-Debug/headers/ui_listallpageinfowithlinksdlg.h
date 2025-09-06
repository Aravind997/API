/********************************************************************************
** Form generated from reading UI file 'listallpageinfowithlinksdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTALLPAGEINFOWITHLINKSDLG_H
#define UI_LISTALLPAGEINFOWITHLINKSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ListAllPageInfoWithLinksDlg
{
public:
    QGroupBox *groupBox;
    QTableView *tableView;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *ListAllPageInfoWithLinksDlg)
    {
        if (ListAllPageInfoWithLinksDlg->objectName().isEmpty())
            ListAllPageInfoWithLinksDlg->setObjectName(QString::fromUtf8("ListAllPageInfoWithLinksDlg"));
        ListAllPageInfoWithLinksDlg->resize(883, 432);
        groupBox = new QGroupBox(ListAllPageInfoWithLinksDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 841, 371));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 821, 331));
        pushButtonClose = new QPushButton(ListAllPageInfoWithLinksDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(720, 390, 75, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(ListAllPageInfoWithLinksDlg);

        QMetaObject::connectSlotsByName(ListAllPageInfoWithLinksDlg);
    } // setupUi

    void retranslateUi(QDialog *ListAllPageInfoWithLinksDlg)
    {
        ListAllPageInfoWithLinksDlg->setWindowTitle(QCoreApplication::translate("ListAllPageInfoWithLinksDlg", "List All Page Info With Links", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ListAllPageInfoWithLinksDlg", "All Page Information", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("ListAllPageInfoWithLinksDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListAllPageInfoWithLinksDlg: public Ui_ListAllPageInfoWithLinksDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTALLPAGEINFOWITHLINKSDLG_H
