/********************************************************************************
** Form generated from reading UI file 'getassignedtasklist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETASSIGNEDTASKLIST_H
#define UI_GETASSIGNEDTASKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_GetAssignedTaskList
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBoxTaskID;
    QTextEdit *textEditTaskTitle;
    QTextEdit *textEditTaskDescription;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetAssignedTaskList)
    {
        if (GetAssignedTaskList->objectName().isEmpty())
            GetAssignedTaskList->setObjectName(QString::fromUtf8("GetAssignedTaskList"));
        GetAssignedTaskList->resize(400, 300);
        groupBox = new QGroupBox(GetAssignedTaskList);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 382, 251));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 48, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 48, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 91, 16));
        comboBoxTaskID = new QComboBox(groupBox);
        comboBoxTaskID->setObjectName(QString::fromUtf8("comboBoxTaskID"));
        comboBoxTaskID->setGeometry(QRect(120, 31, 241, 31));
        textEditTaskTitle = new QTextEdit(groupBox);
        textEditTaskTitle->setObjectName(QString::fromUtf8("textEditTaskTitle"));
        textEditTaskTitle->setGeometry(QRect(120, 80, 241, 31));
        textEditTaskDescription = new QTextEdit(groupBox);
        textEditTaskDescription->setObjectName(QString::fromUtf8("textEditTaskDescription"));
        textEditTaskDescription->setGeometry(QRect(30, 140, 331, 71));
        pushButtonClose = new QPushButton(GetAssignedTaskList);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(290, 270, 75, 24));

        retranslateUi(GetAssignedTaskList);

        QMetaObject::connectSlotsByName(GetAssignedTaskList);
    } // setupUi

    void retranslateUi(QDialog *GetAssignedTaskList)
    {
        GetAssignedTaskList->setWindowTitle(QCoreApplication::translate("GetAssignedTaskList", "Get Assigned Task List", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAssignedTaskList", "AssignedTaskList", nullptr));
        label->setText(QCoreApplication::translate("GetAssignedTaskList", "TaskID", nullptr));
        label_2->setText(QCoreApplication::translate("GetAssignedTaskList", "Task Title", nullptr));
        label_3->setText(QCoreApplication::translate("GetAssignedTaskList", "Task Description", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetAssignedTaskList", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAssignedTaskList: public Ui_GetAssignedTaskList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETASSIGNEDTASKLIST_H
