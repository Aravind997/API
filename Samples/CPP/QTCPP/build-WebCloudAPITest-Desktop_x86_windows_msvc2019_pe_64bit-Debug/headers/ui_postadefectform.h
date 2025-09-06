/********************************************************************************
** Form generated from reading UI file 'postadefectform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTADEFECTFORM_H
#define UI_POSTADEFECTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PostADefectForm
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_TopicDescription;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QTextEdit *textEditThrreadDescription;
    QGroupBox *groupBox_4;
    QTextEdit *textEditAttachFile;
    QPushButton *pushButtonPostThread;
    QPushButton *pushButton_Close;
    QPushButton *pushButton_Browse;
    QComboBox *comboBoxLanguage;
    QComboBox *comboBoxAssignedTo;
    QTextEdit *textEditTitle;

    void setupUi(QDialog *PostADefectForm)
    {
        if (PostADefectForm->objectName().isEmpty())
            PostADefectForm->setObjectName(QString::fromUtf8("PostADefectForm"));
        PostADefectForm->resize(513, 527);
        groupBox = new QGroupBox(PostADefectForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 491, 80));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 101, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 101, 16));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(130, 20, 351, 22));
        label_TopicDescription = new QLabel(groupBox);
        label_TopicDescription->setObjectName(QString::fromUtf8("label_TopicDescription"));
        label_TopicDescription->setGeometry(QRect(200, 50, 121, 20));
        groupBox_2 = new QGroupBox(PostADefectForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 491, 431));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 181, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 171, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 81, 16));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 130, 471, 181));
        textEditThrreadDescription = new QTextEdit(groupBox_3);
        textEditThrreadDescription->setObjectName(QString::fromUtf8("textEditThrreadDescription"));
        textEditThrreadDescription->setGeometry(QRect(10, 20, 451, 151));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 310, 481, 111));
        textEditAttachFile = new QTextEdit(groupBox_4);
        textEditAttachFile->setObjectName(QString::fromUtf8("textEditAttachFile"));
        textEditAttachFile->setGeometry(QRect(20, 20, 371, 31));
        pushButtonPostThread = new QPushButton(groupBox_4);
        pushButtonPostThread->setObjectName(QString::fromUtf8("pushButtonPostThread"));
        pushButtonPostThread->setGeometry(QRect(310, 70, 75, 24));
        pushButton_Close = new QPushButton(groupBox_4);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));
        pushButton_Close->setGeometry(QRect(400, 70, 75, 24));
        pushButton_Browse = new QPushButton(groupBox_4);
        pushButton_Browse->setObjectName(QString::fromUtf8("pushButton_Browse"));
        pushButton_Browse->setGeometry(QRect(400, 20, 75, 24));
        comboBoxLanguage = new QComboBox(groupBox_2);
        comboBoxLanguage->setObjectName(QString::fromUtf8("comboBoxLanguage"));
        comboBoxLanguage->setGeometry(QRect(190, 60, 291, 22));
        comboBoxAssignedTo = new QComboBox(groupBox_2);
        comboBoxAssignedTo->setObjectName(QString::fromUtf8("comboBoxAssignedTo"));
        comboBoxAssignedTo->setGeometry(QRect(190, 100, 291, 22));
        textEditTitle = new QTextEdit(groupBox_2);
        textEditTitle->setObjectName(QString::fromUtf8("textEditTitle"));
        textEditTitle->setGeometry(QRect(190, 19, 291, 31));

        retranslateUi(PostADefectForm);

        QMetaObject::connectSlotsByName(PostADefectForm);
    } // setupUi

    void retranslateUi(QDialog *PostADefectForm)
    {
        PostADefectForm->setWindowTitle(QCoreApplication::translate("PostADefectForm", "PostADefectForm", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PostADefectForm", "SelectTopics", nullptr));
        label->setText(QCoreApplication::translate("PostADefectForm", "PleaseSelectTopic", nullptr));
        label_2->setText(QCoreApplication::translate("PostADefectForm", "TopicDescription", nullptr));
        label_TopicDescription->setText(QCoreApplication::translate("PostADefectForm", ".....Text.....", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PostADefectForm", "AddNewThread", nullptr));
        label_3->setText(QCoreApplication::translate("PostADefectForm", "Subject/Title(Max 100 Characters)", nullptr));
        label_4->setText(QCoreApplication::translate("PostADefectForm", "Select Language", nullptr));
        label_5->setText(QCoreApplication::translate("PostADefectForm", "AssignedTo", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PostADefectForm", "ThreadDescription", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PostADefectForm", "AttachAFile", nullptr));
        pushButtonPostThread->setText(QCoreApplication::translate("PostADefectForm", "PostThread", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("PostADefectForm", "Close", nullptr));
        pushButton_Browse->setText(QCoreApplication::translate("PostADefectForm", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostADefectForm: public Ui_PostADefectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTADEFECTFORM_H
