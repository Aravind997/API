/********************************************************************************
** Form generated from reading UI file 'licensetestappdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSETESTAPPDLG_H
#define UI_LICENSETESTAPPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LicenseTestAppDlg
{
public:
    QGroupBox *groupBox;
    QPushButton *ClickMeButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *LicenseTestAppDlg)
    {
        if (LicenseTestAppDlg->objectName().isEmpty())
            LicenseTestAppDlg->setObjectName(QString::fromUtf8("LicenseTestAppDlg"));
        LicenseTestAppDlg->resize(804, 571);
        groupBox = new QGroupBox(LicenseTestAppDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(30, 10, 741, 531));
        ClickMeButton = new QPushButton(groupBox);
        ClickMeButton->setObjectName(QString::fromUtf8("ClickMeButton"));
        ClickMeButton->setGeometry(QRect(40, 180, 661, 141));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 499, 741, 31));
        plainTextEdit->setReadOnly(true);

        retranslateUi(LicenseTestAppDlg);

        QMetaObject::connectSlotsByName(LicenseTestAppDlg);
    } // setupUi

    void retranslateUi(QDialog *LicenseTestAppDlg)
    {
        LicenseTestAppDlg->setWindowTitle(QCoreApplication::translate("LicenseTestAppDlg", "LICENSETESTAPP", nullptr));
        groupBox->setTitle(QString());
        ClickMeButton->setText(QCoreApplication::translate("LicenseTestAppDlg", "You Can Click Me Only If Product Is Active", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LicenseTestAppDlg: public Ui_LicenseTestAppDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSETESTAPPDLG_H
