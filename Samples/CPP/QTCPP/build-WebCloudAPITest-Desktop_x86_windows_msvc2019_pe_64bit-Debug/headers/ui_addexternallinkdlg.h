/********************************************************************************
** Form generated from reading UI file 'addexternallinkdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXTERNALLINKDLG_H
#define UI_ADDEXTERNALLINKDLG_H

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

class Ui_AddExternalLinkDlg
{
public:
    QGroupBox *groupBox;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QPushButton *pushButtonUpdateTitle;
    QCheckBox *checkBoxExternalLink;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonApply;
    QLabel *labelURL;
    QLabel *labelURLName;
    QLineEdit *lineEditURL;
    QLineEdit *lineEditURLName;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonRemove;
    QListWidget *listWidgetSettings;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonDown;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *AddExternalLinkDlg)
    {
        if (AddExternalLinkDlg->objectName().isEmpty())
            AddExternalLinkDlg->setObjectName(QString::fromUtf8("AddExternalLinkDlg"));
        AddExternalLinkDlg->resize(670, 477);
        groupBox = new QGroupBox(AddExternalLinkDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 621, 131));
        labelTitle = new QLabel(groupBox);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(30, 40, 61, 21));
        lineEditTitle = new QLineEdit(groupBox);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));
        lineEditTitle->setGeometry(QRect(70, 40, 151, 22));
        pushButtonUpdateTitle = new QPushButton(groupBox);
        pushButtonUpdateTitle->setObjectName(QString::fromUtf8("pushButtonUpdateTitle"));
        pushButtonUpdateTitle->setGeometry(QRect(240, 80, 91, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonUpdateTitle->sizePolicy().hasHeightForWidth());
        pushButtonUpdateTitle->setSizePolicy(sizePolicy);
        checkBoxExternalLink = new QCheckBox(groupBox);
        checkBoxExternalLink->setObjectName(QString::fromUtf8("checkBoxExternalLink"));
        checkBoxExternalLink->setGeometry(QRect(310, 40, 141, 21));
        groupBox_2 = new QGroupBox(AddExternalLinkDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 150, 621, 281));
        pushButtonApply = new QPushButton(groupBox_2);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));
        pushButtonApply->setGeometry(QRect(10, 230, 161, 31));
        sizePolicy.setHeightForWidth(pushButtonApply->sizePolicy().hasHeightForWidth());
        pushButtonApply->setSizePolicy(sizePolicy);
        labelURL = new QLabel(groupBox_2);
        labelURL->setObjectName(QString::fromUtf8("labelURL"));
        labelURL->setGeometry(QRect(300, 50, 71, 20));
        labelURLName = new QLabel(groupBox_2);
        labelURLName->setObjectName(QString::fromUtf8("labelURLName"));
        labelURLName->setGeometry(QRect(280, 80, 101, 20));
        lineEditURL = new QLineEdit(groupBox_2);
        lineEditURL->setObjectName(QString::fromUtf8("lineEditURL"));
        lineEditURL->setGeometry(QRect(380, 50, 221, 22));
        lineEditURLName = new QLineEdit(groupBox_2);
        lineEditURLName->setObjectName(QString::fromUtf8("lineEditURLName"));
        lineEditURLName->setGeometry(QRect(380, 80, 221, 22));
        pushButtonAdd = new QPushButton(groupBox_2);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(350, 170, 71, 41));
        sizePolicy.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy);
        pushButtonUpdate = new QPushButton(groupBox_2);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(450, 170, 71, 41));
        sizePolicy.setHeightForWidth(pushButtonUpdate->sizePolicy().hasHeightForWidth());
        pushButtonUpdate->setSizePolicy(sizePolicy);
        pushButtonRemove = new QPushButton(groupBox_2);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(540, 170, 71, 41));
        sizePolicy.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy);
        listWidgetSettings = new QListWidget(groupBox_2);
        listWidgetSettings->setObjectName(QString::fromUtf8("listWidgetSettings"));
        listWidgetSettings->setGeometry(QRect(10, 20, 161, 191));
        pushButtonUp = new QPushButton(groupBox_2);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        pushButtonUp->setGeometry(QRect(190, 80, 75, 41));
        pushButtonDown = new QPushButton(groupBox_2);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        pushButtonDown->setGeometry(QRect(190, 140, 75, 41));
        pushButtonClose = new QPushButton(AddExternalLinkDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(510, 440, 91, 31));
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(AddExternalLinkDlg);

        QMetaObject::connectSlotsByName(AddExternalLinkDlg);
    } // setupUi

    void retranslateUi(QDialog *AddExternalLinkDlg)
    {
        AddExternalLinkDlg->setWindowTitle(QCoreApplication::translate("AddExternalLinkDlg", "Add External Link", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddExternalLinkDlg", "Link Title Settings", nullptr));
        labelTitle->setText(QCoreApplication::translate("AddExternalLinkDlg", "Title :", nullptr));
        pushButtonUpdateTitle->setText(QCoreApplication::translate("AddExternalLinkDlg", "Update Title", nullptr));
        checkBoxExternalLink->setText(QCoreApplication::translate("AddExternalLinkDlg", "Show External Links", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AddExternalLinkDlg", "Other Settings", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("AddExternalLinkDlg", "Apply Order", nullptr));
        labelURL->setText(QCoreApplication::translate("AddExternalLinkDlg", "Enter URL :", nullptr));
        labelURLName->setText(QCoreApplication::translate("AddExternalLinkDlg", "Enter URL Name :", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("AddExternalLinkDlg", "Add", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("AddExternalLinkDlg", "Update", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("AddExternalLinkDlg", "Remove", nullptr));
        pushButtonUp->setText(QCoreApplication::translate("AddExternalLinkDlg", "UP", nullptr));
        pushButtonDown->setText(QCoreApplication::translate("AddExternalLinkDlg", "DOWN", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("AddExternalLinkDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddExternalLinkDlg: public Ui_AddExternalLinkDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXTERNALLINKDLG_H
