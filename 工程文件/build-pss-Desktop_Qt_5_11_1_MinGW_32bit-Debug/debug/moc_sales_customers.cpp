/****************************************************************************
** Meta object code from reading C++ file 'sales_customers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pss_all/sales_customers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sales_customers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sales_customers_t {
    QByteArrayData data[12];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sales_customers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sales_customers_t qt_meta_stringdata_sales_customers = {
    {
QT_MOC_LITERAL(0, 0, 15), // "sales_customers"
QT_MOC_LITERAL(1, 16, 31), // "on_update_customer_info_clicked"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(4, 70, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 82, 5), // "index"
QT_MOC_LITERAL(6, 88, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 112, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 134, 26), // "on_delete_customer_clicked"
QT_MOC_LITERAL(9, 161, 23), // "on_add_customer_clicked"
QT_MOC_LITERAL(10, 185, 26), // "on_search_customer_clicked"
QT_MOC_LITERAL(11, 212, 22) // "on_return_menu_clicked"

    },
    "sales_customers\0on_update_customer_info_clicked\0"
    "\0on_tableView_clicked\0QModelIndex\0"
    "index\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_delete_customer_clicked\0"
    "on_add_customer_clicked\0"
    "on_search_customer_clicked\0"
    "on_return_menu_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sales_customers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sales_customers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sales_customers *_t = static_cast<sales_customers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_update_customer_info_clicked(); break;
        case 1: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_delete_customer_clicked(); break;
        case 5: _t->on_add_customer_clicked(); break;
        case 6: _t->on_search_customer_clicked(); break;
        case 7: _t->on_return_menu_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sales_customers::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sales_customers.data,
      qt_meta_data_sales_customers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sales_customers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sales_customers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sales_customers.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sales_customers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
