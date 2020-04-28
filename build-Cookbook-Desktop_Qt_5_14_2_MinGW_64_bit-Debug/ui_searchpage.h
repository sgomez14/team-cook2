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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPage
{
public:
    QAction *actionHome;
    QAction *actionAdd_Recipe;
    QAction *actionCancel;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchLine;
    QPushButton *searchButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *returnHomeButton;
    QPushButton *addRecipeButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout;
    QTextBrowser *searchResultsText;
    QLabel *searchResultsLabel;
    QListWidget *searchResultsList;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchPage)
    {
        if (SearchPage->objectName().isEmpty())
            SearchPage->setObjectName(QString::fromUtf8("SearchPage"));
        SearchPage->resize(1200, 800);
        SearchPage->setMinimumSize(QSize(800, 600));
        SearchPage->setBaseSize(QSize(1200, 800));
        SearchPage->setAnimated(false);
        actionHome = new QAction(SearchPage);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/Home1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon);
        actionAdd_Recipe = new QAction(SearchPage);
        actionAdd_Recipe->setObjectName(QString::fromUtf8("actionAdd_Recipe"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Recipe->setIcon(icon1);
        actionCancel = new QAction(SearchPage);
        actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCancel->setIcon(icon2);
        centralwidget = new QWidget(SearchPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setMinimumSize(QSize(0, 35));
        searchLine->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        searchLine->setFont(font);

        horizontalLayout->addWidget(searchLine);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setMinimumSize(QSize(300, 35));
        searchButton->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setPointSize(12);
        searchButton->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::On);
        searchButton->setIcon(icon3);
        searchButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        returnHomeButton = new QPushButton(centralwidget);
        returnHomeButton->setObjectName(QString::fromUtf8("returnHomeButton"));
        returnHomeButton->setMinimumSize(QSize(0, 35));
        returnHomeButton->setFont(font1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/icons/Home1.png"), QSize(), QIcon::Normal, QIcon::On);
        returnHomeButton->setIcon(icon4);
        returnHomeButton->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(returnHomeButton);

        addRecipeButton = new QPushButton(centralwidget);
        addRecipeButton->setObjectName(QString::fromUtf8("addRecipeButton"));
        addRecipeButton->setMinimumSize(QSize(0, 35));
        addRecipeButton->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/icons/plus.png"), QSize(), QIcon::Normal, QIcon::On);
        addRecipeButton->setIcon(icon5);
        addRecipeButton->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(addRecipeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        searchResultsText = new QTextBrowser(centralwidget);
        searchResultsText->setObjectName(QString::fromUtf8("searchResultsText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchResultsText->sizePolicy().hasHeightForWidth());
        searchResultsText->setSizePolicy(sizePolicy);
        searchResultsText->setMinimumSize(QSize(0, 35));
        searchResultsText->setMaximumSize(QSize(16777215, 35));
        searchResultsText->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, searchResultsText);

        searchResultsLabel = new QLabel(centralwidget);
        searchResultsLabel->setObjectName(QString::fromUtf8("searchResultsLabel"));
        searchResultsLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, searchResultsLabel);


        verticalLayout->addLayout(formLayout);

        searchResultsList = new QListWidget(centralwidget);
        searchResultsList->setObjectName(QString::fromUtf8("searchResultsList"));
        searchResultsList->setSpacing(5);

        verticalLayout->addWidget(searchResultsList);

        SearchPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        SearchPage->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SearchPage->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionHome);
        menuMenu->addAction(actionAdd_Recipe);
        menuMenu->addAction(actionCancel);

        retranslateUi(SearchPage);

        QMetaObject::connectSlotsByName(SearchPage);
    } // setupUi

    void retranslateUi(QMainWindow *SearchPage)
    {
        SearchPage->setWindowTitle(QCoreApplication::translate("SearchPage", "MainWindow", nullptr));
        actionHome->setText(QCoreApplication::translate("SearchPage", "Home", nullptr));
        actionAdd_Recipe->setText(QCoreApplication::translate("SearchPage", "Add Recipe", nullptr));
        actionCancel->setText(QCoreApplication::translate("SearchPage", "Cancel", nullptr));
        searchLine->setPlaceholderText(QCoreApplication::translate("SearchPage", "Search Recipe Names", nullptr));
        searchButton->setText(QCoreApplication::translate("SearchPage", "Search", nullptr));
        returnHomeButton->setText(QCoreApplication::translate("SearchPage", "Return Home", nullptr));
        addRecipeButton->setText(QCoreApplication::translate("SearchPage", "Add Recipe", nullptr));
        searchResultsText->setPlaceholderText(QCoreApplication::translate("SearchPage", "Total Results Display Here", nullptr));
        searchResultsLabel->setText(QCoreApplication::translate("SearchPage", "Search Results:", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("SearchPage", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPAGE_H
