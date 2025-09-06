/********************************************************************************
** Form generated from reading UI file 'gettimetrackersettingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETTIMETRACKERSETTINGSDLG_H
#define UI_GETTIMETRACKERSETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetTimeTrackerSettingsDlg
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *CloseButton;

    void setupUi(QDialog *GetTimeTrackerSettingsDlg)
    {
        if (GetTimeTrackerSettingsDlg->objectName().isEmpty())
            GetTimeTrackerSettingsDlg->setObjectName(QString::fromUtf8("GetTimeTrackerSettingsDlg"));
        GetTimeTrackerSettingsDlg->resize(995, 386);
        groupBox = new QGroupBox(GetTimeTrackerSettingsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 951, 271));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 131, 51));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 105, 131, 51));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 170, 181, 41));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(230, 170, 211, 41));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 50, 221, 41));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 110, 221, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 50, 221, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 110, 221, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(490, 170, 221, 41));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(700, 50, 221, 41));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(700, 113, 221, 41));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(700, 173, 221, 41));
        CloseButton = new QPushButton(GetTimeTrackerSettingsDlg);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(830, 310, 111, 51));

        retranslateUi(GetTimeTrackerSettingsDlg);

        QMetaObject::connectSlotsByName(GetTimeTrackerSettingsDlg);
    } // setupUi

    void retranslateUi(QDialog *GetTimeTrackerSettingsDlg)
    {
        GetTimeTrackerSettingsDlg->setWindowTitle(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "GetTTSettings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Time Tracker Settings", nullptr));
        label->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "TimeZone     :", nullptr));
        label_2->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Idle Time     :", nullptr));
        checkBox->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Capture Screen Shots", nullptr));
        checkBox_2->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Do Not Track Idle", nullptr));
        label_3->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Time Zone Code                   :", nullptr));
        label_4->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Activity Capture Interval        :   ", nullptr));
        label_5->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Screen Capture Resolution     :", nullptr));
        CloseButton->setText(QCoreApplication::translate("GetTimeTrackerSettingsDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetTimeTrackerSettingsDlg: public Ui_GetTimeTrackerSettingsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETTIMETRACKERSETTINGSDLG_H
