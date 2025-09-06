/****************************************************************************
** Meta object code from reading C++ file 'deletecommentdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/Forum/DeleteComment/deletecommentdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deletecommentdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeleteCommentDlg_t {
    QByteArrayData data[10];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteCommentDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteCommentDlg_t qt_meta_stringdata_DeleteCommentDlg = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DeleteCommentDlg"
QT_MOC_LITERAL(1, 17, 38), // "on_UnSelect_All_Delete_Commen..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 36), // "on_Select_All_Delete_Comment_..."
QT_MOC_LITERAL(4, 94, 43), // "on_Delete_Selected_Delete_Com..."
QT_MOC_LITERAL(5, 138, 34), // "on_Cancel_Delete_Comment_2_cl..."
QT_MOC_LITERAL(6, 173, 37), // "on_Select_Forum_ID_currentTex..."
QT_MOC_LITERAL(7, 211, 4), // "arg1"
QT_MOC_LITERAL(8, 216, 37), // "on_Select_Topic_ID_currentTex..."
QT_MOC_LITERAL(9, 254, 38) // "on_Select_Thread_ID_currentTe..."

    },
    "DeleteCommentDlg\0"
    "on_UnSelect_All_Delete_Comment_clicked\0"
    "\0on_Select_All_Delete_Comment_clicked\0"
    "on_Delete_Selected_Delete_Comment_2_clicked\0"
    "on_Cancel_Delete_Comment_2_clicked\0"
    "on_Select_Forum_ID_currentTextChanged\0"
    "arg1\0on_Select_Topic_ID_currentTextChanged\0"
    "on_Select_Thread_ID_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteCommentDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void DeleteCommentDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeleteCommentDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_UnSelect_All_Delete_Comment_clicked(); break;
        case 1: _t->on_Select_All_Delete_Comment_clicked(); break;
        case 2: _t->on_Delete_Selected_Delete_Comment_2_clicked(); break;
        case 3: _t->on_Cancel_Delete_Comment_2_clicked(); break;
        case 4: _t->on_Select_Forum_ID_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Select_Topic_ID_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Select_Thread_ID_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeleteCommentDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DeleteCommentDlg.data,
    qt_meta_data_DeleteCommentDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeleteCommentDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteCommentDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteCommentDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DeleteCommentDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
