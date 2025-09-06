/********************************************************************************
** Form generated from reading UI file 'invite_employeedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITE_EMPLOYEEDLG_H
#define UI_INVITE_EMPLOYEEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Invite_EmployeeDlg
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *InviteEmployeeCategorycombo;
    QLabel *label_2;
    QComboBox *InviteEmployeeTypecombo;
    QLabel *label_3;
    QPlainTextEdit *InviteEmployee_Email;
    QLabel *label_4;
    QPlainTextEdit *InviteEmployee_msg;
    QPushButton *btnInvite_Employee;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Invite_EmployeeDlg)
    {
        if (Invite_EmployeeDlg->objectName().isEmpty())
            Invite_EmployeeDlg->setObjectName(QString::fromUtf8("Invite_EmployeeDlg"));
        Invite_EmployeeDlg->resize(666, 605);
        groupBox = new QGroupBox(Invite_EmployeeDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 641, 541));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 29, 621, 499));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        InviteEmployeeCategorycombo = new QComboBox(formLayoutWidget);
        InviteEmployeeCategorycombo->setObjectName(QString::fromUtf8("InviteEmployeeCategorycombo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, InviteEmployeeCategorycombo);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        InviteEmployeeTypecombo = new QComboBox(formLayoutWidget);
        InviteEmployeeTypecombo->setObjectName(QString::fromUtf8("InviteEmployeeTypecombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, InviteEmployeeTypecombo);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        InviteEmployee_Email = new QPlainTextEdit(formLayoutWidget);
        InviteEmployee_Email->setObjectName(QString::fromUtf8("InviteEmployee_Email"));

        formLayout->setWidget(2, QFormLayout::FieldRole, InviteEmployee_Email);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        InviteEmployee_msg = new QPlainTextEdit(formLayoutWidget);
        InviteEmployee_msg->setObjectName(QString::fromUtf8("InviteEmployee_msg"));

        formLayout->setWidget(3, QFormLayout::FieldRole, InviteEmployee_msg);

        btnInvite_Employee = new QPushButton(formLayoutWidget);
        btnInvite_Employee->setObjectName(QString::fromUtf8("btnInvite_Employee"));

        formLayout->setWidget(4, QFormLayout::FieldRole, btnInvite_Employee);

        pushButton_2 = new QPushButton(Invite_EmployeeDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 560, 83, 29));

        retranslateUi(Invite_EmployeeDlg);

        QMetaObject::connectSlotsByName(Invite_EmployeeDlg);
    } // setupUi

    void retranslateUi(QDialog *Invite_EmployeeDlg)
    {
        Invite_EmployeeDlg->setWindowTitle(QCoreApplication::translate("Invite_EmployeeDlg", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Invite_EmployeeDlg", "Invite Employee", nullptr));
        label->setText(QCoreApplication::translate("Invite_EmployeeDlg", "Select User Category(*)", nullptr));
        label_2->setText(QCoreApplication::translate("Invite_EmployeeDlg", "Select Employee Type(*)", nullptr));
        label_3->setText(QCoreApplication::translate("Invite_EmployeeDlg", "Enter User Email", nullptr));
        label_4->setText(QCoreApplication::translate("Invite_EmployeeDlg", "Enter Email Message(Optional)", nullptr));
        btnInvite_Employee->setText(QCoreApplication::translate("Invite_EmployeeDlg", "Invite Employee", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Invite_EmployeeDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Invite_EmployeeDlg: public Ui_Invite_EmployeeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITE_EMPLOYEEDLG_H
