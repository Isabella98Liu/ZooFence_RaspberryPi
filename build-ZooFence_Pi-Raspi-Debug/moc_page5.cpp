/****************************************************************************
** Meta object code from reading C++ file 'page5.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ZooFence_Pi/page5.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page5.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_page5_t {
    QByteArrayData data[11];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_page5_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_page5_t qt_meta_stringdata_page5 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "page5"
QT_MOC_LITERAL(1, 6, 16), // "return_index_5_4"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "switch_index_5_6"
QT_MOC_LITERAL(4, 41, 17), // "switch_index_5_10"
QT_MOC_LITERAL(5, 59, 16), // "switch_index_5_7"
QT_MOC_LITERAL(6, 76, 11), // "timerUpdate"
QT_MOC_LITERAL(7, 88, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(8, 112, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 134, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 158, 23) // "on_pushButton_3_clicked"

    },
    "page5\0return_index_5_4\0\0switch_index_5_6\0"
    "switch_index_5_10\0switch_index_5_7\0"
    "timerUpdate\0on_pushButton_4_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page5[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void page5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        page5 *_t = static_cast<page5 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->return_index_5_4(); break;
        case 1: _t->switch_index_5_6(); break;
        case 2: _t->switch_index_5_10(); break;
        case 3: _t->switch_index_5_7(); break;
        case 4: _t->timerUpdate(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (page5::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&page5::return_index_5_4)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (page5::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&page5::switch_index_5_6)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (page5::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&page5::switch_index_5_10)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (page5::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&page5::switch_index_5_7)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject page5::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_page5.data,
      qt_meta_data_page5,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *page5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page5::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_page5.stringdata0))
        return static_cast<void*>(const_cast< page5*>(this));
    return QWidget::qt_metacast(_clname);
}

int page5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void page5::return_index_5_4()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void page5::switch_index_5_6()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void page5::switch_index_5_10()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void page5::switch_index_5_7()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
