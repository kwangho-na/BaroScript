/****************************************************************************
** Meta object code from reading C++ file 'ConnectNode.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaroScript/GLOBAL/ConnectNode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConnectNode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TelnetClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   31,   31,   31, 0x0a,
      32,   31,   31,   31, 0x0a,
      53,   78,   31,   31, 0x0a,
      83,   78,   31,   31, 0x0a,
     105,   31,   31,   31, 0x0a,
     124,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TelnetClient[] = {
    "TelnetClient\0SocketReadyRead()\0\0"
    "SocketDisconnected()\0SendResponse(QByteArray)\0"
    "data\0SendResponse(QString)\0"
    "ProcessReadyRead()\0CloseSocket()\0"
};

void TelnetClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TelnetClient *_t = static_cast<TelnetClient *>(_o);
        switch (_id) {
        case 0: _t->SocketReadyRead(); break;
        case 1: _t->SocketDisconnected(); break;
        case 2: _t->SendResponse((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->SendResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ProcessReadyRead(); break;
        case 5: _t->CloseSocket(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TelnetClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelnetClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelnetClient,
      qt_meta_data_TelnetClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelnetClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelnetClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelnetClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelnetClient))
        return static_cast<void*>(const_cast< TelnetClient*>(this));
    return QObject::qt_metacast(_clname);
}

int TelnetClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_TelnetServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   25,   25,   25, 0x05,
      26,   25,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TelnetServer[] = {
    "TelnetServer\0OnStarted()\0\0OnStopped()\0"
};

void TelnetServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TelnetServer *_t = static_cast<TelnetServer *>(_o);
        switch (_id) {
        case 0: _t->OnStarted(); break;
        case 1: _t->OnStopped(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TelnetServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TelnetServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_TelnetServer,
      qt_meta_data_TelnetServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TelnetServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TelnetServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TelnetServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TelnetServer))
        return static_cast<void*>(const_cast< TelnetServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int TelnetServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TelnetServer::OnStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TelnetServer::OnStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_MessageClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   32,   32,   32, 0x0a,
      33,   32,   32,   32, 0x0a,
      54,   79,   32,   32, 0x0a,
      84,   79,   32,   32, 0x0a,
     106,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MessageClient[] = {
    "MessageClient\0SocketReadyRead()\0\0"
    "SocketDisconnected()\0SendResponse(QByteArray)\0"
    "data\0SendResponse(QString)\0CloseSocket()\0"
};

void MessageClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageClient *_t = static_cast<MessageClient *>(_o);
        switch (_id) {
        case 0: _t->SocketReadyRead(); break;
        case 1: _t->SocketDisconnected(); break;
        case 2: _t->SendResponse((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->SendResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->CloseSocket(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessageClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessageClient,
      qt_meta_data_MessageClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageClient))
        return static_cast<void*>(const_cast< MessageClient*>(this));
    return QObject::qt_metacast(_clname);
}

int MessageClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_MessageServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   26,   26,   26, 0x05,
      27,   26,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MessageServer[] = {
    "MessageServer\0OnStarted()\0\0OnStopped()\0"
};

void MessageServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageServer *_t = static_cast<MessageServer *>(_o);
        switch (_id) {
        case 0: _t->OnStarted(); break;
        case 1: _t->OnStopped(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MessageServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_MessageServer,
      qt_meta_data_MessageServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageServer))
        return static_cast<void*>(const_cast< MessageServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int MessageServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MessageServer::OnStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MessageServer::OnStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_TcpSocketClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   32,   32,   32, 0x08,
      33,   32,   32,   32, 0x08,
      49,   32,   32,   32, 0x08,
      68,   32,   32,   32, 0x08,
     115,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TcpSocketClient[] = {
    "TcpSocketClient\0soltReadyRead()\0\0"
    "slotConnected()\0slotDisconnected()\0"
    "slotStateChanged(QAbstractSocket::SocketState)\0"
    "slotError(QAbstractSocket::SocketError)\0"
};

void TcpSocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TcpSocketClient *_t = static_cast<TcpSocketClient *>(_o);
        switch (_id) {
        case 0: _t->soltReadyRead(); break;
        case 1: _t->slotConnected(); break;
        case 2: _t->slotDisconnected(); break;
        case 3: _t->slotStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TcpSocketClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TcpSocketClient::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_TcpSocketClient,
      qt_meta_data_TcpSocketClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TcpSocketClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TcpSocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TcpSocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TcpSocketClient))
        return static_cast<void*>(const_cast< TcpSocketClient*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int TcpSocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
