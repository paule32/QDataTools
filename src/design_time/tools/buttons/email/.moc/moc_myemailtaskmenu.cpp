/****************************************************************************
** Meta object code from reading C++ file 'myemailtaskmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../myemailtaskmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myemailtaskmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyEmailTaskMenu_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyEmailTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyEmailTaskMenu_t qt_meta_stringdata_MyEmailTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MyEmailTaskMenu"
QT_MOC_LITERAL(1, 16, 9), // "editState"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "MyEmailTaskMenu\0editState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyEmailTaskMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MyEmailTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyEmailTaskMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MyEmailTaskMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyEmailTaskMenu.data,
    qt_meta_data_MyEmailTaskMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyEmailTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyEmailTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyEmailTaskMenu.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(this);
    return QObject::qt_metacast(_clname);
}

int MyEmailTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_MyEmailTaskMenuFactory_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyEmailTaskMenuFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyEmailTaskMenuFactory_t qt_meta_stringdata_MyEmailTaskMenuFactory = {
    {
QT_MOC_LITERAL(0, 0, 22) // "MyEmailTaskMenuFactory"

    },
    "MyEmailTaskMenuFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyEmailTaskMenuFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MyEmailTaskMenuFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MyEmailTaskMenuFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QExtensionFactory::staticMetaObject>(),
    qt_meta_stringdata_MyEmailTaskMenuFactory.data,
    qt_meta_data_MyEmailTaskMenuFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyEmailTaskMenuFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyEmailTaskMenuFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyEmailTaskMenuFactory.stringdata0))
        return static_cast<void*>(this);
    return QExtensionFactory::qt_metacast(_clname);
}

int MyEmailTaskMenuFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
