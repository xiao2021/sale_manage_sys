/********************************************************************************
** Form generated from reading UI file 'sales_customers.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_CUSTOMERS_H
#define UI_SALES_CUSTOMERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sales_customers
{
public:
    QTableView *tableView;
    QLabel *customer_name;
    QLabel *customer_phone;
    QLabel *customer_province;
    QLabel *customer_city;
    QLabel *customer_distinct;
    QLabel *customer_detail_addr;
    QLineEdit *customer_name_edit;
    QLineEdit *customer_phone_edit;
    QLineEdit *customer_province_edit;
    QLineEdit *customer_city_edit;
    QLineEdit *customer_distinct_edit;
    QLineEdit *customer_detail_addr_edit;
    QLabel *customer_sex;
    QLabel *customer_email;
    QLabel *customer_postcode;
    QLabel *customer_company;
    QLabel *customer_birthday;
    QLabel *customer_enter_day;
    QLineEdit *customer_email_edit;
    QLineEdit *customer_postcode_edit;
    QLineEdit *customer_company_edit;
    QLineEdit *customer_birthday_edit;
    QLineEdit *customer_enter_day_edit;
    QPushButton *update_customer_info;
    QPushButton *add_customer;
    QPushButton *delete_customer;
    QPushButton *search_customer;
    QLineEdit *customer_sex_edit;
    QLabel *label_index;
    QPushButton *return_menu;

    void setupUi(QWidget *sales_customers)
    {
        if (sales_customers->objectName().isEmpty())
            sales_customers->setObjectName(QStringLiteral("sales_customers"));
        sales_customers->resize(1012, 608);
        tableView = new QTableView(sales_customers);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 220, 771, 351));
        customer_name = new QLabel(sales_customers);
        customer_name->setObjectName(QStringLiteral("customer_name"));
        customer_name->setGeometry(QRect(40, 30, 72, 15));
        customer_phone = new QLabel(sales_customers);
        customer_phone->setObjectName(QStringLiteral("customer_phone"));
        customer_phone->setGeometry(QRect(150, 30, 72, 15));
        customer_province = new QLabel(sales_customers);
        customer_province->setObjectName(QStringLiteral("customer_province"));
        customer_province->setGeometry(QRect(260, 30, 72, 15));
        customer_city = new QLabel(sales_customers);
        customer_city->setObjectName(QStringLiteral("customer_city"));
        customer_city->setGeometry(QRect(350, 30, 72, 15));
        customer_distinct = new QLabel(sales_customers);
        customer_distinct->setObjectName(QStringLiteral("customer_distinct"));
        customer_distinct->setGeometry(QRect(430, 30, 72, 15));
        customer_detail_addr = new QLabel(sales_customers);
        customer_detail_addr->setObjectName(QStringLiteral("customer_detail_addr"));
        customer_detail_addr->setGeometry(QRect(520, 30, 72, 15));
        customer_name_edit = new QLineEdit(sales_customers);
        customer_name_edit->setObjectName(QStringLiteral("customer_name_edit"));
        customer_name_edit->setGeometry(QRect(20, 70, 71, 21));
        customer_phone_edit = new QLineEdit(sales_customers);
        customer_phone_edit->setObjectName(QStringLiteral("customer_phone_edit"));
        customer_phone_edit->setGeometry(QRect(110, 70, 111, 21));
        customer_province_edit = new QLineEdit(sales_customers);
        customer_province_edit->setObjectName(QStringLiteral("customer_province_edit"));
        customer_province_edit->setGeometry(QRect(230, 70, 71, 21));
        customer_city_edit = new QLineEdit(sales_customers);
        customer_city_edit->setObjectName(QStringLiteral("customer_city_edit"));
        customer_city_edit->setGeometry(QRect(320, 70, 71, 21));
        customer_distinct_edit = new QLineEdit(sales_customers);
        customer_distinct_edit->setObjectName(QStringLiteral("customer_distinct_edit"));
        customer_distinct_edit->setGeometry(QRect(410, 70, 71, 21));
        customer_detail_addr_edit = new QLineEdit(sales_customers);
        customer_detail_addr_edit->setObjectName(QStringLiteral("customer_detail_addr_edit"));
        customer_detail_addr_edit->setGeometry(QRect(510, 70, 131, 41));
        customer_sex = new QLabel(sales_customers);
        customer_sex->setObjectName(QStringLiteral("customer_sex"));
        customer_sex->setGeometry(QRect(40, 130, 72, 15));
        customer_email = new QLabel(sales_customers);
        customer_email->setObjectName(QStringLiteral("customer_email"));
        customer_email->setGeometry(QRect(140, 130, 72, 15));
        customer_postcode = new QLabel(sales_customers);
        customer_postcode->setObjectName(QStringLiteral("customer_postcode"));
        customer_postcode->setGeometry(QRect(240, 130, 72, 15));
        customer_company = new QLabel(sales_customers);
        customer_company->setObjectName(QStringLiteral("customer_company"));
        customer_company->setGeometry(QRect(330, 130, 41, 16));
        customer_birthday = new QLabel(sales_customers);
        customer_birthday->setObjectName(QStringLiteral("customer_birthday"));
        customer_birthday->setGeometry(QRect(410, 130, 72, 15));
        customer_enter_day = new QLabel(sales_customers);
        customer_enter_day->setObjectName(QStringLiteral("customer_enter_day"));
        customer_enter_day->setGeometry(QRect(530, 130, 72, 15));
        customer_email_edit = new QLineEdit(sales_customers);
        customer_email_edit->setObjectName(QStringLiteral("customer_email_edit"));
        customer_email_edit->setGeometry(QRect(130, 160, 61, 21));
        customer_postcode_edit = new QLineEdit(sales_customers);
        customer_postcode_edit->setObjectName(QStringLiteral("customer_postcode_edit"));
        customer_postcode_edit->setGeometry(QRect(240, 160, 61, 21));
        customer_company_edit = new QLineEdit(sales_customers);
        customer_company_edit->setObjectName(QStringLiteral("customer_company_edit"));
        customer_company_edit->setGeometry(QRect(330, 160, 61, 21));
        customer_birthday_edit = new QLineEdit(sales_customers);
        customer_birthday_edit->setObjectName(QStringLiteral("customer_birthday_edit"));
        customer_birthday_edit->setGeometry(QRect(410, 160, 91, 21));
        customer_enter_day_edit = new QLineEdit(sales_customers);
        customer_enter_day_edit->setObjectName(QStringLiteral("customer_enter_day_edit"));
        customer_enter_day_edit->setGeometry(QRect(530, 160, 101, 21));
        update_customer_info = new QPushButton(sales_customers);
        update_customer_info->setObjectName(QStringLiteral("update_customer_info"));
        update_customer_info->setGeometry(QRect(850, 240, 93, 28));
        add_customer = new QPushButton(sales_customers);
        add_customer->setObjectName(QStringLiteral("add_customer"));
        add_customer->setGeometry(QRect(850, 140, 93, 28));
        delete_customer = new QPushButton(sales_customers);
        delete_customer->setObjectName(QStringLiteral("delete_customer"));
        delete_customer->setGeometry(QRect(850, 330, 93, 28));
        search_customer = new QPushButton(sales_customers);
        search_customer->setObjectName(QStringLiteral("search_customer"));
        search_customer->setGeometry(QRect(850, 60, 93, 28));
        customer_sex_edit = new QLineEdit(sales_customers);
        customer_sex_edit->setObjectName(QStringLiteral("customer_sex_edit"));
        customer_sex_edit->setGeometry(QRect(30, 160, 61, 21));
        label_index = new QLabel(sales_customers);
        label_index->setObjectName(QStringLiteral("label_index"));
        label_index->setGeometry(QRect(720, 200, 72, 15));
        return_menu = new QPushButton(sales_customers);
        return_menu->setObjectName(QStringLiteral("return_menu"));
        return_menu->setGeometry(QRect(10, 0, 93, 28));

        retranslateUi(sales_customers);

        QMetaObject::connectSlotsByName(sales_customers);
    } // setupUi

    void retranslateUi(QWidget *sales_customers)
    {
        sales_customers->setWindowTitle(QApplication::translate("sales_customers", "Form", nullptr));
        customer_name->setText(QApplication::translate("sales_customers", "\345\247\223\345\220\215", nullptr));
        customer_phone->setText(QApplication::translate("sales_customers", "\347\224\265\350\257\235", nullptr));
        customer_province->setText(QApplication::translate("sales_customers", "\347\234\201", nullptr));
        customer_city->setText(QApplication::translate("sales_customers", "\345\270\202", nullptr));
        customer_distinct->setText(QApplication::translate("sales_customers", "\345\214\272", nullptr));
        customer_detail_addr->setText(QApplication::translate("sales_customers", "\350\257\246\347\273\206\345\234\260\345\235\200", nullptr));
        customer_sex->setText(QApplication::translate("sales_customers", "\346\200\247\345\210\253", nullptr));
        customer_email->setText(QApplication::translate("sales_customers", "\351\202\256\347\256\261", nullptr));
        customer_postcode->setText(QApplication::translate("sales_customers", "\351\202\256\346\224\277\347\274\226\347\240\201", nullptr));
        customer_company->setText(QApplication::translate("sales_customers", "\345\205\254\345\217\270", nullptr));
        customer_birthday->setText(QApplication::translate("sales_customers", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        customer_enter_day->setText(QApplication::translate("sales_customers", "\347\231\273\350\256\260\346\227\266\351\227\264", nullptr));
        update_customer_info->setText(QApplication::translate("sales_customers", "\346\233\264\346\226\260\344\277\241\346\201\257", nullptr));
        add_customer->setText(QApplication::translate("sales_customers", "\346\267\273\345\212\240\344\277\241\346\201\257", nullptr));
        delete_customer->setText(QApplication::translate("sales_customers", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
        search_customer->setText(QApplication::translate("sales_customers", "\346\237\245\350\257\242\344\277\241\346\201\257", nullptr));
        label_index->setText(QApplication::translate("sales_customers", "\347\274\226\345\217\267", nullptr));
        return_menu->setText(QApplication::translate("sales_customers", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sales_customers: public Ui_sales_customers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_CUSTOMERS_H
