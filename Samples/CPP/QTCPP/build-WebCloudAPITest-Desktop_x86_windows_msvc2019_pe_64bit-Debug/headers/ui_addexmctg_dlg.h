/********************************************************************************
** Form generated from reading UI file 'addexmctg_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXMCTG_DLG_H
#define UI_ADDEXMCTG_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addexmctg_Dlg
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *addexmctg_Dlg)
    {
        if (addexmctg_Dlg->objectName().isEmpty())
            addexmctg_Dlg->setObjectName(QString::fromUtf8("addexmctg_Dlg"));
        addexmctg_Dlg->resize(510, 310);
        pushButton_2 = new QPushButton(addexmctg_Dlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 250, 80, 24));
        pushButton = new QPushButton(addexmctg_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 250, 80, 24));
        textEdit = new QTextEdit(addexmctg_Dlg);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 40, 311, 51));
        textEdit_2 = new QTextEdit(addexmctg_Dlg);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(160, 120, 311, 101));
        label = new QLabel(addexmctg_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 91, 31));
        label_2 = new QLabel(addexmctg_Dlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 81, 21));

        retranslateUi(addexmctg_Dlg);

        QMetaObject::connectSlotsByName(addexmctg_Dlg);
    } // setupUi

    void retranslateUi(QDialog *addexmctg_Dlg)
    {
        addexmctg_Dlg->setWindowTitle(QCoreApplication::translate("addexmctg_Dlg", "AddExamCategory", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addexmctg_Dlg", "Add", nullptr));
        pushButton->setText(QCoreApplication::translate("addexmctg_Dlg", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("addexmctg_Dlg", "Category Name", nullptr));
        label_2->setText(QCoreApplication::translate("addexmctg_Dlg", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addexmctg_Dlg: public Ui_addexmctg_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXMCTG_DLG_H
