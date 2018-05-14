/****************************************************************************
** Meta object code from reading C++ file 'alertpage9.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ZooFence_Pi/alertpage9.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alertpage9.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_alertPage9_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_alertPage9_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_alertPage9_t qt_meta_stringdata_alertPage9 = {
    {
QT_MOC_LITERAL(0, 0, 10), // "alertPage9"
QT_MOC_LITERAL(1, 11, 12), // "captureImage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "saveImage"
QT_MOC_LITERAL(4, 35, 8), // "showInfo"
QT_MOC_LITERAL(5, 44, 23) // "on_pushButton_3_clicked"

    },
    "alertPage9\0captureImage\0\0saveImage\0"
    "showInfo\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_alertPage9[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    2,   35,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void alertPage9::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        alertPage9 *_t = static_cast<alertPage9 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->captureImage(); break;
        case 1: _t->saveImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 2: _t->showInfo(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject alertPage9::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_alertPage9.data,
      qt_meta_data_alertPage9,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *alertPage9::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *alertPage9::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_alertPage9.stringdata0))
        return static_cast<void*>(const_cast< alertPage9*>(this));
    return QWidget::qt_metacast(_clname);
}

int alertPage9::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
