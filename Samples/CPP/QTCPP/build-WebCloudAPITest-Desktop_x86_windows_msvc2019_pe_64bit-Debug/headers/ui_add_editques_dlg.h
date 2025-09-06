/********************************************************************************
** Form generated from reading UI file 'add_editques_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EDITQUES_DLG_H
#define UI_ADD_EDITQUES_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_add_editQues_Dlg
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTreeView *treeView;
    QFrame *frame;

    void setupUi(QDialog *add_editQues_Dlg)
    {
        if (add_editQues_Dlg->objectName().isEmpty())
            add_editQues_Dlg->setObjectName(QString::fromUtf8("add_editQues_Dlg"));
        add_editQues_Dlg->resize(842, 490);
        pushButton_2 = new QPushButton(add_editQues_Dlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 20, 101, 24));
        pushButton = new QPushButton(add_editQues_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 20, 111, 24));
        pushButton_3 = new QPushButton(add_editQues_Dlg);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 450, 80, 24));
        treeView = new QTreeView(add_editQues_Dlg);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(20, 20, 221, 451));
        frame = new QFrame(add_editQues_Dlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(250, 50, 571, 391));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(add_editQues_Dlg);

        QMetaObject::connectSlotsByName(add_editQues_Dlg);
    } // setupUi

    void retranslateUi(QDialog *add_editQues_Dlg)
    {
        add_editQues_Dlg->setWindowTitle(QCoreApplication::translate("add_editQues_Dlg", "QuestionMaster", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_editQues_Dlg", "Add Questions", nullptr));
        pushButton->setText(QCoreApplication::translate("add_editQues_Dlg", "View Questions", nullptr));
        pushButton_3->setText(QCoreApplication::translate("add_editQues_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_editQues_Dlg: public Ui_add_editQues_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EDITQUES_DLG_H
