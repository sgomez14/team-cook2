/********************************************************************************
** Form generated from reading UI file 'viewrecipe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRECIPE_H
#define UI_VIEWRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewRecipe
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewRecipe)
    {
        if (ViewRecipe->objectName().isEmpty())
            ViewRecipe->setObjectName(QString::fromUtf8("ViewRecipe"));
        ViewRecipe->resize(1200, 800);
        ViewRecipe->setMinimumSize(QSize(800, 600));
        ViewRecipe->setBaseSize(QSize(1200, 800));
        centralwidget = new QWidget(ViewRecipe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ViewRecipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewRecipe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        ViewRecipe->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewRecipe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ViewRecipe->setStatusBar(statusbar);

        retranslateUi(ViewRecipe);

        QMetaObject::connectSlotsByName(ViewRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *ViewRecipe)
    {
        ViewRecipe->setWindowTitle(QCoreApplication::translate("ViewRecipe", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewRecipe: public Ui_ViewRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRECIPE_H
