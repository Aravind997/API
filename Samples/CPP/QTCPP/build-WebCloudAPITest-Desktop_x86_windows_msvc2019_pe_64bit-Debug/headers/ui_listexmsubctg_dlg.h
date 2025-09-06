/********************************************************************************
** Form generated from reading UI file 'listexmsubctg_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEXMSUBCTG_DLG_H
#define UI_LISTEXMSUBCTG_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_listexmsubctg_Dlg
{
public:
    QPushButton *pushButton;
    QTreeView *treeView;
    QLabel *label;

    void setupUi(QDialog *listexmsubctg_Dlg)
    {
        if (listexmsubctg_Dlg->objectName().isEmpty())
            listexmsubctg_Dlg->setObjectName(QString::fromUtf8("listexmsubctg_Dlg"));
        listexmsubctg_Dlg->resize(298, 475);
        pushButton = new QPushButton(listexmsubctg_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 440, 80, 24));
        treeView = new QTreeView(listexmsubctg_Dlg);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 30, 221, 401));
        label = new QLabel(listexmsubctg_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 16));

        retranslateUi(listexmsubctg_Dlg);

        QMetaObject::connectSlotsByName(listexmsubctg_Dlg);
    } // setupUi

    void retranslateUi(QDialog *listexmsubctg_Dlg)
    {
        listexmsubctg_Dlg->setWindowTitle(QCoreApplication::translate("listexmsubctg_Dlg", "ExamSubCategoryList", nullptr));
        pushButton->setText(QCoreApplication::translate("listexmsubctg_Dlg", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("listexmsubctg_Dlg", "Exam Categories", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listexmsubctg_Dlg: public Ui_listexmsubctg_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEXMSUBCTG_DLG_H
