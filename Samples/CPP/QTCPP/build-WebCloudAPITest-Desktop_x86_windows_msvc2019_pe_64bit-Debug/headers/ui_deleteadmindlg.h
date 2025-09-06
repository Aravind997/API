/********************************************************************************
** Form generated from reading UI file 'deleteadmindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEADMINDLG_H
#define UI_DELETEADMINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DeleteAdminDlg
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *AccDeleteAdmincomboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DeleteAdminDlg)
    {
        if (DeleteAdminDlg->objectName().isEmpty())
            DeleteAdminDlg->setObjectName(QString::fromUtf8("DeleteAdminDlg"));
        DeleteAdminDlg->resize(501, 340);
        gridLayout_2 = new QGridLayout(DeleteAdminDlg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(DeleteAdminDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        AccDeleteAdmincomboBox = new QComboBox(groupBox);
        AccDeleteAdmincomboBox->setObjectName(QString::fromUtf8("AccDeleteAdmincomboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AccDeleteAdmincomboBox->sizePolicy().hasHeightForWidth());
        AccDeleteAdmincomboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(AccDeleteAdmincomboBox, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton = new QPushButton(DeleteAdminDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(DeleteAdminDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 2, 1, 1);


        retranslateUi(DeleteAdminDlg);

        QMetaObject::connectSlotsByName(DeleteAdminDlg);
    } // setupUi

    void retranslateUi(QDialog *DeleteAdminDlg)
    {
        DeleteAdminDlg->setWindowTitle(QCoreApplication::translate("DeleteAdminDlg", "DeleteAdmin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeleteAdminDlg", "Delete Admin-Details", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteAdminDlg", "Delete Admin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeleteAdminDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteAdminDlg: public Ui_DeleteAdminDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEADMINDLG_H
