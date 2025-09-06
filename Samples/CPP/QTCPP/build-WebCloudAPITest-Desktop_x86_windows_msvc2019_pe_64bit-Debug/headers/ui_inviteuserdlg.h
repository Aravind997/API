/********************************************************************************
** Form generated from reading UI file 'inviteuserdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITEUSERDLG_H
#define UI_INVITEUSERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InviteUserDlg
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Inviteuserclosetn;
    QGroupBox *groupbox6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *InviteUserCategorycombo;
    QPushButton *InviteUSerbtn;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *Invite_user_msg;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *InviteUser_Email;

    void setupUi(QDialog *InviteUserDlg)
    {
        if (InviteUserDlg->objectName().isEmpty())
            InviteUserDlg->setObjectName(QString::fromUtf8("InviteUserDlg"));
        InviteUserDlg->setEnabled(true);
        InviteUserDlg->resize(590, 478);
        InviteUserDlg->setSizeGripEnabled(false);
        InviteUserDlg->setModal(false);
        gridLayout = new QGridLayout(InviteUserDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(365, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        Inviteuserclosetn = new QPushButton(InviteUserDlg);
        Inviteuserclosetn->setObjectName(QString::fromUtf8("Inviteuserclosetn"));

        gridLayout->addWidget(Inviteuserclosetn, 3, 1, 1, 1);

        groupbox6 = new QGroupBox(InviteUserDlg);
        groupbox6->setObjectName(QString::fromUtf8("groupbox6"));
        horizontalLayout = new QHBoxLayout(groupbox6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupbox6);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(3, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        InviteUserCategorycombo = new QComboBox(groupbox6);
        InviteUserCategorycombo->setObjectName(QString::fromUtf8("InviteUserCategorycombo"));

        horizontalLayout->addWidget(InviteUserCategorycombo);


        gridLayout->addWidget(groupbox6, 0, 0, 1, 3);

        InviteUSerbtn = new QPushButton(InviteUserDlg);
        InviteUSerbtn->setObjectName(QString::fromUtf8("InviteUSerbtn"));

        gridLayout->addWidget(InviteUSerbtn, 3, 2, 1, 1);

        groupBox_3 = new QGroupBox(InviteUserDlg);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(15, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Invite_user_msg = new QLineEdit(groupBox_3);
        Invite_user_msg->setObjectName(QString::fromUtf8("Invite_user_msg"));

        horizontalLayout_3->addWidget(Invite_user_msg);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 3);

        groupBox_2 = new QGroupBox(InviteUserDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setWordWrap(true);

        horizontalLayout_2->addWidget(label_2);

        InviteUser_Email = new QLineEdit(groupBox_2);
        InviteUser_Email->setObjectName(QString::fromUtf8("InviteUser_Email"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(InviteUser_Email->sizePolicy().hasHeightForWidth());
        InviteUser_Email->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(InviteUser_Email);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 3);


        retranslateUi(InviteUserDlg);

        QMetaObject::connectSlotsByName(InviteUserDlg);
    } // setupUi

    void retranslateUi(QDialog *InviteUserDlg)
    {
        InviteUserDlg->setWindowTitle(QCoreApplication::translate("InviteUserDlg", "InviteUser", nullptr));
        Inviteuserclosetn->setText(QCoreApplication::translate("InviteUserDlg", "InviteUser", nullptr));
        groupbox6->setTitle(QCoreApplication::translate("InviteUserDlg", "User - Category", nullptr));
        label->setText(QCoreApplication::translate("InviteUserDlg", "Select User Category(*)", nullptr));
        InviteUSerbtn->setText(QCoreApplication::translate("InviteUserDlg", "Close", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("InviteUserDlg", "User Message", nullptr));
        label_3->setText(QCoreApplication::translate("InviteUserDlg", "Enter Email message                 (Optional)       ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("InviteUserDlg", "User Email", nullptr));
        label_2->setText(QCoreApplication::translate("InviteUserDlg", " Enter User Emai Separated by comma(*)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InviteUserDlg: public Ui_InviteUserDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITEUSERDLG_H
