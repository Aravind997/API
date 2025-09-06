#ifndef AUDCOMPANYDETIALSDLG_H
#define AUDCOMPANYDETIALSDLG_H

#include <QDialog>
#include <QJsonArray>
#include "Services/ecomservice.h"
#include <QJsonObject>
#include<QStandardItemModel>
namespace Ui {
class AUDCompanyDetialsDlg;
}

class AUDCompanyDetialsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AUDCompanyDetialsDlg(QWidget *parent = nullptr);
    ~AUDCompanyDetialsDlg();
    void ShowTable();
    void AddItemToTable();
    void ClearData();
private slots:
    void on_pushButton_Save_clicked();



    void on_pushButton_Edit_clicked();

    void on_pushButton_Delete_clicked();

private:
    Ui::AUDCompanyDetialsDlg *ui;
    QJsonArray m_JsonArray;
    EcomService* m_ecomService;
    QStandardItemModel*CompanyModel;
    QString GcompanyId;
};

#endif // AUDCOMPANYDETIALSDLG_H
