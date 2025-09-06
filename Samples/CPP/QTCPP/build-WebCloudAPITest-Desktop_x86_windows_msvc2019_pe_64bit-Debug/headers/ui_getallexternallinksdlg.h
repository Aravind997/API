/********************************************************************************
** Form generated from reading UI file 'getallexternallinksdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETALLEXTERNALLINKSDLG_H
#define UI_GETALLEXTERNALLINKSDLG_H

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

class Ui_GetAllExternalLinksDlg
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *labelLinkTitle;
    QCheckBox *checkBoxExternalLinks;
    QLabel *labelText;
    QGroupBox *groupBox_3;
    QTableView *tableView;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *GetAllExternalLinksDlg)
    {
        if (GetAllExternalLinksDlg->objectName().isEmpty())
            GetAllExternalLinksDlg->setObjectName(QString::fromUtf8("GetAllExternalLinksDlg"));
        GetAllExternalLinksDlg->resize(560, 530);
        groupBox = new QGroupBox(GetAllExternalLinksDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 531, 471));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 501, 101));
        labelLinkTitle = new QLabel(groupBox_2);
        labelLinkTitle->setObjectName(QString::fromUtf8("labelLinkTitle"));
        labelLinkTitle->setGeometry(QRect(30, 40, 61, 21));
        checkBoxExternalLinks = new QCheckBox(groupBox_2);
        checkBoxExternalLinks->setObjectName(QString::fromUtf8("checkBoxExternalLinks"));
        checkBoxExternalLinks->setEnabled(false);
        checkBoxExternalLinks->setGeometry(QRect(280, 30, 151, 31));
        labelText = new QLabel(groupBox_2);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setGeometry(QRect(90, 40, 91, 21));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 130, 501, 331));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 481, 301));
        pushButtonClose = new QPushButton(GetAllExternalLinksDlg);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(400, 490, 81, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy);

        retranslateUi(GetAllExternalLinksDlg);

        QMetaObject::connectSlotsByName(GetAllExternalLinksDlg);
    } // setupUi

    void retranslateUi(QDialog *GetAllExternalLinksDlg)
    {
        GetAllExternalLinksDlg->setWindowTitle(QCoreApplication::translate("GetAllExternalLinksDlg", "Get All External Links", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GetAllExternalLinksDlg", "Link Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GetAllExternalLinksDlg", "Link Settings", nullptr));
        labelLinkTitle->setText(QCoreApplication::translate("GetAllExternalLinksDlg", "Link Title : ", nullptr));
        checkBoxExternalLinks->setText(QCoreApplication::translate("GetAllExternalLinksDlg", "Show External Links", nullptr));
        labelText->setText(QCoreApplication::translate("GetAllExternalLinksDlg", "TextLabel", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GetAllExternalLinksDlg", "Menu Links", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("GetAllExternalLinksDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAllExternalLinksDlg: public Ui_GetAllExternalLinksDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETALLEXTERNALLINKSDLG_H
