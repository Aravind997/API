#include "listallproductsdlg.h"
#include "ui_listallproductsdlg.h"
#include "mainwindow.h"

ListAllProductsDlg::ListAllProductsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListAllProductsDlg)
{
    ui->setupUi(this);
    ShowAllCompanies();
    ShowProductCategory();
   // ShowSubCategory();
}

ListAllProductsDlg::~ListAllProductsDlg()
{
    delete ui;
}
QString ListAllProductsDlg::StringifyJson(QJsonDocument jsonDoc)
{
    QByteArray data = jsonDoc.toJson();
    return QString::fromStdString(data.toStdString());
}
void ListAllProductsDlg::ShowAllCompanies(){

    try
    {

        QJsonDocument Doc=m_ecomService->GetAllCompanies();
        MainWindow::SetResponseData(StringifyJson(Doc));
        m_JsonArray=Doc.array();
        //qDebug() <<"Array"<< m_JsonArray;
        for(int i=0;i<m_JsonArray.size();i++)
        {
             QJsonObject obj=m_JsonArray[i].toObject();
             ui->comboBoxCo->addItem(obj["VenderCompanyName"].toString());

        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}

void ListAllProductsDlg::ShowProductCategory(){
    try
    {

        QJsonDocument Doc=m_ecomService->GetAllProductCategory();
        MainWindow::SetResponseData(StringifyJson(Doc));
        m_JsonArray=Doc.array();
         qDebug() <<"Array"<< m_JsonArray;
        for(int i=0;i<m_JsonArray.size();i++)
        {
             QJsonObject obj=m_JsonArray[i].toObject();
             if(i==0){
                 ui->comboBoxProCat->addItem("Software");
             }else if(i==1){
                   ui->comboBoxProCat->addItem("Electronics");

             }
            // ui->comboBoxProCat->addItem(obj["CategoryName"].toString());
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}





void ListAllProductsDlg::on_comboBoxCo_currentIndexChanged(int index)
{
    if(index != -1){
         QJsonObject elementobj=m_JsonArray[index].toObject();
         QString  ComapnyId(elementobj.value("VenderUserId").toString());
         GCompanyId =ComapnyId;
         qDebug()<<"selected comapnyId"<<GCompanyId;
    }
}


void ListAllProductsDlg::on_comboBoxProCat_currentIndexChanged(int index)
{
    if(index == 0){
        GCategoryId = "1";

         ui->comboBox_SubCategory->clear();

         qDebug()<<"Selected GCategoryId 1"<< GCategoryId;
         this-> ShowSubCategory();
    }else if(index == 1){
         GCategoryId = "2";
        qDebug()<<"Selected GCategoryId 2"<< GCategoryId;
          catNo =4;
         ui->comboBox_SubCategory->clear();
        this->  ShowSubCategory();

    }

}
void ListAllProductsDlg ::ShowSubCategory(){
    try{
        QJsonDocument Doc=m_ecomService->GetAllSubCategory(GCategoryId);
        MainWindow::SetResponseData(StringifyJson(Doc));
        m_JsonArray=Doc.array();
        qDebug()<<"array sub cat"<<m_JsonArray;
        for(int i=0;i<m_JsonArray.count();i++)
        {
             QJsonObject obj=m_JsonArray[i].toObject();
             if(i==0){

                   if(catNo==4){
                        ui->comboBox_SubCategory->addItem("TV");
                   }else{
                        ui->comboBox_SubCategory->addItem("Business Software");
                   }
             }else if(i==1){
                  ui->comboBox_SubCategory->addItem("Utility Software");
             }else if(i==2){
                    ui->comboBox_SubCategory->addItem("Video Assisted Tutorials");
             }
            // ui->comboBox_SubCategory->addItem(obj["SubCategoryName"].toString());
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}

void ListAllProductsDlg::on_comboBox_SubCategory_currentIndexChanged(int index)
{
//    if(index != -1){
//         QJsonObject elementobj=m_JsonArray[index].toObject();
//         QString  SubCategoryId(elementobj.value("SubCategoryId").toString());
//         GSubCategoryId =SubCategoryId;
//         qDebug()<<"selected sub categoryd"<<GSubCategoryId;
//         ui->listWidget->clear();
//         this->ShowProducts();
//    }
    if(index == 0){
         qDebug()<<"selected  business software sub categoryd 1"<<index;
         GSubCategoryId ="1";
         ui->listWidget->clear();
         catNo =0;
         ShowProducts();

    }else if(index == 1){
         qDebug()<<"selected  business software sub categoryd 2"<<index;
         GSubCategoryId ="2";
         ui->listWidget->clear();
         ShowProducts();

    }else if(index == 2){
         qDebug()<<"selected  business software sub categoryd 3"<<index;
         GSubCategoryId ="3";
         ui->listWidget->clear();
         ShowProducts();

    }else if(index == 3){
         qDebug()<<"selected  business software sub categoryd 4"<<index;
         GSubCategoryId ="4";
         ui->listWidget->clear();
         ShowProducts();

    }
}

void ListAllProductsDlg::ShowProducts(){
    try{
         QJsonDocument Doc=m_ecomService->GetAllProducts(GCompanyId,GCategoryId,GSubCategoryId);
         MainWindow::SetResponseData(StringifyJson(Doc));
         m_JsonArray=Doc.array();

         for(int i=0;i<m_JsonArray.size();i++)
         {
             QJsonObject obj=m_JsonArray[i].toObject();
             ui->listWidget->addItem("Product Title :"+obj["ProductTitle"].toString());
             ui->listWidget->addItem("Category Name  :"+obj["CategoryName"].toString());
             ui->listWidget->addItem("Product Description  :"+obj["ProductDescription"].toString());
             ui->listWidget->addItem("Product Id  :"+obj["ProductId"].toString());
             ui->listWidget->addItem("Product More Details  :"+obj["ProductMoreDetails"].toString());
             ui->listWidget->addItem("Product Disable PayPal  :"+obj["ProductDisablePayPal"].toString());
             ui->listWidget->addItem("Product Plimus Link  :"+obj["ProductPlimusLink"].toString());
             ui->listWidget->addItem("Product Price  :"+obj["ProductPrice"].toString());
             ui->listWidget->addItem("Product Quantity  :"+obj["ProductQuantity"].toString());
             ui->listWidget->addItem("Product Quick Demo Link  :"+obj["ProductQuickDemoLink"].toString());
             ui->listWidget->addItem("Product RealImage Path  :"+obj["ProductRealImagePath"].toString());
             ui->listWidget->addItem("Product Shipping Details  :"+obj["ProductShippingDetails"].toString());
             ui->listWidget->addItem("Product Specification  :"+obj["ProductSpecification"].toString());
             ui->listWidget->addItem("Product SubTitle  :"+obj["ProductSubTitle"].toString());
             ui->listWidget->addItem("Product Thumbnail ImagePath  :"+obj["ProductThumbnailImagePath"].toString());
             ui->listWidget->addItem("SubCategory Description  :"+obj["SubCategoryDescription"].toString());
             ui->listWidget->addItem("SubCategory Id  :"+obj["SubCategoryId"].toString());
             ui->listWidget->addItem("SubCategory Name  :"+obj["SubCategoryName"].toString());
             ui->listWidget->addItem("Vender Company Name  :"+obj["VenderCompanyName"].toString());
             ui->listWidget->addItem("Vender UserId  :"+obj["VenderUserId"].toString());
         }
    }
    catch (std::exception& es)
    {
         MainWindow::SetResponseData(es.what());
    }
}

