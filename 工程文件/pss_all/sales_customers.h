#ifndef SALES_CUSTOMERS_H
#define SALES_CUSTOMERS_H

#include <QWidget>
#include<mainwindow.h>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
namespace Ui {
class sales_customers;
}

class sales_customers : public QWidget
{
    Q_OBJECT

public:
    explicit sales_customers(QWidget *parent = nullptr);
    ~sales_customers();

private slots:
    void on_update_customer_info_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_delete_customer_clicked();

    void on_add_customer_clicked();

    void on_search_customer_clicked();

    void on_return_menu_clicked();

private:
    Ui::sales_customers *ui;
    QSqlDatabase db;
    QSqlQuery *qquery;
    QSqlQueryModel *qmodel;
};

#endif // SALES_CUSTOMERS_H
