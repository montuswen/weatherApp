/****************************************************************************
** Meta object code from reading C++ file 'homewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../homewindow.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASShomeWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASShomeWindowENDCLASS = QtMocHelpers::stringData(
    "homeWindow",
    "clickFunctionAdvice",
    "",
    "Setting&",
    "setting",
    "System&",
    "sys",
    "Weather*",
    "weather",
    "clickFunctionCity",
    "backfromFunctionAdvice",
    "backfromFunctionCity"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASShomeWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   38,    2, 0x0a,    1 /* Public */,
       9,    2,   45,    2, 0x0a,    5 /* Public */,
      10,    0,   50,    2, 0x0a,    8 /* Public */,
      11,    0,   51,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject homeWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASShomeWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASShomeWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASShomeWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<homeWindow, std::true_type>,
        // method 'clickFunctionAdvice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Setting &, std::false_type>,
        QtPrivate::TypeAndForceComplete<System &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Weather *, std::false_type>,
        // method 'clickFunctionCity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Setting &, std::false_type>,
        QtPrivate::TypeAndForceComplete<System &, std::false_type>,
        // method 'backfromFunctionAdvice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backfromFunctionCity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void homeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<homeWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clickFunctionAdvice((*reinterpret_cast< std::add_pointer_t<Setting&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<System&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Weather*>>(_a[3]))); break;
        case 1: _t->clickFunctionCity((*reinterpret_cast< std::add_pointer_t<Setting&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<System&>>(_a[2]))); break;
        case 2: _t->backfromFunctionAdvice(); break;
        case 3: _t->backfromFunctionCity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Weather* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *homeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *homeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASShomeWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int homeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
