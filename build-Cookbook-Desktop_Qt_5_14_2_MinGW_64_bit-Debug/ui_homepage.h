/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QAction *actionNew_Recipe;
    QAction *actionSearch;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchLine;
    QPushButton *mainSearchButton;
    QPushButton *addRecipeButton;
    QListWidget *recipeList;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(1200, 800);
        HomePage->setMinimumSize(QSize(800, 600));
        HomePage->setBaseSize(QSize(1200, 800));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(12);
        HomePage->setFont(font);
        HomePage->setAnimated(false);
        actionNew_Recipe = new QAction(HomePage);
        actionNew_Recipe->setObjectName(QString::fromUtf8("actionNew_Recipe"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Recipe->setIcon(icon);
        actionSearch = new QAction(HomePage);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon1);
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setMinimumSize(QSize(0, 35));
        searchLine->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setItalic(true);
        searchLine->setFont(font1);

        horizontalLayout->addWidget(searchLine);

        mainSearchButton = new QPushButton(centralwidget);
        mainSearchButton->setObjectName(QString::fromUtf8("mainSearchButton"));
        mainSearchButton->setMinimumSize(QSize(300, 35));
        mainSearchButton->setMaximumSize(QSize(16777215, 35));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::On);
        mainSearchButton->setIcon(icon2);
        mainSearchButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(mainSearchButton);


        verticalLayout->addLayout(horizontalLayout);

        addRecipeButton = new QPushButton(centralwidget);
        addRecipeButton->setObjectName(QString::fromUtf8("addRecipeButton"));
        addRecipeButton->setMinimumSize(QSize(0, 100));
        addRecipeButton->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/icons/plus.png"), QSize(), QIcon::Normal, QIcon::On);
        addRecipeButton->setIcon(icon3);
        addRecipeButton->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(addRecipeButton);

        recipeList = new QListWidget(centralwidget);
        recipeList->setObjectName(QString::fromUtf8("recipeList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recipeList->sizePolicy().hasHeightForWidth());
        recipeList->setSizePolicy(sizePolicy);
        recipeList->setMinimumSize(QSize(0, 500));
        recipeList->setMaximumSize(QSize(16777215, 500));
        recipeList->setFrameShadow(QFrame::Raised);
        recipeList->setSpacing(5);

        verticalLayout->addWidget(recipeList);

        HomePage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HomePage->setStatusBar(statusbar);
        menuBar = new QMenuBar(HomePage);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        HomePage->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionNew_Recipe);
        menuMenu->addAction(actionSearch);

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "HomePage", nullptr));
        actionNew_Recipe->setText(QCoreApplication::translate("HomePage", "Add Recipe", nullptr));
        actionSearch->setText(QCoreApplication::translate("HomePage", "Search", nullptr));
        searchLine->setPlaceholderText(QCoreApplication::translate("HomePage", "Search Recipe Names", nullptr));
        mainSearchButton->setText(QCoreApplication::translate("HomePage", "Search", nullptr));
        addRecipeButton->setText(QCoreApplication::translate("HomePage", "Add Recipe", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("HomePage", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
