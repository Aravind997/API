/********************************************************************************
** Form generated from reading UI file 'addcommentdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMMENTDLG_H
#define UI_ADDCOMMENTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCommentDlg
{
public:
    QGroupBox *groupBox_3;
    QPushButton *Cancel_Add_Comments;
    QPushButton *Add_Add_Comment;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *Select_Topic_ID;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *Select_Thread_ID;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label;
    QComboBox *Select_Forum_ID;
    QGroupBox *groupBox_2;
    QTextEdit *Add_Comments_2;

    void setupUi(QDialog *AddCommentDlg)
    {
        if (AddCommentDlg->objectName().isEmpty())
            AddCommentDlg->setObjectName(QString::fromUtf8("AddCommentDlg"));
        AddCommentDlg->resize(433, 490);
        groupBox_3 = new QGroupBox(AddCommentDlg);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 430, 411, 51));
        Cancel_Add_Comments = new QPushButton(groupBox_3);
        Cancel_Add_Comments->setObjectName(QString::fromUtf8("Cancel_Add_Comments"));
        Cancel_Add_Comments->setGeometry(QRect(320, 20, 91, 24));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cancel_Add_Comments->sizePolicy().hasHeightForWidth());
        Cancel_Add_Comments->setSizePolicy(sizePolicy);
        Add_Add_Comment = new QPushButton(groupBox_3);
        Add_Add_Comment->setObjectName(QString::fromUtf8("Add_Add_Comment"));
        Add_Add_Comment->setGeometry(QRect(210, 20, 95, 24));
        sizePolicy.setHeightForWidth(Add_Add_Comment->sizePolicy().hasHeightForWidth());
        Add_Add_Comment->setSizePolicy(sizePolicy);
        layoutWidget1 = new QWidget(AddCommentDlg);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 9, 411, 421));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 100, 361, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Select_Topic_ID = new QComboBox(layoutWidget4);
        Select_Topic_ID->setObjectName(QString::fromUtf8("Select_Topic_ID"));

        horizontalLayout_2->addWidget(Select_Topic_ID);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 160, 361, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Select_Thread_ID = new QComboBox(layoutWidget_2);
        Select_Thread_ID->setObjectName(QString::fromUtf8("Select_Thread_ID"));

        horizontalLayout_3->addWidget(Select_Thread_ID);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 40, 361, 24));
        horizontalLayout_1 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_1->addWidget(label);

        Select_Forum_ID = new QComboBox(layoutWidget5);
        Select_Forum_ID->setObjectName(QString::fromUtf8("Select_Forum_ID"));

        horizontalLayout_1->addWidget(Select_Forum_ID);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        Add_Comments_2 = new QTextEdit(groupBox_2);
        Add_Comments_2->setObjectName(QString::fromUtf8("Add_Comments_2"));
        Add_Comments_2->setGeometry(QRect(20, 30, 371, 161));

        verticalLayout->addWidget(groupBox_2);


        retranslateUi(AddCommentDlg);

        QMetaObject::connectSlotsByName(AddCommentDlg);
    } // setupUi

    void retranslateUi(QDialog *AddCommentDlg)
    {
        AddCommentDlg->setWindowTitle(QCoreApplication::translate("AddCommentDlg", "Add A Comment", nullptr));
        groupBox_3->setTitle(QString());
        Cancel_Add_Comments->setText(QCoreApplication::translate("AddCommentDlg", "Cancel", nullptr));
        Add_Add_Comment->setText(QCoreApplication::translate("AddCommentDlg", " Add Comments", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddCommentDlg", "Select Forum ID,Topic ID and Thread ID", nullptr));
        label_2->setText(QCoreApplication::translate("AddCommentDlg", "Select Topic ID", nullptr));
        Select_Topic_ID->setPlaceholderText(QCoreApplication::translate("AddCommentDlg", "Select Topic ID", nullptr));
        label_3->setText(QCoreApplication::translate("AddCommentDlg", "Select_Thread_ID", nullptr));
        Select_Thread_ID->setPlaceholderText(QCoreApplication::translate("AddCommentDlg", "Select Thread ID", nullptr));
        label->setText(QCoreApplication::translate("AddCommentDlg", "Select Forum ID", nullptr));
        Select_Forum_ID->setPlaceholderText(QCoreApplication::translate("AddCommentDlg", "Select Forum ID", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AddCommentDlg", "Add Comments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCommentDlg: public Ui_AddCommentDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMMENTDLG_H
