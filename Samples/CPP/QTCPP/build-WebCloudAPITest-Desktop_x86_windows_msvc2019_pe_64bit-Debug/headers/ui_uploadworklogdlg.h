/********************************************************************************
** Form generated from reading UI file 'uploadworklogdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOADWORKLOGDLG_H
#define UI_UPLOADWORKLOGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UploadWorkLogDlg
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QPushButton *ScreenShotButton;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QPushButton *CancelButton;

    void setupUi(QDialog *UploadWorkLogDlg)
    {
        if (UploadWorkLogDlg->objectName().isEmpty())
            UploadWorkLogDlg->setObjectName(QString::fromUtf8("UploadWorkLogDlg"));
        UploadWorkLogDlg->resize(1123, 554);
        groupBox = new QGroupBox(UploadWorkLogDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 651, 441));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 261, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 261, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 261, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 230, 261, 41));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 50, 291, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 300, 231, 41));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(340, 110, 291, 41));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(340, 170, 291, 41));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(340, 230, 291, 41));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(340, 290, 291, 41));
        ScreenShotButton = new QPushButton(groupBox);
        ScreenShotButton->setObjectName(QString::fromUtf8("ScreenShotButton"));
        ScreenShotButton->setGeometry(QRect(489, 360, 141, 51));
        groupBox_2 = new QGroupBox(UploadWorkLogDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(720, 29, 381, 441));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 380, 321, 41));
        graphicsView = new QGraphicsView(groupBox_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(25, 20, 331, 341));
        pushButton_2 = new QPushButton(UploadWorkLogDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(880, 480, 101, 51));
        CancelButton = new QPushButton(UploadWorkLogDlg);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(1000, 480, 101, 51));

        retranslateUi(UploadWorkLogDlg);

        QMetaObject::connectSlotsByName(UploadWorkLogDlg);
    } // setupUi

    void retranslateUi(QDialog *UploadWorkLogDlg)
    {
        UploadWorkLogDlg->setWindowTitle(QCoreApplication::translate("UploadWorkLogDlg", "UploadWorkLog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("UploadWorkLogDlg", "Application EXE Name         :", nullptr));
        label_2->setText(QCoreApplication::translate("UploadWorkLogDlg", "Application Window Title     : ", nullptr));
        label_3->setText(QCoreApplication::translate("UploadWorkLogDlg", "Memo Title                         :", nullptr));
        label_4->setText(QCoreApplication::translate("UploadWorkLogDlg", "Memo Description               :", nullptr));
        label_5->setText(QCoreApplication::translate("UploadWorkLogDlg", "Completion Percentage       :", nullptr));
        ScreenShotButton->setText(QCoreApplication::translate("UploadWorkLogDlg", "Take Screen Shot", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("UploadWorkLogDlg", "Upload", nullptr));
        CancelButton->setText(QCoreApplication::translate("UploadWorkLogDlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UploadWorkLogDlg: public Ui_UploadWorkLogDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADWORKLOGDLG_H
