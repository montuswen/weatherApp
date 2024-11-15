/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../system.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSystemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSystemENDCLASS = QtMocHelpers::stringData(
    "System",
    "cityUpdated",
    "",
    "setAPIKEY",
    "api_key",
    "updateTime",
    "other",
    "updatePosition",
    "getPositionReply",
    "select_time",
    "format_time",
    "select_city",
    "timezone",
    "QTimeZone",
    "lat",
    "lon"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       7,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   45,    2, 0x0a,    9 /* Public */,
       5,    1,   48,    2, 0x0a,   11 /* Public */,
       7,    1,   51,    2, 0x0a,   13 /* Public */,
       8,    0,   54,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QDateTime,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       9, QMetaType::QDateTime, 0x00015003, uint(-1), 0,
      10, QMetaType::QString, 0x00015003, uint(-1), 0,
      11, QMetaType::QString, 0x00015003, uint(-1), 0,
      12, 0x80000000 | 13, 0x0001500b, uint(-1), 0,
      14, QMetaType::Double, 0x00015003, uint(-1), 0,
      15, QMetaType::Double, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSystemENDCLASS_t,
        // property 'api_key'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'select_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'format_time'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'select_city'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'timezone'
        QtPrivate::TypeAndForceComplete<QTimeZone, std::true_type>,
        // property 'lat'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'lon'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<System, std::true_type>,
        // method 'cityUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAPIKEY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        // method 'updatePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getPositionReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cityUpdated(); break;
        case 1: _t->setAPIKEY((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->updateTime((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 3: _t->updatePosition((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->getPositionReply(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::cityUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->api_key; break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->select_time; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->format_time; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->select_city; break;
        case 4: *reinterpret_cast< QTimeZone*>(_v) = _t->timezone; break;
        case 5: *reinterpret_cast< double*>(_v) = _t->lat; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->lon; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->api_key != *reinterpret_cast< QString*>(_v)) {
                _t->api_key = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->select_time != *reinterpret_cast< QDateTime*>(_v)) {
                _t->select_time = *reinterpret_cast< QDateTime*>(_v);
            }
            break;
        case 2:
            if (_t->format_time != *reinterpret_cast< QString*>(_v)) {
                _t->format_time = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->select_city != *reinterpret_cast< QString*>(_v)) {
                _t->select_city = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->timezone != *reinterpret_cast< QTimeZone*>(_v)) {
                _t->timezone = *reinterpret_cast< QTimeZone*>(_v);
            }
            break;
        case 5:
            if (_t->lat != *reinterpret_cast< double*>(_v)) {
                _t->lat = *reinterpret_cast< double*>(_v);
            }
            break;
        case 6:
            if (_t->lon != *reinterpret_cast< double*>(_v)) {
                _t->lon = *reinterpret_cast< double*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void System::cityUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
