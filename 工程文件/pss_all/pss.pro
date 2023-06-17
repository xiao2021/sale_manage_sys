#-------------------------------------------------
#
# Project created by QtCreator 2023-01-06T13:10:40
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pss
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    admin_main_page.cpp\
    new_delivery.cpp \
    sales_add_order.cpp \
    sales_customers.cpp \
    sales_manager.cpp

HEADERS += \
        mainwindow.h \
    admin_main_page.h\
    new_delivery.h \
    sales_add_order.h \
    sales_customers.h \
    sales_manager.h

FORMS += \
        mainwindow.ui \
    admin_main_page.ui\
    new_delivery.ui \
    sales_add_order.ui \
    sales_customers.ui \
    sales_manager.ui
