/********************************************************************************
** Form generated from reading UI file 'addinternallinkdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINTERNALLINKDLG_H
#define UI_ADDINTERNALLINKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddInternalLinkDlg
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidgetMenu;
    QGroupBox *groupBox_2;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QCheckBox *checkBoxInternalLink;
    QPushButton *pushButtonUpdateTitle;
    QGroupBox *groupBox_3;
    QLabel *labelLinkText;
    QLineEdit *lineEditLinkText;
    QPushButton *pushButtonInsert;
    QPushButton *pushButtonRemove;
    QPushButton *pushButtonUpdate;
    QListWidget *listWidgetLinks;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *AddInternalLinkDlg)
    {
        if (AddInternalLinkDlg->objectName().isEmpty())
            AddInternalLinkDlg->setObjectName(QString::fromUtf8("AddInternalLinkDlg"));
        AddInternalLinkDlg->resize(843, 432);
        groupBox = new QGroupBox(AddInternalLinkDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 251, 411));
        listWidgetMenu = new QListWidget(groupBox);
        listWidgetMenu->setObjectName(QString::fromUtf8("listWidgetMenu"));
        listWidgetMenu->setGeometry(QRect(10, 20, 231, 381));
        groupBox_2 = new QGroupBox(AddInternalLinkDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 10, 551, 121));
        labelTitle = new QLabel(groupBox_2);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(30, 40, 49, 16));
        lineEditTitle = new QLineEdit(groupBox_2);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));
        lineEditTitle->setGeometry(QRect(90, 40, 201, 22));
        checkBoxInternalLink = new QCheckBox(groupBox_2);
        checkBoxInternalLink->setObjectName(QString::fromUtf8("checkBoxInternalLink"));
        checkBoxInternalLink->setGeometry(QRect(360, 30, 141, 21));
        pushButtonUpdateTitle = new QPushButton(groupBox_2);
        pushButtonUpdateTitle->setObjectName(QString::fromUtf8("pushButtonUpdateTitle"));
        pushButtonUpdateTitle->setGeometry(QRect(370, 70, 81, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonUpdateTitle->sizePolicy().hasHeightForWidth());
        pushButtonUpdateTitle->setSizePolicy(sizePolicy);
        groupBox_3 = new QGroupBox(AddInternalLinkDlg);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 130, 551, 241));
        labelLinkText = new QLabel(groupBox_3);
        labelLinkText->setObjectName(QString::fromUtf8("labelLinkText"));
        labelLinkText->setGeometry(QRect(50, 40, 81, 16));
        lineEditLinkText = new QLineEdit(groupBox_3);
        lineEditLinkText->setObjectName(QString::fromUtf8("lineEditLinkText"));
        lineEditLinkText->setGeometry(QRect(130, 40, 211, 22));
        pushButtonInsert = new QPushButton(groupBox_3);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));
        pushButtonInsert->setGeometry(QRect(60, 120, 81, 31));
        sizePolicy.setHeightForWidth(pushButtonInsert->sizePolicy().hasHeightForWidth());
        pushButtonInsert->setSizePolicy(sizePolicy);
        pushButtonRemove = new QPushButton(groupBox_3);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(170, 120, 81, 31));
        sizePolicy.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy);
        pushButtonUpdate = new QPushButton(groupBox_3);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(270, 120, 81, 31));
        sizePolicy.setHeightForWidth(pushButtonUpdate->sizePolicy().hasHeightForWidth());
        pushButtonUpdate->setSizePolicy(sizePolicy);
        listWidgetLinks = new QListWidget(groupBox_3);
        listWidgetLinks->setObjectName(QString::fromUtf8("listWidgetLinks"));
        listWidgetLinks->setGeometry(QRect(360, 20, 181, 211));
        pushButtonClose = new QPushButton(AddInternalLinkDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(700, 390, 75, 24));

        retranslateUi(AddInternalLinkDlg);

        QMetaObject::connectSlotsByName(AddInternalLinkDlg);
    } // setupUi

    void retranslateUi(QDialog *AddInternalLinkDlg)
    {
        AddInternalLinkDlg->setWindowTitle(QCoreApplication::translate("AddInternalLinkDlg", "Add Internal Link", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddInternalLinkDlg", "Available Menu Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AddInternalLinkDlg", "Link Title Settings", nullptr));
        labelTitle->setText(QCoreApplication::translate("AddInternalLinkDlg", "Title :", nullptr));
        checkBoxInternalLink->setText(QCoreApplication::translate("AddInternalLinkDlg", "Show Internal Links", nullptr));
        pushButtonUpdateTitle->setText(QCoreApplication::translate("AddInternalLinkDlg", "Update Title", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AddInternalLinkDlg", "Available Menu Links", nullptr));
        labelLinkText->setText(QCoreApplication::translate("AddInternalLinkDlg", "Link Text", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("AddInternalLinkDlg", "Insert", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("AddInternalLinkDlg", "Remove", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("AddInternalLinkDlg", "Update", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("AddInternalLinkDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddInternalLinkDlg: public Ui_AddInternalLinkDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINTERNALLINKDLG_H
