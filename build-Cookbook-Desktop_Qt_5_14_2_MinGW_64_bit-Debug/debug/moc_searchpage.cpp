/****************************************************************************
** Meta object code from reading C++ file 'searchpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../team-cook2/searchpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchPage_t {
    QByteArrayData data[12];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchPage_t qt_meta_stringdata_SearchPage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SearchPage"
QT_MOC_LITERAL(1, 11, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 27), // "on_searchLine_returnPressed"
QT_MOC_LITERAL(4, 64, 27), // "on_returnHomeButton_clicked"
QT_MOC_LITERAL(5, 92, 26), // "on_addRecipeButton_clicked"
QT_MOC_LITERAL(6, 119, 23), // "on_actionHome_triggered"
QT_MOC_LITERAL(7, 143, 29), // "on_actionAdd_Recipe_triggered"
QT_MOC_LITERAL(8, 173, 25), // "on_actionCancel_triggered"
QT_MOC_LITERAL(9, 199, 32), // "on_searchResultsList_itemClicked"
QT_MOC_LITERAL(10, 232, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 249, 4) // "item"

    },
    "SearchPage\0on_searchButton_clicked\0\0"
    "on_searchLine_returnPressed\0"
    "on_returnHomeButton_clicked\0"
    "on_addRecipeButton_clicked\0"
    "on_actionHome_triggered\0"
    "on_actionAdd_Recipe_triggered\0"
    "on_actionCancel_triggered\0"
    "on_searchResultsList_itemClicked\0"
    "QListWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchPage[] = {

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
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void SearchPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_searchButton_clicked(); break;
        case 1: _t->on_searchLine_returnPressed(); break;
        case 2: _t->on_returnHomeButton_clicked(); break;
        case 3: _t->on_addRecipeButton_clicked(); break;
        case 4: _t->on_actionHome_triggered(); break;
        case 5: _t->on_actionAdd_Recipe_triggered(); break;
        case 6: _t->on_actionCancel_triggered(); break;
        case 7: _t->on_searchResultsList_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SearchPage.data,
    qt_meta_data_SearchPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchPage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SearchPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
