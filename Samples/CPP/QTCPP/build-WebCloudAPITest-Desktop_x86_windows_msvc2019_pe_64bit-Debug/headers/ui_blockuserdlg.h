/********************************************************************************
** Form generated from reading UI file 'blockuserdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKUSERDLG_H
#define UI_BLOCKUSERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BlockUserDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *BlockUserTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BlockUserDlg)
    {
        if (BlockUserDlg->objectName().isEmpty())
            BlockUserDlg->setObjectName(QString::fromUtf8("BlockUserDlg"));
        BlockUserDlg->resize(400, 300);
        verticalLayout = new QVBoxLayout(BlockUserDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        BlockUserTable = new QTableView(BlockUserDlg);
        BlockUserTable->setObjectName(QString::fromUtf8("BlockUserTable"));
        BlockUserTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(BlockUserTable);

        buttonBox = new QDialogButtonBox(BlockUserDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BlockUserDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), BlockUserDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BlockUserDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(BlockUserDlg);
    } // setupUi

    void retranslateUi(QDialog *BlockUserDlg)
    {
        BlockUserDlg->setWindowTitle(QCoreApplication::translate("BlockUserDlg", "BlockUser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlockUserDlg: public Ui_BlockUserDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKUSERDLG_H
