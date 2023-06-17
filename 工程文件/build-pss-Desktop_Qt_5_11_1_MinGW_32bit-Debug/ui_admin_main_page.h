/********************************************************************************
** Form generated from reading UI file 'admin_main_page.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MAIN_PAGE_H
#define UI_ADMIN_MAIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_main_page
{
public:
    QAction *action_customers_info;
    QAction *action_customers_modify;
    QAction *action_sales_shops_info;
    QAction *action_sales_shops_modify;
    QAction *action_workshops_info;
    QAction *action_workshops_modify;
    QAction *action_workers_info;
    QAction *action_workers_modify;
    QAction *action_products_info;
    QAction *action_products_modify;
    QAction *actionDisconnect;
    QAction *actionReconnect;
    QWidget *centralwidget;
    QGridLayout *gridLayout_15;
    QStackedWidget *stackedWidget;
    QWidget *main_page;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QWidget *page_customers_info;
    QGridLayout *gridLayout_2;
    QTableWidget *table_customers_info;
    QWidget *page_customers_modify;
    QWidget *page_sales_shops_info;
    QGridLayout *gridLayout_4;
    QTableView *tableView_sales_shops_info;
    QWidget *page_sales_shops_modify;
    QWidget *page_workshops_info;
    QTableView *tableView_workshops_info;
    QWidget *page_workshops_modify;
    QWidget *page_workers_info;
    QGridLayout *gridLayout_16;
    QTableWidget *table_workers_info;
    QWidget *page_workers_modify;
    QWidget *page_orders_info;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_products_name;
    QLabel *label_2;
    QComboBox *combo_products_type;
    QLabel *label_3;
    QComboBox *combo_products_material;
    QLabel *label_7;
    QComboBox *combo_products_style;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_minWeight;
    QLabel *label_9;
    QLineEdit *lineEdit_maxWeight;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_minVolume;
    QLabel *label_12;
    QLineEdit *lineEdit_maxVolume;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *lineEdit_products_minPrice;
    QLabel *label_14;
    QLineEdit *lineEdit_products_maxPrice;
    QPushButton *pushButton_query_products;
    QPushButton *pushButton_query_products_all;
    QTableView *tableView_products_info;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_3;
    QLabel *label_19;
    QLineEdit *lineEdit_weight_add;
    QLabel *label_22;
    QLineEdit *lineEdit_Volume_add;
    QLabel *label_25;
    QLineEdit *lineEdit_Price_add;
    QLabel *label_26;
    QComboBox *combo_workshop_add;
    QFormLayout *formLayout_2;
    QLabel *label_15;
    QLineEdit *lineEdit_products_name_add;
    QLabel *label_16;
    QComboBox *combo_products_type_add;
    QLabel *label_17;
    QComboBox *combo_products_material_add;
    QLabel *label_18;
    QComboBox *combo_products_style_add;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_add;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_delete;
    QMenuBar *menubar;
    QMenu *menu_customers;
    QMenu *menu_sales_shops;
    QMenu *menu_workshops;
    QMenu *menu_workers;
    QMenu *menu_products;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin_main_page)
    {
        if (Admin_main_page->objectName().isEmpty())
            Admin_main_page->setObjectName(QStringLiteral("Admin_main_page"));
        Admin_main_page->setEnabled(true);
        Admin_main_page->resize(636, 480);
        Admin_main_page->setAnimated(true);
        action_customers_info = new QAction(Admin_main_page);
        action_customers_info->setObjectName(QStringLiteral("action_customers_info"));
        action_customers_modify = new QAction(Admin_main_page);
        action_customers_modify->setObjectName(QStringLiteral("action_customers_modify"));
        action_sales_shops_info = new QAction(Admin_main_page);
        action_sales_shops_info->setObjectName(QStringLiteral("action_sales_shops_info"));
        action_sales_shops_modify = new QAction(Admin_main_page);
        action_sales_shops_modify->setObjectName(QStringLiteral("action_sales_shops_modify"));
        action_workshops_info = new QAction(Admin_main_page);
        action_workshops_info->setObjectName(QStringLiteral("action_workshops_info"));
        action_workshops_modify = new QAction(Admin_main_page);
        action_workshops_modify->setObjectName(QStringLiteral("action_workshops_modify"));
        action_workers_info = new QAction(Admin_main_page);
        action_workers_info->setObjectName(QStringLiteral("action_workers_info"));
        action_workers_modify = new QAction(Admin_main_page);
        action_workers_modify->setObjectName(QStringLiteral("action_workers_modify"));
        action_products_info = new QAction(Admin_main_page);
        action_products_info->setObjectName(QStringLiteral("action_products_info"));
        action_products_modify = new QAction(Admin_main_page);
        action_products_modify->setObjectName(QStringLiteral("action_products_modify"));
        actionDisconnect = new QAction(Admin_main_page);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        actionReconnect = new QAction(Admin_main_page);
        actionReconnect->setObjectName(QStringLiteral("actionReconnect"));
        centralwidget = new QWidget(Admin_main_page);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_15 = new QGridLayout(centralwidget);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        main_page = new QWidget();
        main_page->setObjectName(QStringLiteral("main_page"));
        gridLayout_3 = new QGridLayout(main_page);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(main_page);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        stackedWidget->addWidget(main_page);
        page_customers_info = new QWidget();
        page_customers_info->setObjectName(QStringLiteral("page_customers_info"));
        gridLayout_2 = new QGridLayout(page_customers_info);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        table_customers_info = new QTableWidget(page_customers_info);
        if (table_customers_info->columnCount() < 13)
            table_customers_info->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_customers_info->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        table_customers_info->setObjectName(QStringLiteral("table_customers_info"));
        table_customers_info->horizontalHeader()->setDefaultSectionSize(100);

        gridLayout_2->addWidget(table_customers_info, 0, 0, 1, 1);

        stackedWidget->addWidget(page_customers_info);
        page_customers_modify = new QWidget();
        page_customers_modify->setObjectName(QStringLiteral("page_customers_modify"));
        stackedWidget->addWidget(page_customers_modify);
        page_sales_shops_info = new QWidget();
        page_sales_shops_info->setObjectName(QStringLiteral("page_sales_shops_info"));
        gridLayout_4 = new QGridLayout(page_sales_shops_info);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableView_sales_shops_info = new QTableView(page_sales_shops_info);
        tableView_sales_shops_info->setObjectName(QStringLiteral("tableView_sales_shops_info"));

        gridLayout_4->addWidget(tableView_sales_shops_info, 0, 0, 1, 1);

        stackedWidget->addWidget(page_sales_shops_info);
        page_sales_shops_modify = new QWidget();
        page_sales_shops_modify->setObjectName(QStringLiteral("page_sales_shops_modify"));
        stackedWidget->addWidget(page_sales_shops_modify);
        page_workshops_info = new QWidget();
        page_workshops_info->setObjectName(QStringLiteral("page_workshops_info"));
        tableView_workshops_info = new QTableView(page_workshops_info);
        tableView_workshops_info->setObjectName(QStringLiteral("tableView_workshops_info"));
        tableView_workshops_info->setGeometry(QRect(10, 10, 592, 385));
        stackedWidget->addWidget(page_workshops_info);
        page_workshops_modify = new QWidget();
        page_workshops_modify->setObjectName(QStringLiteral("page_workshops_modify"));
        stackedWidget->addWidget(page_workshops_modify);
        page_workers_info = new QWidget();
        page_workers_info->setObjectName(QStringLiteral("page_workers_info"));
        gridLayout_16 = new QGridLayout(page_workers_info);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        table_workers_info = new QTableWidget(page_workers_info);
        if (table_workers_info->columnCount() < 12)
            table_workers_info->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(10, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        table_workers_info->setHorizontalHeaderItem(11, __qtablewidgetitem24);
        table_workers_info->setObjectName(QStringLiteral("table_workers_info"));
        table_workers_info->horizontalHeader()->setDefaultSectionSize(100);

        gridLayout_16->addWidget(table_workers_info, 0, 0, 1, 2);

        stackedWidget->addWidget(page_workers_info);
        page_workers_modify = new QWidget();
        page_workers_modify->setObjectName(QStringLiteral("page_workers_modify"));
        stackedWidget->addWidget(page_workers_modify);
        page_orders_info = new QWidget();
        page_orders_info->setObjectName(QStringLiteral("page_orders_info"));
        gridLayout_8 = new QGridLayout(page_orders_info);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_2 = new QGroupBox(page_orders_info);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit_products_name = new QLineEdit(groupBox_2);
        lineEdit_products_name->setObjectName(QStringLiteral("lineEdit_products_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_products_name);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        combo_products_type = new QComboBox(groupBox_2);
        combo_products_type->addItem(QString());
        combo_products_type->addItem(QString());
        combo_products_type->addItem(QString());
        combo_products_type->addItem(QString());
        combo_products_type->addItem(QString());
        combo_products_type->addItem(QString());
        combo_products_type->setObjectName(QStringLiteral("combo_products_type"));

        formLayout->setWidget(1, QFormLayout::FieldRole, combo_products_type);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        combo_products_material = new QComboBox(groupBox_2);
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->addItem(QString());
        combo_products_material->setObjectName(QStringLiteral("combo_products_material"));

        formLayout->setWidget(2, QFormLayout::FieldRole, combo_products_material);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        combo_products_style = new QComboBox(groupBox_2);
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->addItem(QString());
        combo_products_style->setObjectName(QStringLiteral("combo_products_style"));

        formLayout->setWidget(3, QFormLayout::FieldRole, combo_products_style);


        gridLayout_5->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_7->addWidget(label_5);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_7->addWidget(label_10);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        lineEdit_minWeight = new QLineEdit(groupBox_2);
        lineEdit_minWeight->setObjectName(QStringLiteral("lineEdit_minWeight"));

        horizontalLayout->addWidget(lineEdit_minWeight);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        lineEdit_maxWeight = new QLineEdit(groupBox_2);
        lineEdit_maxWeight->setObjectName(QStringLiteral("lineEdit_maxWeight"));

        horizontalLayout->addWidget(lineEdit_maxWeight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        lineEdit_minVolume = new QLineEdit(groupBox_2);
        lineEdit_minVolume->setObjectName(QStringLiteral("lineEdit_minVolume"));

        horizontalLayout_2->addWidget(lineEdit_minVolume);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_2->addWidget(label_12);

        lineEdit_maxVolume = new QLineEdit(groupBox_2);
        lineEdit_maxVolume->setObjectName(QStringLiteral("lineEdit_maxVolume"));

        horizontalLayout_2->addWidget(lineEdit_maxVolume);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_3->addWidget(label_13);

        lineEdit_products_minPrice = new QLineEdit(groupBox_2);
        lineEdit_products_minPrice->setObjectName(QStringLiteral("lineEdit_products_minPrice"));

        horizontalLayout_3->addWidget(lineEdit_products_minPrice);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_3->addWidget(label_14);

        lineEdit_products_maxPrice = new QLineEdit(groupBox_2);
        lineEdit_products_maxPrice->setObjectName(QStringLiteral("lineEdit_products_maxPrice"));

        horizontalLayout_3->addWidget(lineEdit_products_maxPrice);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        pushButton_query_products = new QPushButton(groupBox_2);
        pushButton_query_products->setObjectName(QStringLiteral("pushButton_query_products"));

        gridLayout_5->addWidget(pushButton_query_products, 1, 0, 1, 1);

        pushButton_query_products_all = new QPushButton(groupBox_2);
        pushButton_query_products_all->setObjectName(QStringLiteral("pushButton_query_products_all"));

        gridLayout_5->addWidget(pushButton_query_products_all, 1, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        tableView_products_info = new QTableView(page_orders_info);
        tableView_products_info->setObjectName(QStringLiteral("tableView_products_info"));

        verticalLayout_4->addWidget(tableView_products_info);


        gridLayout_8->addLayout(verticalLayout_4, 0, 0, 2, 1);

        groupBox = new QGroupBox(page_orders_info);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_19);

        lineEdit_weight_add = new QLineEdit(groupBox);
        lineEdit_weight_add->setObjectName(QStringLiteral("lineEdit_weight_add"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_weight_add);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_22);

        lineEdit_Volume_add = new QLineEdit(groupBox);
        lineEdit_Volume_add->setObjectName(QStringLiteral("lineEdit_Volume_add"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_Volume_add);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_25);

        lineEdit_Price_add = new QLineEdit(groupBox);
        lineEdit_Price_add->setObjectName(QStringLiteral("lineEdit_Price_add"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_Price_add);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_26);

        combo_workshop_add = new QComboBox(groupBox);
        combo_workshop_add->addItem(QString());
        combo_workshop_add->setObjectName(QStringLiteral("combo_workshop_add"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, combo_workshop_add);


        gridLayout->addLayout(formLayout_3, 2, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_15);

        lineEdit_products_name_add = new QLineEdit(groupBox);
        lineEdit_products_name_add->setObjectName(QStringLiteral("lineEdit_products_name_add"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_products_name_add);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_16);

        combo_products_type_add = new QComboBox(groupBox);
        combo_products_type_add->addItem(QString());
        combo_products_type_add->addItem(QString());
        combo_products_type_add->addItem(QString());
        combo_products_type_add->addItem(QString());
        combo_products_type_add->addItem(QString());
        combo_products_type_add->addItem(QString());
        combo_products_type_add->setObjectName(QStringLiteral("combo_products_type_add"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, combo_products_type_add);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_17);

        combo_products_material_add = new QComboBox(groupBox);
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->addItem(QString());
        combo_products_material_add->setObjectName(QStringLiteral("combo_products_material_add"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, combo_products_material_add);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_18);

        combo_products_style_add = new QComboBox(groupBox);
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->addItem(QString());
        combo_products_style_add->setObjectName(QStringLiteral("combo_products_style_add"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, combo_products_style_add);


        gridLayout->addLayout(formLayout_2, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(111, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 5, 0, 1, 1);

        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        gridLayout->addWidget(pushButton_add, 4, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_5 = new QGroupBox(page_orders_info);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton_delete = new QPushButton(groupBox_5);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        gridLayout_7->addWidget(pushButton_delete, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 1, 1, 1, 1);

        stackedWidget->addWidget(page_orders_info);

        gridLayout_15->addWidget(stackedWidget, 0, 0, 1, 1);

        Admin_main_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin_main_page);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 636, 26));
        menu_customers = new QMenu(menubar);
        menu_customers->setObjectName(QStringLiteral("menu_customers"));
        menu_sales_shops = new QMenu(menubar);
        menu_sales_shops->setObjectName(QStringLiteral("menu_sales_shops"));
        menu_workshops = new QMenu(menubar);
        menu_workshops->setObjectName(QStringLiteral("menu_workshops"));
        menu_workers = new QMenu(menubar);
        menu_workers->setObjectName(QStringLiteral("menu_workers"));
        menu_products = new QMenu(menubar);
        menu_products->setObjectName(QStringLiteral("menu_products"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Admin_main_page->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin_main_page);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin_main_page->setStatusBar(statusbar);

        menubar->addAction(menu_customers->menuAction());
        menubar->addAction(menu_sales_shops->menuAction());
        menubar->addAction(menu_workshops->menuAction());
        menubar->addAction(menu_workers->menuAction());
        menubar->addAction(menu_products->menuAction());
        menubar->addAction(menu->menuAction());
        menu_customers->addAction(action_customers_info);
        menu_customers->addAction(action_customers_modify);
        menu_sales_shops->addAction(action_sales_shops_info);
        menu_sales_shops->addAction(action_sales_shops_modify);
        menu_workshops->addAction(action_workshops_info);
        menu_workshops->addAction(action_workshops_modify);
        menu_workers->addAction(action_workers_info);
        menu_workers->addAction(action_workers_modify);
        menu_products->addAction(action_products_info);
        menu_products->addAction(action_products_modify);
        menu->addAction(actionDisconnect);
        menu->addAction(actionReconnect);

        retranslateUi(Admin_main_page);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin_main_page);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_main_page)
    {
        Admin_main_page->setWindowTitle(QApplication::translate("Admin_main_page", "\344\272\247\345\223\201\347\224\237\344\272\247\344\270\216\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        action_customers_info->setText(QApplication::translate("Admin_main_page", "\351\241\276\345\256\242\344\277\241\346\201\257", nullptr));
        action_customers_modify->setText(QApplication::translate("Admin_main_page", "\344\277\256\346\224\271\351\241\276\345\256\242\344\277\241\346\201\257", nullptr));
        action_customers_modify->setIconText(QApplication::translate("Admin_main_page", "\344\277\256\346\224\271\351\241\276\345\256\242\344\277\241\346\201\257", nullptr));
        action_sales_shops_info->setText(QApplication::translate("Admin_main_page", "\351\224\200\345\224\256\347\202\271\344\277\241\346\201\257", nullptr));
        action_sales_shops_modify->setText(QApplication::translate("Admin_main_page", "\344\277\256\346\224\271\351\224\200\345\224\256\347\202\271\344\277\241\346\201\257", nullptr));
        action_workshops_info->setText(QApplication::translate("Admin_main_page", "\350\275\246\351\227\264\344\277\241\346\201\257", nullptr));
        action_workshops_modify->setText(QApplication::translate("Admin_main_page", "\344\277\256\346\224\271\350\275\246\351\227\264\344\277\241\346\201\257", nullptr));
        action_workers_info->setText(QApplication::translate("Admin_main_page", "\345\267\245\344\272\272\344\277\241\346\201\257", nullptr));
        action_workers_modify->setText(QApplication::translate("Admin_main_page", "\344\277\256\346\224\271\345\267\245\344\272\272\344\277\241\346\201\257", nullptr));
        action_products_info->setText(QApplication::translate("Admin_main_page", "\344\272\247\345\223\201\344\277\241\346\201\257", nullptr));
        action_products_modify->setText(QApplication::translate("Admin_main_page", "\344\277\256\346\224\271\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        actionDisconnect->setText(QApplication::translate("Admin_main_page", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        actionReconnect->setText(QApplication::translate("Admin_main_page", "\351\207\215\346\226\260\350\277\236\346\216\245", nullptr));
        label->setText(QApplication::translate("Admin_main_page", "\346\254\242\350\277\216\344\275\277\347\224\250\344\272\247\345\223\201\347\224\237\344\272\247\344\270\216\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237(\345\267\245\345\216\202\347\253\257)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_customers_info->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Admin_main_page", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_customers_info->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Admin_main_page", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_customers_info->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Admin_main_page", "\346\211\213\346\234\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_customers_info->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Admin_main_page", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_customers_info->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Admin_main_page", "\347\234\201\344\273\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_customers_info->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Admin_main_page", "\345\237\216\345\270\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_customers_info->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Admin_main_page", "\345\214\272\345\216\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_customers_info->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Admin_main_page", "\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_customers_info->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Admin_main_page", "\347\224\265\351\202\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table_customers_info->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Admin_main_page", "\351\202\256\347\274\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_customers_info->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Admin_main_page", "\345\205\254\345\217\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table_customers_info->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Admin_main_page", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table_customers_info->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Admin_main_page", "\347\231\273\350\256\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table_workers_info->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("Admin_main_page", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table_workers_info->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("Admin_main_page", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table_workers_info->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("Admin_main_page", "\346\211\213\346\234\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = table_workers_info->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("Admin_main_page", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = table_workers_info->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("Admin_main_page", "\347\234\201\344\273\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = table_workers_info->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("Admin_main_page", "\345\237\216\345\270\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = table_workers_info->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("Admin_main_page", "\345\214\272\345\216\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = table_workers_info->horizontalHeaderItem(7);
        ___qtablewidgetitem20->setText(QApplication::translate("Admin_main_page", "\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = table_workers_info->horizontalHeaderItem(8);
        ___qtablewidgetitem21->setText(QApplication::translate("Admin_main_page", "\347\224\265\351\202\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = table_workers_info->horizontalHeaderItem(9);
        ___qtablewidgetitem22->setText(QApplication::translate("Admin_main_page", "\351\202\256\347\274\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = table_workers_info->horizontalHeaderItem(10);
        ___qtablewidgetitem23->setText(QApplication::translate("Admin_main_page", "\350\275\246\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = table_workers_info->horizontalHeaderItem(11);
        ___qtablewidgetitem24->setText(QApplication::translate("Admin_main_page", "\347\224\237\346\227\245", nullptr));
        groupBox_2->setTitle(QApplication::translate("Admin_main_page", "\344\272\247\345\223\201\346\225\260\346\215\256\346\237\245\350\257\242", nullptr));
        label_4->setText(QApplication::translate("Admin_main_page", "\345\220\215\347\247\260", nullptr));
        label_2->setText(QApplication::translate("Admin_main_page", "\347\247\215\347\261\273", nullptr));
        combo_products_type->setItemText(0, QApplication::translate("Admin_main_page", "\346\237\234\347\261\273", nullptr));
        combo_products_type->setItemText(1, QApplication::translate("Admin_main_page", "\346\241\214\347\261\273", nullptr));
        combo_products_type->setItemText(2, QApplication::translate("Admin_main_page", "\345\235\220\345\205\267\347\261\273", nullptr));
        combo_products_type->setItemText(3, QApplication::translate("Admin_main_page", "\345\272\212\347\261\273", nullptr));
        combo_products_type->setItemText(4, QApplication::translate("Admin_main_page", "\347\256\261\346\236\266\347\261\273", nullptr));
        combo_products_type->setItemText(5, QApplication::translate("Admin_main_page", "\345\205\266\344\273\226\347\261\273", nullptr));

        combo_products_type->setCurrentText(QApplication::translate("Admin_main_page", "\346\237\234\347\261\273", nullptr));
        label_3->setText(QApplication::translate("Admin_main_page", "\346\235\220\346\226\231", nullptr));
        combo_products_material->setItemText(0, QApplication::translate("Admin_main_page", "\346\234\250\350\264\250", nullptr));
        combo_products_material->setItemText(1, QApplication::translate("Admin_main_page", "\351\207\221\345\261\236", nullptr));
        combo_products_material->setItemText(2, QApplication::translate("Admin_main_page", "\345\241\221\346\226\231", nullptr));
        combo_products_material->setItemText(3, QApplication::translate("Admin_main_page", "\347\253\271\350\227\244", nullptr));
        combo_products_material->setItemText(4, QApplication::translate("Admin_main_page", "\347\216\273\347\222\203", nullptr));
        combo_products_material->setItemText(5, QApplication::translate("Admin_main_page", "\347\232\256\345\270\203", nullptr));
        combo_products_material->setItemText(6, QApplication::translate("Admin_main_page", "\345\244\215\345\220\210", nullptr));
        combo_products_material->setItemText(7, QApplication::translate("Admin_main_page", "\345\205\266\344\273\226", nullptr));

        label_7->setText(QApplication::translate("Admin_main_page", "\351\243\216\346\240\274", nullptr));
        combo_products_style->setItemText(0, QApplication::translate("Admin_main_page", "\346\254\247\345\274\217", nullptr));
        combo_products_style->setItemText(1, QApplication::translate("Admin_main_page", "\347\256\200\346\254\247", nullptr));
        combo_products_style->setItemText(2, QApplication::translate("Admin_main_page", "\345\214\227\346\254\247", nullptr));
        combo_products_style->setItemText(3, QApplication::translate("Admin_main_page", "\344\270\255\345\274\217", nullptr));
        combo_products_style->setItemText(4, QApplication::translate("Admin_main_page", "\346\226\260\344\270\255\345\274\217", nullptr));
        combo_products_style->setItemText(5, QApplication::translate("Admin_main_page", "\347\216\260\344\273\243\351\243\216", nullptr));
        combo_products_style->setItemText(6, QApplication::translate("Admin_main_page", "\347\276\216\345\274\217", nullptr));
        combo_products_style->setItemText(7, QApplication::translate("Admin_main_page", "\345\234\260\344\270\255\346\265\267", nullptr));
        combo_products_style->setItemText(8, QApplication::translate("Admin_main_page", "\347\224\260\345\233\255", nullptr));
        combo_products_style->setItemText(9, QApplication::translate("Admin_main_page", "\346\227\245\345\274\217", nullptr));
        combo_products_style->setItemText(10, QApplication::translate("Admin_main_page", "\344\270\234\345\215\227\344\272\232", nullptr));
        combo_products_style->setItemText(11, QApplication::translate("Admin_main_page", "\346\226\260\345\217\244\345\205\270", nullptr));
        combo_products_style->setItemText(12, QApplication::translate("Admin_main_page", "\345\205\266\344\273\226", nullptr));

        label_5->setText(QApplication::translate("Admin_main_page", "\350\264\250\351\207\217", nullptr));
        label_10->setText(QApplication::translate("Admin_main_page", "\344\275\223\347\247\257", nullptr));
        label_6->setText(QApplication::translate("Admin_main_page", "\344\273\267\346\240\274", nullptr));
        label_8->setText(QApplication::translate("Admin_main_page", "min", nullptr));
        label_9->setText(QApplication::translate("Admin_main_page", "max", nullptr));
        label_11->setText(QApplication::translate("Admin_main_page", "min", nullptr));
        label_12->setText(QApplication::translate("Admin_main_page", "max", nullptr));
        label_13->setText(QApplication::translate("Admin_main_page", "min", nullptr));
        label_14->setText(QApplication::translate("Admin_main_page", "max", nullptr));
        pushButton_query_products->setText(QApplication::translate("Admin_main_page", "\346\235\241\344\273\266\346\237\245\350\257\242", nullptr));
        pushButton_query_products_all->setText(QApplication::translate("Admin_main_page", "\346\237\245\350\257\242\346\211\200\346\234\211", nullptr));
        groupBox->setTitle(QApplication::translate("Admin_main_page", "\344\272\247\345\223\201\346\225\260\346\215\256\346\267\273\345\212\240", nullptr));
        label_19->setText(QApplication::translate("Admin_main_page", "\351\207\215\351\207\217", nullptr));
        label_22->setText(QApplication::translate("Admin_main_page", "\344\275\223\347\247\257", nullptr));
        label_25->setText(QApplication::translate("Admin_main_page", "\344\273\267\346\240\274", nullptr));
        label_26->setText(QApplication::translate("Admin_main_page", "\350\275\246\351\227\264", nullptr));
        combo_workshop_add->setItemText(0, QString());

        label_15->setText(QApplication::translate("Admin_main_page", "\345\220\215\347\247\260", nullptr));
        label_16->setText(QApplication::translate("Admin_main_page", "\347\247\215\347\261\273", nullptr));
        combo_products_type_add->setItemText(0, QApplication::translate("Admin_main_page", "\346\237\234\347\261\273", nullptr));
        combo_products_type_add->setItemText(1, QApplication::translate("Admin_main_page", "\346\241\214\347\261\273", nullptr));
        combo_products_type_add->setItemText(2, QApplication::translate("Admin_main_page", "\345\235\220\345\205\267\347\261\273", nullptr));
        combo_products_type_add->setItemText(3, QApplication::translate("Admin_main_page", "\345\272\212\347\261\273", nullptr));
        combo_products_type_add->setItemText(4, QApplication::translate("Admin_main_page", "\347\256\261\346\236\266\347\261\273", nullptr));
        combo_products_type_add->setItemText(5, QApplication::translate("Admin_main_page", "\345\205\266\344\273\226\347\261\273", nullptr));

        combo_products_type_add->setCurrentText(QApplication::translate("Admin_main_page", "\346\237\234\347\261\273", nullptr));
        label_17->setText(QApplication::translate("Admin_main_page", "\346\235\220\346\226\231", nullptr));
        combo_products_material_add->setItemText(0, QApplication::translate("Admin_main_page", "\346\234\250\350\264\250", nullptr));
        combo_products_material_add->setItemText(1, QApplication::translate("Admin_main_page", "\351\207\221\345\261\236", nullptr));
        combo_products_material_add->setItemText(2, QApplication::translate("Admin_main_page", "\345\241\221\346\226\231", nullptr));
        combo_products_material_add->setItemText(3, QApplication::translate("Admin_main_page", "\347\253\271\350\227\244", nullptr));
        combo_products_material_add->setItemText(4, QApplication::translate("Admin_main_page", "\347\216\273\347\222\203", nullptr));
        combo_products_material_add->setItemText(5, QApplication::translate("Admin_main_page", "\347\232\256\345\270\203", nullptr));
        combo_products_material_add->setItemText(6, QApplication::translate("Admin_main_page", "\345\244\215\345\220\210", nullptr));
        combo_products_material_add->setItemText(7, QApplication::translate("Admin_main_page", "\345\205\266\344\273\226", nullptr));

        label_18->setText(QApplication::translate("Admin_main_page", "\351\243\216\346\240\274", nullptr));
        combo_products_style_add->setItemText(0, QApplication::translate("Admin_main_page", "\346\254\247\345\274\217", nullptr));
        combo_products_style_add->setItemText(1, QApplication::translate("Admin_main_page", "\347\256\200\346\254\247", nullptr));
        combo_products_style_add->setItemText(2, QApplication::translate("Admin_main_page", "\345\214\227\346\254\247", nullptr));
        combo_products_style_add->setItemText(3, QApplication::translate("Admin_main_page", "\344\270\255\345\274\217", nullptr));
        combo_products_style_add->setItemText(4, QApplication::translate("Admin_main_page", "\346\226\260\344\270\255\345\274\217", nullptr));
        combo_products_style_add->setItemText(5, QApplication::translate("Admin_main_page", "\347\216\260\344\273\243\351\243\216", nullptr));
        combo_products_style_add->setItemText(6, QApplication::translate("Admin_main_page", "\347\276\216\345\274\217", nullptr));
        combo_products_style_add->setItemText(7, QApplication::translate("Admin_main_page", "\345\234\260\344\270\255\346\265\267", nullptr));
        combo_products_style_add->setItemText(8, QApplication::translate("Admin_main_page", "\347\224\260\345\233\255", nullptr));
        combo_products_style_add->setItemText(9, QApplication::translate("Admin_main_page", "\346\227\245\345\274\217", nullptr));
        combo_products_style_add->setItemText(10, QApplication::translate("Admin_main_page", "\344\270\234\345\215\227\344\272\232", nullptr));
        combo_products_style_add->setItemText(11, QApplication::translate("Admin_main_page", "\346\226\260\345\217\244\345\205\270", nullptr));
        combo_products_style_add->setItemText(12, QApplication::translate("Admin_main_page", "\345\205\266\344\273\226", nullptr));

        pushButton_add->setText(QApplication::translate("Admin_main_page", "\346\267\273\345\212\240\346\225\260\346\215\256", nullptr));
        groupBox_5->setTitle(QApplication::translate("Admin_main_page", "\344\272\247\345\223\201\346\225\260\346\215\256\345\210\240\351\231\244", nullptr));
        pushButton_delete->setText(QApplication::translate("Admin_main_page", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        menu_customers->setTitle(QApplication::translate("Admin_main_page", "\351\241\276\345\256\242\347\256\241\347\220\206", nullptr));
        menu_sales_shops->setTitle(QApplication::translate("Admin_main_page", "\351\224\200\345\224\256\347\202\271\347\256\241\347\220\206", nullptr));
        menu_workshops->setTitle(QApplication::translate("Admin_main_page", "\350\275\246\351\227\264\347\256\241\347\220\206", nullptr));
        menu_workers->setTitle(QApplication::translate("Admin_main_page", "\345\267\245\344\272\272\347\256\241\347\220\206", nullptr));
        menu_products->setTitle(QApplication::translate("Admin_main_page", "\344\272\247\345\223\201\346\237\245\350\257\242", nullptr));
        menu->setTitle(QApplication::translate("Admin_main_page", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_main_page: public Ui_Admin_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MAIN_PAGE_H
