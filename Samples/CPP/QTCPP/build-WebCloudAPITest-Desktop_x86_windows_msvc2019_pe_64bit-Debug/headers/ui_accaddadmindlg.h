/********************************************************************************
** Form generated from reading UI file 'accaddadmindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCADDADMINDLG_H
#define UI_ACCADDADMINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AccAddAdminDlg
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *AccaddadminEmailLineEdit;
    QLabel *label_3;
    QLineEdit *AccaddadminFirstNameLineEdit;
    QLabel *label_4;
    QLineEdit *AccaddadminLastFNameLineEdit;
    QLabel *label;
    QLineEdit *AccaddadminPasswordLineEdit;
    QLabel *label_5;
    QLineEdit *AccaddadminPhonenoLineEdit;
    QLabel *label_6;
    QLineEdit *AccaddadminAddressLineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *accaddadmin;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AccAddAdminDlg)
    {
        if (AccAddAdminDlg->objectName().isEmpty())
            AccAddAdminDlg->setObjectName(QString::fromUtf8("AccAddAdminDlg"));
        AccAddAdminDlg->setWindowModality(Qt::WindowModal);
        AccAddAdminDlg->resize(627, 293);
        gridLayout = new QGridLayout(AccAddAdminDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(AccAddAdminDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        AccaddadminEmailLineEdit = new QLineEdit(groupBox);
        AccaddadminEmailLineEdit->setObjectName(QString::fromUtf8("AccaddadminEmailLineEdit"));
        sizePolicy.setHeightForWidth(AccaddadminEmailLineEdit->sizePolicy().hasHeightForWidth());
        AccaddadminEmailLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, AccaddadminEmailLineEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        AccaddadminFirstNameLineEdit = new QLineEdit(groupBox);
        AccaddadminFirstNameLineEdit->setObjectName(QString::fromUtf8("AccaddadminFirstNameLineEdit"));
        sizePolicy.setHeightForWidth(AccaddadminFirstNameLineEdit->sizePolicy().hasHeightForWidth());
        AccaddadminFirstNameLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, AccaddadminFirstNameLineEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        AccaddadminLastFNameLineEdit = new QLineEdit(groupBox);
        AccaddadminLastFNameLineEdit->setObjectName(QString::fromUtf8("AccaddadminLastFNameLineEdit"));
        sizePolicy.setHeightForWidth(AccaddadminLastFNameLineEdit->sizePolicy().hasHeightForWidth());
        AccaddadminLastFNameLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, AccaddadminLastFNameLineEdit);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        AccaddadminPasswordLineEdit = new QLineEdit(groupBox);
        AccaddadminPasswordLineEdit->setObjectName(QString::fromUtf8("AccaddadminPasswordLineEdit"));
        sizePolicy.setHeightForWidth(AccaddadminPasswordLineEdit->sizePolicy().hasHeightForWidth());
        AccaddadminPasswordLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, AccaddadminPasswordLineEdit);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        AccaddadminPhonenoLineEdit = new QLineEdit(groupBox);
        AccaddadminPhonenoLineEdit->setObjectName(QString::fromUtf8("AccaddadminPhonenoLineEdit"));
        sizePolicy.setHeightForWidth(AccaddadminPhonenoLineEdit->sizePolicy().hasHeightForWidth());
        AccaddadminPhonenoLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, AccaddadminPhonenoLineEdit);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        AccaddadminAddressLineEdit = new QLineEdit(groupBox);
        AccaddadminAddressLineEdit->setObjectName(QString::fromUtf8("AccaddadminAddressLineEdit"));
        sizePolicy.setHeightForWidth(AccaddadminAddressLineEdit->sizePolicy().hasHeightForWidth());
        AccaddadminAddressLineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, AccaddadminAddressLineEdit);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(402, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        accaddadmin = new QPushButton(AccAddAdminDlg);
        accaddadmin->setObjectName(QString::fromUtf8("accaddadmin"));

        gridLayout->addWidget(accaddadmin, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(AccAddAdminDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);


        retranslateUi(AccAddAdminDlg);

        QMetaObject::connectSlotsByName(AccAddAdminDlg);
    } // setupUi

    void retranslateUi(QDialog *AccAddAdminDlg)
    {
        AccAddAdminDlg->setWindowTitle(QCoreApplication::translate("AccAddAdminDlg", "AddAdmin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AccAddAdminDlg", "Add  Admin Details", nullptr));
        label_2->setText(QCoreApplication::translate("AccAddAdminDlg", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("AccAddAdminDlg", "First Name", nullptr));
        label_4->setText(QCoreApplication::translate("AccAddAdminDlg", "LastName       ", nullptr));
        label->setText(QCoreApplication::translate("AccAddAdminDlg", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("AccAddAdminDlg", "Phoneno", nullptr));
        label_6->setText(QCoreApplication::translate("AccAddAdminDlg", "Address", nullptr));
        accaddadmin->setText(QCoreApplication::translate("AccAddAdminDlg", "AddAdmin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AccAddAdminDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccAddAdminDlg: public Ui_AccAddAdminDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCADDADMINDLG_H
