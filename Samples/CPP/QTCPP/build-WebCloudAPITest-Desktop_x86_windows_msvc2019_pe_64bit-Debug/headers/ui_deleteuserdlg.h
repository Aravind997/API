/********************************************************************************
** Form generated from reading UI file 'deleteuserdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSERDLG_H
#define UI_DELETEUSERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DeleteUserDlg
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *Deleteuser_comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *Deleteuser_clicked;
    QPushButton *DeleteUser_closebtn_close;

    void setupUi(QDialog *DeleteUserDlg)
    {
        if (DeleteUserDlg->objectName().isEmpty())
            DeleteUserDlg->setObjectName(QString::fromUtf8("DeleteUserDlg"));
        DeleteUserDlg->resize(382, 285);
        groupBox = new QGroupBox(DeleteUserDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 331, 191));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Deleteuser_comboBox = new QComboBox(groupBox);
        Deleteuser_comboBox->setObjectName(QString::fromUtf8("Deleteuser_comboBox"));

        gridLayout->addWidget(Deleteuser_comboBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        Deleteuser_clicked = new QPushButton(DeleteUserDlg);
        Deleteuser_clicked->setObjectName(QString::fromUtf8("Deleteuser_clicked"));
        Deleteuser_clicked->setGeometry(QRect(180, 250, 93, 29));
        DeleteUser_closebtn_close = new QPushButton(DeleteUserDlg);
        DeleteUser_closebtn_close->setObjectName(QString::fromUtf8("DeleteUser_closebtn_close"));
        DeleteUser_closebtn_close->setGeometry(QRect(280, 250, 93, 29));

        retranslateUi(DeleteUserDlg);

        QMetaObject::connectSlotsByName(DeleteUserDlg);
    } // setupUi

    void retranslateUi(QDialog *DeleteUserDlg)
    {
        DeleteUserDlg->setWindowTitle(QCoreApplication::translate("DeleteUserDlg", "Delete User", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeleteUserDlg", "DeleteUser-Details", nullptr));
        Deleteuser_clicked->setText(QCoreApplication::translate("DeleteUserDlg", "Delete User", nullptr));
        DeleteUser_closebtn_close->setText(QCoreApplication::translate("DeleteUserDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteUserDlg: public Ui_DeleteUserDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSERDLG_H
