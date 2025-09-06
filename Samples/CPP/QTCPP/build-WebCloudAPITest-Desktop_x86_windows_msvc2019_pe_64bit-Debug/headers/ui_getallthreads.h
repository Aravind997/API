/********************************************************************************
** Form generated from reading UI file 'getallthreads.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLTHREADS_H
#define UI_GETALLTHREADS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetAllThreads
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QComboBox *Select_Thread_ID;
    QLabel *Thread_Name;
    QGroupBox *groupBox_2;
    QLabel *Thread_Details1;
    QLabel *Thread_Details2;
    QLabel *Thread_Details3;
    QLabel *Thread_Details4;
    QGroupBox *groupBox_3;
    QTextEdit *Thread_Description;
    QPushButton *Close_Get_All_Thread;

    void setupUi(QDialog *GetAllThreads)
    {
        if (GetAllThreads->objectName().isEmpty())
            GetAllThreads->setObjectName(QString::fromUtf8("GetAllThreads"));
        GetAllThreads->resize(400, 478);
        layoutWidget = new QWidget(GetAllThreads);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 21, 371, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        Select_Thread_ID = new QComboBox(groupBox);
        Select_Thread_ID->setObjectName(QString::fromUtf8("Select_Thread_ID"));
        Select_Thread_ID->setGeometry(QRect(10, 40, 91, 22));
        Thread_Name = new QLabel(groupBox);
        Thread_Name->setObjectName(QString::fromUtf8("Thread_Name"));
        Thread_Name->setGeometry(QRect(110, 40, 251, 20));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        Thread_Details1 = new QLabel(groupBox_2);
        Thread_Details1->setObjectName(QString::fromUtf8("Thread_Details1"));
        Thread_Details1->setGeometry(QRect(10, 20, 351, 16));
        Thread_Details2 = new QLabel(groupBox_2);
        Thread_Details2->setObjectName(QString::fromUtf8("Thread_Details2"));
        Thread_Details2->setGeometry(QRect(10, 50, 351, 16));
        Thread_Details3 = new QLabel(groupBox_2);
        Thread_Details3->setObjectName(QString::fromUtf8("Thread_Details3"));
        Thread_Details3->setGeometry(QRect(10, 80, 351, 16));
        Thread_Details4 = new QLabel(groupBox_2);
        Thread_Details4->setObjectName(QString::fromUtf8("Thread_Details4"));
        Thread_Details4->setGeometry(QRect(10, 110, 351, 16));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        Thread_Description = new QTextEdit(groupBox_3);
        Thread_Description->setObjectName(QString::fromUtf8("Thread_Description"));
        Thread_Description->setGeometry(QRect(20, 20, 331, 101));

        verticalLayout->addWidget(groupBox_3);

        Close_Get_All_Thread = new QPushButton(GetAllThreads);
        Close_Get_All_Thread->setObjectName(QString::fromUtf8("Close_Get_All_Thread"));
        Close_Get_All_Thread->setGeometry(QRect(310, 440, 75, 24));

        retranslateUi(GetAllThreads);

        QMetaObject::connectSlotsByName(GetAllThreads);
    } // setupUi

    void retranslateUi(QDialog *GetAllThreads)
    {
        GetAllThreads->setWindowTitle(QCoreApplication::translate("GetAllThreads", "Get All Threads", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllThreads", "Select Thread ID", nullptr));
        Select_Thread_ID->setPlaceholderText(QCoreApplication::translate("GetAllThreads", "Select Thread ID", nullptr));
        Thread_Name->setText(QCoreApplication::translate("GetAllThreads", "Thread Name", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllThreads", "Thread Details", nullptr));
        Thread_Details1->setText(QCoreApplication::translate("GetAllThreads", "Bug Status : ", nullptr));
        Thread_Details2->setText(QCoreApplication::translate("GetAllThreads", "Assigned Status : ", nullptr));
        Thread_Details3->setText(QCoreApplication::translate("GetAllThreads", "Posted On : ", nullptr));
        Thread_Details4->setText(QCoreApplication::translate("GetAllThreads", "Author ID : ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllThreads", "Thread Description   ", nullptr));
        Close_Get_All_Thread->setText(QCoreApplication::translate("GetAllThreads", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllThreads: public Ui_GetAllThreads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLTHREADS_H
