/********************************************************************************
** Form generated from reading UI file 'new_delivery.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DELIVERY_H
#define UI_NEW_DELIVERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_delivery
{
public:
    QPushButton *return_to_menu;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_select;

    void setupUi(QWidget *new_delivery)
    {
        if (new_delivery->objectName().isEmpty())
            new_delivery->setObjectName(QStringLiteral("new_delivery"));
        new_delivery->resize(1137, 527);
        return_to_menu = new QPushButton(new_delivery);
        return_to_menu->setObjectName(QStringLiteral("return_to_menu"));
        return_to_menu->setGeometry(QRect(30, 20, 93, 28));
        tableView = new QTableView(new_delivery);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 80, 841, 431));
        pushButton = new QPushButton(new_delivery);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(940, 60, 121, 28));
        pushButton_2 = new QPushButton(new_delivery);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(940, 130, 131, 28));
        pushButton_3 = new QPushButton(new_delivery);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(940, 200, 131, 28));
        pushButton_4 = new QPushButton(new_delivery);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(940, 280, 131, 28));
        pushButton_5 = new QPushButton(new_delivery);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(940, 360, 131, 28));
        label_select = new QLabel(new_delivery);
        label_select->setObjectName(QStringLiteral("label_select"));
        label_select->setGeometry(QRect(780, 60, 72, 15));

        retranslateUi(new_delivery);

        QMetaObject::connectSlotsByName(new_delivery);
    } // setupUi

    void retranslateUi(QWidget *new_delivery)
    {
        new_delivery->setWindowTitle(QApplication::translate("new_delivery", "Form", nullptr));
        return_to_menu->setText(QApplication::translate("new_delivery", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QApplication::translate("new_delivery", "\346\237\245\350\257\242\346\211\200\346\234\211\350\256\242\345\215\225", nullptr));
        pushButton_2->setText(QApplication::translate("new_delivery", "\346\237\245\350\257\242\345\267\262\345\256\214\346\210\220\350\256\242\345\215\225", nullptr));
        pushButton_3->setText(QApplication::translate("new_delivery", "\346\237\245\350\257\242\346\234\252\345\256\214\346\210\220\350\256\242\345\215\225", nullptr));
        pushButton_4->setText(QApplication::translate("new_delivery", "\345\267\262\345\256\214\346\210\220", nullptr));
        pushButton_5->setText(QApplication::translate("new_delivery", "\346\234\252\345\256\214\346\210\220", nullptr));
        label_select->setText(QApplication::translate("new_delivery", "\347\274\226\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_delivery: public Ui_new_delivery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DELIVERY_H
