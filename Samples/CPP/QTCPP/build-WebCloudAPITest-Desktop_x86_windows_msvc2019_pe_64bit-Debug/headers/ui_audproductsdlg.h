/********************************************************************************
** Form generated from reading UI file 'audproductsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDPRODUCTSDLG_H
#define UI_AUDPRODUCTSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUDProductsDlg
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBoxCo1;
    QLabel *label_2;
    QComboBox *comboBoxCat;
    QLabel *label_3;
    QComboBox *comboBoxSubCat;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditProductName;
    QLineEdit *lineEditProSubName;
    QComboBox *comboBoxItemSpec;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditIMG1;
    QPushButton *pushButton;
    QLineEdit *lineEditIMG2;
    QPushButton *pushButton_IMG2;
    QLineEdit *lineEditIMG3;
    QPushButton *pushButton_IMG3;
    QLabel *label_IMG1;
    QLabel *label_IMG1_2;
    QLabel *label_IMG1_3;
    QGroupBox *groupBox_3;
    QLabel *label_19;
    QLineEdit *lineEditPRICE_INR;
    QLineEdit *lineEdit_TaxPercentage;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QLabel *label_22;
    QCheckBox *checkBoxTax;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEditPRICE_USSD;
    QLineEdit *lineEditQTY;
    QLineEdit *lineEdit_TaxName;
    QGroupBox *groupBox_4;
    QTableView *tableViewPro;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_SaveProduct;
    QPushButton *pushButton_EDIT_PRODUCT;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_5;
    QLabel *label_25;
    QLabel *label_26;
    QTextEdit *textEditDESC1;
    QTextEdit *textEditDESC2;
    QLabel *label_27;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEditVedio;
    QLineEdit *lineEditRegCode;
    QGroupBox *groupBox_6;
    QLabel *label_23;
    QLineEdit *lineEditSHIP_USSD;
    QLabel *label_24;
    QLineEdit *lineEditSHIP_INR;

    void setupUi(QDialog *AUDProductsDlg)
    {
        if (AUDProductsDlg->objectName().isEmpty())
            AUDProductsDlg->setObjectName(QString::fromUtf8("AUDProductsDlg"));
        AUDProductsDlg->resize(1918, 989);
        groupBox = new QGroupBox(AUDProductsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 831, 201));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 131, 20));
        comboBoxCo1 = new QComboBox(groupBox);
        comboBoxCo1->setObjectName(QString::fromUtf8("comboBoxCo1"));
        comboBoxCo1->setGeometry(QRect(140, 40, 231, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 121, 20));
        comboBoxCat = new QComboBox(groupBox);
        comboBoxCat->setObjectName(QString::fromUtf8("comboBoxCat"));
        comboBoxCat->setGeometry(QRect(140, 90, 231, 25));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 101, 20));
        comboBoxSubCat = new QComboBox(groupBox);
        comboBoxSubCat->setObjectName(QString::fromUtf8("comboBoxSubCat"));
        comboBoxSubCat->setGeometry(QRect(140, 150, 231, 25));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(560, 30, 261, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditProductName = new QLineEdit(layoutWidget);
        lineEditProductName->setObjectName(QString::fromUtf8("lineEditProductName"));

        verticalLayout->addWidget(lineEditProductName);

        lineEditProSubName = new QLineEdit(layoutWidget);
        lineEditProSubName->setObjectName(QString::fromUtf8("lineEditProSubName"));

        verticalLayout->addWidget(lineEditProSubName);

        comboBoxItemSpec = new QComboBox(layoutWidget);
        comboBoxItemSpec->setObjectName(QString::fromUtf8("comboBoxItemSpec"));

        verticalLayout->addWidget(comboBoxItemSpec);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(410, 40, 141, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_2->addWidget(label_14);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        groupBox_2 = new QGroupBox(AUDProductsDlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 200, 831, 311));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(50, 20, 63, 20));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(350, 20, 63, 20));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(670, 20, 63, 20));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 801, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditIMG1 = new QLineEdit(layoutWidget2);
        lineEditIMG1->setObjectName(QString::fromUtf8("lineEditIMG1"));

        horizontalLayout->addWidget(lineEditIMG1);

        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        lineEditIMG2 = new QLineEdit(layoutWidget2);
        lineEditIMG2->setObjectName(QString::fromUtf8("lineEditIMG2"));

        horizontalLayout->addWidget(lineEditIMG2);

        pushButton_IMG2 = new QPushButton(layoutWidget2);
        pushButton_IMG2->setObjectName(QString::fromUtf8("pushButton_IMG2"));

        horizontalLayout->addWidget(pushButton_IMG2);

        lineEditIMG3 = new QLineEdit(layoutWidget2);
        lineEditIMG3->setObjectName(QString::fromUtf8("lineEditIMG3"));

        horizontalLayout->addWidget(lineEditIMG3);

        pushButton_IMG3 = new QPushButton(layoutWidget2);
        pushButton_IMG3->setObjectName(QString::fromUtf8("pushButton_IMG3"));

        horizontalLayout->addWidget(pushButton_IMG3);

        label_IMG1 = new QLabel(groupBox_2);
        label_IMG1->setObjectName(QString::fromUtf8("label_IMG1"));
        label_IMG1->setGeometry(QRect(20, 90, 241, 201));
        label_IMG1_2 = new QLabel(groupBox_2);
        label_IMG1_2->setObjectName(QString::fromUtf8("label_IMG1_2"));
        label_IMG1_2->setGeometry(QRect(280, 100, 241, 201));
        label_IMG1_3 = new QLabel(groupBox_2);
        label_IMG1_3->setObjectName(QString::fromUtf8("label_IMG1_3"));
        label_IMG1_3->setGeometry(QRect(560, 100, 241, 201));
        groupBox_3 = new QGroupBox(AUDProductsDlg);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 510, 831, 171));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(410, 40, 101, 20));
        lineEditPRICE_INR = new QLineEdit(groupBox_3);
        lineEditPRICE_INR->setObjectName(QString::fromUtf8("lineEditPRICE_INR"));
        lineEditPRICE_INR->setGeometry(QRect(540, 40, 251, 25));
        lineEdit_TaxPercentage = new QLineEdit(groupBox_3);
        lineEdit_TaxPercentage->setObjectName(QString::fromUtf8("lineEdit_TaxPercentage"));
        lineEdit_TaxPercentage->setGeometry(QRect(540, 130, 251, 25));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 101, 131));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_3->addWidget(label_18);

        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_3->addWidget(label_22);

        checkBoxTax = new QCheckBox(layoutWidget3);
        checkBoxTax->setObjectName(QString::fromUtf8("checkBoxTax"));

        verticalLayout_3->addWidget(checkBoxTax);

        layoutWidget4 = new QWidget(groupBox_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(140, 40, 261, 131));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEditPRICE_USSD = new QLineEdit(layoutWidget4);
        lineEditPRICE_USSD->setObjectName(QString::fromUtf8("lineEditPRICE_USSD"));

        verticalLayout_5->addWidget(lineEditPRICE_USSD);

        lineEditQTY = new QLineEdit(layoutWidget4);
        lineEditQTY->setObjectName(QString::fromUtf8("lineEditQTY"));

        verticalLayout_5->addWidget(lineEditQTY);

        lineEdit_TaxName = new QLineEdit(layoutWidget4);
        lineEdit_TaxName->setObjectName(QString::fromUtf8("lineEdit_TaxName"));

        verticalLayout_5->addWidget(lineEdit_TaxName);

        groupBox_4 = new QGroupBox(AUDProductsDlg);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 690, 1891, 281));
        tableViewPro = new QTableView(groupBox_4);
        tableViewPro->setObjectName(QString::fromUtf8("tableViewPro"));
        tableViewPro->setGeometry(QRect(30, 20, 1351, 251));
        layoutWidget5 = new QWidget(groupBox_4);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(1540, 30, 241, 211));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_SaveProduct = new QPushButton(layoutWidget5);
        pushButton_SaveProduct->setObjectName(QString::fromUtf8("pushButton_SaveProduct"));

        verticalLayout_4->addWidget(pushButton_SaveProduct);

        pushButton_EDIT_PRODUCT = new QPushButton(layoutWidget5);
        pushButton_EDIT_PRODUCT->setObjectName(QString::fromUtf8("pushButton_EDIT_PRODUCT"));

        verticalLayout_4->addWidget(pushButton_EDIT_PRODUCT);

        pushButton_6 = new QPushButton(layoutWidget5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_4->addWidget(pushButton_6);

        groupBox_5 = new QGroupBox(AUDProductsDlg);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(860, 0, 1031, 621));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(50, 30, 141, 20));
        label_26 = new QLabel(groupBox_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(50, 50, 181, 20));
        textEditDESC1 = new QTextEdit(groupBox_5);
        textEditDESC1->setObjectName(QString::fromUtf8("textEditDESC1"));
        textEditDESC1->setGeometry(QRect(270, 20, 731, 231));
        textEditDESC2 = new QTextEdit(groupBox_5);
        textEditDESC2->setObjectName(QString::fromUtf8("textEditDESC2"));
        textEditDESC2->setGeometry(QRect(270, 270, 731, 231));
        label_27 = new QLabel(groupBox_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(50, 270, 141, 20));
        layoutWidget6 = new QWidget(groupBox_5);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 510, 181, 91));
        verticalLayout_6 = new QVBoxLayout(layoutWidget6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        layoutWidget7 = new QWidget(groupBox_5);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(270, 520, 731, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEditVedio = new QLineEdit(layoutWidget7);
        lineEditVedio->setObjectName(QString::fromUtf8("lineEditVedio"));

        verticalLayout_7->addWidget(lineEditVedio);

        lineEditRegCode = new QLineEdit(layoutWidget7);
        lineEditRegCode->setObjectName(QString::fromUtf8("lineEditRegCode"));

        verticalLayout_7->addWidget(lineEditRegCode);

        groupBox_6 = new QGroupBox(AUDProductsDlg);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(860, 620, 1041, 61));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 30, 191, 20));
        lineEditSHIP_USSD = new QLineEdit(groupBox_6);
        lineEditSHIP_USSD->setObjectName(QString::fromUtf8("lineEditSHIP_USSD"));
        lineEditSHIP_USSD->setGeometry(QRect(230, 30, 251, 25));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(530, 30, 191, 20));
        lineEditSHIP_INR = new QLineEdit(groupBox_6);
        lineEditSHIP_INR->setObjectName(QString::fromUtf8("lineEditSHIP_INR"));
        lineEditSHIP_INR->setGeometry(QRect(740, 30, 251, 25));

        retranslateUi(AUDProductsDlg);

        QMetaObject::connectSlotsByName(AUDProductsDlg);
    } // setupUi

    void retranslateUi(QDialog *AUDProductsDlg)
    {
        AUDProductsDlg->setWindowTitle(QCoreApplication::translate("AUDProductsDlg", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AUDProductsDlg", "Basic Details", nullptr));
        label->setText(QCoreApplication::translate("AUDProductsDlg", "Select Comapny", nullptr));
        label_2->setText(QCoreApplication::translate("AUDProductsDlg", "Product Category", nullptr));
        label_3->setText(QCoreApplication::translate("AUDProductsDlg", "Sub Category", nullptr));
        label_8->setText(QCoreApplication::translate("AUDProductsDlg", "Product Name", nullptr));
        label_14->setText(QCoreApplication::translate("AUDProductsDlg", "Product Sub Title", nullptr));
        label_7->setText(QCoreApplication::translate("AUDProductsDlg", "Item Specified", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AUDProductsDlg", "Browse Image", nullptr));
        label_15->setText(QCoreApplication::translate("AUDProductsDlg", "Image 1", nullptr));
        label_16->setText(QCoreApplication::translate("AUDProductsDlg", "Image 2", nullptr));
        label_17->setText(QCoreApplication::translate("AUDProductsDlg", "Image 3", nullptr));
        pushButton->setText(QCoreApplication::translate("AUDProductsDlg", "Browse", nullptr));
        pushButton_IMG2->setText(QCoreApplication::translate("AUDProductsDlg", "Browse", nullptr));
        pushButton_IMG3->setText(QCoreApplication::translate("AUDProductsDlg", "Browse", nullptr));
        label_IMG1->setText(QString());
        label_IMG1_2->setText(QString());
        label_IMG1_3->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("AUDProductsDlg", "Price Details", nullptr));
        label_19->setText(QCoreApplication::translate("AUDProductsDlg", "Price in INR", nullptr));
        label_18->setText(QCoreApplication::translate("AUDProductsDlg", "Price in USSD", nullptr));
        label_22->setText(QCoreApplication::translate("AUDProductsDlg", "Quantity", nullptr));
        checkBoxTax->setText(QCoreApplication::translate("AUDProductsDlg", "Include Tax", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AUDProductsDlg", "Product List", nullptr));
        pushButton_SaveProduct->setText(QCoreApplication::translate("AUDProductsDlg", "Save", nullptr));
        pushButton_EDIT_PRODUCT->setText(QCoreApplication::translate("AUDProductsDlg", "Edit", nullptr));
        pushButton_6->setText(QCoreApplication::translate("AUDProductsDlg", "Delete", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("AUDProductsDlg", "Product Details", nullptr));
        label_25->setText(QCoreApplication::translate("AUDProductsDlg", "Product Description", nullptr));
        label_26->setText(QCoreApplication::translate("AUDProductsDlg", "(Not more than 50 words)", nullptr));
        label_27->setText(QCoreApplication::translate("AUDProductsDlg", "More Description", nullptr));
        label_4->setText(QCoreApplication::translate("AUDProductsDlg", "Product Vedio URL", nullptr));
        label_5->setText(QCoreApplication::translate("AUDProductsDlg", " ProductRegistration Code", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("AUDProductsDlg", "Shipping Details", nullptr));
        label_23->setText(QCoreApplication::translate("AUDProductsDlg", "Shipping Charge in USSD", nullptr));
        label_24->setText(QCoreApplication::translate("AUDProductsDlg", "Shipping Charge in INR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUDProductsDlg: public Ui_AUDProductsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDPRODUCTSDLG_H
