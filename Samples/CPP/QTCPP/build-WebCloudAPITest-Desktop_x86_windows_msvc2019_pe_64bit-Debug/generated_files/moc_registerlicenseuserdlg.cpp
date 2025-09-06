/****************************************************************************
** Meta object code from reading C++ file 'registerlicenseuserdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WebCloudAPITest/License/RegisterLicenceUser/registerlicenseuserdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerlicenseuserdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegisterLicenseUserDlg_t {
    QByteArrayData data[13];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterLicenseUserDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterLicenseUserDlg_t qt_meta_stringdata_RegisterLicenseUserDlg = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RegisterLicenseUserDlg"
QT_MOC_LITERAL(1, 23, 20), // "on_BuyButton_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "on_ValidateButton_clicked"
QT_MOC_LITERAL(4, 71, 25), // "on_RegisterButton_clicked"
QT_MOC_LITERAL(5, 97, 23), // "on_CancelButton_clicked"
QT_MOC_LITERAL(6, 121, 19), // "RequestSubscription"
QT_MOC_LITERAL(7, 141, 14), // "NewUserRegInfo"
QT_MOC_LITERAL(8, 156, 4), // "info"
QT_MOC_LITERAL(9, 161, 11), // "LicenseInfo"
QT_MOC_LITERAL(10, 173, 5), // "infoo"
QT_MOC_LITERAL(11, 179, 17), // "RequestOneTimeReg"
QT_MOC_LITERAL(12, 197, 19) // "RequestTrialVersion"

    },
    "RegisterLicenseUserDlg\0on_BuyButton_clicked\0"
    "\0on_ValidateButton_clicked\0"
    "on_RegisterButton_clicked\0"
    "on_CancelButton_clicked\0RequestSubscription\0"
    "NewUserRegInfo\0info\0LicenseInfo\0infoo\0"
    "RequestOneTimeReg\0RequestTrialVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterLicenseUserDlg[] = {

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
       6,    2,   53,    2, 0x08 /* Private */,
      11,    2,   58,    2, 0x08 /* Private */,
      12,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,

       0        // eod
};

void RegisterLicenseUserDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegisterLicenseUserDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BuyButton_clicked(); break;
        case 1: _t->on_ValidateButton_clicked(); break;
        case 2: _t->on_RegisterButton_clicked(); break;
        case 3: _t->on_CancelButton_clicked(); break;
        case 4: _t->RequestSubscription((*reinterpret_cast< NewUserRegInfo(*)>(_a[1])),(*reinterpret_cast< LicenseInfo(*)>(_a[2]))); break;
        case 5: _t->RequestOneTimeReg((*reinterpret_cast< NewUserRegInfo(*)>(_a[1])),(*reinterpret_cast< LicenseInfo(*)>(_a[2]))); break;
        case 6: _t->RequestTrialVersion((*reinterpret_cast< NewUserRegInfo(*)>(_a[1])),(*reinterpret_cast< LicenseInfo(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RegisterLicenseUserDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RegisterLicenseUserDlg.data,
    qt_meta_data_RegisterLicenseUserDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RegisterLicenseUserDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterLicenseUserDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterLicenseUserDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RegisterLicenseUserDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
