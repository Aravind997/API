/********************************************************************************
** Form generated from reading UI file 'listexmctg_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEXMCTG_DLG_H
#define UI_LISTEXMCTG_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_listexmctg_Dlg
{
public:
    QTreeView *treeView;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *listexmctg_Dlg)
    {
        if (listexmctg_Dlg->objectName().isEmpty())
            listexmctg_Dlg->setObjectName(QString::fromUtf8("listexmctg_Dlg"));
        listexmctg_Dlg->resize(296, 475);
        treeView = new QTreeView(listexmctg_Dlg);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 30, 221, 401));
        label = new QLabel(listexmctg_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 16));
        pushButton = new QPushButton(listexmctg_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 440, 80, 24));

        retranslateUi(listexmctg_Dlg);

        QMetaObject::connectSlotsByName(listexmctg_Dlg);
    } // setupUi

    void retranslateUi(QDialog *listexmctg_Dlg)
    {
        listexmctg_Dlg->setWindowTitle(QCoreApplication::translate("listexmctg_Dlg", "ExamCategoryList", nullptr));
        label->setText(QCoreApplication::translate("listexmctg_Dlg", "Exam Categories", nullptr));
        pushButton->setText(QCoreApplication::translate("listexmctg_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listexmctg_Dlg: public Ui_listexmctg_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEXMCTG_DLG_H
