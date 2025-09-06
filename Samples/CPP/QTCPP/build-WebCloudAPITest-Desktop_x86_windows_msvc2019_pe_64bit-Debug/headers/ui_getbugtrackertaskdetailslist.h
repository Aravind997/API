/********************************************************************************
** Form generated from reading UI file 'getbugtrackertaskdetailslist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETBUGTRACKERTASKDETAILSLIST_H
#define UI_GETBUGTRACKERTASKDETAILSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_GetBugTrackerTaskDetailsList
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QTextEdit *textEditBugTaskDescription;
    QComboBox *comboBoxBugTaskTitle;
    QTextEdit *textEditBugStatus;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetBugTrackerTaskDetailsList)
    {
        if (GetBugTrackerTaskDetailsList->objectName().isEmpty())
            GetBugTrackerTaskDetailsList->setObjectName(QString::fromUtf8("GetBugTrackerTaskDetailsList"));
        GetBugTrackerTaskDetailsList->resize(420, 373);
        groupBox = new QGroupBox(GetBugTrackerTaskDetailsList);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 401, 301));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 121, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 121, 16));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 381, 171));
        textEditBugTaskDescription = new QTextEdit(groupBox_2);
        textEditBugTaskDescription->setObjectName(QString::fromUtf8("textEditBugTaskDescription"));
        textEditBugTaskDescription->setGeometry(QRect(10, 20, 361, 141));
        comboBoxBugTaskTitle = new QComboBox(groupBox);
        comboBoxBugTaskTitle->setObjectName(QString::fromUtf8("comboBoxBugTaskTitle"));
        comboBoxBugTaskTitle->setGeometry(QRect(160, 40, 221, 22));
        textEditBugStatus = new QTextEdit(groupBox);
        textEditBugStatus->setObjectName(QString::fromUtf8("textEditBugStatus"));
        textEditBugStatus->setGeometry(QRect(160, 70, 221, 31));
        pushButtonClose = new QPushButton(GetBugTrackerTaskDetailsList);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(330, 330, 75, 24));

        retranslateUi(GetBugTrackerTaskDetailsList);

        QMetaObject::connectSlotsByName(GetBugTrackerTaskDetailsList);
    } // setupUi

    void retranslateUi(QDialog *GetBugTrackerTaskDetailsList)
    {
        GetBugTrackerTaskDetailsList->setWindowTitle(QCoreApplication::translate("GetBugTrackerTaskDetailsList", "Get Bug Tracker Task Details List", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetBugTrackerTaskDetailsList", "BugTracker Details", nullptr));
        label->setText(QCoreApplication::translate("GetBugTrackerTaskDetailsList", "Select Bug Task Title :", nullptr));
        label_2->setText(QCoreApplication::translate("GetBugTrackerTaskDetailsList", "Bug Status                 :", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetBugTrackerTaskDetailsList", "BugTaskDescription", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetBugTrackerTaskDetailsList", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetBugTrackerTaskDetailsList: public Ui_GetBugTrackerTaskDetailsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETBUGTRACKERTASKDETAILSLIST_H
