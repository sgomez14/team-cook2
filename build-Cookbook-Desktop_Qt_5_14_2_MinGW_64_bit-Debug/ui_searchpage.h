/********************************************************************************
** Form generated from reading UI file 'searchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPAGE_H
#define UI_SEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchPage)
    {
        if (SearchPage->objectName().isEmpty())
            SearchPage->setObjectName(QString::fromUtf8("SearchPage"));
        SearchPage->resize(1200, 800);
        SearchPage->setMinimumSize(QSize(800, 600));
        SearchPage->setBaseSize(QSize(1200, 800));
        centralwidget = new QWidget(SearchPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SearchPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        SearchPage->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SearchPage->setStatusBar(statusbar);

        retranslateUi(SearchPage);

        QMetaObject::connectSlotsByName(SearchPage);
    } // setupUi

    void retranslateUi(QMainWindow *SearchPage)
    {
        SearchPage->setWindowTitle(QCoreApplication::translate("SearchPage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPAGE_H
