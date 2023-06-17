#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include "admin_main_page.h"
#include <QDateTime>
#include <QTimer>
#include "sales_manager.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    this->setAttribute(Qt::WA_DeleteOnClose);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(statusBar_update()));
    datetime_label = new QLabel();
    timer->start(1000);
//    statusBar_init();
    connect_database();

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::connect_database()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

//    db.setHostName("103.16.128.44");
//    db.setPort(35851);
//    db.setDatabaseName("pss_host");
//    db.setUserName("sa");
//    db.setPassword("sa123456!");

//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("pss_local");
//    db.setUserName("sa");
//    db.setPassword("sa123456!");

    db.setHostName("127.0.0.1");
    db.setDatabaseName("pss_sql_server");
    db.setUserName("sa");
    db.setPassword("sa123456!");

//      db.setHostName("103.46.128.44");
//      db.setDatabaseName("pss_sql_server_host");
//      db.setUserName("sa");
//      db.setPassword("sa123456!");

    if (db.open())
    {
        qDebug()<<"DataBase open success!";
    }
    else
    {
        qDebug()<<db.lastError();
        QMessageBox::information(this,"Info","请检查网络和数据库连接");
    }
}

void MainWindow::on_pushButton_ok_clicked()
{
    QSqlQuery query;
    QString enter_type="";
    query.exec("SELECT account,password,type FROM login");
    while(query.next())
    {
        if(ui->lineEdit_account->text()==query.value(0).toString()&&ui->lineEdit_passwd->text()==query.value(1).toString())
        { enter_type= query.value(2).toString(); }
    }
    if(enter_type=="")
    {
        QMessageBox::information(this,"账号问题","输入错误，请重新输入。");
    }
    if(enter_type=="admin")
    {
        Admin_main_page * amp = new Admin_main_page();
        qDebug()<<"enter with type:"<<enter_type;


        this->close();
        amp->show();

    }
    else if(enter_type=="user")
    {
        sales_manager *smr = new sales_manager();
        this->close();
        smr->show();
    }
    else if(enter_type=="courier")
    {

    }
    else
    {
        QMessageBox::information(this,"账号问题","输入错误，请重新输入。");
    }
}

void MainWindow::statusBar_init()
{
//    QString currentDataTime = QDateTime::currentDateTime().toString("yyyy-mm-dd hh:mm:ss");
    QLabel *datetime_label = new QLabel();
    datetime_label->setText(QDateTime::currentDateTime().toString("yyyy-mm-dd hh:mm:ss"));
    ui->statusBar->addPermanentWidget(datetime_label);
//    ui->statusBar->update();

}
void MainWindow::statusBar_update()
{
    datetime_label->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    ui->statusBar->addPermanentWidget(datetime_label);
    ui->statusBar->update();

}
