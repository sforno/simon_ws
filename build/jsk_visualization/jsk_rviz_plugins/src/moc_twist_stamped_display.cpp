/****************************************************************************
** Meta object code from reading C++ file 'twist_stamped_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/jsk_visualization/jsk_rviz_plugins/src/twist_stamped_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twist_stamped_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_jsk_rviz_plugins__TwistStampedDisplay_t {
    QByteArrayData data[6];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jsk_rviz_plugins__TwistStampedDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jsk_rviz_plugins__TwistStampedDisplay_t qt_meta_stringdata_jsk_rviz_plugins__TwistStampedDisplay = {
    {
QT_MOC_LITERAL(0, 0, 37), // "jsk_rviz_plugins::TwistStampe..."
QT_MOC_LITERAL(1, 38, 17), // "updateLinearScale"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 18), // "updateAngularScale"
QT_MOC_LITERAL(4, 76, 17), // "updateLinearColor"
QT_MOC_LITERAL(5, 94, 18) // "updateAngularColor"

    },
    "jsk_rviz_plugins::TwistStampedDisplay\0"
    "updateLinearScale\0\0updateAngularScale\0"
    "updateLinearColor\0updateAngularColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jsk_rviz_plugins__TwistStampedDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void jsk_rviz_plugins::TwistStampedDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TwistStampedDisplay *_t = static_cast<TwistStampedDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLinearScale(); break;
        case 1: _t->updateAngularScale(); break;
        case 2: _t->updateLinearColor(); break;
        case 3: _t->updateAngularColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject jsk_rviz_plugins::TwistStampedDisplay::staticMetaObject = {
    { &rviz::MessageFilterDisplay<geometry_msgs::TwistStamped>::staticMetaObject, qt_meta_stringdata_jsk_rviz_plugins__TwistStampedDisplay.data,
      qt_meta_data_jsk_rviz_plugins__TwistStampedDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *jsk_rviz_plugins::TwistStampedDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jsk_rviz_plugins::TwistStampedDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_jsk_rviz_plugins__TwistStampedDisplay.stringdata0))
        return static_cast<void*>(const_cast< TwistStampedDisplay*>(this));
    return rviz::MessageFilterDisplay<geometry_msgs::TwistStamped>::qt_metacast(_clname);
}

int jsk_rviz_plugins::TwistStampedDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::MessageFilterDisplay<geometry_msgs::TwistStamped>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
