/****************************************************************************
** Meta object code from reading C++ file 'MoreWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MoreWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MoreWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoreWidget_t {
    QByteArrayData data[12];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoreWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoreWidget_t qt_meta_stringdata_MoreWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MoreWidget"
QT_MOC_LITERAL(1, 11, 17), // "signalsGetCodeImg"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 52, 13), // "slotsShowPage"
QT_MOC_LITERAL(5, 66, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 90, 30), // "slotsGetCurriculum_Arrangement"
QT_MOC_LITERAL(7, 121, 15), // "slotsGetCodeImg"
QT_MOC_LITERAL(8, 137, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(9, 161, 4), // "arg1"
QT_MOC_LITERAL(10, 166, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(11, 191, 24) // "on_pushButton_21_clicked"

    },
    "MoreWidget\0signalsGetCodeImg\0\0"
    "on_pushButton_clicked\0slotsShowPage\0"
    "on_pushButton_2_clicked\0"
    "slotsGetCurriculum_Arrangement\0"
    "slotsGetCodeImg\0on_lineEdit_textChanged\0"
    "arg1\0on_pushButton_11_clicked\0"
    "on_pushButton_21_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoreWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MoreWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoreWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalsGetCodeImg(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->slotsShowPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->slotsGetCurriculum_Arrangement(); break;
        case 5: _t->slotsGetCodeImg(); break;
        case 6: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_11_clicked(); break;
        case 8: _t->on_pushButton_21_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MoreWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoreWidget::signalsGetCodeImg)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoreWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MoreWidget.data,
    qt_meta_data_MoreWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoreWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoreWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoreWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MoreWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MoreWidget::signalsGetCodeImg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
