/****************************************************************************
** Meta object code from reading C++ file 'star.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../star.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'star.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStarENDCLASS = QtMocHelpers::stringData(
    "Star",
    "suninfoUpdate",
    "",
    "mooninfoUpdate",
    "getSuninfo",
    "getMooninfo",
    "api_key",
    "select_time",
    "select_city",
    "sunrise",
    "sunset",
    "solarNoon",
    "lat",
    "lon"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    9 /* Public */,
       3,    0,   39,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x08,   11 /* Private */,
       5,    0,   41,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       6, QMetaType::QString, 0x00015003, uint(-1), 0,
       7, QMetaType::QDateTime, 0x00015003, uint(-1), 0,
       8, QMetaType::QString, 0x00015003, uint(-1), 0,
       9, QMetaType::QString, 0x00015003, uint(-1), 0,
      10, QMetaType::QString, 0x00015003, uint(-1), 0,
      11, QMetaType::QString, 0x00015003, uint(-1), 0,
      12, QMetaType::Double, 0x00015003, uint(-1), 0,
      13, QMetaType::Double, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Star::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSStarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStarENDCLASS_t,
        // property 'api_key'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'select_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'select_city'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sunrise'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sunset'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'solarNoon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'lat'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'lon'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Star, std::true_type>,
        // method 'suninfoUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mooninfoUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getSuninfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getMooninfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Star::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Star *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suninfoUpdate(); break;
        case 1: _t->mooninfoUpdate(); break;
        case 2: _t->getSuninfo(); break;
        case 3: _t->getMooninfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Star::*)();
            if (_t _q_method = &Star::suninfoUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Star::*)();
            if (_t _q_method = &Star::mooninfoUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Star *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->api_key; break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->select_time; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->select_city; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sunrise; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->sunset; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->solarNoon; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->lat; break;
        case 7: *reinterpret_cast< double*>(_v) = _t->lon; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Star *>(_o);
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
            if (_t->select_city != *reinterpret_cast< QString*>(_v)) {
                _t->select_city = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->sunrise != *reinterpret_cast< QString*>(_v)) {
                _t->sunrise = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->sunset != *reinterpret_cast< QString*>(_v)) {
                _t->sunset = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 5:
            if (_t->solarNoon != *reinterpret_cast< QString*>(_v)) {
                _t->solarNoon = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 6:
            if (_t->lat != *reinterpret_cast< double*>(_v)) {
                _t->lat = *reinterpret_cast< double*>(_v);
            }
            break;
        case 7:
            if (_t->lon != *reinterpret_cast< double*>(_v)) {
                _t->lon = *reinterpret_cast< double*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *Star::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Star::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Star::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Star::suninfoUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Star::mooninfoUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
