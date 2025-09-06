/********************************************************************************
** Form generated from reading UI file 'approve_reject_leavedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPROVE_REJECT_LEAVEDLG_H
#define UI_APPROVE_REJECT_LEAVEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Approve_Reject_LeaveDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QTextEdit *remarks;
    QPushButton *btnReject;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *LeaveRequestcombo;
    QLabel *label_2;
    QLabel *status;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLabel *from;
    QLabel *to;
    QLabel *label_4;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *type_of_leave;
    QLabel *reason;
    QPushButton *btnClose;

    void setupUi(QDialog *Approve_Reject_LeaveDlg)
    {
        if (Approve_Reject_LeaveDlg->objectName().isEmpty())
            Approve_Reject_LeaveDlg->setObjectName(QString::fromUtf8("Approve_Reject_LeaveDlg"));
        Approve_Reject_LeaveDlg->resize(1119, 397);
        groupBox = new QGroupBox(Approve_Reject_LeaveDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 551, 371));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 180, 511, 171));
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 10, 481, 91));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        remarks = new QTextEdit(formLayoutWidget_2);
        remarks->setObjectName(QString::fromUtf8("remarks"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, remarks);

        btnReject = new QPushButton(groupBox_2);
        btnReject->setObjectName(QString::fromUtf8("btnReject"));
        btnReject->setGeometry(QRect(400, 120, 83, 29));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 120, 83, 29));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 511, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(29);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        LeaveRequestcombo = new QComboBox(formLayoutWidget);
        LeaveRequestcombo->setObjectName(QString::fromUtf8("LeaveRequestcombo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LeaveRequestcombo);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        status = new QLabel(formLayoutWidget);
        status->setObjectName(QString::fromUtf8("status"));

        formLayout->setWidget(1, QFormLayout::FieldRole, status);

        groupBox_3 = new QGroupBox(Approve_Reject_LeaveDlg);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 10, 541, 371));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 60, 521, 151));
        formLayoutWidget_3 = new QWidget(groupBox_4);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 40, 501, 91));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setVerticalSpacing(23);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        from = new QLabel(formLayoutWidget_3);
        from->setObjectName(QString::fromUtf8("from"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, from);

        to = new QLabel(formLayoutWidget_3);
        to->setObjectName(QString::fromUtf8("to"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, to);

        label_4 = new QLabel(formLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        formLayoutWidget_4 = new QWidget(groupBox_3);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(20, 240, 501, 81));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setVerticalSpacing(22);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_6);

        type_of_leave = new QLabel(formLayoutWidget_4);
        type_of_leave->setObjectName(QString::fromUtf8("type_of_leave"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, type_of_leave);

        reason = new QLabel(formLayoutWidget_4);
        reason->setObjectName(QString::fromUtf8("reason"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, reason);

        btnClose = new QPushButton(groupBox_3);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(430, 330, 83, 29));

        retranslateUi(Approve_Reject_LeaveDlg);

        QMetaObject::connectSlotsByName(Approve_Reject_LeaveDlg);
    } // setupUi

    void retranslateUi(QDialog *Approve_Reject_LeaveDlg)
    {
        Approve_Reject_LeaveDlg->setWindowTitle(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Leave Application Form", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_7->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Remark", nullptr));
        btnReject->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Reject", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Approve", nullptr));
        label->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Leave Request", nullptr));
        label_2->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Status   :", nullptr));
        status->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Leave Application details", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Date", nullptr));
        label_3->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "From                                  :", nullptr));
        from->setText(QString());
        to->setText(QString());
        label_4->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "To                                       :", nullptr));
        label_5->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Type of Leave                    :", nullptr));
        label_6->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Reason                              :", nullptr));
        type_of_leave->setText(QString());
        reason->setText(QString());
        btnClose->setText(QCoreApplication::translate("Approve_Reject_LeaveDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Approve_Reject_LeaveDlg: public Ui_Approve_Reject_LeaveDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPROVE_REJECT_LEAVEDLG_H
