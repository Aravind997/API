/****************************************************************************
** Meta object code from reading C++ file 'addexternallinkdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/CMS/AddExternalLink/addexternallinkdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addexternallinkdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddExternalLinkDlg_t {
    QByteArrayData data[12];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddExternalLinkDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddExternalLinkDlg_t qt_meta_stringdata_AddExternalLinkDlg = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AddExternalLinkDlg"
QT_MOC_LITERAL(1, 19, 32), // "on_pushButtonUpdateTitle_clicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "on_pushButtonApply_clicked"
QT_MOC_LITERAL(4, 80, 24), // "on_pushButtonAdd_clicked"
QT_MOC_LITERAL(5, 105, 27), // "on_pushButtonUpdate_clicked"
QT_MOC_LITERAL(6, 133, 27), // "on_pushButtonRemove_clicked"
QT_MOC_LITERAL(7, 161, 26), // "on_pushButtonClose_clicked"
QT_MOC_LITERAL(8, 188, 39), // "on_listWidgetSettings_current..."
QT_MOC_LITERAL(9, 228, 5), // "index"
QT_MOC_LITERAL(10, 234, 23), // "on_pushButtonUp_clicked"
QT_MOC_LITERAL(11, 258, 25) // "on_pushButtonDown_clicked"

    },
    "AddExternalLinkDlg\0on_pushButtonUpdateTitle_clicked\0"
    "\0on_pushButtonApply_clicked\0"
    "on_pushButtonAdd_clicked\0"
    "on_pushButtonUpdate_clicked\0"
    "on_pushButtonRemove_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_listWidgetSettings_currentRowChanged\0"
    "index\0on_pushButtonUp_clicked\0"
    "on_pushButtonDown_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddExternalLinkDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddExternalLinkDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddExternalLinkDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonUpdateTitle_clicked(); break;
        case 1: _t->on_pushButtonApply_clicked(); break;
        case 2: _t->on_pushButtonAdd_clicked(); break;
        case 3: _t->on_pushButtonUpdate_clicked(); break;
        case 4: _t->on_pushButtonRemove_clicked(); break;
        case 5: _t->on_pushButtonClose_clicked(); break;
        case 6: _t->on_listWidgetSettings_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonUp_clicked(); break;
        case 8: _t->on_pushButtonDown_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddExternalLinkDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddExternalLinkDlg.data,
    qt_meta_data_AddExternalLinkDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddExternalLinkDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddExternalLinkDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddExternalLinkDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddExternalLinkDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
