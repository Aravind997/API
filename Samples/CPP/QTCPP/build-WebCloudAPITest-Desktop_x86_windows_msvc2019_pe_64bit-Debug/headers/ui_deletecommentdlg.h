/********************************************************************************
** Form generated from reading UI file 'deletecommentdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECOMMENTDLG_H
#define UI_DELETECOMMENTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteCommentDlg
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *Select_Forum_ID;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *Select_Topic_ID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *Select_Thread_ID;
    QGroupBox *groupBox_2;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *UnSelect_All_Delete_Comment;
    QPushButton *Select_All_Delete_Comment;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Cancel_Delete_Comment_2;
    QPushButton *Delete_Selected_Delete_Comment_2;

    void setupUi(QDialog *DeleteCommentDlg)
    {
        if (DeleteCommentDlg->objectName().isEmpty())
            DeleteCommentDlg->setObjectName(QString::fromUtf8("DeleteCommentDlg"));
        DeleteCommentDlg->resize(746, 523);
        groupBox = new QGroupBox(DeleteCommentDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 731, 60));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        Select_Forum_ID = new QComboBox(groupBox);
        Select_Forum_ID->setObjectName(QString::fromUtf8("Select_Forum_ID"));

        horizontalLayout_2->addWidget(Select_Forum_ID);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        Select_Topic_ID = new QComboBox(groupBox);
        Select_Topic_ID->setObjectName(QString::fromUtf8("Select_Topic_ID"));

        horizontalLayout_4->addWidget(Select_Topic_ID);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Select_Thread_ID = new QComboBox(groupBox);
        Select_Thread_ID->setObjectName(QString::fromUtf8("Select_Thread_ID"));

        horizontalLayout_3->addWidget(Select_Thread_ID);


        horizontalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(DeleteCommentDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 70, 731, 381));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 711, 311));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 340, 311, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        UnSelect_All_Delete_Comment = new QPushButton(layoutWidget);
        UnSelect_All_Delete_Comment->setObjectName(QString::fromUtf8("UnSelect_All_Delete_Comment"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UnSelect_All_Delete_Comment->sizePolicy().hasHeightForWidth());
        UnSelect_All_Delete_Comment->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(UnSelect_All_Delete_Comment);

        Select_All_Delete_Comment = new QPushButton(layoutWidget);
        Select_All_Delete_Comment->setObjectName(QString::fromUtf8("Select_All_Delete_Comment"));
        sizePolicy.setHeightForWidth(Select_All_Delete_Comment->sizePolicy().hasHeightForWidth());
        Select_All_Delete_Comment->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(Select_All_Delete_Comment);

        layoutWidget1 = new QWidget(DeleteCommentDlg);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(420, 470, 311, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Cancel_Delete_Comment_2 = new QPushButton(layoutWidget1);
        Cancel_Delete_Comment_2->setObjectName(QString::fromUtf8("Cancel_Delete_Comment_2"));
        sizePolicy.setHeightForWidth(Cancel_Delete_Comment_2->sizePolicy().hasHeightForWidth());
        Cancel_Delete_Comment_2->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(Cancel_Delete_Comment_2);

        Delete_Selected_Delete_Comment_2 = new QPushButton(layoutWidget1);
        Delete_Selected_Delete_Comment_2->setObjectName(QString::fromUtf8("Delete_Selected_Delete_Comment_2"));
        sizePolicy.setHeightForWidth(Delete_Selected_Delete_Comment_2->sizePolicy().hasHeightForWidth());
        Delete_Selected_Delete_Comment_2->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(Delete_Selected_Delete_Comment_2);


        retranslateUi(DeleteCommentDlg);

        QMetaObject::connectSlotsByName(DeleteCommentDlg);
    } // setupUi

    void retranslateUi(QDialog *DeleteCommentDlg)
    {
        DeleteCommentDlg->setWindowTitle(QCoreApplication::translate("DeleteCommentDlg", "Delete a Comment", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeleteCommentDlg", "Select Forum ID,Topic ID and Thread ID", nullptr));
        label->setText(QCoreApplication::translate("DeleteCommentDlg", "Select Forum ID", nullptr));
        Select_Forum_ID->setPlaceholderText(QCoreApplication::translate("DeleteCommentDlg", "Select forum ID", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteCommentDlg", "Select Topic ID", nullptr));
        Select_Topic_ID->setPlaceholderText(QCoreApplication::translate("DeleteCommentDlg", "Select Topic ID", nullptr));
        label_3->setText(QCoreApplication::translate("DeleteCommentDlg", "Select_Thread_ID", nullptr));
        Select_Thread_ID->setPlaceholderText(QCoreApplication::translate("DeleteCommentDlg", "Select Thread ID", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DeleteCommentDlg", "Select Messages to Delete", nullptr));
        UnSelect_All_Delete_Comment->setText(QCoreApplication::translate("DeleteCommentDlg", "UnSelect All", nullptr));
        Select_All_Delete_Comment->setText(QCoreApplication::translate("DeleteCommentDlg", "Select All", nullptr));
        Cancel_Delete_Comment_2->setText(QCoreApplication::translate("DeleteCommentDlg", "Cancel", nullptr));
        Delete_Selected_Delete_Comment_2->setText(QCoreApplication::translate("DeleteCommentDlg", "Delete Selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteCommentDlg: public Ui_DeleteCommentDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECOMMENTDLG_H
