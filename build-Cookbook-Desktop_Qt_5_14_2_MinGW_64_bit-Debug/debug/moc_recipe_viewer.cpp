/****************************************************************************
** Meta object code from reading C++ file 'recipe_viewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../team-cook2/recipe_viewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recipe_viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Recipe_Viewer_t {
    QByteArrayData data[13];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Recipe_Viewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Recipe_Viewer_t qt_meta_stringdata_Recipe_Viewer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Recipe_Viewer"
QT_MOC_LITERAL(1, 14, 8), // "nextPage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "index"
QT_MOC_LITERAL(4, 30, 27), // "on_nextRecipeButton_clicked"
QT_MOC_LITERAL(5, 58, 31), // "on_previousRecipeButton_clicked"
QT_MOC_LITERAL(6, 90, 27), // "on_editRecipeButton_clicked"
QT_MOC_LITERAL(7, 118, 23), // "on_actionHome_triggered"
QT_MOC_LITERAL(8, 142, 25), // "on_actionSearch_triggered"
QT_MOC_LITERAL(9, 168, 29), // "on_actionAdd_Recipe_triggered"
QT_MOC_LITERAL(10, 198, 35), // "on_actionEdit_this_recipe_tri..."
QT_MOC_LITERAL(11, 234, 32), // "on_actionDelete_Recipe_triggered"
QT_MOC_LITERAL(12, 267, 21) // "on_pushButton_clicked"

    },
    "Recipe_Viewer\0nextPage\0\0index\0"
    "on_nextRecipeButton_clicked\0"
    "on_previousRecipeButton_clicked\0"
    "on_editRecipeButton_clicked\0"
    "on_actionHome_triggered\0"
    "on_actionSearch_triggered\0"
    "on_actionAdd_Recipe_triggered\0"
    "on_actionEdit_this_recipe_triggered\0"
    "on_actionDelete_Recipe_triggered\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Recipe_Viewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Recipe_Viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Recipe_Viewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nextPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_nextRecipeButton_clicked(); break;
        case 2: _t->on_previousRecipeButton_clicked(); break;
        case 3: _t->on_editRecipeButton_clicked(); break;
        case 4: _t->on_actionHome_triggered(); break;
        case 5: _t->on_actionSearch_triggered(); break;
        case 6: _t->on_actionAdd_Recipe_triggered(); break;
        case 7: _t->on_actionEdit_this_recipe_triggered(); break;
        case 8: _t->on_actionDelete_Recipe_triggered(); break;
        case 9: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Recipe_Viewer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Recipe_Viewer::nextPage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Recipe_Viewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Recipe_Viewer.data,
    qt_meta_data_Recipe_Viewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Recipe_Viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Recipe_Viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Recipe_Viewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Recipe_Viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Recipe_Viewer::nextPage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
