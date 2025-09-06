#ifndef GETALLCOMPANIESDIALOG_H
#define GETALLCOMPANIESDIALOG_H

#include <QDialog>
#include <QJsonArray>
namespace Ui {
class GetAllCompaniesDialog;
}

class GetAllCompaniesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GetAllCompaniesDialog(QWidget *parent = nullptr);
    ~GetAllCompaniesDialog();

private:
    Ui::GetAllCompaniesDialog *ui;
     QJsonArray jArray;
protected:
   void showEvent(QShowEvent* event);
private slots:
    void on_comboBoxSelectCo_currentIndexChanged(int index);
};

#endif // GETALLCOMPANIESDIALOG_H
