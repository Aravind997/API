/********************************************************************************
** Form generated from reading UI file 'getusertaskinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETUSERTASKINFO_H
#define UI_GETUSERTASKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_GetUserTaskInfo
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTextEdit *textEditEmail;
    QPushButton *pushButtonGetInfo;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *textEditBugDescription;
    QLabel *label_BugStatus;
    QComboBox *comboBoxBugTaskTitle;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_UserType;
    QLabel *label_UserGroup;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetUserTaskInfo)
    {
        if (GetUserTaskInfo->objectName().isEmpty())
            GetUserTaskInfo->setObjectName(QString::fromUtf8("GetUserTaskInfo"));
        GetUserTaskInfo->resize(502, 494);
        groupBox = new QGroupBox(GetUserTaskInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 471, 71));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 48, 16));
        textEditEmail = new QTextEdit(groupBox);
        textEditEmail->setObjectName(QString::fromUtf8("textEditEmail"));
        textEditEmail->setGeometry(QRect(80, 20, 281, 31));
        pushButtonGetInfo = new QPushButton(groupBox);
        pushButtonGetInfo->setObjectName(QString::fromUtf8("pushButtonGetInfo"));
        pushButtonGetInfo->setGeometry(QRect(370, 20, 75, 24));
        groupBox_2 = new QGroupBox(GetUserTaskInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 89, 251, 351));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 111, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 100, 81, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 121, 16));
        textEditBugDescription = new QTextEdit(groupBox_2);
        textEditBugDescription->setObjectName(QString::fromUtf8("textEditBugDescription"));
        textEditBugDescription->setGeometry(QRect(20, 170, 211, 171));
        label_BugStatus = new QLabel(groupBox_2);
        label_BugStatus->setObjectName(QString::fromUtf8("label_BugStatus"));
        label_BugStatus->setGeometry(QRect(97, 100, 141, 20));
        comboBoxBugTaskTitle = new QComboBox(groupBox_2);
        comboBoxBugTaskTitle->setObjectName(QString::fromUtf8("comboBoxBugTaskTitle"));
        comboBoxBugTaskTitle->setGeometry(QRect(20, 60, 211, 22));
        groupBox_3 = new QGroupBox(GetUserTaskInfo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(270, 90, 221, 351));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 71, 16));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 71, 16));
        label_UserType = new QLabel(groupBox_3);
        label_UserType->setObjectName(QString::fromUtf8("label_UserType"));
        label_UserType->setGeometry(QRect(90, 50, 121, 20));
        label_UserGroup = new QLabel(groupBox_3);
        label_UserGroup->setObjectName(QString::fromUtf8("label_UserGroup"));
        label_UserGroup->setGeometry(QRect(90, 96, 121, 20));
        pushButtonClose = new QPushButton(GetUserTaskInfo);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(400, 460, 75, 24));

        retranslateUi(GetUserTaskInfo);

        QMetaObject::connectSlotsByName(GetUserTaskInfo);
    } // setupUi

    void retranslateUi(QDialog *GetUserTaskInfo)
    {
        GetUserTaskInfo->setWindowTitle(QCoreApplication::translate("GetUserTaskInfo", "User Task Details Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetUserTaskInfo", "Enter Email", nullptr));
        label->setText(QCoreApplication::translate("GetUserTaskInfo", "Email ID", nullptr));
        pushButtonGetInfo->setText(QCoreApplication::translate("GetUserTaskInfo", "GetInfo", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetUserTaskInfo", "BugTaskDetails", nullptr));
        label_2->setText(QCoreApplication::translate("GetUserTaskInfo", "Select Bug Task TItle", nullptr));
        label_5->setText(QCoreApplication::translate("GetUserTaskInfo", "Bug Status  :", nullptr));
        label_6->setText(QCoreApplication::translate("GetUserTaskInfo", "Bug Description ", nullptr));
        label_BugStatus->setText(QCoreApplication::translate("GetUserTaskInfo", "TEXT", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetUserTaskInfo", "UserInformation", nullptr));
        label_3->setText(QCoreApplication::translate("GetUserTaskInfo", "UserType   :", nullptr));
        label_4->setText(QCoreApplication::translate("GetUserTaskInfo", "<html><head/><body><p>User Group  :</p></body></html>", nullptr));
        label_UserType->setText(QCoreApplication::translate("GetUserTaskInfo", "TEXT", nullptr));
        label_UserGroup->setText(QCoreApplication::translate("GetUserTaskInfo", "TEXT", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetUserTaskInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetUserTaskInfo: public Ui_GetUserTaskInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETUSERTASKINFO_H
