#include "sales_manager.h"
#include "ui_sales_manager.h"
#include"sales_customers.h"
#include"sales_add_order.h"
#include"new_delivery.h"
sales_manager::sales_manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sales_manager)
{
    ui->setupUi(this);
}

sales_manager::~sales_manager()
{
    delete ui;
}

void sales_manager::on_add_customer_info_clicked()
{
    this->hide();
    sales_customers *sa_customer_ui = new sales_customers;
    sa_customer_ui->show();
}

void sales_manager::on_add_order_pushbutton_clicked()
{
    this->hide();
    sales_add_order *sao=new sales_add_order;
    sao->show();
}

void sales_manager::on_delivery_order_pushbutton_clicked()
{
    new_delivery *new_deli=new new_delivery;
    this->hide();
    new_deli->show();
}
