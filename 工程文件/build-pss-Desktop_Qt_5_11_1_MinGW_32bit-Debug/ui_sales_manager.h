/********************************************************************************
** Form generated from reading UI file 'sales_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_MANAGER_H
#define UI_SALES_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sales_manager
{
public:
    QPushButton *add_order_pushbutton;
    QPushButton *delivery_order_pushbutton;
    QPushButton *quit_pushbutton;
    QPushButton *add_customer_info;

    void setupUi(QWidget *sales_manager)
    {
        if (sales_manager->objectName().isEmpty())
            sales_manager->setObjectName(QStringLiteral("sales_manager"));
        sales_manager->resize(498, 342);
        add_order_pushbutton = new QPushButton(sales_manager);
        add_order_pushbutton->setObjectName(QStringLiteral("add_order_pushbutton"));
        add_order_pushbutton->setGeometry(QRect(330, 120, 93, 28));
        delivery_order_pushbutton = new QPushButton(sales_manager);
        delivery_order_pushbutton->setObjectName(QStringLiteral("delivery_order_pushbutton"));
        delivery_order_pushbutton->setGeometry(QRect(102, 230, 121, 28));
        quit_pushbutton = new QPushButton(sales_manager);
        quit_pushbutton->setObjectName(QStringLiteral("quit_pushbutton"));
        quit_pushbutton->setGeometry(QRect(330, 230, 93, 28));
        add_customer_info = new QPushButton(sales_manager);
        add_customer_info->setObjectName(QStringLiteral("add_customer_info"));
        add_customer_info->setGeometry(QRect(100, 120, 121, 28));

        retranslateUi(sales_manager);

        QMetaObject::connectSlotsByName(sales_manager);
    } // setupUi

    void retranslateUi(QWidget *sales_manager)
    {
        sales_manager->setWindowTitle(QApplication::translate("sales_manager", "sales_manager", nullptr));
        add_order_pushbutton->setText(QApplication::translate("sales_manager", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
        delivery_order_pushbutton->setText(QApplication::translate("sales_manager", "\351\205\215\351\200\201\346\237\245\350\257\242", nullptr));
        quit_pushbutton->setText(QApplication::translate("sales_manager", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        add_customer_info->setText(QApplication::translate("sales_manager", "\346\267\273\345\212\240\345\256\242\346\210\267\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sales_manager: public Ui_sales_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_MANAGER_H
