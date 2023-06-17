#include "mainwindow.h"
#include <QApplication>
#include "admin_main_page.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    Admin_main_page amp;
//    amp.show();
    return a.exec();
}
