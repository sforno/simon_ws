/****************************************************************************
** Meta object code from reading C++ file 'robot_command_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/jsk_visualization/jsk_rviz_plugins/src/robot_command_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot_command_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_jsk_rviz_plugins__RobotCommandInterfaceAction_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jsk_rviz_plugins__RobotCommandInterfaceAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jsk_rviz_plugins__RobotCommandInterfaceAction_t qt_meta_stringdata_jsk_rviz_plugins__RobotCommandInterfaceAction = {
    {
QT_MOC_LITERAL(0, 0, 45), // "jsk_rviz_plugins::RobotComman..."
QT_MOC_LITERAL(1, 46, 21), // "callRequestEusCommand"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 11), // "std::string"
QT_MOC_LITERAL(4, 81, 7), // "command"
QT_MOC_LITERAL(5, 89, 14), // "buttonCallback"
QT_MOC_LITERAL(6, 104, 1) // "i"

    },
    "jsk_rviz_plugins::RobotCommandInterfaceAction\0"
    "callRequestEusCommand\0\0std::string\0"
    "command\0buttonCallback\0i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jsk_rviz_plugins__RobotCommandInterfaceAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void jsk_rviz_plugins::RobotCommandInterfaceAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RobotCommandInterfaceAction *_t = static_cast<RobotCommandInterfaceAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->callRequestEusCommand((*reinterpret_cast< const std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->buttonCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject jsk_rviz_plugins::RobotCommandInterfaceAction::staticMetaObject = {
    { &rviz::Panel::staticMetaObject, qt_meta_stringdata_jsk_rviz_plugins__RobotCommandInterfaceAction.data,
      qt_meta_data_jsk_rviz_plugins__RobotCommandInterfaceAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *jsk_rviz_plugins::RobotCommandInterfaceAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jsk_rviz_plugins::RobotCommandInterfaceAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_jsk_rviz_plugins__RobotCommandInterfaceAction.stringdata0))
        return static_cast<void*>(const_cast< RobotCommandInterfaceAction*>(this));
    return rviz::Panel::qt_metacast(_clname);
}

int jsk_rviz_plugins::RobotCommandInterfaceAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
