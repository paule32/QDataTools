/****************************************************************************
** Meta object code from reading C++ file 'qdatatablewizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../qdatatablewizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatatablewizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDataTableWizard_t {
    QByteArrayData data[12];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDataTableWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDataTableWizard_t qt_meta_stringdata_QDataTableWizard = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QDataTableWizard"
QT_MOC_LITERAL(1, 17, 24), // "on_connectButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 27), // "on_dbListWidget_itemClicked"
QT_MOC_LITERAL(4, 71, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 88, 4), // "item"
QT_MOC_LITERAL(6, 93, 30), // "on_tableListWidget_itemClicked"
QT_MOC_LITERAL(7, 124, 28), // "on_cmdButtonAddTable_clicked"
QT_MOC_LITERAL(8, 153, 28), // "on_cmdButtonDelTable_clicked"
QT_MOC_LITERAL(9, 182, 34), // "on_tableWidget_3_itemDoubleCl..."
QT_MOC_LITERAL(10, 217, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(11, 235, 23) // "on_donateButton_clicked"

    },
    "QDataTableWizard\0on_connectButton_clicked\0"
    "\0on_dbListWidget_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_tableListWidget_itemClicked\0"
    "on_cmdButtonAddTable_clicked\0"
    "on_cmdButtonDelTable_clicked\0"
    "on_tableWidget_3_itemDoubleClicked\0"
    "QTableWidgetItem*\0on_donateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDataTableWizard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    5,
    QMetaType::Void,

       0        // eod
};

void QDataTableWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDataTableWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_connectButton_clicked(); break;
        case 1: _t->on_dbListWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_tableListWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_cmdButtonAddTable_clicked(); break;
        case 4: _t->on_cmdButtonDelTable_clicked(); break;
        case 5: _t->on_tableWidget_3_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_donateButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QDataTableWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_QDataTableWizard.data,
    qt_meta_data_QDataTableWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QDataTableWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDataTableWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDataTableWizard.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int QDataTableWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
