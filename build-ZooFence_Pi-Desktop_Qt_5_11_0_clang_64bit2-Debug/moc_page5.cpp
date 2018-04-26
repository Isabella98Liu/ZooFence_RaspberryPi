/****************************************************************************
** Meta object code from reading C++ file 'page5.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ZooFence_Pi/page5.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page5.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_page5_t {
    QByteArrayData data[7];
    char stringdata0[99];
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
QT_MOC_LITERAL(4, 41, 11), // "timerUpdate"
QT_MOC_LITERAL(5, 53, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 77, 21) // "on_pushButton_clicked"

    },
    "page5\0return_index_5_4\0\0switch_index_5_6\0"
    "timerUpdate\0on_pushButton_4_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page5[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
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
        case 2: _t->timerUpdate(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (page5::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page5::return_index_5_4)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (page5::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page5::switch_index_5_6)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject page5::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_page5.data,
      qt_meta_data_page5,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *page5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_page5.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int page5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void page5::return_index_5_4()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void page5::switch_index_5_6()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
