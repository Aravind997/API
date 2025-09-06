/********************************************************************************
** Form generated from reading UI file 'importdata_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTDATA_DLG_H
#define UI_IMPORTDATA_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_importdata_Dlg
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;

    void setupUi(QDialog *importdata_Dlg)
    {
        if (importdata_Dlg->objectName().isEmpty())
            importdata_Dlg->setObjectName(QString::fromUtf8("importdata_Dlg"));
        importdata_Dlg->resize(743, 475);
        groupBox = new QGroupBox(importdata_Dlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 451));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 111, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 120, 101, 21));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setWordWrap(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 190, 71, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 260, 49, 16));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(162, 50, 161, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 120, 161, 24));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 190, 161, 24));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 260, 161, 24));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 330, 80, 24));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 330, 80, 24));
        frame = new QFrame(importdata_Dlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(370, 30, 361, 431));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(importdata_Dlg);

        QMetaObject::connectSlotsByName(importdata_Dlg);
    } // setupUi

    void retranslateUi(QDialog *importdata_Dlg)
    {
        importdata_Dlg->setWindowTitle(QCoreApplication::translate("importdata_Dlg", "ImportData", nullptr));
        groupBox->setTitle(QCoreApplication::translate("importdata_Dlg", "Import Data", nullptr));
        label->setText(QCoreApplication::translate("importdata_Dlg", "Data Type to Import", nullptr));
        label_2->setText(QCoreApplication::translate("importdata_Dlg", "<html><head/><body><p align=\"justify\">Enter the Website </p><p align=\"justify\"><br/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("importdata_Dlg", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("importdata_Dlg", "Password", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QCoreApplication::translate("importdata_Dlg", "Online Exam Data", nullptr));
        pushButton->setText(QCoreApplication::translate("importdata_Dlg", "View List ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("importdata_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class importdata_Dlg: public Ui_importdata_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTDATA_DLG_H
