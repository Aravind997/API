/********************************************************************************
** Form generated from reading UI file 'copyques_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYQUES_DLG_H
#define UI_COPYQUES_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_CopyQues_Dlg
{
public:
    QTreeView *treeView;
    QTreeView *treeView_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *CopyQues_Dlg)
    {
        if (CopyQues_Dlg->objectName().isEmpty())
            CopyQues_Dlg->setObjectName(QString::fromUtf8("CopyQues_Dlg"));
        CopyQues_Dlg->resize(961, 504);
        treeView = new QTreeView(CopyQues_Dlg);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 40, 191, 421));
        treeView_2 = new QTreeView(CopyQues_Dlg);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));
        treeView_2->setGeometry(QRect(760, 40, 191, 421));
        label = new QLabel(CopyQues_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 81, 16));
        label_2 = new QLabel(CopyQues_Dlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(760, 20, 101, 16));
        pushButton = new QPushButton(CopyQues_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 10, 101, 24));
        groupBox = new QGroupBox(CopyQues_Dlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 40, 541, 421));
        pushButton_2 = new QPushButton(CopyQues_Dlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 470, 80, 24));
        pushButton_3 = new QPushButton(CopyQues_Dlg);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 470, 80, 24));

        retranslateUi(CopyQues_Dlg);

        QMetaObject::connectSlotsByName(CopyQues_Dlg);
    } // setupUi

    void retranslateUi(QDialog *CopyQues_Dlg)
    {
        CopyQues_Dlg->setWindowTitle(QCoreApplication::translate("CopyQues_Dlg", "Copy Questions", nullptr));
        label->setText(QCoreApplication::translate("CopyQues_Dlg", "Select Source", nullptr));
        label_2->setText(QCoreApplication::translate("CopyQues_Dlg", "Select Destination", nullptr));
        pushButton->setText(QCoreApplication::translate("CopyQues_Dlg", "View Questions", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CopyQues_Dlg", "Questions", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CopyQues_Dlg", "Copy", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CopyQues_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyQues_Dlg: public Ui_CopyQues_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYQUES_DLG_H
