/****************************************************************************
** Meta object code from reading C++ file 'ExamArrangement_Ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ExamArrangement_Ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExamArrangement_Ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExamArrangement_Ui_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExamArrangement_Ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExamArrangement_Ui_t qt_meta_stringdata_ExamArrangement_Ui = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ExamArrangement_Ui"
QT_MOC_LITERAL(1, 19, 9), // "queryExam"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "currentIndexChanged"
QT_MOC_LITERAL(4, 50, 5), // "index"
QT_MOC_LITERAL(5, 56, 8), // "setCombo"
QT_MOC_LITERAL(6, 65, 1), // "l"
QT_MOC_LITERAL(7, 67, 9), // "insertImg"
QT_MOC_LITERAL(8, 77, 9), // "ImgLabel*"
QT_MOC_LITERAL(9, 87, 3), // "img"
QT_MOC_LITERAL(10, 91, 19), // "on_queryBtn_clicked"
QT_MOC_LITERAL(11, 111, 33), // "on_comboBox_2_currentIndexCha..."
QT_MOC_LITERAL(12, 145, 31) // "on_comboBox_currentIndexChanged"

    },
    "ExamArrangement_Ui\0queryExam\0\0"
    "currentIndexChanged\0index\0setCombo\0l\0"
    "insertImg\0ImgLabel*\0img\0on_queryBtn_clicked\0"
    "on_comboBox_2_currentIndexChanged\0"
    "on_comboBox_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExamArrangement_Ui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    1,   60,    2, 0x08 /* Private */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ExamArrangement_Ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExamArrangement_Ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->queryExam(); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->setCombo((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->insertImg((*reinterpret_cast< ImgLabel*(*)>(_a[1]))); break;
        case 4: _t->on_queryBtn_clicked(); break;
        case 5: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExamArrangement_Ui::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExamArrangement_Ui::queryExam)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExamArrangement_Ui::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExamArrangement_Ui::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExamArrangement_Ui::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ExamArrangement_Ui.data,
    qt_meta_data_ExamArrangement_Ui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExamArrangement_Ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExamArrangement_Ui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExamArrangement_Ui.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExamArrangement_Ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ExamArrangement_Ui::queryExam()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ExamArrangement_Ui::currentIndexChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
