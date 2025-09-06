/********************************************************************************
** Form generated from reading UI file 'audemployeedetailsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDEMPLOYEEDETAILSDLG_H
#define UI_AUDEMPLOYEEDETAILSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUDEmployeeDetailsDlg
{
public:
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *EmployeeName;
    QLabel *label_2;
    QComboBox *Employee_Typecombo;
    QLabel *label_3;
    QLineEdit *EmployeeEmailOff;
    QLabel *label_4;
    QLineEdit *EmployeeEmailHom;
    QLabel *label_5;
    QLineEdit *EmployeePh;
    QLabel *label_6;
    QComboBox *Employee_Statuscombo;
    QLabel *label_7;
    QLineEdit *EmployeeFinalSal;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QCalendarWidget *calendarWidget;
    QLabel *label_10;
    QCalendarWidget *calendarWidget_2;
    QLabel *Employee_Remarks;
    QLineEdit *EmployeeAddr;
    QLineEdit *Employee_Remarks_2;
    QPushButton *btnClose;
    QPushButton *btnClear_All;
    QPushButton *btnSave;
    QGroupBox *groupBox;
    QTableView *Employee_Listtable;
    QPushButton *btnDelete;
    QPushButton *btnEdit;

    void setupUi(QDialog *AUDEmployeeDetailsDlg)
    {
        if (AUDEmployeeDetailsDlg->objectName().isEmpty())
            AUDEmployeeDetailsDlg->setObjectName(QString::fromUtf8("AUDEmployeeDetailsDlg"));
        AUDEmployeeDetailsDlg->resize(1211, 979);
        AUDEmployeeDetailsDlg->setAutoFillBackground(true);
        groupBox_2 = new QGroupBox(AUDEmployeeDetailsDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 0, 1191, 631));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 29, 591, 591));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(14);
        formLayout->setVerticalSpacing(64);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        EmployeeName = new QLineEdit(formLayoutWidget);
        EmployeeName->setObjectName(QString::fromUtf8("EmployeeName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, EmployeeName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        Employee_Typecombo = new QComboBox(formLayoutWidget);
        Employee_Typecombo->setObjectName(QString::fromUtf8("Employee_Typecombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Employee_Typecombo);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        EmployeeEmailOff = new QLineEdit(formLayoutWidget);
        EmployeeEmailOff->setObjectName(QString::fromUtf8("EmployeeEmailOff"));

        formLayout->setWidget(2, QFormLayout::FieldRole, EmployeeEmailOff);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        EmployeeEmailHom = new QLineEdit(formLayoutWidget);
        EmployeeEmailHom->setObjectName(QString::fromUtf8("EmployeeEmailHom"));

        formLayout->setWidget(3, QFormLayout::FieldRole, EmployeeEmailHom);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        EmployeePh = new QLineEdit(formLayoutWidget);
        EmployeePh->setObjectName(QString::fromUtf8("EmployeePh"));

        formLayout->setWidget(4, QFormLayout::FieldRole, EmployeePh);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        Employee_Statuscombo = new QComboBox(formLayoutWidget);
        Employee_Statuscombo->setObjectName(QString::fromUtf8("Employee_Statuscombo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Employee_Statuscombo);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        EmployeeFinalSal = new QLineEdit(formLayoutWidget);
        EmployeeFinalSal->setObjectName(QString::fromUtf8("EmployeeFinalSal"));

        formLayout->setWidget(6, QFormLayout::FieldRole, EmployeeFinalSal);

        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(609, 29, 571, 598));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setVerticalSpacing(3);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        calendarWidget = new QCalendarWidget(formLayoutWidget_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, calendarWidget);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        calendarWidget_2 = new QCalendarWidget(formLayoutWidget_2);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, calendarWidget_2);

        Employee_Remarks = new QLabel(formLayoutWidget_2);
        Employee_Remarks->setObjectName(QString::fromUtf8("Employee_Remarks"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, Employee_Remarks);

        EmployeeAddr = new QLineEdit(formLayoutWidget_2);
        EmployeeAddr->setObjectName(QString::fromUtf8("EmployeeAddr"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, EmployeeAddr);

        Employee_Remarks_2 = new QLineEdit(formLayoutWidget_2);
        Employee_Remarks_2->setObjectName(QString::fromUtf8("Employee_Remarks_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, Employee_Remarks_2);

        btnClose = new QPushButton(AUDEmployeeDetailsDlg);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(1120, 940, 83, 29));
        btnClear_All = new QPushButton(AUDEmployeeDetailsDlg);
        btnClear_All->setObjectName(QString::fromUtf8("btnClear_All"));
        btnClear_All->setGeometry(QRect(1030, 940, 83, 29));
        btnSave = new QPushButton(AUDEmployeeDetailsDlg);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(940, 940, 83, 29));
        groupBox = new QGroupBox(AUDEmployeeDetailsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 640, 1191, 291));
        Employee_Listtable = new QTableView(groupBox);
        Employee_Listtable->setObjectName(QString::fromUtf8("Employee_Listtable"));
        Employee_Listtable->setGeometry(QRect(10, 30, 1061, 251));
        Employee_Listtable->horizontalHeader()->setDefaultSectionSize(260);
        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(1090, 240, 83, 29));
        btnEdit = new QPushButton(groupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setGeometry(QRect(1090, 160, 83, 29));

        retranslateUi(AUDEmployeeDetailsDlg);

        QMetaObject::connectSlotsByName(AUDEmployeeDetailsDlg);
    } // setupUi

    void retranslateUi(QDialog *AUDEmployeeDetailsDlg)
    {
        AUDEmployeeDetailsDlg->setWindowTitle(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Employee Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Employee List", nullptr));
        label->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Employee Name*", nullptr));
        label_2->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Employee Type", nullptr));
        label_3->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Email-ID Office*", nullptr));
        label_4->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Email-ID Personal*", nullptr));
        label_5->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Phone Number", nullptr));
        label_6->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Employee Status", nullptr));
        label_7->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Last Salary Drawn", nullptr));
        label_8->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Address", nullptr));
        label_9->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Joining Date*", nullptr));
        label_10->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Leave Date", nullptr));
        Employee_Remarks->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Remarks", nullptr));
        btnClose->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Close", nullptr));
        btnClear_All->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Clear All", nullptr));
        btnSave->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Save", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Employee List", nullptr));
        btnDelete->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Delete", nullptr));
        btnEdit->setText(QCoreApplication::translate("AUDEmployeeDetailsDlg", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUDEmployeeDetailsDlg: public Ui_AUDEmployeeDetailsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDEMPLOYEEDETAILSDLG_H
