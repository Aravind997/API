/****************************************************************************
** Meta object code from reading C++ file 'audproductsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/Ecom/AUDCompanyProducts/audproductsdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audproductsdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AUDProductsDlg_t {
    QByteArrayData data[15];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AUDProductsDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AUDProductsDlg_t qt_meta_stringdata_AUDProductsDlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AUDProductsDlg"
QT_MOC_LITERAL(1, 15, 27), // "on_pushButton_Close_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 34), // "on_comboBoxCo1_currentIndexCh..."
QT_MOC_LITERAL(4, 79, 5), // "index"
QT_MOC_LITERAL(5, 85, 34), // "on_comboBoxCat_currentIndexCh..."
QT_MOC_LITERAL(6, 120, 37), // "on_comboBoxSubCat_currentInde..."
QT_MOC_LITERAL(7, 158, 33), // "on_pushButton_SaveProduct_cli..."
QT_MOC_LITERAL(8, 192, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(9, 216, 34), // "on_pushButton_EDIT_PRODUCT_cl..."
QT_MOC_LITERAL(10, 251, 22), // "on_checkBoxTax_clicked"
QT_MOC_LITERAL(11, 274, 7), // "checked"
QT_MOC_LITERAL(12, 282, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 304, 26), // "on_pushButton_IMG2_clicked"
QT_MOC_LITERAL(14, 331, 26) // "on_pushButton_IMG3_clicked"

    },
    "AUDProductsDlg\0on_pushButton_Close_clicked\0"
    "\0on_comboBoxCo1_currentIndexChanged\0"
    "index\0on_comboBoxCat_currentIndexChanged\0"
    "on_comboBoxSubCat_currentIndexChanged\0"
    "on_pushButton_SaveProduct_clicked\0"
    "on_pushButton_6_clicked\0"
    "on_pushButton_EDIT_PRODUCT_clicked\0"
    "on_checkBoxTax_clicked\0checked\0"
    "on_pushButton_clicked\0on_pushButton_IMG2_clicked\0"
    "on_pushButton_IMG3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AUDProductsDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AUDProductsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AUDProductsDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Close_clicked(); break;
        case 1: _t->on_comboBoxCo1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBoxCat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxSubCat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_SaveProduct_clicked(); break;
        case 5: _t->on_pushButton_6_clicked(); break;
        case 6: _t->on_pushButton_EDIT_PRODUCT_clicked(); break;
        case 7: _t->on_checkBoxTax_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_IMG2_clicked(); break;
        case 10: _t->on_pushButton_IMG3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AUDProductsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AUDProductsDlg.data,
    qt_meta_data_AUDProductsDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AUDProductsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AUDProductsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AUDProductsDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AUDProductsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
