/****************************************************************************
** Meta object code from reading C++ file 'XFuncImpl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaroScript/GLOBAL/XFuncImpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XFuncImpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GSuggestCompletion[] = {

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
      19,   36,   36,   36, 0x0a,
      37,   36,   36,   36, 0x0a,
      54,   36,   36,   36, 0x0a,
      68,  102,   36,   36, 0x0a,
     115,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GSuggestCompletion[] = {
    "GSuggestCompletion\0doneCompletion()\0"
    "\0preventSuggest()\0autoSuggest()\0"
    "handleNetworkData(QNetworkReply*)\0"
    "networkReply\0showPopup()\0"
};

void GSuggestCompletion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GSuggestCompletion *_t = static_cast<GSuggestCompletion *>(_o);
        switch (_id) {
        case 0: _t->doneCompletion(); break;
        case 1: _t->preventSuggest(); break;
        case 2: _t->autoSuggest(); break;
        case 3: _t->handleNetworkData((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->showPopup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GSuggestCompletion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GSuggestCompletion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GSuggestCompletion,
      qt_meta_data_GSuggestCompletion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GSuggestCompletion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GSuggestCompletion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GSuggestCompletion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GSuggestCompletion))
        return static_cast<void*>(const_cast< GSuggestCompletion*>(this));
    return QObject::qt_metacast(_clname);
}

int GSuggestCompletion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_GInputCompletion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   34,   34,   34, 0x0a,
      35,   34,   34,   34, 0x0a,
      52,   34,   34,   34, 0x0a,
      66,   34,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GInputCompletion[] = {
    "GInputCompletion\0doneCompletion()\0\0"
    "preventSuggest()\0autoSuggest()\0"
    "showPopup()\0"
};

void GInputCompletion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GInputCompletion *_t = static_cast<GInputCompletion *>(_o);
        switch (_id) {
        case 0: _t->doneCompletion(); break;
        case 1: _t->preventSuggest(); break;
        case 2: _t->autoSuggest(); break;
        case 3: _t->showPopup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GInputCompletion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GInputCompletion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GInputCompletion,
      qt_meta_data_GInputCompletion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GInputCompletion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GInputCompletion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GInputCompletion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GInputCompletion))
        return static_cast<void*>(const_cast< GInputCompletion*>(this));
    return QObject::qt_metacast(_clname);
}

int GInputCompletion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
