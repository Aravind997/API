/********************************************************************************
** Form generated from reading UI file 'getalltopicdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLTOPICDLG_H
#define UI_GETALLTOPICDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetAllTopicDlg
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QComboBox *Select_Topic_ID;
    QGroupBox *groupBox_5;
    QLabel *Name_Topic;
    QGroupBox *groupBox_6;
    QLabel *Description_Topic;
    QPushButton *Close_Get_All_Topic;

    void setupUi(QDialog *GetAllTopicDlg)
    {
        if (GetAllTopicDlg->objectName().isEmpty())
            GetAllTopicDlg->setObjectName(QString::fromUtf8("GetAllTopicDlg"));
        GetAllTopicDlg->resize(400, 338);
        layoutWidget = new QWidget(GetAllTopicDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 11, 371, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        Select_Topic_ID = new QComboBox(groupBox_4);
        Select_Topic_ID->setObjectName(QString::fromUtf8("Select_Topic_ID"));
        Select_Topic_ID->setGeometry(QRect(100, 20, 161, 22));

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        Name_Topic = new QLabel(groupBox_5);
        Name_Topic->setObjectName(QString::fromUtf8("Name_Topic"));
        Name_Topic->setGeometry(QRect(10, 20, 351, 51));

        verticalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(layoutWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        Description_Topic = new QLabel(groupBox_6);
        Description_Topic->setObjectName(QString::fromUtf8("Description_Topic"));
        Description_Topic->setGeometry(QRect(10, 20, 351, 61));

        verticalLayout_2->addWidget(groupBox_6);

        Close_Get_All_Topic = new QPushButton(GetAllTopicDlg);
        Close_Get_All_Topic->setObjectName(QString::fromUtf8("Close_Get_All_Topic"));
        Close_Get_All_Topic->setGeometry(QRect(310, 300, 75, 24));

        retranslateUi(GetAllTopicDlg);

        QMetaObject::connectSlotsByName(GetAllTopicDlg);
    } // setupUi

    void retranslateUi(QDialog *GetAllTopicDlg)
    {
        GetAllTopicDlg->setWindowTitle(QCoreApplication::translate("GetAllTopicDlg", "Get All Topics", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("GetAllTopicDlg", "Select Topic ID", nullptr));
        Select_Topic_ID->setPlaceholderText(QCoreApplication::translate("GetAllTopicDlg", "Select Topic ID", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("GetAllTopicDlg", "Name of Selected Topic", nullptr));
        Name_Topic->setText(QCoreApplication::translate("GetAllTopicDlg", "Name", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("GetAllTopicDlg", "Description of Selected Topic", nullptr));
        Description_Topic->setText(QCoreApplication::translate("GetAllTopicDlg", "Description", nullptr));
        Close_Get_All_Topic->setText(QCoreApplication::translate("GetAllTopicDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllTopicDlg: public Ui_GetAllTopicDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLTOPICDLG_H
