/********************************************************************************
** Form generated from reading UI file 'listexmques_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEXMQUES_DLG_H
#define UI_LISTEXMQUES_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_listexmQues_Dlg
{
public:
    QTreeView *treeView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;

    void setupUi(QDialog *listexmQues_Dlg)
    {
        if (listexmQues_Dlg->objectName().isEmpty())
            listexmQues_Dlg->setObjectName(QString::fromUtf8("listexmQues_Dlg"));
        listexmQues_Dlg->resize(750, 480);
        treeView = new QTreeView(listexmQues_Dlg);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 40, 211, 421));
        label = new QLabel(listexmQues_Dlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 10, 181, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(listexmQues_Dlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 40, 171, 24));
        pushButton_2 = new QPushButton(listexmQues_Dlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 440, 80, 24));
        frame = new QFrame(listexmQues_Dlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(230, 70, 501, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(listexmQues_Dlg);

        QMetaObject::connectSlotsByName(listexmQues_Dlg);
    } // setupUi

    void retranslateUi(QDialog *listexmQues_Dlg)
    {
        listexmQues_Dlg->setWindowTitle(QCoreApplication::translate("listexmQues_Dlg", "ExamQuestionPaper", nullptr));
        label->setText(QCoreApplication::translate("listexmQues_Dlg", "Category > SubCategory", nullptr));
        pushButton->setText(QCoreApplication::translate("listexmQues_Dlg", "View Questions", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listexmQues_Dlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listexmQues_Dlg: public Ui_listexmQues_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEXMQUES_DLG_H
