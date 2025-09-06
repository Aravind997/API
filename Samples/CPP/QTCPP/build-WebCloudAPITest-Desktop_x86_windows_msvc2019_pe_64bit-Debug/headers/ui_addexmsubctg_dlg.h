/********************************************************************************
** Form generated from reading UI file 'addexmsubctg_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXMSUBCTG_DLG_H
#define UI_ADDEXMSUBCTG_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_addexmsubctg_Dlg
{
public:
    QTreeView *treeView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addexmsubctg_Dlg)
    {
        if (addexmsubctg_Dlg->objectName().isEmpty())
            addexmsubctg_Dlg->setObjectName(QString::fromUtf8("addexmsubctg_Dlg"));
        addexmsubctg_Dlg->resize(630, 447);
        treeView = new QTreeView(addexmsubctg_Dlg);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(20, 30, 211, 391));
        label = new QLabel(addexmsubctg_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 111, 16));
        label_2 = new QLabel(addexmsubctg_Dlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 90, 111, 21));
        label_3 = new QLabel(addexmsubctg_Dlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 180, 71, 16));
        textEdit = new QTextEdit(addexmsubctg_Dlg);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(370, 80, 241, 51));
        textEdit_2 = new QTextEdit(addexmsubctg_Dlg);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(370, 160, 241, 121));
        pushButton = new QPushButton(addexmsubctg_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 320, 80, 24));
        pushButton_2 = new QPushButton(addexmsubctg_Dlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 320, 80, 24));

        retranslateUi(addexmsubctg_Dlg);

        QMetaObject::connectSlotsByName(addexmsubctg_Dlg);
    } // setupUi

    void retranslateUi(QDialog *addexmsubctg_Dlg)
    {
        addexmsubctg_Dlg->setWindowTitle(QCoreApplication::translate("addexmsubctg_Dlg", "AddExamSubCategory", nullptr));
        label->setText(QCoreApplication::translate("addexmsubctg_Dlg", "Existing Categories", nullptr));
        label_2->setText(QCoreApplication::translate("addexmsubctg_Dlg", " SubCategory Name", nullptr));
        label_3->setText(QCoreApplication::translate("addexmsubctg_Dlg", "Description", nullptr));
        pushButton->setText(QCoreApplication::translate("addexmsubctg_Dlg", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addexmsubctg_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addexmsubctg_Dlg: public Ui_addexmsubctg_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXMSUBCTG_DLG_H
