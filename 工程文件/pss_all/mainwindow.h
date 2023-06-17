#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void connect_database();
    void statusBar_init();

private slots:

    void on_pushButton_ok_clicked();
    void statusBar_update();
private:
    Ui::MainWindow *ui;
    QLabel *datetime_label;
};

#endif // MAINWINDOW_H
