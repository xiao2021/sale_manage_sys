#ifndef SALES_ADD_ORDER_H
#define SALES_ADD_ORDER_H

#include <QWidget>
#include<mainwindow.h>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
namespace Ui {
class sales_add_order;
}

class sales_add_order : public QWidget
{
    Q_OBJECT

public:
    explicit sales_add_order(QWidget *parent = nullptr);
    ~sales_add_order();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_update_order_pushb_clicked();

    void on_add_order_pushb_clicked();

    void on_delete_order_pushb_clicked();

    void on_search_order_pushb_clicked();

    void on_return_menu_clicked();

private:
    Ui::sales_add_order *ui;
    QSqlDatabase db;
    QSqlQuery *qquery;
    QSqlQueryModel *qmodel;
};

#endif // SALES_ADD_ORDER_H
