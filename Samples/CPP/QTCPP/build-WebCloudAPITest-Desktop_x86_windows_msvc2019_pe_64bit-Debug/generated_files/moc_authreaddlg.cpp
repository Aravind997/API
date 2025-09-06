/****************************************************************************
** Meta object code from reading C++ file 'authreaddlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/Forum/AUThread/authreaddlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authreaddlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AUThreadDlg_t {
    QByteArrayData data[13];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AUThreadDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AUThreadDlg_t qt_meta_stringdata_AUThreadDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AUThreadDlg"
QT_MOC_LITERAL(1, 12, 34), // "on_Upload_Image_pushButton_cl..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "on_Add_AU_clicked"
QT_MOC_LITERAL(4, 66, 20), // "on_Cancel_AU_clicked"
QT_MOC_LITERAL(5, 87, 28), // "on_pushButton_AddNew_clicked"
QT_MOC_LITERAL(6, 116, 45), // "on_comboBox_Existing_Forum_cu..."
QT_MOC_LITERAL(7, 162, 4), // "arg1"
QT_MOC_LITERAL(8, 167, 41), // "on_Existing_Topic_Name_curren..."
QT_MOC_LITERAL(9, 209, 42), // "on_listWidget_Existing_Thread..."
QT_MOC_LITERAL(10, 252, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 269, 4), // "item"
QT_MOC_LITERAL(12, 274, 38) // "on_Upload_Image_Check_Box_sta..."

    },
    "AUThreadDlg\0on_Upload_Image_pushButton_clicked\0"
    "\0on_Add_AU_clicked\0on_Cancel_AU_clicked\0"
    "on_pushButton_AddNew_clicked\0"
    "on_comboBox_Existing_Forum_currentTextChanged\0"
    "arg1\0on_Existing_Topic_Name_currentTextChanged\0"
    "on_listWidget_Existing_Threads_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_Upload_Image_Check_Box_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AUThreadDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void AUThreadDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AUThreadDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Upload_Image_pushButton_clicked(); break;
        case 1: _t->on_Add_AU_clicked(); break;
        case 2: _t->on_Cancel_AU_clicked(); break;
        case 3: _t->on_pushButton_AddNew_clicked(); break;
        case 4: _t->on_comboBox_Existing_Forum_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Existing_Topic_Name_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_listWidget_Existing_Threads_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_Upload_Image_Check_Box_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AUThreadDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AUThreadDlg.data,
    qt_meta_data_AUThreadDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AUThreadDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AUThreadDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AUThreadDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AUThreadDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
