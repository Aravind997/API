/********************************************************************************
** Form generated from reading UI file 'adduserdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERDLG_H
#define UI_ADDUSERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddUserDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *AccaddUserEmailLineEdit;
    QLabel *label_2;
    QLineEdit *AccaddUserFirstNameLineEdit;
    QLabel *label_3;
    QLineEdit *AccaddUserLastFNameLineEdit;
    QLabel *label_4;
    QLineEdit *AccaddUserPhonenoLineEdit;
    QLabel *label_5;
    QLineEdit *AccaddUserPasswordLineEdit;
    QLabel *label_6;
    QLineEdit *AccaddUserAddressLineEdit;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *AddUserDlg)
    {
        if (AddUserDlg->objectName().isEmpty())
            AddUserDlg->setObjectName(QString::fromUtf8("AddUserDlg"));
        AddUserDlg->resize(468, 300);
        verticalLayout = new QVBoxLayout(AddUserDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AddUserDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        AccaddUserEmailLineEdit = new QLineEdit(groupBox);
        AccaddUserEmailLineEdit->setObjectName(QString::fromUtf8("AccaddUserEmailLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AccaddUserEmailLineEdit->sizePolicy().hasHeightForWidth());
        AccaddUserEmailLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(AccaddUserEmailLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        AccaddUserFirstNameLineEdit = new QLineEdit(groupBox);
        AccaddUserFirstNameLineEdit->setObjectName(QString::fromUtf8("AccaddUserFirstNameLineEdit"));
        sizePolicy1.setHeightForWidth(AccaddUserFirstNameLineEdit->sizePolicy().hasHeightForWidth());
        AccaddUserFirstNameLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(AccaddUserFirstNameLineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        AccaddUserLastFNameLineEdit = new QLineEdit(groupBox);
        AccaddUserLastFNameLineEdit->setObjectName(QString::fromUtf8("AccaddUserLastFNameLineEdit"));
        sizePolicy1.setHeightForWidth(AccaddUserLastFNameLineEdit->sizePolicy().hasHeightForWidth());
        AccaddUserLastFNameLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(AccaddUserLastFNameLineEdit, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        AccaddUserPhonenoLineEdit = new QLineEdit(groupBox);
        AccaddUserPhonenoLineEdit->setObjectName(QString::fromUtf8("AccaddUserPhonenoLineEdit"));
        sizePolicy1.setHeightForWidth(AccaddUserPhonenoLineEdit->sizePolicy().hasHeightForWidth());
        AccaddUserPhonenoLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(AccaddUserPhonenoLineEdit, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        AccaddUserPasswordLineEdit = new QLineEdit(groupBox);
        AccaddUserPasswordLineEdit->setObjectName(QString::fromUtf8("AccaddUserPasswordLineEdit"));
        sizePolicy1.setHeightForWidth(AccaddUserPasswordLineEdit->sizePolicy().hasHeightForWidth());
        AccaddUserPasswordLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(AccaddUserPasswordLineEdit, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        AccaddUserAddressLineEdit = new QLineEdit(groupBox);
        AccaddUserAddressLineEdit->setObjectName(QString::fromUtf8("AccaddUserAddressLineEdit"));
        sizePolicy1.setHeightForWidth(AccaddUserAddressLineEdit->sizePolicy().hasHeightForWidth());
        AccaddUserAddressLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(AccaddUserAddressLineEdit, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox_2 = new QDialogButtonBox(AddUserDlg);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox_2);


        retranslateUi(AddUserDlg);

        QMetaObject::connectSlotsByName(AddUserDlg);
    } // setupUi

    void retranslateUi(QDialog *AddUserDlg)
    {
        AddUserDlg->setWindowTitle(QCoreApplication::translate("AddUserDlg", "Add User", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddUserDlg", "AddUser", nullptr));
        label->setText(QCoreApplication::translate("AddUserDlg", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("AddUserDlg", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddUserDlg", "LastName", nullptr));
        label_4->setText(QCoreApplication::translate("AddUserDlg", "Phoneno        ", nullptr));
        label_5->setText(QCoreApplication::translate("AddUserDlg", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("AddUserDlg", "Address     ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUserDlg: public Ui_AddUserDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERDLG_H
