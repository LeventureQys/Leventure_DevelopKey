/****************************************************************************
** Meta object code from reading C++ file 'Leventure_DevelopKey.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Leventure_DevelopKey.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Leventure_DevelopKey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Leventure_DevelopKey_t {
    QByteArrayData data[9];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Leventure_DevelopKey_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Leventure_DevelopKey_t qt_meta_stringdata_Leventure_DevelopKey = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Leventure_DevelopKey"
QT_MOC_LITERAL(1, 21, 10), // "Sig_Titles"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "title"
QT_MOC_LITERAL(4, 39, 20), // "on_btn_fresh_clicked"
QT_MOC_LITERAL(5, 60, 22), // "on_btn_GetHwnd_clicked"
QT_MOC_LITERAL(6, 83, 29), // "on_rabt_DeveloperMode_clicked"
QT_MOC_LITERAL(7, 113, 24), // "on_rabt_InfoMode_clicked"
QT_MOC_LITERAL(8, 138, 32) // "on_rabt_CompabilityModes_clicked"

    },
    "Leventure_DevelopKey\0Sig_Titles\0\0title\0"
    "on_btn_fresh_clicked\0on_btn_GetHwnd_clicked\0"
    "on_rabt_DeveloperMode_clicked\0"
    "on_rabt_InfoMode_clicked\0"
    "on_rabt_CompabilityModes_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Leventure_DevelopKey[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Leventure_DevelopKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Leventure_DevelopKey *_t = static_cast<Leventure_DevelopKey *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_Titles((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_fresh_clicked(); break;
        case 2: _t->on_btn_GetHwnd_clicked(); break;
        case 3: _t->on_rabt_DeveloperMode_clicked(); break;
        case 4: _t->on_rabt_InfoMode_clicked(); break;
        case 5: _t->on_rabt_CompabilityModes_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Leventure_DevelopKey::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Leventure_DevelopKey::Sig_Titles)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Leventure_DevelopKey::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Leventure_DevelopKey.data,
      qt_meta_data_Leventure_DevelopKey,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Leventure_DevelopKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Leventure_DevelopKey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Leventure_DevelopKey.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Leventure_DevelopKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Leventure_DevelopKey::Sig_Titles(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
