/****************************************************************************
** Meta object code from reading C++ file 'Dialoglogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialoglogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Dialoglogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogLogin_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogLogin_t qt_meta_stringdata_DialogLogin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DialogLogin"
QT_MOC_LITERAL(1, 12, 7), // "LoginIn"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "on_bt_Ok_clicked"
QT_MOC_LITERAL(4, 38, 20), // "on_bt_Cancel_clicked"
QT_MOC_LITERAL(5, 59, 22), // "on_bt_question_clicked"
QT_MOC_LITERAL(6, 82, 21) // "on_bt_showpwd_clicked"

    },
    "DialogLogin\0LoginIn\0\0on_bt_Ok_clicked\0"
    "on_bt_Cancel_clicked\0on_bt_question_clicked\0"
    "on_bt_showpwd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogLogin *_t = static_cast<DialogLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoginIn(); break;
        case 1: _t->on_bt_Ok_clicked(); break;
        case 2: _t->on_bt_Cancel_clicked(); break;
        case 3: _t->on_bt_question_clicked(); break;
        case 4: _t->on_bt_showpwd_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DialogLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DialogLogin::LoginIn)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DialogLogin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DialogLogin.data,
      qt_meta_data_DialogLogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogLogin.stringdata0))
        return static_cast<void*>(const_cast< DialogLogin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DialogLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DialogLogin::LoginIn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
