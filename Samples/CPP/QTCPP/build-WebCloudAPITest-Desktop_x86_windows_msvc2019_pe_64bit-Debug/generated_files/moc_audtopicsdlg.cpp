/****************************************************************************
** Meta object code from reading C++ file 'audtopicsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/Forum/AUDTopics/audtopicsdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audtopicsdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AUDTopicsDlg_t {
    QByteArrayData data[13];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AUDTopicsDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AUDTopicsDlg_t qt_meta_stringdata_AUDTopicsDlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AUDTopicsDlg"
QT_MOC_LITERAL(1, 13, 32), // "on_Select_All_AUD_Topics_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 29), // "on_UNSelect_AUD_Topic_clicked"
QT_MOC_LITERAL(4, 77, 27), // "on_Cancel_AUD_Topic_clicked"
QT_MOC_LITERAL(5, 105, 50), // "on_comboBox_Forum_Name_Existi..."
QT_MOC_LITERAL(6, 156, 4), // "arg1"
QT_MOC_LITERAL(7, 161, 28), // "on_pushButton_Delete_clicked"
QT_MOC_LITERAL(8, 190, 27), // "on_AddNew_AUD_Topic_clicked"
QT_MOC_LITERAL(9, 218, 41), // "on_listWidget_Existing_Topics..."
QT_MOC_LITERAL(10, 260, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 277, 4), // "item"
QT_MOC_LITERAL(12, 282, 24) // "on_Add_AUD_Topic_clicked"

    },
    "AUDTopicsDlg\0on_Select_All_AUD_Topics_clicked\0"
    "\0on_UNSelect_AUD_Topic_clicked\0"
    "on_Cancel_AUD_Topic_clicked\0"
    "on_comboBox_Forum_Name_Existing_currentTextChanged\0"
    "arg1\0on_pushButton_Delete_clicked\0"
    "on_AddNew_AUD_Topic_clicked\0"
    "on_listWidget_Existing_Topics_itemClicked\0"
    "QListWidgetItem*\0item\0on_Add_AUD_Topic_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AUDTopicsDlg[] = {

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
       5,    1,   57,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void AUDTopicsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AUDTopicsDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Select_All_AUD_Topics_clicked(); break;
        case 1: _t->on_UNSelect_AUD_Topic_clicked(); break;
        case 2: _t->on_Cancel_AUD_Topic_clicked(); break;
        case 3: _t->on_comboBox_Forum_Name_Existing_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_Delete_clicked(); break;
        case 5: _t->on_AddNew_AUD_Topic_clicked(); break;
        case 6: _t->on_listWidget_Existing_Topics_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_Add_AUD_Topic_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AUDTopicsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AUDTopicsDlg.data,
    qt_meta_data_AUDTopicsDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AUDTopicsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AUDTopicsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AUDTopicsDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AUDTopicsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
