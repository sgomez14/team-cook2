/********************************************************************************
** Form generated from reading UI file 'loadingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGPAGE_H
#define UI_LOADINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingPage
{
public:

    void setupUi(QWidget *LoadingPage)
    {
        if (LoadingPage->objectName().isEmpty())
            LoadingPage->setObjectName(QString::fromUtf8("LoadingPage"));
        LoadingPage->resize(1200, 800);

        retranslateUi(LoadingPage);

        QMetaObject::connectSlotsByName(LoadingPage);
    } // setupUi

    void retranslateUi(QWidget *LoadingPage)
    {
        LoadingPage->setWindowTitle(QCoreApplication::translate("LoadingPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingPage: public Ui_LoadingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGPAGE_H
