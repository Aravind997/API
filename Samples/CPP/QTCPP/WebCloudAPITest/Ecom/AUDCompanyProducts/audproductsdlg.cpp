#include "audproductsdlg.h"
#include "ui_audproductsdlg.h"
#include "mainwindow.h"
#include <QDomDocument>
#include <QDomElement>
#include <QTextStream>
#include <QBuffer>
AUDProductsDlg::AUDProductsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AUDProductsDlg)
{
    ui->setupUi(this);
    ShowAllCompanies();
    ShowProductCategory();
    ShowTable();
    AddProductToTable();
  ui->comboBoxItemSpec->addItem("New");
  ui->comboBoxItemSpec->addItem("Used");
  ui->comboBoxItemSpec->addItem("Not Specified");
  ui->lineEdit_TaxName->hide();
  ui->lineEdit_TaxPercentage->hide();

}

AUDProductsDlg::~AUDProductsDlg()
{
    delete ui;
}

void AUDProductsDlg::on_pushButton_Close_clicked()
{
    this->close();
}
QString AUDProductsDlg::StringifyJson(QJsonDocument jsonDoc)
{
    QByteArray data = jsonDoc.toJson();
    return QString::fromStdString(data.toStdString());
}
void AUDProductsDlg::ShowAllCompanies(){

    try
    {

        QJsonDocument Doc=m_ecomService->GetAllCompanies();
        MainWindow::SetResponseData(StringifyJson(Doc));
        m_JsonArray=Doc.array();
        // QDebug() << m_JsonArray;
        for(int i=0;i<m_JsonArray.size();i++)
        {
            QJsonObject obj=m_JsonArray[i].toObject();
            ui->comboBoxCo1->addItem(obj["VenderCompanyName"].toString());
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}
void AUDProductsDlg::ShowProductCategory(){
    try
    {

        QJsonDocument Doc=m_ecomService->GetAllProductCategory();
        MainWindow::SetResponseData(StringifyJson(Doc));
        m_JsonArray=Doc.array();

        for(int i=0;i<m_JsonArray.size();i++)
        {
            QJsonObject obj=m_JsonArray[i].toObject();
            if(i==0){
                ui->comboBoxCat->addItem("Software");
            }else if(i==1){
                ui->comboBoxCat->addItem("Electronics");
            }
           // ui->comboBoxCat->addItem(obj["CategoryName"].toString());
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}
void AUDProductsDlg::on_comboBoxCo1_currentIndexChanged(int index)
{
    if(index != -1){
        qDebug()<<"selected comapnyId -INDEX"<<index;
        QJsonObject elementobj=m_JsonArray[index].toObject();
        QString  ComapnyId(elementobj.value("VenderUserId").toString());
        PCompanyId =ComapnyId;
        qDebug()<<"selected comapnyId"<<PCompanyId;
    }
}


void AUDProductsDlg::on_comboBoxCat_currentIndexChanged(int index)
{
    if(index == 0){
        PCategoryId = "1";

        ui->comboBoxSubCat->clear();

        qDebug()<<"Selected GCategoryId 1"<< PCategoryId;
        this-> ShowSubCategory();
    }else if(index == 1){
        PCategoryId = "2";
        qDebug()<<"Selected GCategoryId 2"<< PCategoryId;
        ui->comboBoxSubCat->clear();
        this->  ShowSubCategory();

    }
}
void AUDProductsDlg ::ShowSubCategory(){
    try{
        QJsonDocument Doc=m_ecomService->GetAllSubCategory(PCategoryId);
        MainWindow::SetResponseData(StringifyJson(Doc));
        m_JsonArray=Doc.array();

        for(int i=0;i<m_JsonArray.count();i++)
        {
            QJsonObject obj=m_JsonArray[i].toObject();
            ui->comboBoxSubCat->addItem(obj["SubCategoryName"].toString());
        }
    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}

void AUDProductsDlg::on_comboBoxSubCat_currentIndexChanged(int index)
{
    if(index == 0){
        qDebug()<<"selected  business software sub categoryd 1->index"<<index;
        PSubCategoryId ="1";
          qDebug()<<"selected  business software sub categoryd 1"<<PSubCategoryId;
     //  ProductModel->clear();
        //  AddProductToTable();

    }else if(index == 1){
        qDebug()<<"selected  business software sub categoryd 2"<<index;
        PSubCategoryId ="2";
        // ProductModel->clear();
        AddProductToTable();

    }else if(index == 2){
        qDebug()<<"selected  business software sub categoryd 3"<<index;
        PSubCategoryId ="3";
       // ProductModel->clear();
        AddProductToTable();

    }else if(index == 3){
        qDebug()<<"selected  business software sub categoryd 4"<<index;
        PSubCategoryId ="4";
      // ProductModel->clear();
        AddProductToTable();

    }
}

void AUDProductsDlg::ShowTable(){
    ProductModel = new QStandardItemModel();

    ProductModel->setHorizontalHeaderItem(0,new QStandardItem(tr("Company Name")));
    ProductModel->setHorizontalHeaderItem(1,new QStandardItem(tr("Category")));
    ProductModel->setHorizontalHeaderItem(2,new QStandardItem(tr("SubCategory")));
    ProductModel->setHorizontalHeaderItem(3,new QStandardItem(tr("Product Name")));
    ProductModel->setHorizontalHeaderItem(4,new QStandardItem(tr("Item Specification")));


    ui->tableViewPro->setModel(ProductModel);
}
void AUDProductsDlg::AddProductToTable(){
    try
    {
        ProductModel->clear();
       QJsonDocument Doc=m_ecomService->GetAllProducts(PCompanyId,PCategoryId,PSubCategoryId);

        m_JsonArray=Doc.array();
        // QDebug() << m_JsonArray;
        for(int i=0;i<m_JsonArray.count();i++)
        {
            QJsonObject obj=m_JsonArray[i].toObject();

            QString productName(obj.value("ProductTitle").toString());
            QString categoryName(obj.value("CategoryName").toString());
            QString subcategoryName(obj.value("SubCategoryName").toString());
            QString itemSpec(obj.value("ProductSpecification").toString());
            QString CoName(obj.value("VenderCompanyName").toString());
//            QString productName ="Hello";
//            QString categoryName="Test";
            ProductModel->setItem(i,0,new QStandardItem(CoName));
            ProductModel->setItem(i,1,new QStandardItem(categoryName));
            ProductModel->setItem(i,2,new QStandardItem(subcategoryName));
            ProductModel->setItem(i,3,new QStandardItem(productName));
            ProductModel->setItem(i,4,new QStandardItem(itemSpec));

        }



    }
    catch (std::exception& es)
    {
        MainWindow::SetResponseData(es.what());
    }
}

void AUDProductsDlg::on_pushButton_SaveProduct_clicked()
{
     QPushButton *btnSave = findChild<QPushButton*>("pushButton_SaveProduct");
    if(btnSave->text() == "Save"){
        QString CompanyName = ui->comboBoxCo1->currentText();
        QString CategoryName = ui->comboBoxCat->currentText();
        QString SubCategoryName = ui->comboBoxSubCat->currentText();
        QString ProductTitle = ui->lineEditProductName->text();
        QString ProductSubTitle = ui->lineEditProSubName->text();
        QString ItmeSpec = ui->comboBoxItemSpec->currentText();
        QString Desc1 = ui->textEditDESC1->toPlainText();
        QString Desc2 = ui->textEditDESC2->toPlainText();
        QString ProductPrice = ui->lineEditPRICE_USSD ->text();
        QString PriceINR = ui->lineEditPRICE_INR->text();
        QString ShippingPrice = ui->lineEditSHIP_INR->text();
        QString ShippingINR  = ui->lineEditSHIP_INR->text();
        QString Quantity = ui->lineEditQTY->text();
        QString taxname =ui->lineEdit_TaxName->text();
        QString taxpercentage =ui->lineEdit_TaxPercentage->text();
        QString ytlink = ui->lineEditVedio->text();
        QString regcode = ui->lineEditRegCode->text();
        bool includetax = false;
        qDebug()<<"tax"<<includetax;
//        QString CompanyID =PCompanyId;
//        QString CategoryId = PCategoryId;
//        QString SubCategoryId =PSubCategoryId;
        QString strImagePath1 =ui->lineEditIMG1->text();
         QString strImagePath2 =ui->lineEditIMG2->text();
         QString strImagePath3 =ui->lineEditIMG3->text();
         //converting image to 64bit qstring format
         if(strImagePath1!=""){
               img1_64Base =imageToBase64(strImagePath1);
         }else{
               img1_64Base="NIL";
         }
         if(strImagePath2!=""){
             img2_64Base =imageToBase64(strImagePath2);
         }else{
             img2_64Base="NIL";
         }
         if(strImagePath3!=""){
              img3_64Base =imageToBase64(strImagePath3);
         }else{
              img3_64Base="NIL";
         }

      //  QString includetax =GIncludetax;

        try {

            QJsonObject obj;
            obj["ProductId"]="";
            obj["VenderUserId"]=PCompanyId;
            obj["VenderCompanyName"]=CompanyName;
            obj["ProductTitle"]=ProductTitle;
            obj["ProductSubTitle"]=ProductSubTitle;

            obj["CategoryName"]=CategoryName;
            obj["SubCategoryName"]=SubCategoryName;
            obj["ProductDescription"]=Desc1;
            obj["ProductMoreDetails"]=Desc2;
            obj["ProductPrice"]=ProductPrice;

            obj["ProductQuantity"]=Quantity;
            obj["ProductSpecification"]=ItmeSpec;
            obj["SubCategoryId"]=PSubCategoryId;
            obj["CategoryID"]=PCategoryId;
            //obj["ProductDisablePayPal"]="No";

            obj["AdditionalInfoXml"]="";
            obj["ProductType"]=0;
            obj["ProductThumbnailImagePath"]="";
            obj["ProductShippingDetails"]=ShippingPrice;


            obj["ProductRealImagePath"]="";
            obj["ProductQuickDemoLink"]="";
            obj["ProductPlimusLink"]="";
            obj["SubCategoryDescription"]="";

            QJsonObject obj1;

            obj1["ProductPriceInInr"]=PriceINR;
            obj1["TaxName"]=taxname;
            obj1["ShippingChargeInInr"]=ShippingINR;
            obj1["TaxPercentage"]=taxpercentage;
            obj1["YoutubeVideoLink"]=ytlink;

           // obj1["ProductVersionInfo"]="";
            obj1["IncludeTax"]="No";
            obj1["ProductImageThreeUrl"]="";
            obj1["ProductImageTwoUrl"]="";
            obj1["ProductRegistrationCode"]=regcode;

            obj1["ProductThmnailThreeUrl"]="";
            obj1["ProductThmnailTwoUrl"]="";

            obj["ecomProductDetails"]=obj1;

            QJsonObject obj2;
            obj2["strImage1"]=img1_64Base;
            obj2["strImage2"]=img2_64Base;
            obj2["strImage3"]=img3_64Base;

            obj["productImages"]=obj2;

            QJsonObject obj3;
            obj3["strThumb1"]="";
            obj3["strThumb2"]="";
            obj3["strThumb3"]="";

            obj["productThumbs"]=obj3;


            QJsonDocument jsonDoc(obj);
            QByteArray byteArray = jsonDoc.toJson(QJsonDocument::Compact);

            qDebug()<<"Data"<<byteArray;

            m_ecomService->AddProduct(byteArray);

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(byteArray);
            MainWindow::SetRequestData(reqData);
            ShowTable();
            AddProductToTable();
            ClearData();

        }
        catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
        }
    }else if(btnSave->text()=="Update"){
        QString CompanyName = ui->comboBoxCo1->currentText();
        QString CategoryName = ui->comboBoxCat->currentText();
        QString SubCategoryName = ui->comboBoxSubCat->currentText();
        QString ProductTitle = ui->lineEditProductName->text();
        QString ProductSubTitle = ui->lineEditProSubName->text();
        QString ItmeSpec = ui->comboBoxItemSpec->currentText();
        QString Desc1 = ui->textEditDESC1->toPlainText();
        QString Desc2 = ui->textEditDESC2->toPlainText();
        QString ProductPrice = ui->lineEditPRICE_USSD ->text();
        QString PriceINR = ui->lineEditPRICE_INR->text();
        QString ShippingPrice = ui->lineEditSHIP_INR->text();
        QString ShippingINR  = ui->lineEditSHIP_INR->text();
        QString Quantity = ui->lineEditQTY->text();
        QString taxname =ui->lineEdit_TaxName->text();
        QString taxpercentage =ui->lineEdit_TaxPercentage->text();
        QString ytlink = ui->lineEditVedio->text();
        QString regcode = ui->lineEditRegCode->text();
        bool includetax = GIncludetax;
        qDebug()<<"tax"<<includetax;
//        QString CompanyID =PCompanyId;
//        QString CategoryId = PCategoryId;
//        QString SubCategoryId =PSubCategoryId;
        QString strImagePath1 =ui->lineEditIMG1->text();
        QString strImagePath2 =ui->lineEditIMG2->text();
        QString strImagePath3 =ui->lineEditIMG3->text();
        //converting image to 64bit qstring format
        if(strImagePath1!=""){
              img1_64Base =imageToBase64(strImagePath1);
        }else{
              img1_64Base="NIL";
        }
        if(strImagePath2!=""){
              img2_64Base =imageToBase64(strImagePath2);
        }else{
              img2_64Base="NIL";
        }
        if(strImagePath3!=""){
              img3_64Base =imageToBase64(strImagePath3);
        }else{
              img3_64Base="NIL";
        }


       try {

             QJsonObject obj;
             obj["ProductId"]=ProdID;
             obj["VenderUserId"]=PCompanyId;
             obj["VenderCompanyName"]=CompanyName;
             obj["ProductTitle"]=ProductTitle;
             obj["ProductSubTitle"]=ProductSubTitle;

             obj["CategoryName"]=CategoryName;
             obj["SubCategoryName"]=SubCategoryName;
             obj["ProductDescription"]=Desc1;
             obj["ProductMoreDetails"]=Desc2;
             obj["ProductPrice"]=ProductPrice;

             obj["ProductQuantity"]=Quantity;
             obj["ProductSpecification"]=ItmeSpec;
             obj["SubCategoryId"]=PSubCategoryId;
             obj["CategoryID"]=PCategoryId;
             obj["ProductDisablePayPal"]="No";

             obj["AdditionalInfoXml"]="";
             obj["ProductType"]=0;
             obj["ProductThumbnailImagePath"]="";
             obj["ProductShippingDetails"]=ShippingPrice;
            // obj["ProductShippingDetails"]=ProdID;

             obj["ProductRealImagePath"]="";
             obj["ProductQuickDemoLink"]="";
             obj["ProductPlimusLink"]="";
             obj["SubCategoryDescription"]="";

             QJsonObject obj1;

             obj1["ProductPriceInInr"]=PriceINR;
             obj1["TaxName"]=taxname;
             obj1["ShippingChargeInInr"]=ShippingINR;
             obj1["TaxPercentage"]=taxpercentage;
             obj1["YoutubeVideoLink"]=ytlink;

             obj1["ProductVersionInfo"]=NULL;
             obj1["IncludeTax"]=includetax;
             obj1["ProductImageThreeUrl"]="";
             obj1["ProductImageTwoUrl"]="";
             obj1["ProductRegistrationCode"]=regcode;

             obj1["ProductThmnailThreeUrl"]="";
             obj1["ProductThmnailTwoUrl"]="";

             obj["ecomProductDetails"]=obj1;

             QJsonObject obj2;
             obj2["strImage1"]=img1_64Base;
             obj2["strImage2"]=img2_64Base;
             obj2["strImage3"]=img3_64Base;

             obj["productImages"]=obj2;

             QJsonObject obj3;
             obj3["strThumb1"]="";
             obj3["strThumb2"]="";
             obj3["strThumb3"]="";

            obj["productThumbs"]=obj3;



            //Displaying request data.
            QJsonDocument jsonDoc(obj);
            QByteArray byteArray = jsonDoc.toJson(QJsonDocument::Compact);

            qDebug()<<"Data"<<byteArray;

            m_ecomService->UpdateProduct(byteArray);

            //Displaying request data.
            QJsonDocument reqData = QJsonDocument::fromJson(byteArray);
            MainWindow::SetRequestData(reqData);
            //AddItemtotable();

        }
        catch (std::exception& es) {
            MainWindow::SetResponseData(es.what());
        }
        ui->pushButton_SaveProduct->setText("Save");
        ShowTable();
        AddProductToTable();
        ClearData();
    }

}


void AUDProductsDlg::on_pushButton_6_clicked() //Delete Product Function
{
    QTableView *tableView = findChild<QTableView*>("tableViewPro");
    QItemSelectionModel *selectionModel = tableView->selectionModel();
    int rowIndex = -1;
    if (selectionModel->hasSelection()) {
        QModelIndex currentIndex = selectionModel->currentIndex();
        rowIndex = currentIndex.row();
        qDebug() << "Selected row index: " << rowIndex;
    }
    m_JsonArray = m_ecomService->GetAllProducts(PCompanyId,PCategoryId,PSubCategoryId).array();

    // Loop through the array to find the employee with the matching ID
    QString ProductId;
    for (int i = 0; i < m_JsonArray.size(); i++) {
        QJsonObject obj = m_JsonArray[rowIndex].toObject();
        QString productId = obj["ProductId"].toString();
        qDebug()<<"Product Id local"<<productId;
        ProductId =productId;
    }
    qDebug()<<"ProductnId "<<ProductId;
    try {
        QJsonDocument Doc=m_ecomService->DeleteProduct(ProductId);
        ShowTable();
        AddProductToTable();
    } catch (std::exception& es) {
        MainWindow::SetResponseData(es.what());
    }
}



void AUDProductsDlg::on_pushButton_EDIT_PRODUCT_clicked()
{

        ui->pushButton_SaveProduct->setText("Update");


        QTableView *tableView = findChild<QTableView*>("tableViewPro");
        // replace with your table view object name

        QItemSelectionModel *selectionModel = tableView->selectionModel();
        QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

        int numRows = 0;
        if (selectionModel->hasSelection()) {
            numRows = tableView->model()->rowCount();

        }

        int rowIndex = -1;
        if (selectionModel->hasSelection()) {
            QModelIndex currentIndex = selectionModel->currentIndex();
            rowIndex = currentIndex.row();

        }

        m_JsonArray= m_ecomService->GetAllProducts(PCompanyId,PCategoryId,PSubCategoryId).array();

        for (int i = 0; i < m_JsonArray.size(); i++)
        {
            QJsonObject obj = m_JsonArray[rowIndex].toObject();

            QJsonObject obj1 = obj.value("productThumbs").toObject();
            QString  StrThumb1 (obj1.value("strThumb1").toString());
            QString  StrThumb2 (obj1.value("strThumb2").toString());
            QString  StrThumb3 (obj1.value("strThumb3").toString());
            GstrImg1=StrThumb1;
            GstrImg2=StrThumb2;
            GstrImg3=StrThumb3;
            DisplayImageOne(StrThumb1);
            DisplayImageTwo(StrThumb2);
            DisplayImageThree(StrThumb3);

            QString companyId(obj.value("VenderUserId").toString());
            QString productId(obj.value("ProductId").toString());
            QString VenderCompanyName = obj["VenderCompanyName"].toString();
            QString prodTitle(obj.value("ProductTitle").toString());
            //QString priceINR(obj.value("ProductPriceInInr").toString());
            QString Subtitle(obj.value("ProductSubTitle").toString());
            QString spec(obj.value("ProductSpecification").toString());
            QString desc1(obj.value("ProductDescription").toString());
            QString desc2(obj.value("ProductMoreDetails").toString());
            QString price(obj.value("ProductPrice").toString());
            QString quantity(obj.value("ProductQuantity").toString());
          //  QString YoutubeVideoLink(obj.value("YoutubeVideoLink").toString());
            QString subcategoryname(obj.value("VenderCity").toString());
            QString ShippingChargeInInr(obj.value("ShippingChargeInInr").toString());
            QString ProductRegistrationCode(obj.value("ProductRegistrationCode").toString());
            QString categoryname(obj.value("CategoryName").toString());
//            QString ReEmail(obj.value("ReEnterEmailAddress").toString());
//            QString Invoice(obj.value("InvoicePrefix").toString());
            QString AdittionalIfoXml =  obj["AdditionalInfoXml"].toString();
            //qDebug()<<"Adittional"<<AdittionalIfoXml;
            PCompanyId =companyId;
            ProdID=productId;
     QDomDocument doc;
       doc.setContent(AdittionalIfoXml);

    // Get the root element
      QDomElement root = doc.documentElement();

    // Extract data from specific elements
        QString productImageTwoUrl = root.firstChildElement("ProductImageTwoUrl").text();
        QString productThumbnailTwoUrl = root.firstChildElement("ProductThmnailTwoUrl").text();
        QString productImageThreeUrl = root.firstChildElement("ProductImageThreeUrl").text();
        QString productThumbnailThreeUrl = root.firstChildElement("ProductThmnailThreeUrl").text();
        QString productPriceInInr = root.firstChildElement("ProductPriceInInr").text();
        QString shippingChargeInInr = root.firstChildElement("ShippingChargeInInr").text();
        QString taxName = root.firstChildElement("TaxName").text();
        QString taxPercentage = root.firstChildElement("TaxPercentage").text();
        QString includeTax = root.firstChildElement("IncludeTax").text();
        QString productRegistrationCode = root.firstChildElement("productRegistrationCode").text();
         QString YoutubeLink = root.firstChildElement("YoutubeVideoLink").text();
           // qDebug()<<"Adittional"<<productImageTwoUrl;




            ui->comboBoxCo1->setCurrentText(VenderCompanyName);
            ui->lineEditPRICE_USSD->setText(price);
            ui->textEditDESC1->setText(desc1);
            ui->textEditDESC2->setText(desc2);
            ui->lineEditQTY->setText(quantity);
            ui->lineEditProductName->setText(prodTitle);
            ui->lineEditProSubName->setText(Subtitle);
            ui->comboBoxSubCat->setCurrentText(subcategoryname);
            ui->comboBoxCat->setCurrentText(categoryname);
            ui->comboBoxItemSpec ->setCurrentText(spec);
             ui->lineEditPRICE_INR->setText(productPriceInInr);
            //ui->lineEditSHIP_INR->setText(Pincode);
            ui->lineEditVedio->setText(YoutubeLink);
            ui->lineEditRegCode->setText(productRegistrationCode);
            ui->lineEditSHIP_INR->setText(shippingChargeInInr);
            ui->lineEdit_TaxName->setText(taxName);
            ui->lineEdit_TaxPercentage->setText(taxPercentage);


        }
}


void AUDProductsDlg::on_checkBoxTax_clicked(bool checked)
{
        if(checked == true){
            ui->lineEdit_TaxName->show();
            ui->lineEdit_TaxPercentage->show();
            GIncludetax = true;

            qDebug()<<"include tax"<<GIncludetax;

        }else{
            ui->lineEdit_TaxName->hide();
            ui->lineEdit_TaxPercentage->hide();
            GIncludetax = false;

             qDebug()<<"include tax"<<GIncludetax;
        }
}


void AUDProductsDlg::on_pushButton_clicked() // For Browse Image  and Display image in the text label
{
        QString filePath = QFileDialog::getOpenFileName(this, "Open Image", "", "Images (*.png *.jpg *.jpeg *.bmp)");
        if (!filePath.isEmpty())
        {
             QPixmap pixmap(filePath);
             if (!pixmap.isNull())
             {
            // Set the selected image as the pixmap for the QLabel
             ui->label_IMG1->setPixmap(pixmap);
             ui->label_IMG1->setScaledContents(true);  // Scale the image to fit the label
             ui->lineEditIMG1->setText(filePath);
             }
        }
}


void AUDProductsDlg::on_pushButton_IMG2_clicked()
{
        QString filePath = QFileDialog::getOpenFileName(this, "Open Image", "", "Images (*.png *.jpg *.jpeg *.bmp)");
        if (!filePath.isEmpty())
        {
             QPixmap pixmap(filePath);
             if (!pixmap.isNull())
             {
             // Set the selected image as the pixmap for the QLabel
             ui->label_IMG1_2->setPixmap(pixmap);
             ui->label_IMG1_2->setScaledContents(true);  // Scale the image to fit the label
             ui->lineEditIMG2->setText(filePath);
             }
        }
}


void AUDProductsDlg::on_pushButton_IMG3_clicked()
{
        QString filePath = QFileDialog::getOpenFileName(this, "Open Image", "", "Images (*.png *.jpg *.jpeg *.bmp)");
        if (!filePath.isEmpty())
        {
             QPixmap pixmap(filePath);
             if (!pixmap.isNull())
             {
             // Set the selected image as the pixmap for the QLabel
             ui->label_IMG1_3->setPixmap(pixmap);
             ui->label_IMG1_3->setScaledContents(true);  // Scale the image to fit the label
             ui->lineEditIMG3->setText(filePath);
             }
        }
}

void AUDProductsDlg::  DisplayImageOne(QString base64Data){
        // Decode the base64 data to QByteArray
        QByteArray imageData = QByteArray::fromBase64(base64Data.toUtf8());

        // Create a QPixmap from the decoded data
        QPixmap imagePixmap;
        imagePixmap.loadFromData(imageData);

        // Create a QLabel to display the image
        ui->label_IMG1->setPixmap(imagePixmap);
         ui->label_IMG1->setScaledContents(true);  // Scale the image to fit the label

}
void AUDProductsDlg::  DisplayImageTwo(QString base64Data){
         // Decode the base64 data to QByteArray
         QByteArray imageData = QByteArray::fromBase64(base64Data.toUtf8());

         // Create a QPixmap from the decoded data
         QPixmap imagePixmap;

         imagePixmap.loadFromData(imageData);
         // Create a QLabel to display the image
         ui->label_IMG1_2->setPixmap(imagePixmap);
         ui->label_IMG1_2->setScaledContents(true);  // Scale the image to fit the label

}
void AUDProductsDlg::  DisplayImageThree(QString base64Data){
         // Decode the base64 data to QByteArray
         QByteArray imageData = QByteArray::fromBase64(base64Data.toUtf8());

         // Create a QPixmap from the decoded data
         QPixmap imagePixmap;
         imagePixmap.loadFromData(imageData);

         // Create a QLabel to display the image
         ui->label_IMG1_3->setPixmap(imagePixmap);
         ui->label_IMG1_3->setScaledContents(true);  // Scale the image to fit the label

}

QString AUDProductsDlg::imageToBase64(QString &imageFilePath){
         // Load the image into a QPixmap (or QImage)
         QPixmap image(imageFilePath);

         if (image.isNull()) {
             // Handle the case where the image couldn't be loaded.
             return QString(); // Return an empty QString.
         }

         // Convert the image to a QByteArray
         QByteArray imageData;
         QBuffer buffer(&imageData);
         buffer.open(QIODevice::WriteOnly);
         image.save(&buffer, "PNG"); // Save as PNG or any desired format

         // Encode the QByteArray to base64
         QByteArray base64Data = imageData.toBase64();

         // Convert the base64 data to a QString
         QString base64String(base64Data);

         return base64String;
}
void AUDProductsDlg::ClearData(){
         ui->comboBoxCo1->setCurrentText("");
         ui->lineEditPRICE_USSD->setText("");
         ui->textEditDESC1->setText("");
         ui->textEditDESC2->setText("");
         ui->lineEditQTY->setText("");
         ui->lineEditProductName->setText("");
         ui->lineEditProSubName->setText("");
         ui->comboBoxSubCat->setCurrentText("");
         ui->comboBoxCat->setCurrentText("");
         ui->comboBoxItemSpec ->setCurrentText("");
         ui->lineEditPRICE_INR->setText("");
         //ui->lineEditSHIP_INR->setText(Pincode);
         ui->lineEditVedio->setText("");
         ui->lineEditRegCode->setText("");
         ui->lineEditSHIP_INR->setText("");
         ui->lineEdit_TaxName->setText("");
         ui->lineEdit_TaxPercentage->setText("");
          QPixmap emptyPixmap;
          ui->label_IMG1->setPixmap(emptyPixmap);
          ui->label_IMG1_2->setPixmap(emptyPixmap);
          ui->label_IMG1_3->setPixmap(emptyPixmap);
          ui->lineEditIMG1->setText("");
          ui->lineEditIMG2->setText("");
          ui->lineEditIMG3->setText("");
}
