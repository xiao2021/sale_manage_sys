#include "new_delivery.h"
#include "ui_new_delivery.h"
#include"sales_manager.h"
#include "QDebug"
#include "QSqlError"
new_delivery::new_delivery(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::new_delivery)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("mylocal");         // 服务器名称
    db.setDatabaseName("my_sql");       // 数据源名称
    db.setUserName("sa");               // 用户名
    db.setPassword("020119");
    db.open();
    bool ok = db.open();
       if(ok)
       {
           qDebug()<<"DataBase open sucess!";
       }
       else {
           qDebug()<<db.lastError();
       }
    qquery = new QSqlQuery();
    qmodel = new QSqlQueryModel();
    qmodel->setQuery("select * from sales_orders");
    ui->tableView->setModel(qmodel);
}

new_delivery::~new_delivery()
{
    delete ui;
}

void new_delivery::on_return_to_menu_clicked()
{
    sales_manager *sa_manager=new sales_manager;
    this->hide();
    sa_manager->show();
}

void new_delivery::on_pushButton_clicked()
{
        qmodel->setQuery("select * from sales_orders");
}

void new_delivery::on_pushButton_2_clicked()
{
     qmodel->setQuery("select * from sales_orders where completion='finished'");
}

void new_delivery::on_pushButton_4_clicked()
{
    QString id = ui->label_select->text();
    qquery->exec("update sales_orders set completion='finished',order_finishtime=GETDATE() where id = "+id);
     qmodel->setQuery("select * from sales_orders");
}

void new_delivery::on_pushButton_3_clicked()
{
    qmodel->setQuery("select * from sales_orders where completion='unfinished'");
}

void new_delivery::on_tableView_clicked(const QModelIndex &index)
{
    QString id= index.siblingAtColumn(0).data().toString();
    ui->label_select->setText(id);
}

void new_delivery::on_pushButton_5_clicked()
{
    QString id = ui->label_select->text();
    qquery->exec("update sales_orders set completion='unfinished',order_finishtime='2030-1-1' where id = "+id);
     qmodel->setQuery("select * from sales_orders");
}
