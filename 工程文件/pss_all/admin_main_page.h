#ifndef ADMIN_MAIN_PAGE_H
#define ADMIN_MAIN_PAGE_H

#include <QMainWindow>
#include <QLabel>
#include <QSqlQueryModel>
namespace Ui {
class Admin_main_page;
}

class Admin_main_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin_main_page(QWidget *parent = 0);
    ~Admin_main_page();
    void switchPage();
    void select_customers_info();
    void select_sales_shops_info();
    void select_orders_info();
    void select_orders_info_new();
    void select_workers_info();
    void add_orders_info();
    void select_workshops_info();


private slots:
    void on_pushButton_query_products_clicked();

    void on_table_customers_info_cellChanged(int row, int column);

    void on_table_customers_info_cellDoubleClicked(int row, int column);

    void on_table_workers_info_cellDoubleClicked(int row, int column);

    void on_table_workers_info_cellChanged(int row, int column);

    void on_table_workers_info_cellClicked(int row, int column);

    void statusBar_update();

    void on_pushButton_add_clicked();

    void disconnect_db();

    void reconnect_db();


    void on_pushButton_query_products_all_clicked();

    void on_pushButton_delete_clicked();


    void on_tableView_products_info_clicked(const QModelIndex &index);

private:
    Ui::Admin_main_page *ui;
    QLabel *datetime_label;
    QSqlQueryModel * query_model;
};

#endif // ADMIN_MAIN_PAGE_H
