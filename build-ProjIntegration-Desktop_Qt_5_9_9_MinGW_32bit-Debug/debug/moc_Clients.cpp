/****************************************************************************
** Meta object code from reading C++ file 'Clients.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjIntegration/Clients.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Clients.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Clients_t {
    QByteArrayData data[16];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Clients_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Clients_t qt_meta_stringdata_Clients = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Clients"
QT_MOC_LITERAL(1, 8, 10), // "newMessage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "from"
QT_MOC_LITERAL(4, 25, 7), // "message"
QT_MOC_LITERAL(5, 33, 14), // "newParticipant"
QT_MOC_LITERAL(6, 48, 4), // "nick"
QT_MOC_LITERAL(7, 53, 15), // "participantLeft"
QT_MOC_LITERAL(8, 69, 13), // "newConnection"
QT_MOC_LITERAL(9, 83, 11), // "Connection*"
QT_MOC_LITERAL(10, 95, 10), // "connection"
QT_MOC_LITERAL(11, 106, 15), // "connectionError"
QT_MOC_LITERAL(12, 122, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(13, 151, 11), // "socketError"
QT_MOC_LITERAL(14, 163, 12), // "disconnected"
QT_MOC_LITERAL(15, 176, 11) // "readyForUse"

    },
    "Clients\0newMessage\0\0from\0message\0"
    "newParticipant\0nick\0participantLeft\0"
    "newConnection\0Connection*\0connection\0"
    "connectionError\0QAbstractSocket::SocketError\0"
    "socketError\0disconnected\0readyForUse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Clients[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,
       7,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,
      14,    0,   66,    2, 0x08 /* Private */,
      15,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Clients::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Clients *_t = static_cast<Clients *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->newParticipant((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->participantLeft((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newConnection((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 4: _t->connectionError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->disconnected(); break;
        case 6: _t->readyForUse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Clients::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Clients::newMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Clients::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Clients::newParticipant)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Clients::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Clients::participantLeft)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Clients::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Clients.data,
      qt_meta_data_Clients,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Clients::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Clients::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Clients.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Clients::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Clients::newMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Clients::newParticipant(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Clients::participantLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
