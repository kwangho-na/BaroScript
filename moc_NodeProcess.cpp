/****************************************************************************
** Meta object code from reading C++ file 'NodeProcess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaroScript/GLOBAL/NodeProcess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NodeProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x09,
      46,   32,   32,   32, 0x09,
      60,   99,   32,   32, 0x09,
     119,  153,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NodeProcess[] = {
    "NodeProcess\0lineAvailable(LPCC)\0\0"
    "readStdOut()\0readTmpFile()\0"
    "procFinished(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0"
    "procError(QProcess::ProcessError)\0err\0"
};

void NodeProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NodeProcess *_t = static_cast<NodeProcess *>(_o);
        switch (_id) {
        case 0: _t->lineAvailable((*reinterpret_cast< LPCC(*)>(_a[1]))); break;
        case 1: _t->readStdOut(); break;
        case 2: _t->readTmpFile(); break;
        case 3: _t->procFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->procError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NodeProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NodeProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_NodeProcess,
      qt_meta_data_NodeProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NodeProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NodeProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NodeProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NodeProcess))
        return static_cast<void*>(const_cast< NodeProcess*>(this));
    if (!strcmp(_clname, "XNode"))
        return static_cast< XNode*>(const_cast< NodeProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int NodeProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void NodeProcess::lineAvailable(LPCC _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_XFtp[] = {

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
       5,   27,   34,   34, 0x0a,
      35,   57,   34,   34, 0x0a,
      63,   90,   34,   34, 0x0a,
     101,  129,   34,   34, 0x0a,
     134,   34,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XFtp[] = {
    "XFtp\0ftpFinished(int,bool)\0id,err\0\0"
    "ftpListInfo(QUrlInfo)\0uinfo\0"
    "ftpProgress(qint64,qint64)\0done,total\0"
    "connectionStateChanged(int)\0stat\0"
    "onReadyRead()\0"
};

void XFtp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XFtp *_t = static_cast<XFtp *>(_o);
        switch (_id) {
        case 0: _t->ftpFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->ftpListInfo((*reinterpret_cast< QUrlInfo(*)>(_a[1]))); break;
        case 2: _t->ftpProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->connectionStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onReadyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XFtp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XFtp::staticMetaObject = {
    { &QFtp::staticMetaObject, qt_meta_stringdata_XFtp,
      qt_meta_data_XFtp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XFtp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XFtp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XFtp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XFtp))
        return static_cast<void*>(const_cast< XFtp*>(this));
    return QFtp::qt_metacast(_clname);
}

int XFtp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFtp::qt_metacall(_c, _id, _a);
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
