/********************************************************************************
** Form generated from reading UI file 'getallbuglist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLBUGLIST_H
#define UI_GETALLBUGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_GetAllBugList
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBoxTaskTitle;
    QGroupBox *groupBox_2;
    QLabel *label_BugStatus;
    QGroupBox *groupBox_3;
    QTextEdit *textEditBugDescription;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetAllBugList)
    {
        if (GetAllBugList->objectName().isEmpty())
            GetAllBugList->setObjectName(QString::fromUtf8("GetAllBugList"));
        GetAllBugList->resize(545, 362);
        groupBox = new QGroupBox(GetAllBugList);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 501, 61));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 48, 16));
        comboBoxTaskTitle = new QComboBox(groupBox);
        comboBoxTaskTitle->setObjectName(QString::fromUtf8("comboBoxTaskTitle"));
        comboBoxTaskTitle->setGeometry(QRect(90, 30, 401, 22));
        groupBox_2 = new QGroupBox(GetAllBugList);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 501, 51));
        label_BugStatus = new QLabel(groupBox_2);
        label_BugStatus->setObjectName(QString::fromUtf8("label_BugStatus"));
        label_BugStatus->setGeometry(QRect(220, 20, 48, 16));
        groupBox_3 = new QGroupBox(GetAllBugList);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 170, 501, 131));
        textEditBugDescription = new QTextEdit(groupBox_3);
        textEditBugDescription->setObjectName(QString::fromUtf8("textEditBugDescription"));
        textEditBugDescription->setGeometry(QRect(10, 20, 481, 101));
        pushButtonClose = new QPushButton(GetAllBugList);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(450, 320, 75, 24));

        retranslateUi(GetAllBugList);

        QMetaObject::connectSlotsByName(GetAllBugList);
    } // setupUi

    void retranslateUi(QDialog *GetAllBugList)
    {
        GetAllBugList->setWindowTitle(QCoreApplication::translate("GetAllBugList", "GetAllBugList", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllBugList", "Select BugTask Title", nullptr));
        label->setText(QCoreApplication::translate("GetAllBugList", "Task Title", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllBugList", "Selected Bug Status", nullptr));
        label_BugStatus->setText(QCoreApplication::translate("GetAllBugList", "TEXT", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllBugList", "Selected Bug Description", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetAllBugList", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllBugList: public Ui_GetAllBugList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLBUGLIST_H
