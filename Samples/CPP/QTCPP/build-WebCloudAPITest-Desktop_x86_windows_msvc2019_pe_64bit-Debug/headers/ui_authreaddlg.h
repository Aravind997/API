/********************************************************************************
** Form generated from reading UI file 'authreaddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHREADDLG_H
#define UI_AUTHREADDLG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUThreadDlg
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QComboBox *comboBox_Existing_Forum;
    QLabel *Existing_Forum_Name;
    QLabel *label_2;
    QComboBox *Existing_Topic_Name;
    QGroupBox *groupBox_2;
    QLabel *Thread_Name_AU_2;
    QLabel *label_3;
    QLineEdit *Thread_Name_AU;
    QTextEdit *Thread_Description_AU;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QListWidget *listWidget_Existing_Threads;
    QGroupBox *groupBox_4;
    QCheckBox *Upload_Image_Check_Box;
    QLineEdit *Upload_Image_lineEdit;
    QPushButton *Upload_Image_pushButton;
    QLabel *label_Picture;
    QPushButton *pushButton_AddNew;
    QPushButton *Cancel_AU;
    QPushButton *Add_AU;

    void setupUi(QDialog *AUThreadDlg)
    {
        if (AUThreadDlg->objectName().isEmpty())
            AUThreadDlg->setObjectName(QString::fromUtf8("AUThreadDlg"));
        AUThreadDlg->resize(769, 522);
        layoutWidget = new QWidget(AUThreadDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 741, 471));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        comboBox_Existing_Forum = new QComboBox(groupBox);
        comboBox_Existing_Forum->setObjectName(QString::fromUtf8("comboBox_Existing_Forum"));
        comboBox_Existing_Forum->setGeometry(QRect(141, 70, 221, 22));
        Existing_Forum_Name = new QLabel(groupBox);
        Existing_Forum_Name->setObjectName(QString::fromUtf8("Existing_Forum_Name"));
        Existing_Forum_Name->setGeometry(QRect(22, 70, 113, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(22, 150, 107, 16));
        Existing_Topic_Name = new QComboBox(groupBox);
        Existing_Topic_Name->setObjectName(QString::fromUtf8("Existing_Topic_Name"));
        Existing_Topic_Name->setGeometry(QRect(140, 150, 221, 22));

        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        Thread_Name_AU_2 = new QLabel(groupBox_2);
        Thread_Name_AU_2->setObjectName(QString::fromUtf8("Thread_Name_AU_2"));
        Thread_Name_AU_2->setGeometry(QRect(20, 31, 32, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(21, 61, 60, 16));
        Thread_Name_AU = new QLineEdit(groupBox_2);
        Thread_Name_AU->setObjectName(QString::fromUtf8("Thread_Name_AU"));
        Thread_Name_AU->setGeometry(QRect(90, 30, 271, 22));
        Thread_Description_AU = new QTextEdit(groupBox_2);
        Thread_Description_AU->setObjectName(QString::fromUtf8("Thread_Description_AU"));
        Thread_Description_AU->setGeometry(QRect(90, 61, 271, 159));

        verticalLayout_2->addWidget(groupBox_2);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        listWidget_Existing_Threads = new QListWidget(groupBox_3);
        listWidget_Existing_Threads->setObjectName(QString::fromUtf8("listWidget_Existing_Threads"));
        listWidget_Existing_Threads->setGeometry(QRect(20, 20, 331, 192));

        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        Upload_Image_Check_Box = new QCheckBox(groupBox_4);
        Upload_Image_Check_Box->setObjectName(QString::fromUtf8("Upload_Image_Check_Box"));
        Upload_Image_Check_Box->setGeometry(QRect(20, 30, 141, 20));
        Upload_Image_lineEdit = new QLineEdit(groupBox_4);
        Upload_Image_lineEdit->setObjectName(QString::fromUtf8("Upload_Image_lineEdit"));
        Upload_Image_lineEdit->setGeometry(QRect(20, 70, 231, 22));
        Upload_Image_pushButton = new QPushButton(groupBox_4);
        Upload_Image_pushButton->setObjectName(QString::fromUtf8("Upload_Image_pushButton"));
        Upload_Image_pushButton->setEnabled(false);
        Upload_Image_pushButton->setGeometry(QRect(260, 70, 91, 24));
        label_Picture = new QLabel(groupBox_4);
        label_Picture->setObjectName(QString::fromUtf8("label_Picture"));
        label_Picture->setGeometry(QRect(28, 105, 321, 111));

        verticalLayout->addWidget(groupBox_4);


        horizontalLayout_7->addLayout(verticalLayout);

        pushButton_AddNew = new QPushButton(AUThreadDlg);
        pushButton_AddNew->setObjectName(QString::fromUtf8("pushButton_AddNew"));
        pushButton_AddNew->setGeometry(QRect(470, 490, 75, 24));
        Cancel_AU = new QPushButton(AUThreadDlg);
        Cancel_AU->setObjectName(QString::fromUtf8("Cancel_AU"));
        Cancel_AU->setGeometry(QRect(690, 490, 75, 24));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cancel_AU->sizePolicy().hasHeightForWidth());
        Cancel_AU->setSizePolicy(sizePolicy);
        Add_AU = new QPushButton(AUThreadDlg);
        Add_AU->setObjectName(QString::fromUtf8("Add_AU"));
        Add_AU->setGeometry(QRect(580, 490, 75, 24));
        sizePolicy.setHeightForWidth(Add_AU->sizePolicy().hasHeightForWidth());
        Add_AU->setSizePolicy(sizePolicy);

        retranslateUi(AUThreadDlg);

        QMetaObject::connectSlotsByName(AUThreadDlg);
    } // setupUi

    void retranslateUi(QDialog *AUThreadDlg)
    {
        AUThreadDlg->setWindowTitle(QCoreApplication::translate("AUThreadDlg", "Add|Update Thread", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AUThreadDlg", "Select Forum and Topic", nullptr));
        comboBox_Existing_Forum->setPlaceholderText(QCoreApplication::translate("AUThreadDlg", "Existing Forum Name", nullptr));
        Existing_Forum_Name->setText(QCoreApplication::translate("AUThreadDlg", "Existing Forum Name", nullptr));
        label_2->setText(QCoreApplication::translate("AUThreadDlg", "Existing Topic Name", nullptr));
        Existing_Topic_Name->setPlaceholderText(QCoreApplication::translate("AUThreadDlg", "Existing Topic Name", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AUThreadDlg", "Give a Thread Name and Description", nullptr));
        Thread_Name_AU_2->setText(QCoreApplication::translate("AUThreadDlg", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("AUThreadDlg", "Description", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AUThreadDlg", "Existing Threads", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AUThreadDlg", "Upload Image", nullptr));
        Upload_Image_Check_Box->setText(QCoreApplication::translate("AUThreadDlg", "Upload Image", nullptr));
        Upload_Image_pushButton->setText(QCoreApplication::translate("AUThreadDlg", "Upload Image", nullptr));
        label_Picture->setText(QString());
        pushButton_AddNew->setText(QCoreApplication::translate("AUThreadDlg", "Add New", nullptr));
        Cancel_AU->setText(QCoreApplication::translate("AUThreadDlg", "Cancel", nullptr));
        Add_AU->setText(QCoreApplication::translate("AUThreadDlg", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUThreadDlg: public Ui_AUThreadDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHREADDLG_H
