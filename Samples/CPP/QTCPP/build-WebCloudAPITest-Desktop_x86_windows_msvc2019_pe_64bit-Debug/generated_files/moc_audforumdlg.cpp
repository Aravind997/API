/****************************************************************************
** Meta object code from reading C++ file 'audforumdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/Forum/AUDForum/audforumdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audforumdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AUDForumDlg_t {
    QByteArrayData data[10];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AUDForumDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AUDForumDlg_t qt_meta_stringdata_AUDForumDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AUDForumDlg"
QT_MOC_LITERAL(1, 12, 39), // "on_pushButton_Retrive_Email_A..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 24), // "on_Add_AUD_Forum_clicked"
QT_MOC_LITERAL(4, 78, 27), // "on_Delete_AUD_Forum_clicked"
QT_MOC_LITERAL(5, 106, 27), // "on_Cancel_AUD_Forum_clicked"
QT_MOC_LITERAL(6, 134, 41), // "on_listWidget_Existing_forums..."
QT_MOC_LITERAL(7, 176, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 193, 4), // "item"
QT_MOC_LITERAL(9, 198, 28) // "on_pushButton_AddNew_clicked"

    },
    "AUDForumDlg\0on_pushButton_Retrive_Email_AUD_clicked\0"
    "\0on_Add_AUD_Forum_clicked\0"
    "on_Delete_AUD_Forum_clicked\0"
    "on_Cancel_AUD_Forum_clicked\0"
    "on_listWidget_Existing_forums_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_pushButton_AddNew_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AUDForumDlg[] = {

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
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void AUDForumDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AUDForumDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Retrive_Email_AUD_clicked(); break;
        case 1: _t->on_Add_AUD_Forum_clicked(); break;
        case 2: _t->on_Delete_AUD_Forum_clicked(); break;
        case 3: _t->on_Cancel_AUD_Forum_clicked(); break;
        case 4: _t->on_listWidget_Existing_forums_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_AddNew_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AUDForumDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AUDForumDlg.data,
    qt_meta_data_AUDForumDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AUDForumDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AUDForumDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AUDForumDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AUDForumDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
