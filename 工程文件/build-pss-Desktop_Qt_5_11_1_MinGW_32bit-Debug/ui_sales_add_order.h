/********************************************************************************
** Form generated from reading UI file 'sales_add_order.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_ADD_ORDER_H
#define UI_SALES_ADD_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sales_add_order
{
public:
    QTableView *tableView;
    QLabel *order_index;
    QLabel *order_num;
    QLabel *products_num;
    QLabel *sales_spot;
    QLabel *customer_num;
    QLabel *pay_mode;
    QLabel *total_price;
    QLabel *place_ordertime;
    QLineEdit *order_num_edit;
    QLineEdit *products_num_edit;
    QLineEdit *customer_num_edit;
    QLineEdit *total_price_edit;
    QLineEdit *pay_mode_edit;
    QLineEdit *sales_spot_edit;
    QLineEdit *place_ordertime_edit;
    QPushButton *add_order_pushb;
    QPushButton *update_order_pushb;
    QPushButton *delete_order_pushb;
    QPushButton *search_order_pushb;
    QPushButton *return_menu;

    void setupUi(QWidget *sales_add_order)
    {
        if (sales_add_order->objectName().isEmpty())
            sales_add_order->setObjectName(QStringLiteral("sales_add_order"));
        sales_add_order->resize(1175, 664);
        tableView = new QTableView(sales_add_order);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 230, 811, 401));
        order_index = new QLabel(sales_add_order);
        order_index->setObjectName(QStringLiteral("order_index"));
        order_index->setGeometry(QRect(780, 210, 72, 15));
        order_num = new QLabel(sales_add_order);
        order_num->setObjectName(QStringLiteral("order_num"));
        order_num->setGeometry(QRect(40, 40, 72, 15));
        products_num = new QLabel(sales_add_order);
        products_num->setObjectName(QStringLiteral("products_num"));
        products_num->setGeometry(QRect(180, 40, 72, 15));
        sales_spot = new QLabel(sales_add_order);
        sales_spot->setObjectName(QStringLiteral("sales_spot"));
        sales_spot->setGeometry(QRect(40, 130, 72, 15));
        customer_num = new QLabel(sales_add_order);
        customer_num->setObjectName(QStringLiteral("customer_num"));
        customer_num->setGeometry(QRect(340, 40, 72, 15));
        pay_mode = new QLabel(sales_add_order);
        pay_mode->setObjectName(QStringLiteral("pay_mode"));
        pay_mode->setGeometry(QRect(640, 40, 72, 15));
        total_price = new QLabel(sales_add_order);
        total_price->setObjectName(QStringLiteral("total_price"));
        total_price->setGeometry(QRect(480, 40, 72, 15));
        place_ordertime = new QLabel(sales_add_order);
        place_ordertime->setObjectName(QStringLiteral("place_ordertime"));
        place_ordertime->setGeometry(QRect(180, 130, 72, 15));
        order_num_edit = new QLineEdit(sales_add_order);
        order_num_edit->setObjectName(QStringLiteral("order_num_edit"));
        order_num_edit->setGeometry(QRect(20, 80, 113, 21));
        products_num_edit = new QLineEdit(sales_add_order);
        products_num_edit->setObjectName(QStringLiteral("products_num_edit"));
        products_num_edit->setGeometry(QRect(160, 80, 113, 21));
        customer_num_edit = new QLineEdit(sales_add_order);
        customer_num_edit->setObjectName(QStringLiteral("customer_num_edit"));
        customer_num_edit->setGeometry(QRect(310, 80, 113, 21));
        total_price_edit = new QLineEdit(sales_add_order);
        total_price_edit->setObjectName(QStringLiteral("total_price_edit"));
        total_price_edit->setGeometry(QRect(450, 80, 113, 21));
        pay_mode_edit = new QLineEdit(sales_add_order);
        pay_mode_edit->setObjectName(QStringLiteral("pay_mode_edit"));
        pay_mode_edit->setGeometry(QRect(620, 80, 113, 21));
        sales_spot_edit = new QLineEdit(sales_add_order);
        sales_spot_edit->setObjectName(QStringLiteral("sales_spot_edit"));
        sales_spot_edit->setGeometry(QRect(20, 180, 113, 21));
        place_ordertime_edit = new QLineEdit(sales_add_order);
        place_ordertime_edit->setObjectName(QStringLiteral("place_ordertime_edit"));
        place_ordertime_edit->setGeometry(QRect(160, 180, 113, 21));
        add_order_pushb = new QPushButton(sales_add_order);
        add_order_pushb->setObjectName(QStringLiteral("add_order_pushb"));
        add_order_pushb->setGeometry(QRect(960, 130, 93, 28));
        update_order_pushb = new QPushButton(sales_add_order);
        update_order_pushb->setObjectName(QStringLiteral("update_order_pushb"));
        update_order_pushb->setGeometry(QRect(960, 220, 93, 28));
        delete_order_pushb = new QPushButton(sales_add_order);
        delete_order_pushb->setObjectName(QStringLiteral("delete_order_pushb"));
        delete_order_pushb->setGeometry(QRect(960, 310, 93, 28));
        search_order_pushb = new QPushButton(sales_add_order);
        search_order_pushb->setObjectName(QStringLiteral("search_order_pushb"));
        search_order_pushb->setGeometry(QRect(960, 410, 93, 28));
        return_menu = new QPushButton(sales_add_order);
        return_menu->setObjectName(QStringLiteral("return_menu"));
        return_menu->setGeometry(QRect(10, 0, 93, 28));

        retranslateUi(sales_add_order);

        QMetaObject::connectSlotsByName(sales_add_order);
    } // setupUi

    void retranslateUi(QWidget *sales_add_order)
    {
        sales_add_order->setWindowTitle(QApplication::translate("sales_add_order", "Form", nullptr));
        order_index->setText(QApplication::translate("sales_add_order", "\347\274\226\345\217\267", nullptr));
        order_num->setText(QApplication::translate("sales_add_order", "\350\256\242\345\215\225\345\217\267", nullptr));
        products_num->setText(QApplication::translate("sales_add_order", "\344\272\247\345\223\201\345\217\267", nullptr));
        sales_spot->setText(QApplication::translate("sales_add_order", "\351\224\200\345\224\256\347\202\271", nullptr));
        customer_num->setText(QApplication::translate("sales_add_order", "\351\241\276\345\256\242id", nullptr));
        pay_mode->setText(QApplication::translate("sales_add_order", "\346\224\257\344\273\230\346\226\271\345\274\217", nullptr));
        total_price->setText(QApplication::translate("sales_add_order", "\346\200\273\344\273\267", nullptr));
        place_ordertime->setText(QApplication::translate("sales_add_order", "\344\270\213\345\215\225\346\227\266\351\227\264", nullptr));
        add_order_pushb->setText(QApplication::translate("sales_add_order", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
        update_order_pushb->setText(QApplication::translate("sales_add_order", "\346\233\264\346\226\260\350\256\242\345\215\225", nullptr));
        delete_order_pushb->setText(QApplication::translate("sales_add_order", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
        search_order_pushb->setText(QApplication::translate("sales_add_order", "\346\237\245\350\257\242\350\256\242\345\215\225", nullptr));
        return_menu->setText(QApplication::translate("sales_add_order", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sales_add_order: public Ui_sales_add_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_ADD_ORDER_H
