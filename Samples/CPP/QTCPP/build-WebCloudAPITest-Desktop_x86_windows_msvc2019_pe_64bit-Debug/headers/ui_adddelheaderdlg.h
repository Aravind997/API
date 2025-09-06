/********************************************************************************
** Form generated from reading UI file 'adddelheaderdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELHEADERDLG_H
#define UI_ADDDELHEADERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdddelHeaderDlg
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidgetMenu;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QListWidget *listWidgetHeader;
    QLabel *labelLink;
    QLineEdit *lineEditLink;
    QPushButton *pushButtonInsert;
    QPushButton *pushButtonRemove;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *AdddelHeaderDlg)
    {
        if (AdddelHeaderDlg->objectName().isEmpty())
            AdddelHeaderDlg->setObjectName(QString::fromUtf8("AdddelHeaderDlg"));
        AdddelHeaderDlg->resize(882, 459);
        groupBox = new QGroupBox(AdddelHeaderDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 261, 401));
        listWidgetMenu = new QListWidget(groupBox);
        listWidgetMenu->setObjectName(QString::fromUtf8("listWidgetMenu"));
        listWidgetMenu->setGeometry(QRect(10, 30, 241, 361));
        groupBox_2 = new QGroupBox(AdddelHeaderDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 10, 581, 401));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(320, 10, 251, 381));
        listWidgetHeader = new QListWidget(groupBox_3);
        listWidgetHeader->setObjectName(QString::fromUtf8("listWidgetHeader"));
        listWidgetHeader->setGeometry(QRect(10, 20, 231, 351));
        labelLink = new QLabel(groupBox_2);
        labelLink->setObjectName(QString::fromUtf8("labelLink"));
        labelLink->setGeometry(QRect(30, 110, 141, 21));
        lineEditLink = new QLineEdit(groupBox_2);
        lineEditLink->setObjectName(QString::fromUtf8("lineEditLink"));
        lineEditLink->setGeometry(QRect(30, 150, 271, 21));
        pushButtonInsert = new QPushButton(groupBox_2);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(30, 210, 81, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonInsert->sizePolicy().hasHeightForWidth());
        pushButtonInsert->setSizePolicy(sizePolicy);
        pushButtonRemove = new QPushButton(groupBox_2);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(140, 210, 71, 31));
        sizePolicy.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy);
        pushButtonClose = new QPushButton(AdddelHeaderDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(750, 420, 75, 24));

        retranslateUi(AdddelHeaderDlg);

        QMetaObject::connectSlotsByName(AdddelHeaderDlg);
    } // setupUi

    void retranslateUi(QDialog *AdddelHeaderDlg)
    {
        AdddelHeaderDlg->setWindowTitle(QCoreApplication::translate("AdddelHeaderDlg", "Add/Delete Header", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AdddelHeaderDlg", "Available Menus", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AdddelHeaderDlg", "Edit Existing Headers", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AdddelHeaderDlg", "Existing Headers", nullptr));
        labelLink->setText(QCoreApplication::translate("AdddelHeaderDlg", "Name for the Link :", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("AdddelHeaderDlg", "Insert", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("AdddelHeaderDlg", "Remove", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("AdddelHeaderDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdddelHeaderDlg: public Ui_AdddelHeaderDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELHEADERDLG_H
