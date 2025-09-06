/********************************************************************************
** Form generated from reading UI file 'list_all_leave_applicationdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_ALL_LEAVE_APPLICATIONDLG_H
#define UI_LIST_ALL_LEAVE_APPLICATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_List_All_Leave_ApplicationDlg
{
public:
    QTableView *ListTable;
    QPushButton *pushButton;

    void setupUi(QDialog *List_All_Leave_ApplicationDlg)
    {
        if (List_All_Leave_ApplicationDlg->objectName().isEmpty())
            List_All_Leave_ApplicationDlg->setObjectName(QString::fromUtf8("List_All_Leave_ApplicationDlg"));
        List_All_Leave_ApplicationDlg->resize(1311, 599);
        ListTable = new QTableView(List_All_Leave_ApplicationDlg);
        ListTable->setObjectName(QString::fromUtf8("ListTable"));
        ListTable->setGeometry(QRect(10, 10, 1291, 551));
        ListTable->horizontalHeader()->setDefaultSectionSize(155);
        pushButton = new QPushButton(List_All_Leave_ApplicationDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1140, 570, 83, 29));

        retranslateUi(List_All_Leave_ApplicationDlg);

        QMetaObject::connectSlotsByName(List_All_Leave_ApplicationDlg);
    } // setupUi

    void retranslateUi(QDialog *List_All_Leave_ApplicationDlg)
    {
        List_All_Leave_ApplicationDlg->setWindowTitle(QCoreApplication::translate("List_All_Leave_ApplicationDlg", "List All Leave Applications", nullptr));
        pushButton->setText(QCoreApplication::translate("List_All_Leave_ApplicationDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class List_All_Leave_ApplicationDlg: public Ui_List_All_Leave_ApplicationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_ALL_LEAVE_APPLICATIONDLG_H
