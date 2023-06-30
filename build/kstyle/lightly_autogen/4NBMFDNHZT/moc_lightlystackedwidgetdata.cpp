/****************************************************************************
** Meta object code from reading C++ file 'lightlystackedwidgetdata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/animations/lightlystackedwidgetdata.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightlystackedwidgetdata.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS = QtMocHelpers::stringData(
    "Lightly::StackedWidgetData",
    "initializeAnimation",
    "",
    "animate",
    "finishAnimation",
    "targetDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[27];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[16];
    char stringdata5[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS_t qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "Lightly::StackedWidgetData"
        QT_MOC_LITERAL(27, 19),  // "initializeAnimation"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 7),  // "animate"
        QT_MOC_LITERAL(56, 15),  // "finishAnimation"
        QT_MOC_LITERAL(72, 15)   // "targetDestroyed"
    },
    "Lightly::StackedWidgetData",
    "initializeAnimation",
    "",
    "animate",
    "finishAnimation",
    "targetDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLightlySCOPEStackedWidgetDataENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x09,    1 /* Protected */,
       3,    0,   39,    2, 0x09,    2 /* Protected */,
       4,    0,   40,    2, 0x09,    3 /* Protected */,
       5,    0,   41,    2, 0x09,    4 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lightly::StackedWidgetData::staticMetaObject = { {
    QMetaObject::SuperData::link<TransitionData::staticMetaObject>(),
    qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLightlySCOPEStackedWidgetDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StackedWidgetData, std::true_type>,
        // method 'initializeAnimation'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'animate'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'finishAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'targetDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Lightly::StackedWidgetData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StackedWidgetData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->initializeAnimation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->animate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->finishAnimation(); break;
        case 3: _t->targetDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObject *Lightly::StackedWidgetData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightly::StackedWidgetData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLightlySCOPEStackedWidgetDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TransitionData::qt_metacast(_clname);
}

int Lightly::StackedWidgetData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransitionData::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
