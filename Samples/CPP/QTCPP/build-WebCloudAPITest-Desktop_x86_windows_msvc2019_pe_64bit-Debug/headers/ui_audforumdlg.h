/********************************************************************************
** Form generated from reading UI file 'audforumdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDFORUMDLG_H
#define UI_AUDFORUMDLG_H

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

class Ui_AUDForumDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_Existing_Forum;
    QListWidget *listWidget_Existing_forums;
    QCheckBox *checkBox_Private_Forum;
    QCheckBox *checkBox_Allow_New_Thrad;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Forum_Type_3;
    QComboBox *comboBox_Select_Group_AUD;
    QLabel *label_5;
    QPushButton *pushButton_Retrive_Email_AUD;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Forum_name;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Forum_Type;
    QComboBox *comboBox_Forum_Type;
    QLabel *label_3;
    QTextEdit *textEdit_Desc_AUD_Forum;
    QTextEdit *textEdit_Participant_Email;
    QPushButton *pushButton_AddNew;
    QPushButton *Add_AUD_Forum;
    QPushButton *Delete_AUD_Forum;
    QPushButton *Cancel_AUD_Forum;

    void setupUi(QDialog *AUDForumDlg)
    {
        if (AUDForumDlg->objectName().isEmpty())
            AUDForumDlg->setObjectName(QString::fromUtf8("AUDForumDlg"));
        AUDForumDlg->resize(679, 497);
        groupBox = new QGroupBox(AUDForumDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 661, 441));
        groupBox_Existing_Forum = new QGroupBox(groupBox);
        groupBox_Existing_Forum->setObjectName(QString::fromUtf8("groupBox_Existing_Forum"));
        groupBox_Existing_Forum->setGeometry(QRect(0, 340, 551, 101));
        listWidget_Existing_forums = new QListWidget(groupBox_Existing_Forum);
        listWidget_Existing_forums->setObjectName(QString::fromUtf8("listWidget_Existing_forums"));
        listWidget_Existing_forums->setGeometry(QRect(280, 20, 271, 71));
        checkBox_Private_Forum = new QCheckBox(groupBox);
        checkBox_Private_Forum->setObjectName(QString::fromUtf8("checkBox_Private_Forum"));
        checkBox_Private_Forum->setGeometry(QRect(280, 80, 151, 20));
        checkBox_Allow_New_Thrad = new QCheckBox(groupBox);
        checkBox_Allow_New_Thrad->setObjectName(QString::fromUtf8("checkBox_Allow_New_Thrad"));
        checkBox_Allow_New_Thrad->setGeometry(QRect(280, 100, 251, 20));
        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 220, 551, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        Forum_Type_3 = new QLabel(layoutWidget_4);
        Forum_Type_3->setObjectName(QString::fromUtf8("Forum_Type_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Forum_Type_3->sizePolicy().hasHeightForWidth());
        Forum_Type_3->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(Forum_Type_3);

        comboBox_Select_Group_AUD = new QComboBox(layoutWidget_4);
        comboBox_Select_Group_AUD->setObjectName(QString::fromUtf8("comboBox_Select_Group_AUD"));

        horizontalLayout_7->addWidget(comboBox_Select_Group_AUD);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 270, 101, 16));
        pushButton_Retrive_Email_AUD = new QPushButton(groupBox);
        pushButton_Retrive_Email_AUD->setObjectName(QString::fromUtf8("pushButton_Retrive_Email_AUD"));
        pushButton_Retrive_Email_AUD->setGeometry(QRect(560, 220, 91, 24));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 551, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        lineEdit_Forum_name = new QLineEdit(layoutWidget);
        lineEdit_Forum_name->setObjectName(QString::fromUtf8("lineEdit_Forum_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_Forum_name->sizePolicy().hasHeightForWidth());
        lineEdit_Forum_name->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lineEdit_Forum_name);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 50, 551, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Forum_Type = new QLabel(layoutWidget1);
        Forum_Type->setObjectName(QString::fromUtf8("Forum_Type"));
        sizePolicy.setHeightForWidth(Forum_Type->sizePolicy().hasHeightForWidth());
        Forum_Type->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(Forum_Type);

        comboBox_Forum_Type = new QComboBox(layoutWidget1);
        comboBox_Forum_Type->setObjectName(QString::fromUtf8("comboBox_Forum_Type"));

        horizontalLayout_3->addWidget(comboBox_Forum_Type);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 130, 97, 16));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        textEdit_Desc_AUD_Forum = new QTextEdit(groupBox);
        textEdit_Desc_AUD_Forum->setObjectName(QString::fromUtf8("textEdit_Desc_AUD_Forum"));
        textEdit_Desc_AUD_Forum->setGeometry(QRect(280, 131, 271, 71));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit_Desc_AUD_Forum->sizePolicy().hasHeightForWidth());
        textEdit_Desc_AUD_Forum->setSizePolicy(sizePolicy3);
        textEdit_Participant_Email = new QTextEdit(groupBox);
        textEdit_Participant_Email->setObjectName(QString::fromUtf8("textEdit_Participant_Email"));
        textEdit_Participant_Email->setGeometry(QRect(280, 250, 271, 91));
        pushButton_AddNew = new QPushButton(AUDForumDlg);
        pushButton_AddNew->setObjectName(QString::fromUtf8("pushButton_AddNew"));
        pushButton_AddNew->setGeometry(QRect(400, 460, 75, 24));
        Add_AUD_Forum = new QPushButton(AUDForumDlg);
        Add_AUD_Forum->setObjectName(QString::fromUtf8("Add_AUD_Forum"));
        Add_AUD_Forum->setGeometry(QRect(500, 460, 75, 24));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Add_AUD_Forum->sizePolicy().hasHeightForWidth());
        Add_AUD_Forum->setSizePolicy(sizePolicy4);
        Delete_AUD_Forum = new QPushButton(AUDForumDlg);
        Delete_AUD_Forum->setObjectName(QString::fromUtf8("Delete_AUD_Forum"));
        Delete_AUD_Forum->setGeometry(QRect(300, 461, 75, 24));
        sizePolicy4.setHeightForWidth(Delete_AUD_Forum->sizePolicy().hasHeightForWidth());
        Delete_AUD_Forum->setSizePolicy(sizePolicy4);
        Cancel_AUD_Forum = new QPushButton(AUDForumDlg);
        Cancel_AUD_Forum->setObjectName(QString::fromUtf8("Cancel_AUD_Forum"));
        Cancel_AUD_Forum->setGeometry(QRect(600, 460, 75, 24));
        sizePolicy4.setHeightForWidth(Cancel_AUD_Forum->sizePolicy().hasHeightForWidth());
        Cancel_AUD_Forum->setSizePolicy(sizePolicy4);

        retranslateUi(AUDForumDlg);

        QMetaObject::connectSlotsByName(AUDForumDlg);
    } // setupUi

    void retranslateUi(QDialog *AUDForumDlg)
    {
        AUDForumDlg->setWindowTitle(QCoreApplication::translate("AUDForumDlg", "Add|Update|Delete Forums", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AUDForumDlg", "Forum Settings", nullptr));
        groupBox_Existing_Forum->setTitle(QCoreApplication::translate("AUDForumDlg", "Existing Forum Names", nullptr));
        checkBox_Private_Forum->setText(QCoreApplication::translate("AUDForumDlg", "Private Forum", nullptr));
        checkBox_Allow_New_Thrad->setText(QCoreApplication::translate("AUDForumDlg", "Allow only Admins to Start a New Thread", nullptr));
        Forum_Type_3->setText(QCoreApplication::translate("AUDForumDlg", "         Select Group", nullptr));
        comboBox_Select_Group_AUD->setPlaceholderText(QCoreApplication::translate("AUDForumDlg", "Select Group", nullptr));
        label_5->setText(QCoreApplication::translate("AUDForumDlg", "Participant EMail", nullptr));
        pushButton_Retrive_Email_AUD->setText(QCoreApplication::translate("AUDForumDlg", "Retrieve EMail", nullptr));
        label->setText(QCoreApplication::translate("AUDForumDlg", "         Forum Name", nullptr));
        Forum_Type->setText(QCoreApplication::translate("AUDForumDlg", "        Forum Type", nullptr));
        comboBox_Forum_Type->setPlaceholderText(QCoreApplication::translate("AUDForumDlg", "Forum Type", nullptr));
        label_3->setText(QCoreApplication::translate("AUDForumDlg", "         Description", nullptr));
        pushButton_AddNew->setText(QCoreApplication::translate("AUDForumDlg", "Add New", nullptr));
        Add_AUD_Forum->setText(QCoreApplication::translate("AUDForumDlg", "Add", nullptr));
        Delete_AUD_Forum->setText(QCoreApplication::translate("AUDForumDlg", "Delete", nullptr));
        Cancel_AUD_Forum->setText(QCoreApplication::translate("AUDForumDlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUDForumDlg: public Ui_AUDForumDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDFORUMDLG_H
