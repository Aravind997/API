/********************************************************************************
** Form generated from reading UI file 'userlistdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLISTDLG_H
#define UI_USERLISTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserListDlg
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *UserListTable;

    void setupUi(QDialog *UserListDlg)
    {
        if (UserListDlg->objectName().isEmpty())
            UserListDlg->setObjectName(QString::fromUtf8("UserListDlg"));
        UserListDlg->resize(498, 353);
        gridLayout = new QGridLayout(UserListDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(UserListDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(UserListDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        UserListTable = new QTableView(groupBox);
        UserListTable->setObjectName(QString::fromUtf8("UserListTable"));
        UserListTable->setTabletTracking(false);
        UserListTable->setAutoFillBackground(true);
        UserListTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(UserListTable);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(UserListDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), UserListDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UserListDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserListDlg);
    } // setupUi

    void retranslateUi(QDialog *UserListDlg)
    {
        UserListDlg->setWindowTitle(QCoreApplication::translate("UserListDlg", "User List", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UserListDlg", "User List Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserListDlg: public Ui_UserListDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLISTDLG_H
