/****************************************************************************
** Meta object code from reading C++ file 'admin_main_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pss_all/admin_main_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_main_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admin_main_page_t {
    QByteArrayData data[19];
    char stringdata0[444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_main_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_main_page_t qt_meta_stringdata_Admin_main_page = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Admin_main_page"
QT_MOC_LITERAL(1, 16, 36), // "on_pushButton_query_products_..."
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 35), // "on_table_customers_info_cellC..."
QT_MOC_LITERAL(4, 90, 3), // "row"
QT_MOC_LITERAL(5, 94, 6), // "column"
QT_MOC_LITERAL(6, 101, 41), // "on_table_customers_info_cellD..."
QT_MOC_LITERAL(7, 143, 39), // "on_table_workers_info_cellDou..."
QT_MOC_LITERAL(8, 183, 33), // "on_table_workers_info_cellCha..."
QT_MOC_LITERAL(9, 217, 33), // "on_table_workers_info_cellCli..."
QT_MOC_LITERAL(10, 251, 16), // "statusBar_update"
QT_MOC_LITERAL(11, 268, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(12, 294, 13), // "disconnect_db"
QT_MOC_LITERAL(13, 308, 12), // "reconnect_db"
QT_MOC_LITERAL(14, 321, 40), // "on_pushButton_query_products_..."
QT_MOC_LITERAL(15, 362, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(16, 391, 34), // "on_tableView_products_info_cl..."
QT_MOC_LITERAL(17, 426, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 438, 5) // "index"

    },
    "Admin_main_page\0on_pushButton_query_products_clicked\0"
    "\0on_table_customers_info_cellChanged\0"
    "row\0column\0on_table_customers_info_cellDoubleClicked\0"
    "on_table_workers_info_cellDoubleClicked\0"
    "on_table_workers_info_cellChanged\0"
    "on_table_workers_info_cellClicked\0"
    "statusBar_update\0on_pushButton_add_clicked\0"
    "disconnect_db\0reconnect_db\0"
    "on_pushButton_query_products_all_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_tableView_products_info_clicked\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin_main_page[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    2,   80,    2, 0x08 /* Private */,
       6,    2,   85,    2, 0x08 /* Private */,
       7,    2,   90,    2, 0x08 /* Private */,
       8,    2,   95,    2, 0x08 /* Private */,
       9,    2,  100,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void Admin_main_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Admin_main_page *_t = static_cast<Admin_main_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_query_products_clicked(); break;
        case 1: _t->on_table_customers_info_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_table_customers_info_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_table_workers_info_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_table_workers_info_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_table_workers_info_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->statusBar_update(); break;
        case 7: _t->on_pushButton_add_clicked(); break;
        case 8: _t->disconnect_db(); break;
        case 9: _t->reconnect_db(); break;
        case 10: _t->on_pushButton_query_products_all_clicked(); break;
        case 11: _t->on_pushButton_delete_clicked(); break;
        case 12: _t->on_tableView_products_info_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Admin_main_page::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Admin_main_page.data,
      qt_meta_data_Admin_main_page,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Admin_main_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin_main_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admin_main_page.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Admin_main_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
