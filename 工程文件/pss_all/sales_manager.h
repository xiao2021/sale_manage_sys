#ifndef SALES_MANAGER_H
#define SALES_MANAGER_H

#include <QWidget>

namespace Ui {
class sales_manager;
}

class sales_manager : public QWidget
{
    Q_OBJECT

public:
    explicit sales_manager(QWidget *parent = nullptr);
    ~sales_manager();

private slots:
    void on_add_customer_info_clicked();

    void on_add_order_pushbutton_clicked();

    void on_delivery_order_pushbutton_clicked();

private:
    Ui::sales_manager *ui;
};

#endif // SALES_MANAGER_H
