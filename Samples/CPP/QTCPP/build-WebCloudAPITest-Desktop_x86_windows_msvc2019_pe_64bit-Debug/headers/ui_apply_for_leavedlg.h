/********************************************************************************
** Form generated from reading UI file 'apply_for_leavedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLY_FOR_LEAVEDLG_H
#define UI_APPLY_FOR_LEAVEDLG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Apply_For_LeaveDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QCalendarWidget *calendarWidget_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *From;
    QLabel *To;
    QCalendarWidget *calendarWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QComboBox *Typecombo;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *Reason;
    QLineEdit *Subject;
    QPushButton *btnCancel;
    QPushButton *btnRequestLeave;

    void setupUi(QDialog *Apply_For_LeaveDlg)
    {
        if (Apply_For_LeaveDlg->objectName().isEmpty())
            Apply_For_LeaveDlg->setObjectName(QString::fromUtf8("Apply_For_LeaveDlg"));
        Apply_For_LeaveDlg->resize(820, 834);
        groupBox = new QGroupBox(Apply_For_LeaveDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 791, 771));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 30, 751, 541));
        calendarWidget_2 = new QCalendarWidget(groupBox_2);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));
        calendarWidget_2->setGeometry(QRect(330, 320, 344, 201));
        calendarWidget_2->setMinimumDate(QDate(2000, 9, 14));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 80, 211, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        From = new QLabel(verticalLayoutWidget);
        From->setObjectName(QString::fromUtf8("From"));

        verticalLayout->addWidget(From);

        To = new QLabel(verticalLayoutWidget);
        To->setObjectName(QString::fromUtf8("To"));

        verticalLayout->addWidget(To);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(330, 100, 344, 201));
        calendarWidget->setMinimumDate(QDate(2000, 9, 14));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 580, 751, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Typecombo = new QComboBox(gridLayoutWidget_2);
        Typecombo->setObjectName(QString::fromUtf8("Typecombo"));

        gridLayout_2->addWidget(Typecombo, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        Reason = new QLineEdit(gridLayoutWidget_2);
        Reason->setObjectName(QString::fromUtf8("Reason"));

        gridLayout_2->addWidget(Reason, 2, 1, 1, 1);

        Subject = new QLineEdit(gridLayoutWidget_2);
        Subject->setObjectName(QString::fromUtf8("Subject"));

        gridLayout_2->addWidget(Subject, 1, 1, 1, 1);

        btnCancel = new QPushButton(Apply_For_LeaveDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(720, 790, 83, 29));
        btnRequestLeave = new QPushButton(Apply_For_LeaveDlg);
        btnRequestLeave->setObjectName(QString::fromUtf8("btnRequestLeave"));
        btnRequestLeave->setGeometry(QRect(580, 790, 131, 29));

        retranslateUi(Apply_For_LeaveDlg);

        QMetaObject::connectSlotsByName(Apply_For_LeaveDlg);
    } // setupUi

    void retranslateUi(QDialog *Apply_For_LeaveDlg)
    {
        Apply_For_LeaveDlg->setWindowTitle(QCoreApplication::translate("Apply_For_LeaveDlg", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Apply_For_LeaveDlg", "Leave Application", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Apply_For_LeaveDlg", "Select Date", nullptr));
        From->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "From", nullptr));
        To->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "To", nullptr));
        label_4->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "Subject", nullptr));
        label_3->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "Type of Leave", nullptr));
        label_5->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "Reason", nullptr));
        btnCancel->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "Cancel", nullptr));
        btnRequestLeave->setText(QCoreApplication::translate("Apply_For_LeaveDlg", "Request Leave", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Apply_For_LeaveDlg: public Ui_Apply_For_LeaveDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLY_FOR_LEAVEDLG_H
