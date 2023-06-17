#ifndef NEW_DELIVERY_H
#define NEW_DELIVERY_H

#include <QWidget>
#include"mainwindow.h"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
namespace Ui {
class new_delivery;
}

class new_delivery : public QWidget
{
    Q_OBJECT

public:
    explicit new_delivery(QWidget *parent = nullptr);
    ~new_delivery();

private slots:
    void on_return_to_menu_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

private:
    Ui::new_delivery *ui;
    QSqlDatabase db;
     QSqlQuery *qquery;
    QSqlQueryModel *qmodel;
};

#endif // NEW_DELIVERY_H
