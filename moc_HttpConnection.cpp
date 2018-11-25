/****************************************************************************
** Meta object code from reading C++ file 'HttpConnection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaroScript/GLOBAL/HttpConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HttpConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   59,   61,   61, 0x0a,
      62,   59,   61,   61, 0x0a,
      98,   61,   61,   61, 0x0a,
     122,   59,   61,   61, 0x0a,
     156,  195,   61,   61, 0x0a,
     200,   61,   61,   61, 0x0a,
     219,   61,   61,   61, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HttpConnection[] = {
    "HttpConnection\0"
    "onSslError(QNetworkReply*,QList<QSslError>)\0"
    ",\0\0slotDownloadProgress(qint64,qint64)\0"
    "slotDownloadReadyRead()\0"
    "slotUploadProgress(qint64,qint64)\0"
    "slotError(QNetworkReply::NetworkError)\0"
    "code\0slotTimeoutCheck()\0slotFinish()\0"
};

void HttpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpConnection *_t = static_cast<HttpConnection *>(_o);
        switch (_id) {
        case 0: _t->onSslError((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QList<QSslError>(*)>(_a[2]))); break;
        case 1: _t->slotDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->slotDownloadReadyRead(); break;
        case 3: _t->slotUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->slotError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->slotTimeoutCheck(); break;
        case 6: _t->slotFinish(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HttpConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HttpConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpConnection,
      qt_meta_data_HttpConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HttpConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HttpConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HttpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HttpConnection))
        return static_cast<void*>(const_cast< HttpConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
