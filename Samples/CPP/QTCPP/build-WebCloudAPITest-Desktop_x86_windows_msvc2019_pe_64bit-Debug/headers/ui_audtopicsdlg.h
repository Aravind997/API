/********************************************************************************
** Form generated from reading UI file 'audtopicsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDTOPICSDLG_H
#define UI_AUDTOPICSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUDTopicsDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_Existing_Forum;
    QListWidget *listWidget_Existing_Topics;
    QPushButton *UNSelect_AUD_Topic;
    QLabel *label_3;
    QTextEdit *textEdit_Desc_AUD_Topic;
    QCheckBox *checkBox_Admin;
    QPushButton *Select_All_AUD_Topics;
    QListWidget *listWidget_Email;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_Forum_Name_Existing;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Forum_Type;
    QLineEdit *lineEdit_Topic_name_Existing;
    QPushButton *AddNew_AUD_Topic;
    QPushButton *Cancel_AUD_Topic;
    QPushButton *Add_AUD_Topic;
    QPushButton *pushButton_Delete;

    void setupUi(QDialog *AUDTopicsDlg)
    {
        if (AUDTopicsDlg->objectName().isEmpty())
            AUDTopicsDlg->setObjectName(QString::fromUtf8("AUDTopicsDlg"));
        AUDTopicsDlg->resize(719, 523);
        groupBox = new QGroupBox(AUDTopicsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(41, 11, 671, 461));
        groupBox_Existing_Forum = new QGroupBox(groupBox);
        groupBox_Existing_Forum->setObjectName(QString::fromUtf8("groupBox_Existing_Forum"));
        groupBox_Existing_Forum->setGeometry(QRect(240, 330, 261, 141));
        listWidget_Existing_Topics = new QListWidget(groupBox_Existing_Forum);
        listWidget_Existing_Topics->setObjectName(QString::fromUtf8("listWidget_Existing_Topics"));
        listWidget_Existing_Topics->setGeometry(QRect(10, 20, 241, 101));
        UNSelect_AUD_Topic = new QPushButton(groupBox);
        UNSelect_AUD_Topic->setObjectName(QString::fromUtf8("UNSelect_AUD_Topic"));
        UNSelect_AUD_Topic->setGeometry(QRect(530, 270, 91, 24));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 99, 161, 16));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        textEdit_Desc_AUD_Topic = new QTextEdit(groupBox);
        textEdit_Desc_AUD_Topic->setObjectName(QString::fromUtf8("textEdit_Desc_AUD_Topic"));
        textEdit_Desc_AUD_Topic->setGeometry(QRect(250, 100, 241, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_Desc_AUD_Topic->sizePolicy().hasHeightForWidth());
        textEdit_Desc_AUD_Topic->setSizePolicy(sizePolicy1);
        checkBox_Admin = new QCheckBox(groupBox);
        checkBox_Admin->setObjectName(QString::fromUtf8("checkBox_Admin"));
        checkBox_Admin->setGeometry(QRect(250, 300, 221, 20));
        Select_All_AUD_Topics = new QPushButton(groupBox);
        Select_All_AUD_Topics->setObjectName(QString::fromUtf8("Select_All_AUD_Topics"));
        Select_All_AUD_Topics->setGeometry(QRect(530, 190, 91, 24));
        listWidget_Email = new QListWidget(groupBox);
        listWidget_Email->setObjectName(QString::fromUtf8("listWidget_Email"));
        listWidget_Email->setGeometry(QRect(250, 190, 241, 101));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 491, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        comboBox_Forum_Name_Existing = new QComboBox(layoutWidget);
        comboBox_Forum_Name_Existing->setObjectName(QString::fromUtf8("comboBox_Forum_Name_Existing"));

        horizontalLayout->addWidget(comboBox_Forum_Name_Existing);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 60, 491, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Forum_Type = new QLabel(layoutWidget1);
        Forum_Type->setObjectName(QString::fromUtf8("Forum_Type"));
        sizePolicy2.setHeightForWidth(Forum_Type->sizePolicy().hasHeightForWidth());
        Forum_Type->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(Forum_Type);

        lineEdit_Topic_name_Existing = new QLineEdit(layoutWidget1);
        lineEdit_Topic_name_Existing->setObjectName(QString::fromUtf8("lineEdit_Topic_name_Existing"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_Topic_name_Existing->sizePolicy().hasHeightForWidth());
        lineEdit_Topic_name_Existing->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lineEdit_Topic_name_Existing);

        AddNew_AUD_Topic = new QPushButton(AUDTopicsDlg);
        AddNew_AUD_Topic->setObjectName(QString::fromUtf8("AddNew_AUD_Topic"));
        AddNew_AUD_Topic->setGeometry(QRect(420, 481, 75, 24));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AddNew_AUD_Topic->sizePolicy().hasHeightForWidth());
        AddNew_AUD_Topic->setSizePolicy(sizePolicy4);
        Cancel_AUD_Topic = new QPushButton(AUDTopicsDlg);
        Cancel_AUD_Topic->setObjectName(QString::fromUtf8("Cancel_AUD_Topic"));
        Cancel_AUD_Topic->setGeometry(QRect(640, 480, 75, 24));
        sizePolicy4.setHeightForWidth(Cancel_AUD_Topic->sizePolicy().hasHeightForWidth());
        Cancel_AUD_Topic->setSizePolicy(sizePolicy4);
        Add_AUD_Topic = new QPushButton(AUDTopicsDlg);
        Add_AUD_Topic->setObjectName(QString::fromUtf8("Add_AUD_Topic"));
        Add_AUD_Topic->setGeometry(QRect(530, 481, 75, 24));
        sizePolicy4.setHeightForWidth(Add_AUD_Topic->sizePolicy().hasHeightForWidth());
        Add_AUD_Topic->setSizePolicy(sizePolicy4);
        pushButton_Delete = new QPushButton(AUDTopicsDlg);
        pushButton_Delete->setObjectName(QString::fromUtf8("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(310, 480, 75, 24));

        retranslateUi(AUDTopicsDlg);

        QMetaObject::connectSlotsByName(AUDTopicsDlg);
    } // setupUi

    void retranslateUi(QDialog *AUDTopicsDlg)
    {
        AUDTopicsDlg->setWindowTitle(QCoreApplication::translate("AUDTopicsDlg", "Add|Update|Delete Topics", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AUDTopicsDlg", "Forum Topic Settings", nullptr));
        groupBox_Existing_Forum->setTitle(QCoreApplication::translate("AUDTopicsDlg", "Existing  Topics", nullptr));
        UNSelect_AUD_Topic->setText(QCoreApplication::translate("AUDTopicsDlg", "UnSelect All", nullptr));
        label_3->setText(QCoreApplication::translate("AUDTopicsDlg", "         Topic Description", nullptr));
        checkBox_Admin->setText(QCoreApplication::translate("AUDTopicsDlg", "Need Administrator Approval", nullptr));
        Select_All_AUD_Topics->setText(QCoreApplication::translate("AUDTopicsDlg", "Select All", nullptr));
        label->setText(QCoreApplication::translate("AUDTopicsDlg", "         Existing Forum Name", nullptr));
        comboBox_Forum_Name_Existing->setPlaceholderText(QCoreApplication::translate("AUDTopicsDlg", "Existing Forum Name", nullptr));
        Forum_Type->setText(QCoreApplication::translate("AUDTopicsDlg", "        Topic Name", nullptr));
        AddNew_AUD_Topic->setText(QCoreApplication::translate("AUDTopicsDlg", "Add New", nullptr));
        Cancel_AUD_Topic->setText(QCoreApplication::translate("AUDTopicsDlg", "Cancel", nullptr));
        Add_AUD_Topic->setText(QCoreApplication::translate("AUDTopicsDlg", "Add", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("AUDTopicsDlg", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUDTopicsDlg: public Ui_AUDTopicsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDTOPICSDLG_H
