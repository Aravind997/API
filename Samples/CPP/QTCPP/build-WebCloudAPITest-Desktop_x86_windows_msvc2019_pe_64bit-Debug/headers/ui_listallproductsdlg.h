/********************************************************************************
** Form generated from reading UI file 'listallproductsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTALLPRODUCTSDLG_H
#define UI_LISTALLPRODUCTSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListAllProductsDlg
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxCo;
    QLabel *label_2;
    QComboBox *comboBoxProCat;
    QLabel *label_3;
    QComboBox *comboBox_SubCategory;

    void setupUi(QDialog *ListAllProductsDlg)
    {
        if (ListAllProductsDlg->objectName().isEmpty())
            ListAllProductsDlg->setObjectName(QString::fromUtf8("ListAllProductsDlg"));
        ListAllProductsDlg->resize(1059, 570);
        groupBox = new QGroupBox(ListAllProductsDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 220, 1001, 331));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 971, 271));
        layoutWidget = new QWidget(ListAllProductsDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 50, 871, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxCo = new QComboBox(layoutWidget);
        comboBoxCo->setObjectName(QString::fromUtf8("comboBoxCo"));

        gridLayout->addWidget(comboBoxCo, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBoxProCat = new QComboBox(layoutWidget);
        comboBoxProCat->setObjectName(QString::fromUtf8("comboBoxProCat"));
        comboBoxProCat->setEditable(false);

        gridLayout->addWidget(comboBoxProCat, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_SubCategory = new QComboBox(layoutWidget);
        comboBox_SubCategory->setObjectName(QString::fromUtf8("comboBox_SubCategory"));

        gridLayout->addWidget(comboBox_SubCategory, 2, 1, 1, 1);


        retranslateUi(ListAllProductsDlg);

        comboBoxProCat->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ListAllProductsDlg);
    } // setupUi

    void retranslateUi(QDialog *ListAllProductsDlg)
    {
        ListAllProductsDlg->setWindowTitle(QCoreApplication::translate("ListAllProductsDlg", "List All Products Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ListAllProductsDlg", "Product Details", nullptr));
        label->setText(QCoreApplication::translate("ListAllProductsDlg", "Select Company", nullptr));
        label_2->setText(QCoreApplication::translate("ListAllProductsDlg", "Select Product Category", nullptr));
        label_3->setText(QCoreApplication::translate("ListAllProductsDlg", "Select SubCategory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListAllProductsDlg: public Ui_ListAllProductsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTALLPRODUCTSDLG_H
