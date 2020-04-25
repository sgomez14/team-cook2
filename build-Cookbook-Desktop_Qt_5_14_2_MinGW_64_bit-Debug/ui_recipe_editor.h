/********************************************************************************
** Form generated from reading UI file 'recipe_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_EDITOR_H
#define UI_RECIPE_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recipe_Editor
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QLabel *img;
    QPushButton *uploadPhoto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recipe_Editor)
    {
        if (Recipe_Editor->objectName().isEmpty())
            Recipe_Editor->setObjectName(QString::fromUtf8("Recipe_Editor"));
        Recipe_Editor->resize(1200, 800);
        Recipe_Editor->setMinimumSize(QSize(800, 600));
        Recipe_Editor->setBaseSize(QSize(1200, 800));
        centralwidget = new QWidget(Recipe_Editor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(440, 440, 401, 171));
        splitter->setOrientation(Qt::Horizontal);
        img = new QLabel(splitter);
        img->setObjectName(QString::fromUtf8("img"));
        splitter->addWidget(img);
        uploadPhoto = new QPushButton(splitter);
        uploadPhoto->setObjectName(QString::fromUtf8("uploadPhoto"));
        splitter->addWidget(uploadPhoto);
        Recipe_Editor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Recipe_Editor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        Recipe_Editor->setMenuBar(menubar);
        statusbar = new QStatusBar(Recipe_Editor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Recipe_Editor->setStatusBar(statusbar);

        retranslateUi(Recipe_Editor);

        QMetaObject::connectSlotsByName(Recipe_Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Recipe_Editor)
    {
        Recipe_Editor->setWindowTitle(QCoreApplication::translate("Recipe_Editor", "MainWindow", nullptr));
        img->setText(QString());
        uploadPhoto->setText(QCoreApplication::translate("Recipe_Editor", "Upload Photo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe_Editor: public Ui_Recipe_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_EDITOR_H
