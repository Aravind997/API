/********************************************************************************
** Form generated from reading UI file 'adddelfooterdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELFOOTERDLG_H
#define UI_ADDDELFOOTERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdddelFooterDlg
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidgetMenu;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *lineEditLink;
    QPushButton *pushButtonInsert;
    QPushButton *pushButtonRemove;
    QGroupBox *groupBox_3;
    QListWidget *listWidgetFooters;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *AdddelFooterDlg)
    {
        if (AdddelFooterDlg->objectName().isEmpty())
            AdddelFooterDlg->setObjectName(QString::fromUtf8("AdddelFooterDlg"));
        AdddelFooterDlg->resize(839, 467);
        groupBox = new QGroupBox(AdddelFooterDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 271, 391));
        listWidgetMenu = new QListWidget(groupBox);
        listWidgetMenu->setObjectName(QString::fromUtf8("listWidgetMenu"));
        listWidgetMenu->setGeometry(QRect(10, 20, 251, 361));
        groupBox_2 = new QGroupBox(AdddelFooterDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 20, 521, 391));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 110, 121, 21));
        lineEditLink = new QLineEdit(groupBox_2);
        lineEditLink->setObjectName(QString::fromUtf8("lineEditLink"));
        lineEditLink->setGeometry(QRect(20, 140, 241, 22));
        pushButtonInsert = new QPushButton(groupBox_2);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(20, 200, 111, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonInsert->sizePolicy().hasHeightForWidth());
        pushButtonInsert->setSizePolicy(sizePolicy);
        pushButtonRemove = new QPushButton(groupBox_2);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(150, 200, 111, 41));
        sizePolicy.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(300, 10, 211, 371));
        listWidgetFooters = new QListWidget(groupBox_3);
        listWidgetFooters->setObjectName(QString::fromUtf8("listWidgetFooters"));
        listWidgetFooters->setGeometry(QRect(10, 20, 191, 341));
        pushButtonClose = new QPushButton(AdddelFooterDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(680, 420, 101, 41));
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(AdddelFooterDlg);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), AdddelFooterDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(AdddelFooterDlg);
    } // setupUi

    void retranslateUi(QDialog *AdddelFooterDlg)
    {
        AdddelFooterDlg->setWindowTitle(QCoreApplication::translate("AdddelFooterDlg", "Add/Delete Footer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AdddelFooterDlg", "Available Menus", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AdddelFooterDlg", "Edit Existing Footers", nullptr));
        label->setText(QCoreApplication::translate("AdddelFooterDlg", "Name for the Link :", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("AdddelFooterDlg", "Insert", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("AdddelFooterDlg", "Remove", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AdddelFooterDlg", "Existing Footers", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("AdddelFooterDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdddelFooterDlg: public Ui_AdddelFooterDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELFOOTERDLG_H
