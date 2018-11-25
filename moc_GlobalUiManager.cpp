/****************************************************************************
** Meta object code from reading C++ file 'GlobalUiManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaroScript/GLOBAL/GlobalUiManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlobalUiManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalUiManager[] = {

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
      16,   23,   23,   23, 0x0a,
      24,   23,   23,   23, 0x0a,
      35,   23,   23,   23, 0x0a,
      51,   81,   23,   23, 0x0a,
      83,  108,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalUiManager[] = {
    "GlobalUiManager\0onOk()\0\0onCancel()\0"
    "workerTimeout()\0slotPaintRequested(QPrinter*)\0"
    "p\0onActionClick(TreeNode*)\0cf\0"
};

void GlobalUiManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlobalUiManager *_t = static_cast<GlobalUiManager *>(_o);
        switch (_id) {
        case 0: _t->onOk(); break;
        case 1: _t->onCancel(); break;
        case 2: _t->workerTimeout(); break;
        case 3: _t->slotPaintRequested((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 4: _t->onActionClick((*reinterpret_cast< TreeNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalUiManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalUiManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalUiManager,
      qt_meta_data_GlobalUiManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalUiManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalUiManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalUiManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalUiManager))
        return static_cast<void*>(const_cast< GlobalUiManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalUiManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
