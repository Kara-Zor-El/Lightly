/****************************************************************************
** Meta object code from reading C++ file 'lightlybusyindicatorengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/animations/lightlybusyindicatorengine.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightlybusyindicatorengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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
struct qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS = QtMocHelpers::stringData(
    "Lightly::BusyIndicatorEngine",
    "unregisterWidget",
    "",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[29];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS_t qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "Lightly::BusyIndicatorEngine"
        QT_MOC_LITERAL(29, 16),  // "unregisterWidget"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 5)   // "value"
    },
    "Lightly::BusyIndicatorEngine",
    "unregisterWidget",
    "",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QObjectStar,    2,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lightly::BusyIndicatorEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseEngine::staticMetaObject>(),
    qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS_t,
        // property 'value'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BusyIndicatorEngine, std::true_type>,
        // method 'unregisterWidget'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void Lightly::BusyIndicatorEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BusyIndicatorEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->unregisterWidget((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BusyIndicatorEngine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BusyIndicatorEngine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Lightly::BusyIndicatorEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightly::BusyIndicatorEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLightlySCOPEBusyIndicatorEngineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BaseEngine::qt_metacast(_clname);
}

int Lightly::BusyIndicatorEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
