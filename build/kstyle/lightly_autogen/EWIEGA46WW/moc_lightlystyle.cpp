/****************************************************************************
** Meta object code from reading C++ file 'lightlystyle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/lightlystyle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightlystyle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS = QtMocHelpers::stringData(
    "Lightly::Style",
    "X-KDE-CustomElements",
    "true",
    "configurationChanged",
    "",
    "standardIconImplementation",
    "StandardPixmap",
    "const QStyleOption*",
    "const QWidget*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[21];
    char stringdata2[5];
    char stringdata3[21];
    char stringdata4[1];
    char stringdata5[27];
    char stringdata6[15];
    char stringdata7[20];
    char stringdata8[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS_t qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "Lightly::Style"
        QT_MOC_LITERAL(15, 20),  // "X-KDE-CustomElements"
        QT_MOC_LITERAL(36, 4),  // "true"
        QT_MOC_LITERAL(41, 20),  // "configurationChanged"
        QT_MOC_LITERAL(62, 0),  // ""
        QT_MOC_LITERAL(63, 26),  // "standardIconImplementation"
        QT_MOC_LITERAL(90, 14),  // "StandardPixmap"
        QT_MOC_LITERAL(105, 19),  // "const QStyleOption*"
        QT_MOC_LITERAL(125, 14)   // "const QWidget*"
    },
    "Lightly::Style",
    "X-KDE-CustomElements",
    "true",
    "configurationChanged",
    "",
    "standardIconImplementation",
    "StandardPixmap",
    "const QStyleOption*",
    "const QWidget*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLightlySCOPEStyleENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   28,    4, 0x09,    1 /* Protected */,
       5,    3,   29,    4, 0x109,    2 /* Protected | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QIcon, 0x80000000 | 6, 0x80000000 | 7, 0x80000000 | 8,    4,    4,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject Lightly::Style::staticMetaObject = { {
    QMetaObject::SuperData::link<ParentStyleClass::staticMetaObject>(),
    qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLightlySCOPEStyleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Style, std::true_type>,
        // method 'configurationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'standardIconImplementation'
        QtPrivate::TypeAndForceComplete<QIcon, std::false_type>,
        QtPrivate::TypeAndForceComplete<StandardPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStyleOption *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QWidget *, std::false_type>
    >,
    nullptr
} };

void Lightly::Style::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Style *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configurationChanged(); break;
        case 1: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< std::add_pointer_t<StandardPixmap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const QStyleOption*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const QWidget*>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Lightly::Style::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lightly::Style::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLightlySCOPEStyleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ParentStyleClass::qt_metacast(_clname);
}

int Lightly::Style::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ParentStyleClass::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
