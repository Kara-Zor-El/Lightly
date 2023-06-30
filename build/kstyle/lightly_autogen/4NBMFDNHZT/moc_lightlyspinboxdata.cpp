/****************************************************************************
** Meta object code from reading C++ file 'lightlyspinboxdata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/animations/lightlyspinboxdata.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightlyspinboxdata.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS = QtMocHelpers::stringData(
    "Lightly::SpinBoxData",
    "upArrowOpacity",
    "downArrowOpacity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS_t qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "Lightly::SpinBoxData"
        QT_MOC_LITERAL(21, 14),  // "upArrowOpacity"
        QT_MOC_LITERAL(36, 16)   // "downArrowOpacity"
    },
    "Lightly::SpinBoxData",
    "upArrowOpacity",
    "downArrowOpacity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLightlySCOPESpinBoxDataENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00015103, uint(-1), 0,
       2, QMetaType::QReal, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lightly::SpinBoxData::staticMetaObject = { {
    QMetaObject::SuperData::link<AnimationData::staticMetaObject>(),
    qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLightlySCOPESpinBoxDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS_t,
        // property 'upArrowOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'downArrowOpacity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpinBoxData, std::true_type>
    >,
    nullptr
} };

void Lightly::SpinBoxData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SpinBoxData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->upArrowOpacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->downArrowOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SpinBoxData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUpArrowOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setDownArrowOpacity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Lightly::SpinBoxData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightly::SpinBoxData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLightlySCOPESpinBoxDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AnimationData::qt_metacast(_clname);
}

int Lightly::SpinBoxData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimationData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
