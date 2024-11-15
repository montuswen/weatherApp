/****************************************************************************
** Meta object code from reading C++ file 'weather.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../weather.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weather.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWeatherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWeatherENDCLASS = QtMocHelpers::stringData(
    "Weather",
    "WeatherGeted",
    "",
    "IconGeted",
    "handleWeatherResponse",
    "handleIconResponse",
    "description",
    "temperature",
    "humidity",
    "airPressure",
    "windKph",
    "ultravioletRay"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWeatherENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    7 /* Public */,
       3,    0,   39,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x08,    9 /* Private */,
       5,    0,   41,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       6, QMetaType::QString, 0x00015003, uint(-1), 0,
       7, QMetaType::Int, 0x00015003, uint(-1), 0,
       8, QMetaType::Int, 0x00015003, uint(-1), 0,
       9, QMetaType::Int, 0x00015003, uint(-1), 0,
      10, QMetaType::Int, 0x00015003, uint(-1), 0,
      11, QMetaType::Int, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Weather::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSWeatherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWeatherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWeatherENDCLASS_t,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'temperature'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'humidity'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'airPressure'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'windKph'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'ultravioletRay'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Weather, std::true_type>,
        // method 'WeatherGeted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'IconGeted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleWeatherResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleIconResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Weather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Weather *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->WeatherGeted(); break;
        case 1: _t->IconGeted(); break;
        case 2: _t->handleWeatherResponse(); break;
        case 3: _t->handleIconResponse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Weather::*)();
            if (_t _q_method = &Weather::WeatherGeted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Weather::*)();
            if (_t _q_method = &Weather::IconGeted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Weather *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->description; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->temperature; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->humidity; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->airPressure; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->windKph; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->ultravioletRay; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Weather *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->description != *reinterpret_cast< QString*>(_v)) {
                _t->description = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->temperature != *reinterpret_cast< int*>(_v)) {
                _t->temperature = *reinterpret_cast< int*>(_v);
            }
            break;
        case 2:
            if (_t->humidity != *reinterpret_cast< int*>(_v)) {
                _t->humidity = *reinterpret_cast< int*>(_v);
            }
            break;
        case 3:
            if (_t->airPressure != *reinterpret_cast< int*>(_v)) {
                _t->airPressure = *reinterpret_cast< int*>(_v);
            }
            break;
        case 4:
            if (_t->windKph != *reinterpret_cast< int*>(_v)) {
                _t->windKph = *reinterpret_cast< int*>(_v);
            }
            break;
        case 5:
            if (_t->ultravioletRay != *reinterpret_cast< int*>(_v)) {
                _t->ultravioletRay = *reinterpret_cast< int*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *Weather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Weather::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWeatherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Weather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Weather::WeatherGeted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Weather::IconGeted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
