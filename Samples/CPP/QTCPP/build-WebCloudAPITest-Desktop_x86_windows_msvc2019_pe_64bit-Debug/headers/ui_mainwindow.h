/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUser_List;
    QAction *actionAdd_User;
    QAction *actionInvite_User;
    QAction *actionDelete_User;
    QAction *actionBlock_User;
    QAction *actionAdd_Admin;
    QAction *actionDelete_Admin;
    QAction *actionGenerateTemSiteAccessToken;
    QAction *actionList_All_Page_Info_With_Links;
    QAction *actionGet_Detailed_Page_Info;
    QAction *actionGet_SEO_Info_Page;
    QAction *actionSet_SEO_Info_Page;
    QAction *actionGEt_All_Internal_Links;
    QAction *actionGet_All_External_Links;
    QAction *actionAdd_Internal_Link;
    QAction *actionAdd_External_Link;
    QAction *actionAdd_Delete_Header;
    QAction *actionAdd_Delete_Footer;
    QAction *actionGet_All_Users;
    QAction *actionGet_All_Admin_Users;
    QAction *actionGet_All_Online_Users;
    QAction *actionGet_All_Online_Normal_Users;
    QAction *actionGEt_All_Online_Support_Users;
    QAction *actionSend_E_mail;
    QAction *actionLaunch_Text_Chat_Demo;
    QAction *actionLaunch_Voice_Chat_Demo;
    QAction *actionGet_Assigned_Task_List;
    QAction *actionGet_Bug_Tracker_Task_Details_List;
    QAction *actionGet_User_Task_Info;
    QAction *actionGet_All_Bug_List;
    QAction *actionPost_a_Defect_Bug;
    QAction *actionList_All_Companies;
    QAction *actionList_All_Company_Products;
    QAction *actionAdd_Update_Delete_Company_Details;
    QAction *actionAdd_Update_Delete_CompanyProducts;
    QAction *actionAdd_Update_Payment_Gateway_Settings;
    QAction *actionAdd_Update_Payment_Gateway_Settings_2;
    QAction *actionAdd_Update_Payment_Gateway_Settings_3;
    QAction *actionList_All_Exam_Categories;
    QAction *actionList_All_Exam_Subcategories;
    QAction *actionAdd_Exam_Categories;
    QAction *actionAdd_Exam_Subcategory;
    QAction *actionList_All_Questions_in_Subcategory;
    QAction *actionAdd_Edit_Delete_Questions;
    QAction *actionCopy_Questions;
    QAction *actionImport_Data;
    QAction *actionUpdate_Exam_Default_Settings;
    QAction *actionGet_All_Forums;
    QAction *actionGet_All_Topics;
    QAction *actionGet_All_Threads;
    QAction *actionDelete_a_Thread;
    QAction *actionAdd_Update_Delete_Forum;
    QAction *actionAdd_Update_Delete_Topics;
    QAction *actionAdd_Update_Thread;
    QAction *actionDelete_a_comment;
    QAction *actionAdd_a_Comment;
    QAction *actionAdd_Update_Delete_Employ_Details;
    QAction *actionInvite_Employee;
    QAction *actionInform_HR_Manager_as_E_mail;
    QAction *actionApply_for_Leave;
    QAction *actionList_All_Leave_Applications;
    QAction *actionApprove_Reject_Leave;
    QAction *actionRegister_Licence_User;
    QAction *actionGet_Licence_Info;
    QAction *actionLicence_Test_App;
    QAction *actionGet_All_Projects;
    QAction *actionGet_All_Tasks;
    QAction *actionAdd_Update_Delete_Projects;
    QAction *actionAdd_Update_Delete_Tasks;
    QAction *actionAdd_Update_Delete_Subtasks;
    QAction *actionAssign_Tasks;
    QAction *actionGet_Time_Tracker_Settings;
    QAction *actionUpload_Work_Log;
    QAction *actionTime_Tracker_Data_Summary_Info;
    QAction *actionUpload_File;
    QAction *actionDownload_File;
    QAction *actionList_All_Files_in_Directory;
    QAction *actionCreate_Rename_Delete_a_Directory_File;
    QAction *actionUpload_App_Data_Upload_App_File_Data;
    QAction *actionDownload_App_Data_Download_App_File_Data;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditWebUrl;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditAuthToken;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditUserId;
    QLabel *label_4;
    QLineEdit *lineEditPassword;
    QPushButton *btnLogin;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEditReqData;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEditRespData;
    QMenuBar *menubar;
    QMenu *menu_Account;
    QMenu *menuCMS;
    QMenu *menuComm;
    QMenu *menuDT;
    QMenu *menuECom;
    QMenu *menuExam;
    QMenu *menuForum;
    QMenu *menuHR;
    QMenu *menuLicense;
    QMenu *menuPM;
    QMenu *menuTT;
    QMenu *menuCB;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(484, 647);
        actionUser_List = new QAction(MainWindow);
        actionUser_List->setObjectName(QString::fromUtf8("actionUser_List"));
        actionAdd_User = new QAction(MainWindow);
        actionAdd_User->setObjectName(QString::fromUtf8("actionAdd_User"));
        actionInvite_User = new QAction(MainWindow);
        actionInvite_User->setObjectName(QString::fromUtf8("actionInvite_User"));
        actionDelete_User = new QAction(MainWindow);
        actionDelete_User->setObjectName(QString::fromUtf8("actionDelete_User"));
        actionDelete_User->setVisible(true);
        actionBlock_User = new QAction(MainWindow);
        actionBlock_User->setObjectName(QString::fromUtf8("actionBlock_User"));
        actionAdd_Admin = new QAction(MainWindow);
        actionAdd_Admin->setObjectName(QString::fromUtf8("actionAdd_Admin"));
        actionDelete_Admin = new QAction(MainWindow);
        actionDelete_Admin->setObjectName(QString::fromUtf8("actionDelete_Admin"));
        actionGenerateTemSiteAccessToken = new QAction(MainWindow);
        actionGenerateTemSiteAccessToken->setObjectName(QString::fromUtf8("actionGenerateTemSiteAccessToken"));
        actionList_All_Page_Info_With_Links = new QAction(MainWindow);
        actionList_All_Page_Info_With_Links->setObjectName(QString::fromUtf8("actionList_All_Page_Info_With_Links"));
        actionGet_Detailed_Page_Info = new QAction(MainWindow);
        actionGet_Detailed_Page_Info->setObjectName(QString::fromUtf8("actionGet_Detailed_Page_Info"));
        actionGet_SEO_Info_Page = new QAction(MainWindow);
        actionGet_SEO_Info_Page->setObjectName(QString::fromUtf8("actionGet_SEO_Info_Page"));
        actionSet_SEO_Info_Page = new QAction(MainWindow);
        actionSet_SEO_Info_Page->setObjectName(QString::fromUtf8("actionSet_SEO_Info_Page"));
        actionGEt_All_Internal_Links = new QAction(MainWindow);
        actionGEt_All_Internal_Links->setObjectName(QString::fromUtf8("actionGEt_All_Internal_Links"));
        actionGet_All_External_Links = new QAction(MainWindow);
        actionGet_All_External_Links->setObjectName(QString::fromUtf8("actionGet_All_External_Links"));
        actionAdd_Internal_Link = new QAction(MainWindow);
        actionAdd_Internal_Link->setObjectName(QString::fromUtf8("actionAdd_Internal_Link"));
        actionAdd_External_Link = new QAction(MainWindow);
        actionAdd_External_Link->setObjectName(QString::fromUtf8("actionAdd_External_Link"));
        actionAdd_Delete_Header = new QAction(MainWindow);
        actionAdd_Delete_Header->setObjectName(QString::fromUtf8("actionAdd_Delete_Header"));
        actionAdd_Delete_Footer = new QAction(MainWindow);
        actionAdd_Delete_Footer->setObjectName(QString::fromUtf8("actionAdd_Delete_Footer"));
        actionGet_All_Users = new QAction(MainWindow);
        actionGet_All_Users->setObjectName(QString::fromUtf8("actionGet_All_Users"));
        actionGet_All_Admin_Users = new QAction(MainWindow);
        actionGet_All_Admin_Users->setObjectName(QString::fromUtf8("actionGet_All_Admin_Users"));
        actionGet_All_Online_Users = new QAction(MainWindow);
        actionGet_All_Online_Users->setObjectName(QString::fromUtf8("actionGet_All_Online_Users"));
        actionGet_All_Online_Normal_Users = new QAction(MainWindow);
        actionGet_All_Online_Normal_Users->setObjectName(QString::fromUtf8("actionGet_All_Online_Normal_Users"));
        actionGEt_All_Online_Support_Users = new QAction(MainWindow);
        actionGEt_All_Online_Support_Users->setObjectName(QString::fromUtf8("actionGEt_All_Online_Support_Users"));
        actionSend_E_mail = new QAction(MainWindow);
        actionSend_E_mail->setObjectName(QString::fromUtf8("actionSend_E_mail"));
        actionLaunch_Text_Chat_Demo = new QAction(MainWindow);
        actionLaunch_Text_Chat_Demo->setObjectName(QString::fromUtf8("actionLaunch_Text_Chat_Demo"));
        actionLaunch_Voice_Chat_Demo = new QAction(MainWindow);
        actionLaunch_Voice_Chat_Demo->setObjectName(QString::fromUtf8("actionLaunch_Voice_Chat_Demo"));
        actionGet_Assigned_Task_List = new QAction(MainWindow);
        actionGet_Assigned_Task_List->setObjectName(QString::fromUtf8("actionGet_Assigned_Task_List"));
        actionGet_Bug_Tracker_Task_Details_List = new QAction(MainWindow);
        actionGet_Bug_Tracker_Task_Details_List->setObjectName(QString::fromUtf8("actionGet_Bug_Tracker_Task_Details_List"));
        actionGet_User_Task_Info = new QAction(MainWindow);
        actionGet_User_Task_Info->setObjectName(QString::fromUtf8("actionGet_User_Task_Info"));
        actionGet_All_Bug_List = new QAction(MainWindow);
        actionGet_All_Bug_List->setObjectName(QString::fromUtf8("actionGet_All_Bug_List"));
        actionPost_a_Defect_Bug = new QAction(MainWindow);
        actionPost_a_Defect_Bug->setObjectName(QString::fromUtf8("actionPost_a_Defect_Bug"));
        actionList_All_Companies = new QAction(MainWindow);
        actionList_All_Companies->setObjectName(QString::fromUtf8("actionList_All_Companies"));
        actionList_All_Company_Products = new QAction(MainWindow);
        actionList_All_Company_Products->setObjectName(QString::fromUtf8("actionList_All_Company_Products"));
        actionAdd_Update_Delete_Company_Details = new QAction(MainWindow);
        actionAdd_Update_Delete_Company_Details->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Company_Details"));
        actionAdd_Update_Delete_CompanyProducts = new QAction(MainWindow);
        actionAdd_Update_Delete_CompanyProducts->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_CompanyProducts"));
        actionAdd_Update_Payment_Gateway_Settings = new QAction(MainWindow);
        actionAdd_Update_Payment_Gateway_Settings->setObjectName(QString::fromUtf8("actionAdd_Update_Payment_Gateway_Settings"));
        actionAdd_Update_Payment_Gateway_Settings_2 = new QAction(MainWindow);
        actionAdd_Update_Payment_Gateway_Settings_2->setObjectName(QString::fromUtf8("actionAdd_Update_Payment_Gateway_Settings_2"));
        actionAdd_Update_Payment_Gateway_Settings_3 = new QAction(MainWindow);
        actionAdd_Update_Payment_Gateway_Settings_3->setObjectName(QString::fromUtf8("actionAdd_Update_Payment_Gateway_Settings_3"));
        actionList_All_Exam_Categories = new QAction(MainWindow);
        actionList_All_Exam_Categories->setObjectName(QString::fromUtf8("actionList_All_Exam_Categories"));
        actionList_All_Exam_Subcategories = new QAction(MainWindow);
        actionList_All_Exam_Subcategories->setObjectName(QString::fromUtf8("actionList_All_Exam_Subcategories"));
        actionAdd_Exam_Categories = new QAction(MainWindow);
        actionAdd_Exam_Categories->setObjectName(QString::fromUtf8("actionAdd_Exam_Categories"));
        actionAdd_Exam_Subcategory = new QAction(MainWindow);
        actionAdd_Exam_Subcategory->setObjectName(QString::fromUtf8("actionAdd_Exam_Subcategory"));
        actionList_All_Questions_in_Subcategory = new QAction(MainWindow);
        actionList_All_Questions_in_Subcategory->setObjectName(QString::fromUtf8("actionList_All_Questions_in_Subcategory"));
        actionAdd_Edit_Delete_Questions = new QAction(MainWindow);
        actionAdd_Edit_Delete_Questions->setObjectName(QString::fromUtf8("actionAdd_Edit_Delete_Questions"));
        actionCopy_Questions = new QAction(MainWindow);
        actionCopy_Questions->setObjectName(QString::fromUtf8("actionCopy_Questions"));
        actionImport_Data = new QAction(MainWindow);
        actionImport_Data->setObjectName(QString::fromUtf8("actionImport_Data"));
        actionUpdate_Exam_Default_Settings = new QAction(MainWindow);
        actionUpdate_Exam_Default_Settings->setObjectName(QString::fromUtf8("actionUpdate_Exam_Default_Settings"));
        actionGet_All_Forums = new QAction(MainWindow);
        actionGet_All_Forums->setObjectName(QString::fromUtf8("actionGet_All_Forums"));
        actionGet_All_Topics = new QAction(MainWindow);
        actionGet_All_Topics->setObjectName(QString::fromUtf8("actionGet_All_Topics"));
        actionGet_All_Threads = new QAction(MainWindow);
        actionGet_All_Threads->setObjectName(QString::fromUtf8("actionGet_All_Threads"));
        actionDelete_a_Thread = new QAction(MainWindow);
        actionDelete_a_Thread->setObjectName(QString::fromUtf8("actionDelete_a_Thread"));
        actionAdd_Update_Delete_Forum = new QAction(MainWindow);
        actionAdd_Update_Delete_Forum->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Forum"));
        actionAdd_Update_Delete_Topics = new QAction(MainWindow);
        actionAdd_Update_Delete_Topics->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Topics"));
        actionAdd_Update_Thread = new QAction(MainWindow);
        actionAdd_Update_Thread->setObjectName(QString::fromUtf8("actionAdd_Update_Thread"));
        actionDelete_a_comment = new QAction(MainWindow);
        actionDelete_a_comment->setObjectName(QString::fromUtf8("actionDelete_a_comment"));
        actionAdd_a_Comment = new QAction(MainWindow);
        actionAdd_a_Comment->setObjectName(QString::fromUtf8("actionAdd_a_Comment"));
        actionAdd_Update_Delete_Employ_Details = new QAction(MainWindow);
        actionAdd_Update_Delete_Employ_Details->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Employ_Details"));
        actionInvite_Employee = new QAction(MainWindow);
        actionInvite_Employee->setObjectName(QString::fromUtf8("actionInvite_Employee"));
        actionInform_HR_Manager_as_E_mail = new QAction(MainWindow);
        actionInform_HR_Manager_as_E_mail->setObjectName(QString::fromUtf8("actionInform_HR_Manager_as_E_mail"));
        actionApply_for_Leave = new QAction(MainWindow);
        actionApply_for_Leave->setObjectName(QString::fromUtf8("actionApply_for_Leave"));
        actionList_All_Leave_Applications = new QAction(MainWindow);
        actionList_All_Leave_Applications->setObjectName(QString::fromUtf8("actionList_All_Leave_Applications"));
        actionApprove_Reject_Leave = new QAction(MainWindow);
        actionApprove_Reject_Leave->setObjectName(QString::fromUtf8("actionApprove_Reject_Leave"));
        actionRegister_Licence_User = new QAction(MainWindow);
        actionRegister_Licence_User->setObjectName(QString::fromUtf8("actionRegister_Licence_User"));
        actionGet_Licence_Info = new QAction(MainWindow);
        actionGet_Licence_Info->setObjectName(QString::fromUtf8("actionGet_Licence_Info"));
        actionLicence_Test_App = new QAction(MainWindow);
        actionLicence_Test_App->setObjectName(QString::fromUtf8("actionLicence_Test_App"));
        actionGet_All_Projects = new QAction(MainWindow);
        actionGet_All_Projects->setObjectName(QString::fromUtf8("actionGet_All_Projects"));
        actionGet_All_Tasks = new QAction(MainWindow);
        actionGet_All_Tasks->setObjectName(QString::fromUtf8("actionGet_All_Tasks"));
        actionAdd_Update_Delete_Projects = new QAction(MainWindow);
        actionAdd_Update_Delete_Projects->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Projects"));
        actionAdd_Update_Delete_Tasks = new QAction(MainWindow);
        actionAdd_Update_Delete_Tasks->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Tasks"));
        actionAdd_Update_Delete_Subtasks = new QAction(MainWindow);
        actionAdd_Update_Delete_Subtasks->setObjectName(QString::fromUtf8("actionAdd_Update_Delete_Subtasks"));
        actionAssign_Tasks = new QAction(MainWindow);
        actionAssign_Tasks->setObjectName(QString::fromUtf8("actionAssign_Tasks"));
        actionGet_Time_Tracker_Settings = new QAction(MainWindow);
        actionGet_Time_Tracker_Settings->setObjectName(QString::fromUtf8("actionGet_Time_Tracker_Settings"));
        actionUpload_Work_Log = new QAction(MainWindow);
        actionUpload_Work_Log->setObjectName(QString::fromUtf8("actionUpload_Work_Log"));
        actionTime_Tracker_Data_Summary_Info = new QAction(MainWindow);
        actionTime_Tracker_Data_Summary_Info->setObjectName(QString::fromUtf8("actionTime_Tracker_Data_Summary_Info"));
        actionUpload_File = new QAction(MainWindow);
        actionUpload_File->setObjectName(QString::fromUtf8("actionUpload_File"));
        actionDownload_File = new QAction(MainWindow);
        actionDownload_File->setObjectName(QString::fromUtf8("actionDownload_File"));
        actionList_All_Files_in_Directory = new QAction(MainWindow);
        actionList_All_Files_in_Directory->setObjectName(QString::fromUtf8("actionList_All_Files_in_Directory"));
        actionCreate_Rename_Delete_a_Directory_File = new QAction(MainWindow);
        actionCreate_Rename_Delete_a_Directory_File->setObjectName(QString::fromUtf8("actionCreate_Rename_Delete_a_Directory_File"));
        actionUpload_App_Data_Upload_App_File_Data = new QAction(MainWindow);
        actionUpload_App_Data_Upload_App_File_Data->setObjectName(QString::fromUtf8("actionUpload_App_Data_Upload_App_File_Data"));
        actionDownload_App_Data_Download_App_File_Data = new QAction(MainWindow);
        actionDownload_App_Data_Download_App_File_Data->setObjectName(QString::fromUtf8("actionDownload_App_Data_Download_App_File_Data"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditWebUrl = new QLineEdit(groupBox);
        lineEditWebUrl->setObjectName(QString::fromUtf8("lineEditWebUrl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditWebUrl);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditAuthToken = new QLineEdit(groupBox);
        lineEditAuthToken->setObjectName(QString::fromUtf8("lineEditAuthToken"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditAuthToken);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditUserId = new QLineEdit(groupBox);
        lineEditUserId->setObjectName(QString::fromUtf8("lineEditUserId"));

        horizontalLayout->addWidget(lineEditUserId);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));

        horizontalLayout->addWidget(lineEditPassword);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        gridLayout_3->addLayout(formLayout, 0, 0, 1, 1);

        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnLogin->sizePolicy().hasHeightForWidth());
        btnLogin->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(btnLogin, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEditReqData = new QPlainTextEdit(groupBox_2);
        plainTextEditReqData->setObjectName(QString::fromUtf8("plainTextEditReqData"));

        gridLayout_2->addWidget(plainTextEditReqData, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEditRespData = new QPlainTextEdit(groupBox_3);
        plainTextEditRespData->setObjectName(QString::fromUtf8("plainTextEditRespData"));

        gridLayout->addWidget(plainTextEditRespData, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 484, 21));
        menu_Account = new QMenu(menubar);
        menu_Account->setObjectName(QString::fromUtf8("menu_Account"));
        menuCMS = new QMenu(menubar);
        menuCMS->setObjectName(QString::fromUtf8("menuCMS"));
        menuComm = new QMenu(menubar);
        menuComm->setObjectName(QString::fromUtf8("menuComm"));
        menuDT = new QMenu(menubar);
        menuDT->setObjectName(QString::fromUtf8("menuDT"));
        menuECom = new QMenu(menubar);
        menuECom->setObjectName(QString::fromUtf8("menuECom"));
        menuExam = new QMenu(menubar);
        menuExam->setObjectName(QString::fromUtf8("menuExam"));
        menuForum = new QMenu(menubar);
        menuForum->setObjectName(QString::fromUtf8("menuForum"));
        menuHR = new QMenu(menubar);
        menuHR->setObjectName(QString::fromUtf8("menuHR"));
        menuLicense = new QMenu(menubar);
        menuLicense->setObjectName(QString::fromUtf8("menuLicense"));
        menuPM = new QMenu(menubar);
        menuPM->setObjectName(QString::fromUtf8("menuPM"));
        menuTT = new QMenu(menubar);
        menuTT->setObjectName(QString::fromUtf8("menuTT"));
        menuCB = new QMenu(menubar);
        menuCB->setObjectName(QString::fromUtf8("menuCB"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Account->menuAction());
        menubar->addAction(menuCMS->menuAction());
        menubar->addAction(menuComm->menuAction());
        menubar->addAction(menuDT->menuAction());
        menubar->addAction(menuECom->menuAction());
        menubar->addAction(menuExam->menuAction());
        menubar->addAction(menuForum->menuAction());
        menubar->addAction(menuHR->menuAction());
        menubar->addAction(menuLicense->menuAction());
        menubar->addAction(menuPM->menuAction());
        menubar->addAction(menuTT->menuAction());
        menubar->addAction(menuCB->menuAction());
        menu_Account->addAction(actionUser_List);
        menu_Account->addSeparator();
        menu_Account->addAction(actionAdd_User);
        menu_Account->addAction(actionInvite_User);
        menu_Account->addAction(actionDelete_User);
        menu_Account->addAction(actionBlock_User);
        menu_Account->addSeparator();
        menu_Account->addAction(actionAdd_Admin);
        menu_Account->addAction(actionDelete_Admin);
        menu_Account->addSeparator();
        menu_Account->addAction(actionGenerateTemSiteAccessToken);
        menuCMS->addAction(actionList_All_Page_Info_With_Links);
        menuCMS->addAction(actionGet_Detailed_Page_Info);
        menuCMS->addAction(actionGet_SEO_Info_Page);
        menuCMS->addAction(actionSet_SEO_Info_Page);
        menuCMS->addAction(actionGEt_All_Internal_Links);
        menuCMS->addAction(actionGet_All_External_Links);
        menuCMS->addAction(actionAdd_Internal_Link);
        menuCMS->addAction(actionAdd_External_Link);
        menuCMS->addAction(actionAdd_Delete_Header);
        menuCMS->addAction(actionAdd_Delete_Footer);
        menuComm->addAction(actionGet_All_Users);
        menuComm->addAction(actionGet_All_Admin_Users);
        menuComm->addAction(actionGet_All_Online_Users);
        menuComm->addAction(actionGet_All_Online_Normal_Users);
        menuComm->addAction(actionGEt_All_Online_Support_Users);
        menuComm->addAction(actionSend_E_mail);
        menuComm->addSeparator();
        menuComm->addAction(actionLaunch_Text_Chat_Demo);
        menuComm->addAction(actionLaunch_Voice_Chat_Demo);
        menuDT->addAction(actionGet_Assigned_Task_List);
        menuDT->addAction(actionGet_Bug_Tracker_Task_Details_List);
        menuDT->addAction(actionGet_User_Task_Info);
        menuDT->addAction(actionGet_All_Bug_List);
        menuDT->addSeparator();
        menuDT->addAction(actionPost_a_Defect_Bug);
        menuECom->addAction(actionList_All_Companies);
        menuECom->addAction(actionList_All_Company_Products);
        menuECom->addSeparator();
        menuECom->addAction(actionAdd_Update_Delete_Company_Details);
        menuECom->addAction(actionAdd_Update_Delete_CompanyProducts);
        menuECom->addSeparator();
        menuECom->addAction(actionAdd_Update_Payment_Gateway_Settings_3);
        menuExam->addAction(actionList_All_Exam_Categories);
        menuExam->addAction(actionList_All_Exam_Subcategories);
        menuExam->addAction(actionAdd_Exam_Categories);
        menuExam->addAction(actionAdd_Exam_Subcategory);
        menuExam->addAction(actionList_All_Questions_in_Subcategory);
        menuExam->addAction(actionAdd_Edit_Delete_Questions);
        menuExam->addAction(actionCopy_Questions);
        menuExam->addAction(actionImport_Data);
        menuExam->addSeparator();
        menuExam->addAction(actionUpdate_Exam_Default_Settings);
        menuForum->addAction(actionGet_All_Forums);
        menuForum->addAction(actionGet_All_Topics);
        menuForum->addAction(actionGet_All_Threads);
        menuForum->addAction(actionDelete_a_Thread);
        menuForum->addSeparator();
        menuForum->addAction(actionAdd_Update_Delete_Forum);
        menuForum->addAction(actionAdd_Update_Delete_Topics);
        menuForum->addAction(actionAdd_Update_Thread);
        menuForum->addAction(actionDelete_a_comment);
        menuForum->addAction(actionAdd_a_Comment);
        menuHR->addAction(actionAdd_Update_Delete_Employ_Details);
        menuHR->addAction(actionInvite_Employee);
        menuHR->addSeparator();
        menuHR->addAction(actionInform_HR_Manager_as_E_mail);
        menuHR->addSeparator();
        menuHR->addAction(actionApply_for_Leave);
        menuHR->addAction(actionList_All_Leave_Applications);
        menuHR->addAction(actionApprove_Reject_Leave);
        menuLicense->addAction(actionRegister_Licence_User);
        menuLicense->addAction(actionGet_Licence_Info);
        menuLicense->addAction(actionLicence_Test_App);
        menuPM->addAction(actionGet_All_Projects);
        menuPM->addAction(actionGet_All_Tasks);
        menuPM->addSeparator();
        menuPM->addAction(actionAdd_Update_Delete_Projects);
        menuPM->addAction(actionAdd_Update_Delete_Tasks);
        menuPM->addAction(actionAdd_Update_Delete_Subtasks);
        menuPM->addSeparator();
        menuPM->addAction(actionAssign_Tasks);
        menuTT->addAction(actionGet_Time_Tracker_Settings);
        menuTT->addAction(actionUpload_Work_Log);
        menuTT->addAction(actionTime_Tracker_Data_Summary_Info);
        menuCB->addAction(actionUpload_File);
        menuCB->addAction(actionDownload_File);
        menuCB->addAction(actionList_All_Files_in_Directory);
        menuCB->addAction(actionCreate_Rename_Delete_a_Directory_File);
        menuCB->addAction(actionUpload_App_Data_Upload_App_File_Data);
        menuCB->addAction(actionDownload_App_Data_Download_App_File_Data);

        retranslateUi(MainWindow);
        QObject::connect(actionUser_List, SIGNAL(triggered()), MainWindow, SLOT(ShowUserList()));
        QObject::connect(actionGet_All_Forums, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllForums()));
        QObject::connect(actionGet_All_Threads, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllThreads()));
        QObject::connect(actionGet_All_Topics, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllTopics()));
        QObject::connect(actionDelete_a_Thread, SIGNAL(triggered()), MainWindow, SLOT(ShowDeleteAThread()));
        QObject::connect(actionAdd_Update_Delete_Forum, SIGNAL(triggered()), MainWindow, SLOT(ShowAddUpdateDeleteForum()));
        QObject::connect(actionAdd_Update_Delete_Topics, SIGNAL(triggered()), MainWindow, SLOT(ShowAddUpdateDeleteTopics()));
        QObject::connect(actionAdd_Update_Thread, SIGNAL(triggered()), MainWindow, SLOT(ShowAddUpdateThread()));
        QObject::connect(actionDelete_a_comment, SIGNAL(triggered()), MainWindow, SLOT(ShowDeleteAComment()));
        QObject::connect(actionAdd_a_Comment, SIGNAL(triggered()), MainWindow, SLOT(ShowAddAComment()));
        QObject::connect(actionAdd_Delete_Footer, SIGNAL(triggered()), MainWindow, SLOT(ShowAdddelFooter()));
        QObject::connect(actionAdd_Delete_Header, SIGNAL(triggered()), MainWindow, SLOT(ShowAdddelHeader()));
        QObject::connect(actionAdd_External_Link, SIGNAL(triggered()), MainWindow, SLOT(ShowAddExternalLink()));
        QObject::connect(actionAdd_Internal_Link, SIGNAL(triggered()), MainWindow, SLOT(ShowAddInternalLink()));
        QObject::connect(actionGet_All_External_Links, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllExternalLinks()));
        QObject::connect(actionGEt_All_Internal_Links, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllInternalLinks()));
        QObject::connect(actionGet_Detailed_Page_Info, SIGNAL(triggered()), MainWindow, SLOT(ShowGetDetailedPageInfo()));
        QObject::connect(actionGet_SEO_Info_Page, SIGNAL(triggered()), MainWindow, SLOT(ShowGetSEOPageInfo()));
        QObject::connect(actionList_All_Page_Info_With_Links, SIGNAL(triggered()), MainWindow, SLOT(ShowListAllPageInfoWithLinks()));
        QObject::connect(actionSet_SEO_Info_Page, SIGNAL(triggered()), MainWindow, SLOT(ShowSetSEOInfoPage()));
        QObject::connect(actionGet_All_Users, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllUsers()));
        QObject::connect(actionGet_All_Admin_Users, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllAdminUsers()));
        QObject::connect(actionGet_All_Online_Users, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllOnlineUsers()));
        QObject::connect(actionGet_All_Online_Normal_Users, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllOnlineNormalUsers()));
        QObject::connect(actionGEt_All_Online_Support_Users, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllOnlineSupportUsers()));
        QObject::connect(actionSend_E_mail, SIGNAL(triggered()), MainWindow, SLOT(ShowSendEmail()));
        QObject::connect(actionGet_All_Bug_List, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAllBugList()));
        QObject::connect(actionGet_Assigned_Task_List, SIGNAL(triggered()), MainWindow, SLOT(ShowGetAssignedTaskList()));
        QObject::connect(actionGet_Bug_Tracker_Task_Details_List, SIGNAL(triggered()), MainWindow, SLOT(ShowGetBugTrackerDetailsList()));
        QObject::connect(actionGet_User_Task_Info, SIGNAL(triggered()), MainWindow, SLOT(ShowGetUserInfo()));
        QObject::connect(actionPost_a_Defect_Bug, SIGNAL(triggered()), MainWindow, SLOT(ShowPostADefectForm()));
        QObject::connect(actionInvite_User, SIGNAL(triggered()), MainWindow, SLOT(ShowInviteUser()));
        QObject::connect(actionAdd_User, SIGNAL(triggered()), MainWindow, SLOT(ShowAdduserlist()));
        QObject::connect(actionAdd_Admin, SIGNAL(triggered()), MainWindow, SLOT(ShowAddAdminlist()));
        QObject::connect(actionDelete_Admin, SIGNAL(triggered()), MainWindow, SLOT(ShowDeleteAdmin()));
        QObject::connect(actionDelete_User, SIGNAL(triggered()), MainWindow, SLOT(ShowDeleteUser()));
        QObject::connect(actionBlock_User, SIGNAL(triggered()), MainWindow, SLOT(ShowBlockUSer()));
        QObject::connect(actionGenerateTemSiteAccessToken, SIGNAL(triggered()), MainWindow, SLOT(ShowGenerateTermSiteAccessToken()));
        QObject::connect(actionAdd_Exam_Categories, SIGNAL(triggered()), MainWindow, SLOT(ShowAddExamCategory()));
        QObject::connect(actionAdd_Exam_Subcategory, SIGNAL(triggered()), MainWindow, SLOT(ShowAddExamSubCategory()));
        QObject::connect(actionList_All_Exam_Categories, SIGNAL(triggered()), MainWindow, SLOT(ShowListExamCategory()));
        QObject::connect(actionList_All_Exam_Subcategories, SIGNAL(triggered()), MainWindow, SLOT(ShowListExamSubCategory()));
        QObject::connect(actionUpdate_Exam_Default_Settings, SIGNAL(triggered()), MainWindow, SLOT(ShowUpdateExamSettings()));
        QObject::connect(actionList_All_Questions_in_Subcategory, SIGNAL(triggered()), MainWindow, SLOT(ShowListExamQuestions()));
        QObject::connect(actionImport_Data, SIGNAL(triggered()), MainWindow, SLOT(ShowImportData()));
        QObject::connect(actionCopy_Questions, SIGNAL(triggered()), MainWindow, SLOT(ShowCopyQues()));
        QObject::connect(actionAdd_Edit_Delete_Questions, SIGNAL(triggered()), MainWindow, SLOT(ShowAddEditQues()));
        QObject::connect(actionAdd_Update_Delete_Employ_Details, SIGNAL(triggered()), MainWindow, SLOT(ShowAdd_Update_DeleteEmploy_Details()));
        QObject::connect(actionInvite_Employee, SIGNAL(triggered()), MainWindow, SLOT(ShowInviteEmployee()));
        QObject::connect(actionInvite_Employee, SIGNAL(triggered()), MainWindow, SLOT(ShowInvite_Employee()));
        QObject::connect(actionApply_for_Leave, SIGNAL(triggered()), MainWindow, SLOT(ShowApply_For_Leave()));
        QObject::connect(actionApprove_Reject_Leave, SIGNAL(triggered()), MainWindow, SLOT(ShowApprove_Reject_Leave()));
        QObject::connect(actionList_All_Leave_Applications, SIGNAL(triggered()), MainWindow, SLOT(ShowList_All_Leave_Application()));
        QObject::connect(actionList_All_Companies, SIGNAL(triggered()), MainWindow, SLOT(ShowAllCompanies()));
        QObject::connect(actionList_All_Company_Products, SIGNAL(triggered()), MainWindow, SLOT(ShowAllProducts()));
        QObject::connect(actionAdd_Update_Delete_Company_Details, SIGNAL(triggered()), MainWindow, SLOT(ShowAUDCompanyDetials()));
        QObject::connect(actionAdd_Update_Delete_CompanyProducts, SIGNAL(triggered()), MainWindow, SLOT(ShowAUDProductsDetails()));
        QObject::connect(actionAdd_Update_Payment_Gateway_Settings_3, SIGNAL(triggered()), MainWindow, SLOT(ShowPaymnetGatway()));
        QObject::connect(actionRegister_Licence_User, SIGNAL(triggered()), MainWindow, SLOT(ShowRegisterLicenseUser()));
        QObject::connect(actionGet_Licence_Info, SIGNAL(triggered()), MainWindow, SLOT(ShowGetLicenseInfo()));
        QObject::connect(actionLicence_Test_App, SIGNAL(triggered()), MainWindow, SLOT(ShowLicenseTestApp()));
        QObject::connect(actionGet_Time_Tracker_Settings, SIGNAL(triggered()), MainWindow, SLOT(ShowGetTimeTrackerSettings()));
        QObject::connect(actionTime_Tracker_Data_Summary_Info, SIGNAL(triggered()), MainWindow, SLOT(ShowTTDataSummaryInfo()));
        QObject::connect(actionUpload_Work_Log, SIGNAL(triggered()), MainWindow, SLOT(ShowUploadWorkLog()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUser_List->setText(QCoreApplication::translate("MainWindow", "User List", nullptr));
        actionAdd_User->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        actionInvite_User->setText(QCoreApplication::translate("MainWindow", "Invite User", nullptr));
        actionDelete_User->setText(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
        actionBlock_User->setText(QCoreApplication::translate("MainWindow", "Block User", nullptr));
        actionAdd_Admin->setText(QCoreApplication::translate("MainWindow", "Add Admin", nullptr));
        actionDelete_Admin->setText(QCoreApplication::translate("MainWindow", "Delete Admin", nullptr));
        actionGenerateTemSiteAccessToken->setText(QCoreApplication::translate("MainWindow", "GenerateTemSiteAccessToken", nullptr));
        actionList_All_Page_Info_With_Links->setText(QCoreApplication::translate("MainWindow", "List All Page Info With Links", nullptr));
        actionGet_Detailed_Page_Info->setText(QCoreApplication::translate("MainWindow", "Get Detailed Page Info", nullptr));
        actionGet_SEO_Info_Page->setText(QCoreApplication::translate("MainWindow", "Get SEO Info Page", nullptr));
        actionSet_SEO_Info_Page->setText(QCoreApplication::translate("MainWindow", "Set SEO Info Page", nullptr));
        actionGEt_All_Internal_Links->setText(QCoreApplication::translate("MainWindow", "Get All Internal Links", nullptr));
        actionGet_All_External_Links->setText(QCoreApplication::translate("MainWindow", "Get All External Links", nullptr));
        actionAdd_Internal_Link->setText(QCoreApplication::translate("MainWindow", "Add Internal Link", nullptr));
        actionAdd_External_Link->setText(QCoreApplication::translate("MainWindow", "Add External Link", nullptr));
        actionAdd_Delete_Header->setText(QCoreApplication::translate("MainWindow", "Add/Delete Header", nullptr));
        actionAdd_Delete_Footer->setText(QCoreApplication::translate("MainWindow", "Add/Delete Footer", nullptr));
        actionGet_All_Users->setText(QCoreApplication::translate("MainWindow", "Get All Users", nullptr));
        actionGet_All_Admin_Users->setText(QCoreApplication::translate("MainWindow", "Get All Admin Users", nullptr));
        actionGet_All_Online_Users->setText(QCoreApplication::translate("MainWindow", "Get All Online Users", nullptr));
        actionGet_All_Online_Normal_Users->setText(QCoreApplication::translate("MainWindow", "Get All Online Normal Users", nullptr));
        actionGEt_All_Online_Support_Users->setText(QCoreApplication::translate("MainWindow", "Get All Online Support Users", nullptr));
        actionSend_E_mail->setText(QCoreApplication::translate("MainWindow", "Send E-mail", nullptr));
        actionLaunch_Text_Chat_Demo->setText(QCoreApplication::translate("MainWindow", "Launch Text Chat Demo", nullptr));
        actionLaunch_Voice_Chat_Demo->setText(QCoreApplication::translate("MainWindow", "Launch Voice Chat Demo", nullptr));
        actionGet_Assigned_Task_List->setText(QCoreApplication::translate("MainWindow", "Get Assigned Task List", nullptr));
        actionGet_Bug_Tracker_Task_Details_List->setText(QCoreApplication::translate("MainWindow", "Get Bug Tracker Task Details List", nullptr));
        actionGet_User_Task_Info->setText(QCoreApplication::translate("MainWindow", "Get User Task Info", nullptr));
        actionGet_All_Bug_List->setText(QCoreApplication::translate("MainWindow", "Get All Bug List", nullptr));
        actionPost_a_Defect_Bug->setText(QCoreApplication::translate("MainWindow", "Post a Defect|Bug", nullptr));
        actionList_All_Companies->setText(QCoreApplication::translate("MainWindow", "List All Companies", nullptr));
        actionList_All_Company_Products->setText(QCoreApplication::translate("MainWindow", "List All Company Products", nullptr));
        actionAdd_Update_Delete_Company_Details->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Company Details", nullptr));
        actionAdd_Update_Delete_CompanyProducts->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete CompanyProducts", nullptr));
        actionAdd_Update_Payment_Gateway_Settings->setText(QCoreApplication::translate("MainWindow", "Add|Update Payment Gateway Settings", nullptr));
        actionAdd_Update_Payment_Gateway_Settings_2->setText(QCoreApplication::translate("MainWindow", "Add|Update Payment Gateway Settings", nullptr));
        actionAdd_Update_Payment_Gateway_Settings_3->setText(QCoreApplication::translate("MainWindow", "Add|Update Payment Gateway Settings", nullptr));
        actionList_All_Exam_Categories->setText(QCoreApplication::translate("MainWindow", "List All Exam Categories", nullptr));
        actionList_All_Exam_Subcategories->setText(QCoreApplication::translate("MainWindow", "List All Exam Subcategories", nullptr));
        actionAdd_Exam_Categories->setText(QCoreApplication::translate("MainWindow", "Add Exam Category", nullptr));
        actionAdd_Exam_Subcategory->setText(QCoreApplication::translate("MainWindow", "Add Exam Subcategory", nullptr));
        actionList_All_Questions_in_Subcategory->setText(QCoreApplication::translate("MainWindow", "List All Questions in Subcategory", nullptr));
        actionAdd_Edit_Delete_Questions->setText(QCoreApplication::translate("MainWindow", "Add|Edit|Delete Questions", nullptr));
        actionCopy_Questions->setText(QCoreApplication::translate("MainWindow", "Copy Questions", nullptr));
        actionImport_Data->setText(QCoreApplication::translate("MainWindow", "Import Data", nullptr));
        actionUpdate_Exam_Default_Settings->setText(QCoreApplication::translate("MainWindow", "Update Exam Default Settings", nullptr));
        actionGet_All_Forums->setText(QCoreApplication::translate("MainWindow", "Get All Forums", nullptr));
        actionGet_All_Topics->setText(QCoreApplication::translate("MainWindow", "Get All Topics", nullptr));
        actionGet_All_Threads->setText(QCoreApplication::translate("MainWindow", "Get All Threads", nullptr));
        actionDelete_a_Thread->setText(QCoreApplication::translate("MainWindow", "Delete a Thread", nullptr));
        actionAdd_Update_Delete_Forum->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Forum", nullptr));
        actionAdd_Update_Delete_Topics->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Topics", nullptr));
        actionAdd_Update_Thread->setText(QCoreApplication::translate("MainWindow", "Add|Update Thread", nullptr));
        actionDelete_a_comment->setText(QCoreApplication::translate("MainWindow", "Delete a comment", nullptr));
        actionAdd_a_Comment->setText(QCoreApplication::translate("MainWindow", "Add a Comment", nullptr));
        actionAdd_Update_Delete_Employ_Details->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Employee Details", nullptr));
        actionInvite_Employee->setText(QCoreApplication::translate("MainWindow", "Invite Employee", nullptr));
        actionInform_HR_Manager_as_E_mail->setText(QCoreApplication::translate("MainWindow", "Inform HR|Manager as E-mail", nullptr));
        actionApply_for_Leave->setText(QCoreApplication::translate("MainWindow", "Apply for Leave", nullptr));
        actionList_All_Leave_Applications->setText(QCoreApplication::translate("MainWindow", "List All Leave Applications", nullptr));
        actionApprove_Reject_Leave->setText(QCoreApplication::translate("MainWindow", "Approve|Reject Leave", nullptr));
        actionRegister_Licence_User->setText(QCoreApplication::translate("MainWindow", "Register Licence User", nullptr));
        actionGet_Licence_Info->setText(QCoreApplication::translate("MainWindow", "Get Licence Info", nullptr));
        actionLicence_Test_App->setText(QCoreApplication::translate("MainWindow", "Licence Test App", nullptr));
        actionGet_All_Projects->setText(QCoreApplication::translate("MainWindow", "Get All Projects", nullptr));
        actionGet_All_Tasks->setText(QCoreApplication::translate("MainWindow", "Get All Tasks", nullptr));
        actionAdd_Update_Delete_Projects->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Projects", nullptr));
        actionAdd_Update_Delete_Tasks->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Tasks", nullptr));
        actionAdd_Update_Delete_Subtasks->setText(QCoreApplication::translate("MainWindow", "Add|Update|Delete Subtasks", nullptr));
        actionAssign_Tasks->setText(QCoreApplication::translate("MainWindow", "Assign Tasks", nullptr));
        actionGet_Time_Tracker_Settings->setText(QCoreApplication::translate("MainWindow", "Get Time Tracker Settings", nullptr));
        actionUpload_Work_Log->setText(QCoreApplication::translate("MainWindow", "Upload Work Log", nullptr));
        actionTime_Tracker_Data_Summary_Info->setText(QCoreApplication::translate("MainWindow", "Time Tracker Data Summary Info", nullptr));
        actionUpload_File->setText(QCoreApplication::translate("MainWindow", "Upload File", nullptr));
        actionDownload_File->setText(QCoreApplication::translate("MainWindow", "Download File", nullptr));
        actionList_All_Files_in_Directory->setText(QCoreApplication::translate("MainWindow", "List All Files in Directory", nullptr));
        actionCreate_Rename_Delete_a_Directory_File->setText(QCoreApplication::translate("MainWindow", "Create|Rename|Delete a Directory/File", nullptr));
        actionUpload_App_Data_Upload_App_File_Data->setText(QCoreApplication::translate("MainWindow", "Upload App Data|Upload App File Data", nullptr));
        actionDownload_App_Data_Download_App_File_Data->setText(QCoreApplication::translate("MainWindow", "Download App Data|Download App File Data", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Authenticate User", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Web URL", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "User ID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Auth Token", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Request Data", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Response Data", nullptr));
        menu_Account->setTitle(QCoreApplication::translate("MainWindow", "&Account", nullptr));
        menuCMS->setTitle(QCoreApplication::translate("MainWindow", "CMS", nullptr));
        menuComm->setTitle(QCoreApplication::translate("MainWindow", "Comm", nullptr));
        menuDT->setTitle(QCoreApplication::translate("MainWindow", "DT", nullptr));
        menuECom->setTitle(QCoreApplication::translate("MainWindow", "ECom", nullptr));
        menuExam->setTitle(QCoreApplication::translate("MainWindow", "Exam", nullptr));
        menuForum->setTitle(QCoreApplication::translate("MainWindow", "Forum", nullptr));
        menuHR->setTitle(QCoreApplication::translate("MainWindow", "HR", nullptr));
        menuLicense->setTitle(QCoreApplication::translate("MainWindow", "License", nullptr));
        menuPM->setTitle(QCoreApplication::translate("MainWindow", "PM", nullptr));
        menuTT->setTitle(QCoreApplication::translate("MainWindow", "TT", nullptr));
        menuCB->setTitle(QCoreApplication::translate("MainWindow", "CB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
