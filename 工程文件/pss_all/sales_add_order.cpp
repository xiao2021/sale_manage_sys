#include "sales_add_order.h"
#include "ui_sales_add_order.h"
#include"sales_manager.h"
sales_add_order::sales_add_order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sales_add_order)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("mylocal");         // 服务器名称
    db.setDatabaseName("my_sql");       // 数据源名称
    db.setUserName("sa");               // 用户名
    db.setPassword("020119");
    db.open();
    qquery = new QSqlQuery();
    qmodel = new QSqlQueryModel();
    qmodel->setQuery("select * from sales_orders");
    ui->tableView->setModel(qmodel);
}

sales_add_order::~sales_add_order()
{
    delete ui;
}

void sales_add_order::on_tableView_clicked(const QModelIndex &index)
{
    QString id = index.siblingAtColumn(0).data().toString();
   QString ornum = index.siblingAtColumn(1).data().toString();
   QString produsid = index.siblingAtColumn(2).data().toString();
   QString salesshopid = index.siblingAtColumn(3).data().toString();
   QString custmoerid   = index.siblingAtColumn(4).data().toString();
//   QString complet = index.siblingAtColumn(5).data().toString();
   QString paymode = index.siblingAtColumn(6).data().toString();
   QString totalprice = index.siblingAtColumn(7).data().toString();
   QString ordertime = index.siblingAtColumn(8).data().toString();
    ui->order_num_edit->setText(ornum);
    ui->order_index->setText(id);
    ui->products_num_edit->setText(produsid);
    ui->customer_num_edit->setText(custmoerid);
    ui->total_price_edit->setText(totalprice);
    ui->pay_mode_edit->setText(paymode);
    ui->sales_spot_edit->setText(salesshopid);
    ui->place_ordertime_edit->setText(ordertime);
}

void sales_add_order::on_update_order_pushb_clicked()
{
           QString ornum =ui->order_num_edit->text();
           int ornum_int=ornum.toInt();
          QString id = ui->order_index->text();
          int id_int = id.toInt();
           QString produsid =ui->products_num_edit->text();
           int produ_int = produsid.toInt();
            QString custmoerid =ui->customer_num_edit->text();
            int custm_int = custmoerid.toInt();
          QString totalprice = ui->total_price_edit->text();
          int totalpr_int = totalprice.toInt();
          QString paymode = ui->pay_mode_edit->text();
           QString salesshopid =ui->sales_spot_edit->text();
           int salessho_int=salesshopid.toInt();
            QString ordertime=ui->place_ordertime_edit->text();
            qquery->prepare("update sales_orders set order_num=?,products_id=?,sales_shops_id=?,customers_id=?,pay_mode=?,total_price=?,order_time=? where id = ?");
            QVariantList on;
            on<<ornum_int;
            QVariantList pi;
            pi<<produ_int;
            QVariantList ssi;
            ssi<<salessho_int;
            QVariantList ci;
            ci<<custm_int;
            QVariantList pm;
            pm<<paymode;
            QVariantList tp;
            tp<<totalpr_int;
            QVariantList ot;
            ot<<ordertime;
            QVariantList for_id;
            for_id<<id_int;
            qquery->addBindValue(on);
            qquery->addBindValue(pi);
            qquery->addBindValue(ssi);
            qquery->addBindValue(ci);
            qquery->addBindValue(pm);
            qquery->addBindValue(tp);
            qquery->addBindValue(ot);
            qquery->addBindValue(for_id);
            qquery->execBatch();
            qmodel->setQuery("select * from sales_orders");
}

void sales_add_order::on_add_order_pushb_clicked()
{
    QString ornum =ui->order_num_edit->text();
    int ornum_int=ornum.toInt();
//   QString id = ui->order_index->text();
//   int id_int = id.toInt();
    QString produsid =ui->products_num_edit->text();
    int produ_int = produsid.toInt();
     QString custmoerid =ui->customer_num_edit->text();
     int custm_int = custmoerid.toInt();
   QString totalprice = ui->total_price_edit->text();
   int totalpr_int = totalprice.toInt();
   QString paymode = ui->pay_mode_edit->text();
    QString salesshopid =ui->sales_spot_edit->text();
    int salessho_int=salesshopid.toInt();
     QString ordertime=ui->place_ordertime_edit->text();
     qquery->prepare("insert into sales_orders(order_num,products_id,sales_shops_id,customers_id,completion,pay_mode,total_price,order_time) values(?,?,?,?,?,?,?,?)");
     QVariantList on;
     on<<ornum_int;
     QVariantList pi;
     pi<<produ_int;
     QVariantList ssi;
     ssi<<salessho_int;
     QVariantList ci;
     ci<<custm_int;
     QVariantList completion_st;
     completion_st<<"unfinshed";
     QVariantList pm;
     pm<<paymode;
     QVariantList tp;
     tp<<totalpr_int;
     QVariantList ot;
     ot<<ordertime;
     qquery->addBindValue(on);
     qquery->addBindValue(pi);
     qquery->addBindValue(ssi);
     qquery->addBindValue(ci);
     qquery->addBindValue(completion_st);
     qquery->addBindValue(pm);
     qquery->addBindValue(tp);
     qquery->addBindValue(ot);
     qquery->execBatch();
     qmodel->setQuery("select * from sales_orders");
}

void sales_add_order::on_delete_order_pushb_clicked()
{
    QString id = ui->order_index->text();
    int id_int = id.toInt();
    qquery->prepare("delete from sales_orders where id=?");
    QVariantList id_order;
    id_order<<id_int;
    qquery->addBindValue(id_order);
    qquery->execBatch();
    qmodel->setQuery("select * from sales_orders");
}

void sales_add_order::on_search_order_pushb_clicked()
{
    QString oder_num=ui->order_num_edit->text();
  //  int od_num=oder_num.toInt();
    qmodel->setQuery("select * from sales_orders where order_num = "+oder_num);
}

void sales_add_order::on_return_menu_clicked()
{
    db.close();
    sales_manager *sm=new sales_manager;
    this->hide();
    sm->show();
}
