/****************************************************************************
** Meta object code from reading C++ file 'lightlytabbarengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/animations/lightlytabbarengine.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightlytabbarengine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS = QtMocHelpers::stringData(
    "Lightly::TabBarEngine",
    "unregisterWidget",
    "",
    "object"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[22];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS_t qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "Lightly::TabBarEngine"
        QT_MOC_LITERAL(22, 16),  // "unregisterWidget"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 6)   // "object"
    },
    "Lightly::TabBarEngine",
    "unregisterWidget",
    "",
    "object"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLightlySCOPETabBarEngineENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QObjectStar,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lightly::TabBarEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseEngine::staticMetaObject>(),
    qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLightlySCOPETabBarEngineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TabBarEngine, std::true_type>,
        // method 'unregisterWidget'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void Lightly::TabBarEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabBarEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->unregisterWidget((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Lightly::TabBarEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightly::TabBarEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLightlySCOPETabBarEngineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BaseEngine::qt_metacast(_clname);
}

int Lightly::TabBarEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}
QT_WARNING_POP
