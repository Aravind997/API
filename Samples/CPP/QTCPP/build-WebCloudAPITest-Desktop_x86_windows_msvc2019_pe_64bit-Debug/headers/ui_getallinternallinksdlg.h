/********************************************************************************
** Form generated from reading UI file 'getallinternallinksdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLINTERNALLINKSDLG_H
#define UI_GETALLINTERNALLINKSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_GetAllInternalLinksDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *labelLinkTitle;
    QCheckBox *checkBoxShowInternalLinks;
    QLabel *labelTitle;
    QGroupBox *groupBox_3;
    QTableView *tableView;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetAllInternalLinksDlg)
    {
        if (GetAllInternalLinksDlg->objectName().isEmpty())
            GetAllInternalLinksDlg->setObjectName(QString::fromUtf8("GetAllInternalLinksDlg"));
        GetAllInternalLinksDlg->resize(544, 502);
        groupBox = new QGroupBox(GetAllInternalLinksDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 521, 461));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 30, 491, 101));
        labelLinkTitle = new QLabel(groupBox_2);
        labelLinkTitle->setObjectName(QString::fromUtf8("labelLinkTitle"));
        labelLinkTitle->setGeometry(QRect(50, 40, 61, 21));
        checkBoxShowInternalLinks = new QCheckBox(groupBox_2);
        checkBoxShowInternalLinks->setObjectName(QString::fromUtf8("checkBoxShowInternalLinks"));
        checkBoxShowInternalLinks->setEnabled(false);
        checkBoxShowInternalLinks->setGeometry(QRect(320, 30, 151, 41));
        labelTitle = new QLabel(groupBox_2);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(110, 40, 81, 21));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 140, 491, 311));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 471, 281));
        pushButtonClose = new QPushButton(GetAllInternalLinksDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(360, 470, 81, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(GetAllInternalLinksDlg);

        QMetaObject::connectSlotsByName(GetAllInternalLinksDlg);
    } // setupUi

    void retranslateUi(QDialog *GetAllInternalLinksDlg)
    {
        GetAllInternalLinksDlg->setWindowTitle(QCoreApplication::translate("GetAllInternalLinksDlg", "Get All Internal Links", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllInternalLinksDlg", "Link Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllInternalLinksDlg", "Link Settings", nullptr));
        labelLinkTitle->setText(QCoreApplication::translate("GetAllInternalLinksDlg", "Link Title : ", nullptr));
        checkBoxShowInternalLinks->setText(QCoreApplication::translate("GetAllInternalLinksDlg", "Show Internal Links", nullptr));
        labelTitle->setText(QCoreApplication::translate("GetAllInternalLinksDlg", "TextLabel", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllInternalLinksDlg", "Menu Links", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetAllInternalLinksDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllInternalLinksDlg: public Ui_GetAllInternalLinksDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLINTERNALLINKSDLG_H
