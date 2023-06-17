#include "admin_main_page.h"
#include "ui_admin_main_page.h"
#include "QSqlQuery"
#include <QDebug>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QSqlError>
#include <QDateTime>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQueryModel>
bool enable_on_table_customers_info_cellChanged_flag=false;
bool enable_on_table_workers_info_cellChanged_flag=false;

QStringList on_table_workers_info_cellClicked_list;
QString id_string;
Admin_main_page::Admin_main_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin_main_page)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    connect(ui->action_customers_info,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_customers_modify,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_sales_shops_info,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_sales_shops_modify,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_workshops_info,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_workshops_modify,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_workers_info,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_workers_modify,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_products_info,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->action_products_modify,&QAction::triggered,this,&Admin_main_page::switchPage);
    connect(ui->actionDisconnect,&QAction::triggered,this,&Admin_main_page::disconnect_db);
    connect(ui->actionReconnect,&QAction::triggered,this,&Admin_main_page::reconnect_db);
//    connect(ui->combo_workshop_add,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(on_combo_workshop()));
//    connect(ui->combo_workshop_add,SIGNAL(),this,SLOT(on_combo_workshop()));

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(statusBar_update()));
    datetime_label = new QLabel();
    timer->start(1000);
}

Admin_main_page::~Admin_main_page()
{
    delete ui;
}

void Admin_main_page::disconnect_db()
{
    QSqlDatabase db =QSqlDatabase::database();
    if(!db.isOpen())
    {
        QMessageBox::information(this,"连接","连接已断开");
    }
    db.close();
    if(!db.isOpen())
    {
        QMessageBox::information(this,"连接","连接已断开");
    }
    ui->combo_workshop_add->clear();

}

void Admin_main_page::reconnect_db()
{
    QSqlDatabase db0 =QSqlDatabase::database();
    db0.close();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setDatabaseName("pss_sql_server");
    db.setUserName("sa");
    db.setPassword("sa123456!");

    if (db.open())
    {
        qDebug()<<"DataBase open success!";
        QMessageBox::information(this,"连接","重新连接成功");
    }
    else
    {
        qDebug()<<db.lastError();
        QMessageBox::warning(this,"连接","请检查网络和数据库连接");
    }

    select_workshops_info();

}

void Admin_main_page::switchPage()
{
    QAction *action = qobject_cast<QAction*>(sender());
    if(action==ui->action_customers_info)
    {
        ui->stackedWidget->setCurrentIndex(1);
        select_customers_info();
    }
    else if(action==ui->action_customers_modify)
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(action==ui->action_sales_shops_info)
    {
        ui->stackedWidget->setCurrentIndex(3);
        select_sales_shops_info();
    }
    else if(action==ui->action_sales_shops_modify)
    {
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(action==ui->action_workshops_info)
    {
        ui->stackedWidget->setCurrentIndex(5);
    }
    else if(action==ui->action_workshops_modify)
    {
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(action==ui->action_workers_info)
    {
        ui->stackedWidget->setCurrentIndex(7);
        select_workers_info();
    }
    else if(action==ui->action_workers_modify)
    {
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(action==ui->action_products_info)
    {
        ui->stackedWidget->setCurrentIndex(9);
        select_workshops_info();

    }
    else if(action==ui->action_products_modify)
    {
        ui->stackedWidget->setCurrentIndex(10);
    }
}

void Admin_main_page::select_customers_info()
{
    QSqlQuery query;
    QVariantList varient_list;


//    ui->table_customers_info->setRowCount(0);
//    ui->table_customers_info->insertRow(0);
//    ui->table_customers_info->setHorizontalHeaderLabels(QStringList()<<"序号"<<"姓名"<<"手机号"<<"性别"<<"省份"<<"城市"<<"区县"<<"具体地址"<<"电子邮箱"<<"邮编"<<"公司"<<"生日"<<"录入时间");
//    query.exec("INSERT INTO customers VALUES()");
    query.exec("SELECT * FROM customers");
    while(query.next())
    {   QStringList string_list;
        qDebug()<<query.value(0);
        string_list<<query.value(0).toString()<<query.value(1).toString()<<query.value(2).toString()
                  <<query.value(3).toString()<<query.value(4).toString()<<query.value(5).toString()
                 <<query.value(6).toString()<<query.value(7).toString()<<query.value(8).toString()
                <<query.value(9).toString()<<query.value(10).toString()<<query.value(11).toString()
               <<query.value(12).toString();
        varient_list.append(string_list);
    }
    for (int i=0;i<varient_list.size();i++)
    {
        qDebug()<<varient_list[i].toStringList();
        ui->table_customers_info->insertRow(i);
        for (int j=0;j<varient_list[0].toStringList().size();j++)
        {
            QTableWidgetItem *item=new QTableWidgetItem();
            item->setText(varient_list[i].toStringList().at(j));
            ui->table_customers_info->setItem(i,j,item);
        }
    }
}

void Admin_main_page::select_sales_shops_info()
{
    QStandardItemModel * std_item_model = new QStandardItemModel(this);
    int i = 0;
    std_item_model->setHorizontalHeaderLabels(QStringList()<<"序号"<<"名称"<<"省份"<<"城市"<<"区县"<<"地址");
    QSqlQuery query;
    query.exec("SELECT * FROM sales_shops");
    while(query.next())
    {
        for(int j=0;j<6;j++)
        {
            std_item_model->setItem(i,j,new QStandardItem(query.value(j).toString()));
        }
        ui->tableView_sales_shops_info->setModel(std_item_model);
        i++;
    }
}

void Admin_main_page::select_orders_info()
{
    QSqlQuery query;
    QStandardItemModel * std_item_model = new QStandardItemModel(this);
    std_item_model->clear();
    ui->tableView_products_info->setModel(std_item_model);
    int i = 0;
    std_item_model->setHorizontalHeaderLabels(QStringList()<<"序号"<<"名称"<<"价格"<<"种类"<<"材料"<<"风格"<<"质量"<<"体积");

    QVariantList nameList;
    QVariantList typeList;
    QVariantList materialList;
    QVariantList styleList;
    QVariantList minWeightList;
    QVariantList maxWeightList;
    QVariantList minVolumeList;
    QVariantList maxVolumeList;
    QVariantList minPriceList;
    QVariantList maxPriceList;

    QString name= ui->lineEdit_products_name->text();
    QString type= ui->combo_products_type->currentText();
    QString material= ui->combo_products_material->currentText();
    QString style= ui->combo_products_style->currentText();

    QString minWeight= ui->lineEdit_minWeight->text();
    QString maxWeight=  ui->lineEdit_maxWeight->text();
    QString minVolume= ui->lineEdit_minVolume->text();
    QString maxVolume= ui->lineEdit_maxVolume->text();
    QString minPrice= ui->lineEdit_products_minPrice->text();
    QString maxPrice= ui->lineEdit_products_maxPrice->text();

    if (minWeight=="")
    {
        minWeight+="0";
    }
    if(maxWeight=="")
    {
        maxWeight+="999999999";
    }
    if (minVolume=="")
    {
        minVolume+="0";
    }
    if(maxVolume=="")
    {
        maxVolume+="999999999";
    }
    if (minPrice=="")
    {
        minPrice+="0";
    }
    if(maxPrice=="")
    {
        maxPrice+="999999999";
    }
    nameList<<name;
    typeList<<type;
    materialList<<material;
    styleList<<style;
    minWeightList<<minWeight;
    maxWeightList<<maxWeight;
    minVolumeList<<minVolume;
    maxVolumeList<<maxVolume;
    minPriceList<<minPrice;
    maxPriceList<<maxPrice;

    if(name=="")
    {
        query.prepare("SELECT [id],[name],[price],[type],[material],[style],[weight],[volume] FROM products"
                      " WHERE type=:type AND material=:material AND style=:style "
                      "AND weight>=:minWeight AND weight<=:maxWeight AND volume>=:minVolume AND volume<=:maxVolume "
                      "AND price>=:minPrice AND price<=:maxPrice"
                     );
    }
    else
    {   qDebug()<<"WTF";
        query.prepare("SELECT [id],[name],[price],[type],[material],[style],[weight],[volume] FROM products"
                      " WHERE name=:name AND type=:type AND material=:material AND style=:style "
                      "AND weight>=:minWeight AND weight<=:maxWeight AND volume>=:minVolume AND volume<=:maxVolume "
                      "AND price>=:minPrice AND price<=:maxPrice"
                     );
    }


    query.bindValue(":name", nameList);
    query.bindValue(":type", typeList);
    query.bindValue(":material", materialList);
    query.bindValue(":style", styleList);
    query.bindValue(":minWeight", minWeightList);
    query.bindValue(":maxWeight", maxWeightList);
    query.bindValue(":minVolume", minVolumeList);
    query.bindValue(":maxVolume", maxVolumeList);
    query.bindValue(":minPrice", minPriceList);
    query.bindValue(":maxPrice", maxPriceList);

    qDebug()<<minWeightList<<" "<<maxWeightList<<" "<<minVolumeList<<" "<<maxVolumeList<<" "<<minPriceList<<" "<<maxPriceList;

    query.execBatch();

    while(query.next())
    {
        for(int j=0;j<8;j++)
        {
            std_item_model->setItem(i,j,new QStandardItem(query.value(j).toString()));
        }
        ui->tableView_products_info->setModel(std_item_model);
        i++;
    }
}

void Admin_main_page::select_orders_info_new()
{
    QSqlQuery query;
    QStandardItemModel * std_item_model = new QStandardItemModel(this);
    std_item_model->clear();
    ui->tableView_products_info->setModel(std_item_model);
    int i = 0;
    std_item_model->setHorizontalHeaderLabels(QStringList()<<"序号"<<"名称"<<"价格"<<"种类"<<"材料"<<"风格"<<"质量"<<"体积");

    QString name= ui->lineEdit_products_name->text();
    QString type= ui->combo_products_type->currentText();
    QString material= ui->combo_products_material->currentText();
    QString style= ui->combo_products_style->currentText();

    QString minWeight= ui->lineEdit_minWeight->text();
    QString maxWeight=  ui->lineEdit_maxWeight->text();
    QString minVolume= ui->lineEdit_minVolume->text();
    QString maxVolume= ui->lineEdit_maxVolume->text();
    QString minPrice= ui->lineEdit_products_minPrice->text();
    QString maxPrice= ui->lineEdit_products_maxPrice->text();

    if (minWeight=="")
    {
        minWeight+="0";
    }
    if(maxWeight=="")
    {
        maxWeight+="999999999";
    }
    if (minVolume=="")
    {
        minVolume+="0";
    }
    if(maxVolume=="")
    {
        maxVolume+="999999999";
    }
    if (minPrice=="")
    {
        minPrice+="0";
    }
    if(maxPrice=="")
    {
        maxPrice+="999999999";
    }


    if(name=="")
    {
        query.exec("SELECT [id],[name],[price],[type],[material],[style],[weight],[volume] FROM products"
                      " WHERE type='"+type+"' AND material='"+material+"' AND style='"+style+"' "
                      "AND weight>="+minWeight+" AND weight<="+maxWeight+" AND volume>="+minVolume+" AND volume<="+maxVolume+" "
                      "AND price>="+minPrice+" AND price<="+maxPrice);
    }
    else
    {
        query.exec("SELECT [id],[name],[price],[type],[material],[style],[weight],[volume] FROM products"
                      " WHERE name='"+name+"' AND type='"+type+"' AND material='"+material+"' AND style='"+style+"' "
                      "AND weight>="+minWeight+" AND weight<="+maxWeight+" AND volume>="+minVolume+" AND volume<="+maxVolume+" "
                      "AND price>="+minPrice+" AND price<="+maxPrice);
    }


    while(query.next())
    {
        for(int j=0;j<8;j++)
        {
            std_item_model->setItem(i,j,new QStandardItem(query.value(j).toString()));
        }
        ui->tableView_products_info->setModel(std_item_model);
        i++;
    }
}

void Admin_main_page::add_orders_info()
{
    QSqlQuery query;
    query.prepare("INSERT INTO products VALUES (:name,:price,:type,:workshops_id,:material,:style,:weight,:volume)");
    QVariantList nameList;
    QVariantList priceList;
    QVariantList typeList;
    QVariantList workshopList;
    QVariantList materialList;
    QVariantList styleList;
    QVariantList weightList;
    QVariantList volumeList;
    nameList<<ui->lineEdit_products_name_add->text();
    priceList<<ui->lineEdit_Price_add->text();
    typeList<<ui->combo_products_type_add->currentText();
    workshopList<<ui->combo_workshop_add->currentText();
    materialList<<ui->combo_products_material_add->currentText();
    styleList<<ui->combo_products_style_add->currentText();
    weightList<<ui->lineEdit_weight_add->text();
    volumeList<<ui->lineEdit_Volume_add->text();
    query.bindValue(":name",nameList);
    query.bindValue(":price",priceList);
    query.bindValue(":type",typeList);
    query.bindValue(":workshops_id",workshopList);
    query.bindValue(":material",materialList);
    query.bindValue(":style",styleList);
    query.bindValue(":weight",weightList);
    query.bindValue(":volume",volumeList);
    if(query.execBatch())
    {
        QMessageBox::information(this,"添加","添加产品数据成功");
    }
    else
    {
        QMessageBox::warning(this,"添加","添加产品数据失败，请检查数据正确性");
    }

}

void Admin_main_page::on_pushButton_query_products_clicked()
{
//    select_orders_info();
    select_orders_info_new();
}

void Admin_main_page::on_table_customers_info_cellChanged(int row, int column)
{
    if(enable_on_table_customers_info_cellChanged_flag)
    {
        QSqlQuery query;
        QVariantList idList;
        QVariantList nameList;
        QVariantList phoneList;
        QVariantList sexList;
        QVariantList provinceList;
        QVariantList cityList;
        QVariantList districtList;
        QVariantList addrList;
        QVariantList emailList;
        QVariantList postcodeList;
        QVariantList companyList;
        QVariantList birthList;
        QVariantList enterList;

        idList<<ui->table_customers_info->item(row,0)->text();
        nameList<<ui->table_customers_info->item(row,1)->text();
        phoneList<<ui->table_customers_info->item(row,2)->text();
        sexList<<ui->table_customers_info->item(row,3)->text();
        provinceList<<ui->table_customers_info->item(row,4)->text();
        cityList<<ui->table_customers_info->item(row,5)->text();
        districtList<<ui->table_customers_info->item(row,6)->text();
        addrList<<ui->table_customers_info->item(row,7)->text();
        emailList<<ui->table_customers_info->item(row,8)->text();
        postcodeList<<ui->table_customers_info->item(row,9)->text();
        companyList<<ui->table_customers_info->item(row,10)->text();
        birthList<<ui->table_customers_info->item(row,11)->text();
        enterList<<ui->table_customers_info->item(row,12)->text();


        switch (column%13) {
        case 0:
            QMessageBox::information(this,"Info","禁止修改id列，操作无效");
            break;
        case 1:
            query.prepare("UPDATE customers SET name=:name WHERE id=:id");
            query.bindValue(":name",nameList);
            query.bindValue(":id",idList);
            break;
        case 2:
            query.prepare("UPDATE customers SET phone=:phone WHERE id=:id");
            query.bindValue(":phone",phoneList);
            query.bindValue(":id",idList);
            break;
        case 3:
            query.prepare("UPDATE customers SET sex=:sex WHERE id=:id");
            query.bindValue(":sex",sexList);
            query.bindValue(":id",idList);
            break;
        case 4:
            query.prepare("UPDATE customers SET province=:province WHERE id=:id");
            query.bindValue(":province",provinceList);
            query.bindValue(":id",idList);
            break;
        case 5:
            query.prepare("UPDATE customers SET city=:city WHERE id=:id");
            query.bindValue(":city",cityList);
            query.bindValue(":id",idList);
            break;
        case 6:
            query.prepare("UPDATE customers SET district=:district WHERE id=:id");
            query.bindValue(":district",districtList);
            query.bindValue(":id",idList);
            break;
        case 7:
            query.prepare("UPDATE customers SET detail_addr=:detail_addr WHERE id=:id");
            query.bindValue(":detail_addr",addrList);
            query.bindValue(":id",idList);
            break;
        case 8:
            query.prepare("UPDATE customers SET email=:email WHERE id=:id");
            query.bindValue(":email",emailList);
            query.bindValue(":id",idList);
            break;
        case 9:
            query.prepare("UPDATE customers SET postcode=:postcode WHERE id=:id");
            query.bindValue(":postcode",postcodeList);
            query.bindValue(":id",idList);
            break;
        case 10:
            query.prepare("UPDATE customers SET company=:company WHERE id=:id");
            query.bindValue(":company",companyList);
            query.bindValue(":id",idList);
            break;
        case 11:
            query.prepare("UPDATE customers SET birth_date=:birth_date WHERE id=:id");
            query.bindValue(":birth_date",birthList);
            query.bindValue(":id",idList);
            break;
        case 12:
            query.prepare("UPDATE customers SET enter_date=:enter_date WHERE id=:id");
            query.bindValue(":enter_date",enterList);
            query.bindValue(":id",idList);
            break;
        default:
            break;
        }
        query.execBatch();
    }
    else
    {}

}

void Admin_main_page::on_table_customers_info_cellDoubleClicked(int row, int column)
{
    if(row==column)
    {}
    enable_on_table_customers_info_cellChanged_flag=true;
}

void Admin_main_page::select_workers_info()
{
    QSqlQuery query;
    QVariantList varient_list;

//    ui->table_workers_info->clear();
    ui->table_workers_info->setRowCount(0);

    query.exec("SELECT * FROM workers");
    while(query.next())
    {   QStringList string_list;
        qDebug()<<query.value(0);
        string_list<<query.value(0).toString()<<query.value(1).toString()<<query.value(2).toString()
                  <<query.value(3).toString()<<query.value(4).toString()<<query.value(5).toString()
                 <<query.value(6).toString()<<query.value(7).toString()<<query.value(8).toString()
                <<query.value(9).toString()<<query.value(10).toString()<<query.value(11).toString();
        varient_list.append(string_list);
    }
    for (int i=0;i<varient_list.size();i++)
    {
        qDebug()<<varient_list[i].toStringList();
        ui->table_workers_info->insertRow(i);
        for (int j=0;j<varient_list[0].toStringList().size();j++)
        {
            QTableWidgetItem *item=new QTableWidgetItem();
            item->setText(varient_list[i].toStringList().at(j));
            ui->table_workers_info->setItem(i,j,item);

        }
    }

}

void Admin_main_page::on_table_workers_info_cellDoubleClicked(int row, int column)
{
    if(row==column)
    {}
    enable_on_table_workers_info_cellChanged_flag=true;
}

void Admin_main_page::on_table_workers_info_cellChanged(int row, int column)
{


    if(enable_on_table_workers_info_cellChanged_flag)
    {

        QSqlQuery query;
        QVariantList idList;
        QVariantList nameList;
        QVariantList phoneList;
        QVariantList sexList;
        QVariantList provinceList;
        QVariantList cityList;
        QVariantList districtList;
        QVariantList addrList;
        QVariantList emailList;
        QVariantList postcodeList;
        QVariantList workshopsList;
        QVariantList birthList;
//        qDebug()<<"+++++++++++++++++++++++++++++++++++++++++++++++++";
//        qDebug()<<on_table_workers_info_cellClicked_list;

        idList<<ui->table_workers_info->item(row,0)->text();
        nameList<<ui->table_workers_info->item(row,1)->text();
        phoneList<<ui->table_workers_info->item(row,2)->text();
        sexList<<ui->table_workers_info->item(row,3)->text();
        provinceList<<ui->table_workers_info->item(row,4)->text();
        cityList<<ui->table_workers_info->item(row,5)->text();
        districtList<<ui->table_workers_info->item(row,6)->text();
        addrList<<ui->table_workers_info->item(row,7)->text();
        emailList<<ui->table_workers_info->item(row,8)->text();
        postcodeList<<ui->table_workers_info->item(row,9)->text();
        workshopsList<<ui->table_workers_info->item(row,10)->text();
        birthList<<ui->table_workers_info->item(row,11)->text();


        QTableWidgetItem * item0=new QTableWidgetItem();
        switch (column%12) {
        case 0:
            QMessageBox::information(this,"Info","禁止修改id列，操作无效");
            enable_on_table_workers_info_cellChanged_flag=false;
            item0->setText(on_table_workers_info_cellClicked_list[column]);
            ui->table_workers_info->setItem(row,column,item0);
            return;

        case 1:
            query.prepare("UPDATE workers SET name=:name WHERE id=:id");
            query.bindValue(":name",nameList);
            query.bindValue(":id",idList);
            break;
        case 2:
            query.prepare("UPDATE workers SET phone=:phone WHERE id=:id");
            query.bindValue(":phone",phoneList);
            query.bindValue(":id",idList);
            break;
        case 3:
            query.prepare("UPDATE workers SET sex=:sex WHERE id=:id");
            query.bindValue(":sex",sexList);
            query.bindValue(":id",idList);
            break;
        case 4:
            query.prepare("UPDATE workers SET province=:province WHERE id=:id");
            query.bindValue(":province",provinceList);
            query.bindValue(":id",idList);
            break;
        case 5:
            query.prepare("UPDATE workers SET city=:city WHERE id=:id");
            query.bindValue(":city",cityList);
            query.bindValue(":id",idList);
            break;
        case 6:
            query.prepare("UPDATE workers SET district=:district WHERE id=:id");
            query.bindValue(":district",districtList);
            query.bindValue(":id",idList);
            break;
        case 7:
            query.prepare("UPDATE workers SET detail_addr=:detail_addr WHERE id=:id");
            query.bindValue(":detail_addr",addrList);
            query.bindValue(":id",idList);
            break;
        case 8:
            query.prepare("UPDATE workers SET email=:email WHERE id=:id");
            query.bindValue(":email",emailList);
            query.bindValue(":id",idList);
            break;
        case 9:
            query.prepare("UPDATE workers SET postcode=:postcode WHERE id=:id");
            query.bindValue(":postcode",postcodeList);
            query.bindValue(":id",idList);
            break;
        case 10:
            query.prepare("UPDATE workers SET workshops_id=:workshops_id WHERE id=:id");
            query.bindValue(":workshops_id",workshopsList);
            query.bindValue(":id",idList);
            break;
        case 11:
            query.prepare("UPDATE workers SET birth_date=:birth_date WHERE id=:id");
            query.bindValue(":birth_date",birthList);
            query.bindValue(":id",idList);
            break;
        default:
            break;
        }
        if(query.execBatch())
        {
            qDebug()<<"Success update workers table.";
        }
        else
        {
           qDebug()<<query.lastError();
//           qDebug()<<"+++++++++++++++++++++++++++++++++++++++++++++++++";
           QMessageBox::warning(this,"警告","数据修改失败，不符合条件，请重新输入");
           QTableWidgetItem * item=new QTableWidgetItem();
           item->setText(on_table_workers_info_cellClicked_list[column]);
           ui->table_workers_info->setItem(row,column,item);
//           QTableWidgetItem item;
////           QTableWidgetItem * item_ptr=&item;
//           item.setText(on_table_workers_info_cellClicked_list[column]);
//           ui->table_workers_info->setItem(row,column,item_ptr);
        }
    }
    else
    {}
    enable_on_table_workers_info_cellChanged_flag=false;
}

void Admin_main_page::on_table_workers_info_cellClicked(int row, int column)
{
    if(row==column)
    {}
    on_table_workers_info_cellClicked_list.clear();
    qDebug()<<on_table_workers_info_cellClicked_list;
    qDebug()<<"============================on_table_workers_info_cellClicked_list============================";
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,0)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,1)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,2)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,3)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,4)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,5)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,6)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,7)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,8)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,9)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,10)->text());
    on_table_workers_info_cellClicked_list.append(ui->table_workers_info->item(row,11)->text());
    qDebug()<<on_table_workers_info_cellClicked_list;
}

void Admin_main_page::statusBar_update()
{
    datetime_label->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    ui->statusbar->addPermanentWidget(datetime_label);
    ui->statusbar->update();
}

void Admin_main_page::on_pushButton_add_clicked()
{
    add_orders_info();
}

void Admin_main_page::select_workshops_info()
{
    ui->combo_workshop_add->clear();
    QSqlQuery query;
    QStringList workshops_id_stringList;

    if(query.exec("SELECT id FROM workshops"))
    {qDebug("查询成功");}
    while(query.next())
    {
        workshops_id_stringList<<query.value(0).toString();
    }
    ui->combo_workshop_add->addItems(workshops_id_stringList);
}


void Admin_main_page::on_pushButton_query_products_all_clicked()
{

//    QSqlQuery query;
//    QStandardItemModel * std_item_model = new QStandardItemModel(this);
//    std_item_model->clear();
//    ui->tableView_products_info->setModel(std_item_model);
//    int i = 0;
//    std_item_model->setHorizontalHeaderLabels(QStringList()<<"序号"<<"名称"<<"价格"<<"种类"<<"材料"<<"风格"<<"质量"<<"体积");

//    query.exec("SELECT [id],[name],[price],[type],[material],[style],[weight],[volume] FROM products");

//    while(query.next())
//    {
//        for(int j=0;j<8;j++)
//        {
//            std_item_model->setItem(i,j,new QStandardItem(query.value(j).toString()));
//        }
//        ui->tableView_products_info->setModel(std_item_model);
//        i++;
//    }

//        QSqlQuery query;
//        QStandardItemModel * std_item_model = new QStandardItemModel(this);
//        std_item_model->clear();
//        ui->tableView_products_info->setModel();



        query_model =new QSqlQueryModel();
        query_model->setQuery("SELECT [id] 序号,[name] AS 名称,[price] 价格,[type] 种类,[material] 材料,[style] 风格,[weight] 质量,[volume] 体积 FROM products");
        ui->tableView_products_info->setModel(query_model);

}

void Admin_main_page::on_pushButton_delete_clicked()
{

//    QSqlQueryModel * query_model =new QSqlQueryModel();
    QSqlQuery query;
    query.exec("DELETE FROM products WHERE id="+id_string);
    query_model->setQuery("SELECT [id] 序号,[name] AS 名称,[price] 价格,[type] 种类,[material] 材料,[style] 风格,[weight] 质量,[volume] 体积 FROM products");
//    ui->tableView_products_info->setModel(query_model);
}

void Admin_main_page::on_tableView_products_info_clicked(const QModelIndex &index)
{
    id_string = index.sibling(index.row(),0).data().toString();
}
