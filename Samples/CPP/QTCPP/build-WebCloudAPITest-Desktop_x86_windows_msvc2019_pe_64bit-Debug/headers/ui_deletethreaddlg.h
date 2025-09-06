/********************************************************************************
** Form generated from reading UI file 'deletethreaddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETHREADDLG_H
#define UI_DELETETHREADDLG_H

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

class Ui_DeleteThreadDlg
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QComboBox *Select_Delete_Thread_ID;
    QLabel *Select_Thread_Name_Delete;
    QGroupBox *groupBox_5;
    QLabel *Thread_Delete2;
    QLabel *Thread_Delete4;
    QLabel *Thread_Delete1;
    QLabel *Thread_Delete3;
    QGroupBox *groupBox_6;
    QTextEdit *Thread_Delete_Description;
    QPushButton *Close_Delete_This_Thread;
    QPushButton *Delete_Delete_Thread;

    void setupUi(QDialog *DeleteThreadDlg)
    {
        if (DeleteThreadDlg->objectName().isEmpty())
            DeleteThreadDlg->setObjectName(QString::fromUtf8("DeleteThreadDlg"));
        DeleteThreadDlg->resize(390, 503);
        layoutWidget = new QWidget(DeleteThreadDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 371, 431));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        Select_Delete_Thread_ID = new QComboBox(groupBox_4);
        Select_Delete_Thread_ID->setObjectName(QString::fromUtf8("Select_Delete_Thread_ID"));
        Select_Delete_Thread_ID->setGeometry(QRect(0, 60, 121, 22));
        Select_Thread_Name_Delete = new QLabel(groupBox_4);
        Select_Thread_Name_Delete->setObjectName(QString::fromUtf8("Select_Thread_Name_Delete"));
        Select_Thread_Name_Delete->setGeometry(QRect(130, 60, 231, 20));

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        Thread_Delete2 = new QLabel(groupBox_5);
        Thread_Delete2->setObjectName(QString::fromUtf8("Thread_Delete2"));
        Thread_Delete2->setGeometry(QRect(10, 50, 351, 16));
        Thread_Delete4 = new QLabel(groupBox_5);
        Thread_Delete4->setObjectName(QString::fromUtf8("Thread_Delete4"));
        Thread_Delete4->setGeometry(QRect(10, 110, 351, 16));
        Thread_Delete1 = new QLabel(groupBox_5);
        Thread_Delete1->setObjectName(QString::fromUtf8("Thread_Delete1"));
        Thread_Delete1->setGeometry(QRect(10, 20, 351, 16));
        Thread_Delete3 = new QLabel(groupBox_5);
        Thread_Delete3->setObjectName(QString::fromUtf8("Thread_Delete3"));
        Thread_Delete3->setGeometry(QRect(10, 80, 351, 16));

        verticalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(layoutWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        Thread_Delete_Description = new QTextEdit(groupBox_6);
        Thread_Delete_Description->setObjectName(QString::fromUtf8("Thread_Delete_Description"));
        Thread_Delete_Description->setGeometry(QRect(10, 20, 331, 101));

        verticalLayout_2->addWidget(groupBox_6);

        Close_Delete_This_Thread = new QPushButton(DeleteThreadDlg);
        Close_Delete_This_Thread->setObjectName(QString::fromUtf8("Close_Delete_This_Thread"));
        Close_Delete_This_Thread->setGeometry(QRect(160, 470, 101, 24));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Close_Delete_This_Thread->sizePolicy().hasHeightForWidth());
        Close_Delete_This_Thread->setSizePolicy(sizePolicy);
        Delete_Delete_Thread = new QPushButton(DeleteThreadDlg);
        Delete_Delete_Thread->setObjectName(QString::fromUtf8("Delete_Delete_Thread"));
        Delete_Delete_Thread->setGeometry(QRect(280, 470, 106, 24));
        sizePolicy.setHeightForWidth(Delete_Delete_Thread->sizePolicy().hasHeightForWidth());
        Delete_Delete_Thread->setSizePolicy(sizePolicy);

        retranslateUi(DeleteThreadDlg);

        QMetaObject::connectSlotsByName(DeleteThreadDlg);
    } // setupUi

    void retranslateUi(QDialog *DeleteThreadDlg)
    {
        DeleteThreadDlg->setWindowTitle(QCoreApplication::translate("DeleteThreadDlg", "Delete a Thread", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DeleteThreadDlg", "Select Thread ID", nullptr));
        Select_Delete_Thread_ID->setPlaceholderText(QCoreApplication::translate("DeleteThreadDlg", "Select Thread ID", nullptr));
        Select_Thread_Name_Delete->setText(QCoreApplication::translate("DeleteThreadDlg", "Thread Name", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DeleteThreadDlg", "Thread Details", nullptr));
        Thread_Delete2->setText(QCoreApplication::translate("DeleteThreadDlg", "Assigned Status : ", nullptr));
        Thread_Delete4->setText(QCoreApplication::translate("DeleteThreadDlg", "Author ID : ", nullptr));
        Thread_Delete1->setText(QCoreApplication::translate("DeleteThreadDlg", "Bug Status : ", nullptr));
        Thread_Delete3->setText(QCoreApplication::translate("DeleteThreadDlg", "Posted On : ", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("DeleteThreadDlg", "Thread Description ", nullptr));
        Close_Delete_This_Thread->setText(QCoreApplication::translate("DeleteThreadDlg", "Close", nullptr));
        Delete_Delete_Thread->setText(QCoreApplication::translate("DeleteThreadDlg", "Delete This Thread", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteThreadDlg: public Ui_DeleteThreadDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETHREADDLG_H
