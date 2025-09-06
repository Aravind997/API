#ifndef AUDPRODUCTSDLG_H
#define AUDPRODUCTSDLG_H

#include <QDialog>
#include <QJsonArray>
#include "Services/ecomservice.h"
#include <QJsonObject>
#include<QStandardItemModel>
#include<QComboBox>
#include <QXmlStreamReader>
#include <QJsonDocument>
#include <QFileDialog>
#include <QPixmap>
#include <QByteArray>

namespace Ui {
class AUDProductsDlg;
}

class AUDProductsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AUDProductsDlg(QWidget *parent = nullptr);
    ~AUDProductsDlg();
    void ShowAllCompanies();
    QString StringifyJson(QJsonDocument jsonDoc);
     void ShowProductCategory();
     void ShowSubCategory();
     void ShowTable();
     void AddProductToTable();
    QString PCompanyId;
    QString PCategoryId;
    QString PSubCategoryId;
    QString ProdID;
    QString GstrImg1,GstrImg2,GstrImg3;
    QString img1_64Base,img2_64Base,img3_64Base;
    bool GIncludetax= false;
    QString GStrThumb1;
    QString GStrThumb2;
    QString GStrThumb3;
    void DisplayImageOne(QString base64Data);
    void DisplayImageTwo(QString base64Data);
    void DisplayImageThree(QString base64Data);
    QString imageToBase64(QString &imageFilePath);
    void ClearData();
private slots:
    void on_pushButton_Close_clicked();

    void on_comboBoxCo1_currentIndexChanged(int index);

    void on_comboBoxCat_currentIndexChanged(int index);

    void on_comboBoxSubCat_currentIndexChanged(int index);

    void on_pushButton_SaveProduct_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_EDIT_PRODUCT_clicked();

    void on_checkBoxTax_clicked(bool checked);

    void on_pushButton_clicked();

    void on_pushButton_IMG2_clicked();

    void on_pushButton_IMG3_clicked();

private:
    Ui::AUDProductsDlg *ui;
    QJsonArray m_JsonArray;
    EcomService* m_ecomService;
    QStandardItemModel*ProductModel;
    //QComboBox comboItem ;
};

#endif // AUDPRODUCTSDLG_H
