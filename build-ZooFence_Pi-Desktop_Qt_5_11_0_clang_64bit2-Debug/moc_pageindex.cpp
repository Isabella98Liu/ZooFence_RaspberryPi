/****************************************************************************
** Meta object code from reading C++ file 'pageindex.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ZooFence_Pi/pageindex.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageindex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pageIndex_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pageIndex_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pageIndex_t qt_meta_stringdata_pageIndex = {
    {
QT_MOC_LITERAL(0, 0, 9), // "pageIndex"
QT_MOC_LITERAL(1, 10, 15), // "switch_page_1_2"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "switch_page_2_3"
QT_MOC_LITERAL(4, 43, 15), // "switch_page_2_4"
QT_MOC_LITERAL(5, 59, 15), // "switch_page_4_5"
QT_MOC_LITERAL(6, 75, 15), // "switch_page_5_6"
QT_MOC_LITERAL(7, 91, 15), // "return_page_3_2"
QT_MOC_LITERAL(8, 107, 15), // "return_page_4_2"
QT_MOC_LITERAL(9, 123, 15) // "return_page_5_4"

    },
    "pageIndex\0switch_page_1_2\0\0switch_page_2_3\0"
    "switch_page_2_4\0switch_page_4_5\0"
    "switch_page_5_6\0return_page_3_2\0"
    "return_page_4_2\0return_page_5_4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pageIndex[] = {

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
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pageIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pageIndex *_t = static_cast<pageIndex *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switch_page_1_2(); break;
        case 1: _t->switch_page_2_3(); break;
        case 2: _t->switch_page_2_4(); break;
        case 3: _t->switch_page_4_5(); break;
        case 4: _t->switch_page_5_6(); break;
        case 5: _t->return_page_3_2(); break;
        case 6: _t->return_page_4_2(); break;
        case 7: _t->return_page_5_4(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject pageIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pageIndex.data,
      qt_meta_data_pageIndex,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pageIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pageIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pageIndex.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pageIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
