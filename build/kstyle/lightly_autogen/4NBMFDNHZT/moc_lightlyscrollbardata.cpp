/****************************************************************************
** Meta object code from reading C++ file 'lightlyscrollbardata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/animations/lightlyscrollbardata.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightlyscrollbardata.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS = QtMocHelpers::stringData(
    "Lightly::ScrollBarData",
    "clearAddLineRect",
    "",
    "clearSubLineRect",
    "addLineOpacity",
    "subLineOpacity",
    "grooveOpacity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[23];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS_t qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "Lightly::ScrollBarData"
        QT_MOC_LITERAL(23, 16),  // "clearAddLineRect"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 16),  // "clearSubLineRect"
        QT_MOC_LITERAL(58, 14),  // "addLineOpacity"
        QT_MOC_LITERAL(73, 14),  // "subLineOpacity"
        QT_MOC_LITERAL(88, 13)   // "grooveOpacity"
    },
    "Lightly::ScrollBarData",
    "clearAddLineRect",
    "",
    "clearSubLineRect",
    "addLineOpacity",
    "subLineOpacity",
    "grooveOpacity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLightlySCOPEScrollBarDataENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x09,    4 /* Protected */,
       3,    0,   27,    2, 0x09,    5 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00015103, uint(-1), 0,
       5, QMetaType::QReal, 0x00015103, uint(-1), 0,
       6, QMetaType::QReal, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lightly::ScrollBarData::staticMetaObject = { {
    QMetaObject::SuperData::link<WidgetStateData::staticMetaObject>(),
    qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLightlySCOPEScrollBarDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS_t,
        // property 'addLineOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'subLineOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'grooveOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScrollBarData, std::true_type>,
        // method 'clearAddLineRect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSubLineRect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Lightly::ScrollBarData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScrollBarData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clearAddLineRect(); break;
        case 1: _t->clearSubLineRect(); break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScrollBarData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->addLineOpacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->subLineOpacity(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->grooveOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScrollBarData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddLineOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSubLineOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setGrooveOpacity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *Lightly::ScrollBarData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightly::ScrollBarData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLightlySCOPEScrollBarDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return WidgetStateData::qt_metacast(_clname);
}

int Lightly::ScrollBarData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WidgetStateData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
