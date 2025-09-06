/********************************************************************************
** Form generated from reading UI file 'setseoinfoofpagedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSEOINFOOFPAGEDLG_H
#define UI_SETSEOINFOOFPAGEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetSEOInfoOfPageDlg
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidgetMenu;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QLabel *label;
    QTextEdit *textEditTitle;
    QLabel *label_2;
    QTextEdit *textEditDescription;
    QLabel *label_3;
    QTextEdit *textEditKeywords;
    QCheckBox *checkBoxAlias;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonReset;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QCheckBox *checkBoxDefaultSEO;
    QLabel *label_5;
    QTextEdit *textEditSTitle;
    QLabel *label_6;
    QTextEdit *textEditSDesc;
    QLabel *label_7;
    QTextEdit *textEditSKeywords;
    QCheckBox *checkBoxEnableSocial;
    QCheckBox *checkBoxFinTip;
    QCheckBox *checkBoxFB;
    QCheckBox *checkBoxLinkedIn;
    QCheckBox *checkBoxTwitter;
    QCheckBox *checkBoxWhatsapp;
    QLabel *labelSelect;
    QPushButton *pushButtonSUpdate;
    QPushButton *pushButtonSReset;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *SetSEOInfoOfPageDlg)
    {
        if (SetSEOInfoOfPageDlg->objectName().isEmpty())
            SetSEOInfoOfPageDlg->setObjectName(QString::fromUtf8("SetSEOInfoOfPageDlg"));
        SetSEOInfoOfPageDlg->resize(733, 559);
        groupBox = new QGroupBox(SetSEOInfoOfPageDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 211, 531));
        listWidgetMenu = new QListWidget(groupBox);
        listWidgetMenu->setObjectName(QString::fromUtf8("listWidgetMenu"));
        listWidgetMenu->setGeometry(QRect(10, 20, 191, 501));
        groupBox_2 = new QGroupBox(SetSEOInfoOfPageDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 10, 491, 501));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 471, 471));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 0, 441, 301));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 151, 21));
        textEditTitle = new QTextEdit(groupBox_3);
        textEditTitle->setObjectName(QString::fromUtf8("textEditTitle"));
        textEditTitle->setGeometry(QRect(10, 60, 421, 31));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 171, 21));
        textEditDescription = new QTextEdit(groupBox_3);
        textEditDescription->setObjectName(QString::fromUtf8("textEditDescription"));
        textEditDescription->setGeometry(QRect(10, 130, 421, 31));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 170, 211, 21));
        textEditKeywords = new QTextEdit(groupBox_3);
        textEditKeywords->setObjectName(QString::fromUtf8("textEditKeywords"));
        textEditKeywords->setGeometry(QRect(10, 200, 421, 31));
        checkBoxAlias = new QCheckBox(groupBox_3);
        checkBoxAlias->setObjectName(QString::fromUtf8("checkBoxAlias"));
        checkBoxAlias->setGeometry(QRect(30, 250, 121, 21));
        pushButtonUpdate = new QPushButton(tab);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(220, 320, 81, 31));
        pushButtonReset = new QPushButton(tab);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(330, 320, 81, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 441, 381));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 91, 16));
        checkBoxDefaultSEO = new QCheckBox(groupBox_4);
        checkBoxDefaultSEO->setObjectName(QString::fromUtf8("checkBoxDefaultSEO"));
        checkBoxDefaultSEO->setGeometry(QRect(20, 50, 241, 21));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 80, 181, 21));
        textEditSTitle = new QTextEdit(groupBox_4);
        textEditSTitle->setObjectName(QString::fromUtf8("textEditSTitle"));
        textEditSTitle->setGeometry(QRect(10, 110, 421, 31));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 161, 21));
        textEditSDesc = new QTextEdit(groupBox_4);
        textEditSDesc->setObjectName(QString::fromUtf8("textEditSDesc"));
        textEditSDesc->setGeometry(QRect(10, 180, 421, 31));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 220, 191, 21));
        textEditSKeywords = new QTextEdit(groupBox_4);
        textEditSKeywords->setObjectName(QString::fromUtf8("textEditSKeywords"));
        textEditSKeywords->setGeometry(QRect(10, 250, 421, 31));
        checkBoxEnableSocial = new QCheckBox(groupBox_4);
        checkBoxEnableSocial->setObjectName(QString::fromUtf8("checkBoxEnableSocial"));
        checkBoxEnableSocial->setGeometry(QRect(10, 300, 241, 21));
        checkBoxFinTip = new QCheckBox(groupBox_4);
        checkBoxFinTip->setObjectName(QString::fromUtf8("checkBoxFinTip"));
        checkBoxFinTip->setGeometry(QRect(260, 340, 91, 20));
        checkBoxFB = new QCheckBox(groupBox_4);
        checkBoxFB->setObjectName(QString::fromUtf8("checkBoxFB"));
        checkBoxFB->setGeometry(QRect(260, 300, 76, 20));
        checkBoxLinkedIn = new QCheckBox(groupBox_4);
        checkBoxLinkedIn->setObjectName(QString::fromUtf8("checkBoxLinkedIn"));
        checkBoxLinkedIn->setGeometry(QRect(360, 300, 76, 20));
        checkBoxTwitter = new QCheckBox(groupBox_4);
        checkBoxTwitter->setObjectName(QString::fromUtf8("checkBoxTwitter"));
        checkBoxTwitter->setGeometry(QRect(360, 340, 76, 20));
        checkBoxWhatsapp = new QCheckBox(groupBox_4);
        checkBoxWhatsapp->setObjectName(QString::fromUtf8("checkBoxWhatsapp"));
        checkBoxWhatsapp->setGeometry(QRect(150, 340, 76, 20));
        labelSelect = new QLabel(groupBox_4);
        labelSelect->setObjectName(QString::fromUtf8("labelSelect"));
        labelSelect->setGeometry(QRect(120, 30, 131, 16));
        pushButtonSUpdate = new QPushButton(tab_2);
        pushButtonSUpdate->setObjectName(QString::fromUtf8("pushButtonSUpdate"));
        pushButtonSUpdate->setGeometry(QRect(210, 400, 75, 31));
        pushButtonSReset = new QPushButton(tab_2);
        pushButtonSReset->setObjectName(QString::fromUtf8("pushButtonSReset"));
        pushButtonSReset->setGeometry(QRect(310, 400, 75, 31));
        tabWidget->addTab(tab_2, QString());
        pushButtonClose = new QPushButton(SetSEOInfoOfPageDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(550, 520, 91, 31));

        retranslateUi(SetSEOInfoOfPageDlg);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SetSEOInfoOfPageDlg);
    } // setupUi

    void retranslateUi(QDialog *SetSEOInfoOfPageDlg)
    {
        SetSEOInfoOfPageDlg->setWindowTitle(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Set SEO Info Of Page", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Select Menu", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Update SEO Settings", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Default SEO Settings", nullptr));
        label->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Default Page Title :", nullptr));
        label_2->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Default Page Description :", nullptr));
        label_3->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Default Page Keywords :", nullptr));
        checkBoxAlias->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Enable Aliasing", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Update", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SetSEOInfoOfPageDlg", "Default Settings", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Single Page SEO Settings", nullptr));
        label_4->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Selected Page : ", nullptr));
        checkBoxDefaultSEO->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Use Default SEO Settings", nullptr));
        label_5->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Page Title :", nullptr));
        label_6->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Page Description :", nullptr));
        label_7->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Page Keywords :", nullptr));
        checkBoxEnableSocial->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Enable Social Sharing Icons On Web Page", nullptr));
        checkBoxFinTip->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "FinTip Offers", nullptr));
        checkBoxFB->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "FaceBook", nullptr));
        checkBoxLinkedIn->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "LinkedIn", nullptr));
        checkBoxTwitter->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Twitter", nullptr));
        checkBoxWhatsapp->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "WhatsApp", nullptr));
        labelSelect->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "TextLabel", nullptr));
        pushButtonSUpdate->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Update", nullptr));
        pushButtonSReset->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SetSEOInfoOfPageDlg", "Single Page Settings", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("SetSEOInfoOfPageDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetSEOInfoOfPageDlg: public Ui_SetSEOInfoOfPageDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSEOINFOOFPAGEDLG_H
