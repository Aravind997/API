/****************************************************************************
** Meta object code from reading C++ file 'adddelfooterdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/CMS/AddDeleteFooter/adddelfooterdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adddelfooterdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdddelFooterDlg_t {
    QByteArrayData data[9];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdddelFooterDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdddelFooterDlg_t qt_meta_stringdata_AdddelFooterDlg = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AdddelFooterDlg"
QT_MOC_LITERAL(1, 16, 27), // "on_pushButtonInsert_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 27), // "on_pushButtonRemove_clicked"
QT_MOC_LITERAL(4, 73, 7), // "AddMenu"
QT_MOC_LITERAL(5, 81, 18), // "AddExistingFooters"
QT_MOC_LITERAL(6, 100, 35), // "on_listWidgetMenu_currentRowC..."
QT_MOC_LITERAL(7, 136, 5), // "index"
QT_MOC_LITERAL(8, 142, 38) // "on_listWidgetFooters_currentR..."

    },
    "AdddelFooterDlg\0on_pushButtonInsert_clicked\0"
    "\0on_pushButtonRemove_clicked\0AddMenu\0"
    "AddExistingFooters\0"
    "on_listWidgetMenu_currentRowChanged\0"
    "index\0on_listWidgetFooters_currentRowChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdddelFooterDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void AdddelFooterDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdddelFooterDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonInsert_clicked(); break;
        case 1: _t->on_pushButtonRemove_clicked(); break;
        case 2: _t->AddMenu(); break;
        case 3: _t->AddExistingFooters(); break;
        case 4: _t->on_listWidgetMenu_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_listWidgetFooters_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdddelFooterDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdddelFooterDlg.data,
    qt_meta_data_AdddelFooterDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdddelFooterDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdddelFooterDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdddelFooterDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdddelFooterDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
