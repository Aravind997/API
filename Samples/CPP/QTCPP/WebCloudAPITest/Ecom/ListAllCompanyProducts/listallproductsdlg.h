#ifndef LISTALLPRODUCTSDLG_H
#define LISTALLPRODUCTSDLG_H

#include <QDialog>
#include <QJsonArray>
#include "Services/ecomservice.h"
#include <QJsonObject>
namespace Ui {
class ListAllProductsDlg;
}

class ListAllProductsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ListAllProductsDlg(QWidget *parent = nullptr);
    ~ListAllProductsDlg();
    QString StringifyJson(QJsonDocument jsonDoc);
    QString GCompanyId;
    QString GCategoryId;
    QString GSubCategoryId;
    int catNo;
    void ShowAllCompanies();
    void ShowProductCategory();
    void ShowSubCategory();
    void  ShowProducts();

private:
    Ui::ListAllProductsDlg *ui;
      QJsonArray m_JsonArray;
     EcomService* m_ecomService;

protected:
 //void showEvent(QShowEvent* event);

private slots:
      void on_comboBoxCo_currentIndexChanged(int index);
      void on_comboBoxProCat_currentIndexChanged(int index);
      void on_comboBox_SubCategory_currentIndexChanged(int index);
};

#endif // LISTALLPRODUCTSDLG_H
