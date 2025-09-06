/********************************************************************************
** Form generated from reading UI file 'audcompanydetialsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDCOMPANYDETIALSDLG_H
#define UI_AUDCOMPANYDETIALSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUDCompanyDetialsDlg
{
public:
    QGroupBox *groupBox;
    QLabel *label_26;
    QTextEdit *textEdit_Desc;
    QTextEdit *textEdit_Adress2;
    QTextEdit *textEdit_Adress1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditCoName;
    QLineEdit *lineEdit_Web;
    QLineEdit *lineEdit_Gst;
    QLineEdit *lineEdit_Tele;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_Mobile;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_ReEmail;
    QLineEdit *lineEdit_Invoice;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_4;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_Country;
    QLineEdit *lineEdit_State;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *lineEdit_City;
    QLineEdit *lineEdit_Pin;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_11;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_42;
    QLabel *label_23;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Save_4;
    QGroupBox *groupBox_2;
    QTableView *tableView;

    void setupUi(QDialog *AUDCompanyDetialsDlg)
    {
        if (AUDCompanyDetialsDlg->objectName().isEmpty())
            AUDCompanyDetialsDlg->setObjectName(QString::fromUtf8("AUDCompanyDetialsDlg"));
        AUDCompanyDetialsDlg->resize(1129, 999);
        groupBox = new QGroupBox(AUDCompanyDetialsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 1101, 621));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(600, 440, 76, 20));
        textEdit_Desc = new QTextEdit(groupBox);
        textEdit_Desc->setObjectName(QString::fromUtf8("textEdit_Desc"));
        textEdit_Desc->setGeometry(QRect(720, 410, 341, 91));
        textEdit_Adress2 = new QTextEdit(groupBox);
        textEdit_Adress2->setObjectName(QString::fromUtf8("textEdit_Adress2"));
        textEdit_Adress2->setGeometry(QRect(730, 110, 331, 81));
        textEdit_Adress1 = new QTextEdit(groupBox);
        textEdit_Adress1->setObjectName(QString::fromUtf8("textEdit_Adress1"));
        textEdit_Adress1->setGeometry(QRect(730, 20, 331, 81));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 40, 291, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditCoName = new QLineEdit(layoutWidget);
        lineEditCoName->setObjectName(QString::fromUtf8("lineEditCoName"));
        lineEditCoName->setMaximumSize(QSize(291, 16777215));

        verticalLayout->addWidget(lineEditCoName);

        lineEdit_Web = new QLineEdit(layoutWidget);
        lineEdit_Web->setObjectName(QString::fromUtf8("lineEdit_Web"));

        verticalLayout->addWidget(lineEdit_Web);

        lineEdit_Gst = new QLineEdit(layoutWidget);
        lineEdit_Gst->setObjectName(QString::fromUtf8("lineEdit_Gst"));
        lineEdit_Gst->setMaximumSize(QSize(291, 16777215));

        verticalLayout->addWidget(lineEdit_Gst);

        lineEdit_Tele = new QLineEdit(layoutWidget);
        lineEdit_Tele->setObjectName(QString::fromUtf8("lineEdit_Tele"));
        lineEdit_Tele->setMaximumSize(QSize(291, 16777215));

        verticalLayout->addWidget(lineEdit_Tele);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 50, 121, 211));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(230, 270, 291, 241));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_Mobile = new QLineEdit(layoutWidget2);
        lineEdit_Mobile->setObjectName(QString::fromUtf8("lineEdit_Mobile"));

        verticalLayout_5->addWidget(lineEdit_Mobile);

        lineEdit_Email = new QLineEdit(layoutWidget2);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        verticalLayout_5->addWidget(lineEdit_Email);

        lineEdit_ReEmail = new QLineEdit(layoutWidget2);
        lineEdit_ReEmail->setObjectName(QString::fromUtf8("lineEdit_ReEmail"));

        verticalLayout_5->addWidget(lineEdit_ReEmail);

        lineEdit_Invoice = new QLineEdit(layoutWidget2);
        lineEdit_Invoice->setObjectName(QString::fromUtf8("lineEdit_Invoice"));

        verticalLayout_5->addWidget(lineEdit_Invoice);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 290, 107, 221));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(730, 200, 331, 101));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_Country = new QLineEdit(layoutWidget4);
        lineEdit_Country->setObjectName(QString::fromUtf8("lineEdit_Country"));

        verticalLayout_6->addWidget(lineEdit_Country);

        lineEdit_State = new QLineEdit(layoutWidget4);
        lineEdit_State->setObjectName(QString::fromUtf8("lineEdit_State"));

        verticalLayout_6->addWidget(lineEdit_State);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(730, 310, 331, 91));
        verticalLayout_14 = new QVBoxLayout(layoutWidget5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        lineEdit_City = new QLineEdit(layoutWidget5);
        lineEdit_City->setObjectName(QString::fromUtf8("lineEdit_City"));

        verticalLayout_14->addWidget(lineEdit_City);

        lineEdit_Pin = new QLineEdit(layoutWidget5);
        lineEdit_Pin->setObjectName(QString::fromUtf8("lineEdit_Pin"));

        verticalLayout_14->addWidget(lineEdit_Pin);

        layoutWidget6 = new QWidget(groupBox);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(600, 210, 91, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_11 = new QLabel(layoutWidget6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);

        layoutWidget7 = new QWidget(groupBox);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(600, 50, 101, 111));
        verticalLayout_15 = new QVBoxLayout(layoutWidget7);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_15->addWidget(label_24);

        label_25 = new QLabel(layoutWidget7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_15->addWidget(label_25);

        layoutWidget8 = new QWidget(groupBox);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(600, 320, 111, 71));
        verticalLayout_13 = new QVBoxLayout(layoutWidget8);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(layoutWidget8);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_13->addWidget(label_42);

        label_23 = new QLabel(layoutWidget8);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_13->addWidget(label_23);

        layoutWidget9 = new QWidget(groupBox);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(600, 540, 461, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Save = new QPushButton(layoutWidget9);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));

        horizontalLayout->addWidget(pushButton_Save);

        pushButton_Edit = new QPushButton(layoutWidget9);
        pushButton_Edit->setObjectName(QString::fromUtf8("pushButton_Edit"));

        horizontalLayout->addWidget(pushButton_Edit);

        pushButton_Delete = new QPushButton(layoutWidget9);
        pushButton_Delete->setObjectName(QString::fromUtf8("pushButton_Delete"));

        horizontalLayout->addWidget(pushButton_Delete);

        pushButton_Save_4 = new QPushButton(layoutWidget9);
        pushButton_Save_4->setObjectName(QString::fromUtf8("pushButton_Save_4"));

        horizontalLayout->addWidget(pushButton_Save_4);

        groupBox_2 = new QGroupBox(AUDCompanyDetialsDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 640, 1091, 321));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 30, 1061, 281));

        retranslateUi(AUDCompanyDetialsDlg);

        QMetaObject::connectSlotsByName(AUDCompanyDetialsDlg);
    } // setupUi

    void retranslateUi(QDialog *AUDCompanyDetialsDlg)
    {
        AUDCompanyDetialsDlg->setWindowTitle(QCoreApplication::translate("AUDCompanyDetialsDlg", "Add|Update|Delete|Comapny Details", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AUDCompanyDetialsDlg", "Company Details", nullptr));
        label_26->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Description", nullptr));
        label->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Comapny Name", nullptr));
        label_2->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Web SiteUrl", nullptr));
        label_10->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "GST|VAT ID", nullptr));
        label_3->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Phone Number", nullptr));
        lineEdit_Invoice->setText(QString());
        label_6->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Mobile Number", nullptr));
        label_7->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Email", nullptr));
        label_8->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Re Enter Mail", nullptr));
        label_4->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Invoice Prefix", nullptr));
        label_9->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Country", nullptr));
        label_11->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "State", nullptr));
        label_24->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Adress 1", nullptr));
        label_25->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Adress 2", nullptr));
        label_42->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "City", nullptr));
        label_23->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Pincode", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Save", nullptr));
        pushButton_Edit->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Edit", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Delete", nullptr));
        pushButton_Save_4->setText(QCoreApplication::translate("AUDCompanyDetialsDlg", "Cancel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AUDCompanyDetialsDlg", "Company List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUDCompanyDetialsDlg: public Ui_AUDCompanyDetialsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDCOMPANYDETIALSDLG_H
