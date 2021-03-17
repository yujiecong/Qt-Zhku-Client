/****************************************************************************
** Meta object code from reading C++ file 'ZhkuClientMain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ZhkuClientMain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZhkuClientMain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZhkuClientMain_t {
    QByteArrayData data[11];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZhkuClientMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZhkuClientMain_t qt_meta_stringdata_ZhkuClientMain = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ZhkuClientMain"
QT_MOC_LITERAL(1, 15, 14), // "loginSuccessed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "getUserInfo"
QT_MOC_LITERAL(4, 43, 13), // "getCurriculum"
QT_MOC_LITERAL(5, 57, 15), // "getStudentScore"
QT_MOC_LITERAL(6, 73, 19), // "getDistributedScore"
QT_MOC_LITERAL(7, 93, 30), // "createCurriculumArrangement_Ui"
QT_MOC_LITERAL(8, 124, 19), // "createQueryScore_Ui"
QT_MOC_LITERAL(9, 144, 25), // "createDistributedScore_Ui"
QT_MOC_LITERAL(10, 170, 10) // "removeMyUi"

    },
    "ZhkuClientMain\0loginSuccessed\0\0"
    "getUserInfo\0getCurriculum\0getStudentScore\0"
    "getDistributedScore\0createCurriculumArrangement_Ui\0"
    "createQueryScore_Ui\0createDistributedScore_Ui\0"
    "removeMyUi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZhkuClientMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

void ZhkuClientMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZhkuClientMain *_t = static_cast<ZhkuClientMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginSuccessed(); break;
        case 1: _t->getUserInfo(); break;
        case 2: _t->getCurriculum(); break;
        case 3: _t->getStudentScore(); break;
        case 4: _t->getDistributedScore(); break;
        case 5: _t->createCurriculumArrangement_Ui(); break;
        case 6: _t->createQueryScore_Ui(); break;
        case 7: _t->createDistributedScore_Ui(); break;
        case 8: _t->removeMyUi(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ZhkuClientMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZhkuClientMain.data,
      qt_meta_data_ZhkuClientMain,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ZhkuClientMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZhkuClientMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZhkuClientMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ZhkuClientMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
