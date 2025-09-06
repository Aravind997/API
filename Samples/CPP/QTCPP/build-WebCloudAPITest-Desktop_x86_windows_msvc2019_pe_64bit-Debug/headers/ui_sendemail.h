/********************************************************************************
** Form generated from reading UI file 'sendemail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDEMAIL_H
#define UI_SENDEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SendEmail
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *editSendEmailFromComm;
    QLineEdit *editSendEmailCommTo;
    QLineEdit *editSendEmailCommCc;
    QLineEdit *editSendEmailCommBcc;
    QGroupBox *groupBox_2;
    QPushButton *btnSendEmailCommSend;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLineEdit *editSendEmailCommSubject;
    QGroupBox *groupBox_4;
    QPushButton *btnSendEmailCommAttach;
    QGroupBox *groupBox_5;
    QLineEdit *editSendEmailCommMessage;
    QPushButton *btnSendEmailCommClose;

    void setupUi(QDialog *SendEmail)
    {
        if (SendEmail->objectName().isEmpty())
            SendEmail->setObjectName(QString::fromUtf8("SendEmail"));
        SendEmail->resize(884, 638);
        groupBox = new QGroupBox(SendEmail);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 841, 201));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 63, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 63, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 63, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 160, 63, 20));
        editSendEmailFromComm = new QLineEdit(groupBox);
        editSendEmailFromComm->setObjectName(QString::fromUtf8("editSendEmailFromComm"));
        editSendEmailFromComm->setGeometry(QRect(100, 40, 721, 26));
        editSendEmailCommTo = new QLineEdit(groupBox);
        editSendEmailCommTo->setObjectName(QString::fromUtf8("editSendEmailCommTo"));
        editSendEmailCommTo->setGeometry(QRect(100, 80, 721, 26));
        editSendEmailCommCc = new QLineEdit(groupBox);
        editSendEmailCommCc->setObjectName(QString::fromUtf8("editSendEmailCommCc"));
        editSendEmailCommCc->setGeometry(QRect(100, 120, 721, 26));
        editSendEmailCommBcc = new QLineEdit(groupBox);
        editSendEmailCommBcc->setObjectName(QString::fromUtf8("editSendEmailCommBcc"));
        editSendEmailCommBcc->setGeometry(QRect(100, 160, 721, 26));
        groupBox_2 = new QGroupBox(SendEmail);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(740, 230, 120, 131));
        btnSendEmailCommSend = new QPushButton(groupBox_2);
        btnSendEmailCommSend->setObjectName(QString::fromUtf8("btnSendEmailCommSend"));
        btnSendEmailCommSend->setGeometry(QRect(10, 40, 93, 71));
        groupBox_3 = new QGroupBox(SendEmail);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 230, 691, 61));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 25, 63, 20));
        editSendEmailCommSubject = new QLineEdit(groupBox_3);
        editSendEmailCommSubject->setObjectName(QString::fromUtf8("editSendEmailCommSubject"));
        editSendEmailCommSubject->setGeometry(QRect(100, 25, 571, 26));
        groupBox_4 = new QGroupBox(SendEmail);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 290, 131, 71));
        btnSendEmailCommAttach = new QPushButton(groupBox_4);
        btnSendEmailCommAttach->setObjectName(QString::fromUtf8("btnSendEmailCommAttach"));
        btnSendEmailCommAttach->setGeometry(QRect(30, 30, 61, 29));
        groupBox_5 = new QGroupBox(SendEmail);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 370, 841, 201));
        editSendEmailCommMessage = new QLineEdit(groupBox_5);
        editSendEmailCommMessage->setObjectName(QString::fromUtf8("editSendEmailCommMessage"));
        editSendEmailCommMessage->setGeometry(QRect(20, 30, 801, 151));
        btnSendEmailCommClose = new QPushButton(SendEmail);
        btnSendEmailCommClose->setObjectName(QString::fromUtf8("btnSendEmailCommClose"));
        btnSendEmailCommClose->setGeometry(QRect(760, 590, 93, 29));

        retranslateUi(SendEmail);

        QMetaObject::connectSlotsByName(SendEmail);
    } // setupUi

    void retranslateUi(QDialog *SendEmail)
    {
        SendEmail->setWindowTitle(QCoreApplication::translate("SendEmail", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SendEmail", "Address", nullptr));
        label->setText(QCoreApplication::translate("SendEmail", "From:", nullptr));
        label_2->setText(QCoreApplication::translate("SendEmail", "To:", nullptr));
        label_3->setText(QCoreApplication::translate("SendEmail", "Cc:", nullptr));
        label_4->setText(QCoreApplication::translate("SendEmail", "Bcc:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SendEmail", "Send Email", nullptr));
        btnSendEmailCommSend->setText(QCoreApplication::translate("SendEmail", "Send", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SendEmail", "Subject Line", nullptr));
        label_5->setText(QCoreApplication::translate("SendEmail", "Subject:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SendEmail", "Attachments", nullptr));
        btnSendEmailCommAttach->setText(QCoreApplication::translate("SendEmail", "Add", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SendEmail", "Message", nullptr));
        btnSendEmailCommClose->setText(QCoreApplication::translate("SendEmail", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendEmail: public Ui_SendEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDEMAIL_H
