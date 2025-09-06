/********************************************************************************
** Form generated from reading UI file 'getallforums.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLFORUMS_H
#define UI_GETALLFORUMS_H

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

class Ui_GetAllForums
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QComboBox *Select_Forum_ID;
    QGroupBox *groupBox_2;
    QLabel *Name_Forum;
    QGroupBox *groupBox_3;
    QLabel *Description_Forum;
    QPushButton *Close_Get_All_Forum;

    void setupUi(QDialog *GetAllForums)
    {
        if (GetAllForums->objectName().isEmpty())
            GetAllForums->setObjectName(QString::fromUtf8("GetAllForums"));
        GetAllForums->resize(400, 331);
        GetAllForums->setMinimumSize(QSize(400, 300));
        layoutWidget = new QWidget(GetAllForums);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 11, 371, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        Select_Forum_ID = new QComboBox(groupBox);
        Select_Forum_ID->setObjectName(QString::fromUtf8("Select_Forum_ID"));
        Select_Forum_ID->setGeometry(QRect(100, 20, 161, 22));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        Name_Forum = new QLabel(groupBox_2);
        Name_Forum->setObjectName(QString::fromUtf8("Name_Forum"));
        Name_Forum->setGeometry(QRect(10, 20, 351, 61));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        Description_Forum = new QLabel(groupBox_3);
        Description_Forum->setObjectName(QString::fromUtf8("Description_Forum"));
        Description_Forum->setGeometry(QRect(10, 20, 351, 61));

        verticalLayout->addWidget(groupBox_3);

        Close_Get_All_Forum = new QPushButton(GetAllForums);
        Close_Get_All_Forum->setObjectName(QString::fromUtf8("Close_Get_All_Forum"));
        Close_Get_All_Forum->setGeometry(QRect(310, 300, 75, 24));

        retranslateUi(GetAllForums);

        QMetaObject::connectSlotsByName(GetAllForums);
    } // setupUi

    void retranslateUi(QDialog *GetAllForums)
    {
        GetAllForums->setWindowTitle(QCoreApplication::translate("GetAllForums", "Get All Forums", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllForums", "Select Forum ID", nullptr));
        Select_Forum_ID->setPlaceholderText(QCoreApplication::translate("GetAllForums", "Select forum ID", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllForums", "Name of Selected Forum", nullptr));
        Name_Forum->setText(QCoreApplication::translate("GetAllForums", "Name", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllForums", "Description of Selected Forum", nullptr));
        Description_Forum->setText(QCoreApplication::translate("GetAllForums", "Description", nullptr));
        Close_Get_All_Forum->setText(QCoreApplication::translate("GetAllForums", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllForums: public Ui_GetAllForums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLFORUMS_H
