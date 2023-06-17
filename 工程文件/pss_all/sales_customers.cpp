#include "sales_customers.h"
#include "ui_sales_customers.h"
#include"sales_manager.h"
#include "QDebug"
#include "QSqlError"
sales_customers::sales_customers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sales_customers)
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
    qmodel->setQuery("select * from customers");
    ui->tableView->setModel(qmodel);

}

sales_customers::~sales_customers()
{
    delete ui;
}

void sales_customers::on_update_customer_info_clicked()
{
    QString id = ui->label_index->text();
    QString name = ui->customer_name_edit->text();
    QString phone = ui->customer_phone_edit->text();
    QString province = ui->customer_province_edit->text();
    QString city   = ui->customer_city_edit->text();
    QString distinct = ui->customer_distinct_edit->text();
    QString details_addr = ui->customer_detail_addr_edit->text();
    QString sex = ui->customer_sex_edit->text();
    QString email = ui->customer_email_edit->text();
    QString psotcode = ui->customer_postcode_edit->text();
    QString company = ui->customer_company_edit->text();
    QString birthday = ui->customer_birthday_edit->text();
    QString enter_day = ui->customer_enter_day_edit->text();
    int id_ = id.toInt();
    qDebug()<<id;
    QString cus_name = ui->customer_name_edit->text();
    qDebug()<<cus_name;
        qquery->prepare("update customers set name=?,phone=?,sex=?,province=?,city=?,district=?,detail_addr=?,email=?,postcode=?,company=?,birth_date=?,enter_date=? where id = ?") ;
        QVariantList strdsa;
        QVariantList for_id;
        QVariantList for_phone;
        for_phone<<phone;
        QVariantList for_provin;
        for_provin<<province;
        QVariantList  for_city;
        for_city<<city;
        QVariantList for_distin;
        for_distin<<distinct;
        QVariantList for_datails;
        for_datails<<details_addr;
        QVariantList for_sex;
        for_sex<<sex;
        QVariantList for_email;
        for_email<<email;
        QVariantList for_post;
        for_post<<psotcode;
        QVariantList for_company;
        for_company<<company;
        QVariantList for_birth;
        for_birth<<birthday;
        QVariantList for_enter;
        for_enter<<enter_day;
        strdsa<<cus_name;
        for_id<<id_;
        qquery->addBindValue(strdsa);
        qquery->addBindValue(for_phone);
        qquery->addBindValue(for_sex);
        qquery->addBindValue(for_provin);
        qquery->addBindValue(for_city);
        qquery->addBindValue(for_distin);
        qquery->addBindValue(for_datails);
        qquery->addBindValue(for_email);
        qquery->addBindValue(for_post);
        qquery->addBindValue(for_company);
        qquery->addBindValue(for_birth);
        qquery->addBindValue(for_enter);
        qquery->addBindValue(for_id);
        qquery->execBatch();
        qmodel->setQuery("select * from customers");
}

void sales_customers::on_tableView_clicked(const QModelIndex &index)
{
     QString id = index.siblingAtColumn(0).data().toString();
    QString name = index.siblingAtColumn(1).data().toString();
    QString phone = index.siblingAtColumn(2).data().toString();
    QString province = index.siblingAtColumn(4).data().toString();
    QString city   = index.siblingAtColumn(5).data().toString();
    QString distinct = index.siblingAtColumn(6).data().toString();
    QString details_addr = index.siblingAtColumn(7).data().toString();
    QString sex = index.siblingAtColumn(3).data().toString();
    QString email = index.siblingAtColumn(8).data().toString();
    QString psotcode = index.siblingAtColumn(9).data().toString();
    QString company = index.siblingAtColumn(10).data().toString();
    QString birthday = index.siblingAtColumn(11).data().toString();
    QString enter_day = index.siblingAtColumn(12).data().toString();
    ui->customer_name_edit->setText(name);
    ui->customer_phone_edit->setText(phone);
    ui->customer_province_edit->setText(province);
    ui->customer_city_edit->setText(city);
    ui->customer_distinct_edit->setText(distinct);
    ui->customer_detail_addr_edit->setText(details_addr);
    ui->customer_sex_edit->setText(sex);
    ui->customer_email_edit->setText(email);
    ui->customer_postcode_edit->setText(psotcode);
    ui->customer_company_edit->setText(company);
    ui->customer_birthday_edit->setText(birthday);
    ui->customer_enter_day_edit->setText(enter_day);
    ui->label_index->setText(id);
}

void sales_customers::on_pushButton_2_clicked()
{

}

void sales_customers::on_pushButton_clicked()
{

}

void sales_customers::on_delete_customer_clicked()
{
    QString id = ui->label_index->text();
    int id_ = id.toInt();
    qquery->prepare("delete from customers where id = ?");
    QVariantList idlist;
    idlist<<id_;
    qquery->addBindValue(idlist);
    qquery->execBatch();
    qmodel->setQuery("select * from customers");
}

void sales_customers::on_add_customer_clicked()
{
    QString id = ui->label_index->text();
    QString name = ui->customer_name_edit->text();
    QString phone = ui->customer_phone_edit->text();
    QString province = ui->customer_province_edit->text();
    QString city   = ui->customer_city_edit->text();
    QString distinct = ui->customer_distinct_edit->text();
    QString details_addr = ui->customer_detail_addr_edit->text();
    QString sex = ui->customer_sex_edit->text();
    QString email = ui->customer_email_edit->text();
    QString psotcode = ui->customer_postcode_edit->text();
    QString company = ui->customer_company_edit->text();
    QString birthday = ui->customer_birthday_edit->text();
    QString enter_day = ui->customer_enter_day_edit->text();
    qquery->prepare("insert into customers values(?,?,?,?,?,?,?,?,?,?,?,?)");
    QVariantList for_name;
    QVariantList for_id;
    QVariantList for_phone;
    for_phone<<phone;
    QVariantList for_provin;
    for_provin<<province;
    QVariantList  for_city;
    for_city<<city;
    QVariantList for_distin;
    for_distin<<distinct;
    QVariantList for_datails;
    for_datails<<details_addr;
    QVariantList for_sex;
    for_sex<<sex;
    QVariantList for_email;
    for_email<<email;
    QVariantList for_post;
    for_post<<psotcode;
    QVariantList for_company;
    for_company<<company;
    QVariantList for_birth;
    for_birth<<birthday;
    QVariantList for_enter;
    for_enter<<enter_day;
    for_name<<name;
    qquery->addBindValue(for_name);
    qquery->addBindValue(for_phone);
    qquery->addBindValue(for_sex);
    qquery->addBindValue(for_provin);
    qquery->addBindValue(for_city);
    qquery->addBindValue(for_distin);
    qquery->addBindValue(for_datails);
    qquery->addBindValue(for_email);
    qquery->addBindValue(for_post);
    qquery->addBindValue(for_company);
    qquery->addBindValue(for_birth);
    qquery->addBindValue(for_enter);
    qquery->execBatch();
    qmodel->setQuery("select * from customers");
}

void sales_customers::on_search_customer_clicked()
{
    QString name = ui->customer_name_edit->text();
    qmodel->setQuery("select * from customers where name Like '%"+name+"%'");

}

void sales_customers::on_return_menu_clicked()
{
    db.close();
    sales_manager *sm=new sales_manager;
    this->hide();
    sm->show();
}
