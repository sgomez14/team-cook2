/********************************************************************************
** Form generated from reading UI file 'recipe_viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_VIEWER_H
#define UI_RECIPE_VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recipe_Viewer
{
public:
    QAction *actionMenu;
    QAction *actionHome;
    QAction *actionSearch;
    QAction *actionAdd_Recipe;
    QAction *actionEdit_this_recipe;
    QAction *actionDelete_Recipe;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_3;
    QLabel *recipeNameLabel;
    QTextEdit *recipeNameText;
    QLabel *ingredientsLabel;
    QTextEdit *ingredientsText;
    QLabel *instructionsLabel;
    QTextEdit *instructionsText;
    QLabel *equipmentLabel;
    QTextEdit *equipmentText;
    QLabel *recipeImageLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *previousRecipeButton;
    QPushButton *pushButton;
    QPushButton *editRecipeButton;
    QPushButton *nextRecipeButton;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recipe_Viewer)
    {
        if (Recipe_Viewer->objectName().isEmpty())
            Recipe_Viewer->setObjectName(QString::fromUtf8("Recipe_Viewer"));
        Recipe_Viewer->resize(1200, 800);
        Recipe_Viewer->setMinimumSize(QSize(800, 600));
        Recipe_Viewer->setBaseSize(QSize(1200, 800));
        Recipe_Viewer->setAnimated(false);
        actionMenu = new QAction(Recipe_Viewer);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));
        actionMenu->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/Meno2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon);
        actionHome = new QAction(Recipe_Viewer);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/home2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon1);
        actionSearch = new QAction(Recipe_Viewer);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon2);
        actionAdd_Recipe = new QAction(Recipe_Viewer);
        actionAdd_Recipe->setObjectName(QString::fromUtf8("actionAdd_Recipe"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Recipe->setIcon(icon3);
        actionEdit_this_recipe = new QAction(Recipe_Viewer);
        actionEdit_this_recipe->setObjectName(QString::fromUtf8("actionEdit_this_recipe"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_this_recipe->setIcon(icon4);
        actionDelete_Recipe = new QAction(Recipe_Viewer);
        actionDelete_Recipe->setObjectName(QString::fromUtf8("actionDelete_Recipe"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/icons/trashCan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Recipe->setIcon(icon5);
        centralwidget = new QWidget(Recipe_Viewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        recipeNameLabel = new QLabel(centralwidget);
        recipeNameLabel->setObjectName(QString::fromUtf8("recipeNameLabel"));
        recipeNameLabel->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(12);
        recipeNameLabel->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, recipeNameLabel);

        recipeNameText = new QTextEdit(centralwidget);
        recipeNameText->setObjectName(QString::fromUtf8("recipeNameText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(recipeNameText->sizePolicy().hasHeightForWidth());
        recipeNameText->setSizePolicy(sizePolicy1);
        recipeNameText->setMaximumSize(QSize(16777215, 40));
        recipeNameText->setBaseSize(QSize(0, 20));
        recipeNameText->setFont(font);
        recipeNameText->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, recipeNameText);

        ingredientsLabel = new QLabel(centralwidget);
        ingredientsLabel->setObjectName(QString::fromUtf8("ingredientsLabel"));
        ingredientsLabel->setBaseSize(QSize(0, 0));
        ingredientsLabel->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, ingredientsLabel);

        ingredientsText = new QTextEdit(centralwidget);
        ingredientsText->setObjectName(QString::fromUtf8("ingredientsText"));
        ingredientsText->setFont(font);
        ingredientsText->setReadOnly(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, ingredientsText);

        instructionsLabel = new QLabel(centralwidget);
        instructionsLabel->setObjectName(QString::fromUtf8("instructionsLabel"));
        instructionsLabel->setBaseSize(QSize(0, 0));
        instructionsLabel->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, instructionsLabel);

        instructionsText = new QTextEdit(centralwidget);
        instructionsText->setObjectName(QString::fromUtf8("instructionsText"));
        instructionsText->setFont(font);
        instructionsText->setReadOnly(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, instructionsText);

        equipmentLabel = new QLabel(centralwidget);
        equipmentLabel->setObjectName(QString::fromUtf8("equipmentLabel"));
        equipmentLabel->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, equipmentLabel);

        equipmentText = new QTextEdit(centralwidget);
        equipmentText->setObjectName(QString::fromUtf8("equipmentText"));
        sizePolicy1.setHeightForWidth(equipmentText->sizePolicy().hasHeightForWidth());
        equipmentText->setSizePolicy(sizePolicy1);
        equipmentText->setMaximumSize(QSize(16777215, 70));
        equipmentText->setFont(font);
        equipmentText->setReadOnly(true);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, equipmentText);


        horizontalLayout->addLayout(formLayout_3);

        recipeImageLabel = new QLabel(centralwidget);
        recipeImageLabel->setObjectName(QString::fromUtf8("recipeImageLabel"));
        recipeImageLabel->setMinimumSize(QSize(500, 0));

        horizontalLayout->addWidget(recipeImageLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(258, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        previousRecipeButton = new QPushButton(centralwidget);
        previousRecipeButton->setObjectName(QString::fromUtf8("previousRecipeButton"));
        previousRecipeButton->setMinimumSize(QSize(150, 0));
        previousRecipeButton->setFont(font);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/icons/leftArrow.png"), QSize(), QIcon::Normal, QIcon::On);
        previousRecipeButton->setIcon(icon6);
        previousRecipeButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(previousRecipeButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMaximumSize(QSize(300, 100));
        pushButton->setFont(font);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/icons/close.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButton);

        editRecipeButton = new QPushButton(centralwidget);
        editRecipeButton->setObjectName(QString::fromUtf8("editRecipeButton"));
        sizePolicy2.setHeightForWidth(editRecipeButton->sizePolicy().hasHeightForWidth());
        editRecipeButton->setSizePolicy(sizePolicy2);
        editRecipeButton->setMaximumSize(QSize(300, 100));
        editRecipeButton->setFont(font);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/icons/pencil.png"), QSize(), QIcon::Normal, QIcon::On);
        editRecipeButton->setIcon(icon8);
        editRecipeButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(editRecipeButton);

        nextRecipeButton = new QPushButton(centralwidget);
        nextRecipeButton->setObjectName(QString::fromUtf8("nextRecipeButton"));
        nextRecipeButton->setMinimumSize(QSize(150, 0));
        nextRecipeButton->setFont(font);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/icons/rightArrow.png"), QSize(), QIcon::Normal, QIcon::On);
        nextRecipeButton->setIcon(icon9);
        nextRecipeButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(nextRecipeButton);

        horizontalSpacer_5 = new QSpacerItem(250, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        Recipe_Viewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Recipe_Viewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuHome = new QMenu(menubar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        Recipe_Viewer->setMenuBar(menubar);
        statusbar = new QStatusBar(Recipe_Viewer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Recipe_Viewer->setStatusBar(statusbar);

        menubar->addAction(menuHome->menuAction());
        menuHome->addAction(actionHome);
        menuHome->addAction(actionSearch);
        menuHome->addAction(actionAdd_Recipe);
        menuHome->addAction(actionEdit_this_recipe);
        menuHome->addSeparator();
        menuHome->addAction(actionDelete_Recipe);

        retranslateUi(Recipe_Viewer);

        QMetaObject::connectSlotsByName(Recipe_Viewer);
    } // setupUi

    void retranslateUi(QMainWindow *Recipe_Viewer)
    {
        Recipe_Viewer->setWindowTitle(QCoreApplication::translate("Recipe_Viewer", "MainWindow", nullptr));
        actionMenu->setText(QCoreApplication::translate("Recipe_Viewer", "Menu", nullptr));
        actionHome->setText(QCoreApplication::translate("Recipe_Viewer", "Home", nullptr));
        actionSearch->setText(QCoreApplication::translate("Recipe_Viewer", "Search", nullptr));
        actionAdd_Recipe->setText(QCoreApplication::translate("Recipe_Viewer", "Add Recipe", nullptr));
        actionEdit_this_recipe->setText(QCoreApplication::translate("Recipe_Viewer", "Edit this recipe", nullptr));
        actionDelete_Recipe->setText(QCoreApplication::translate("Recipe_Viewer", "Delete Recipe", nullptr));
        recipeNameLabel->setText(QCoreApplication::translate("Recipe_Viewer", "Recipe Name", nullptr));
        ingredientsLabel->setText(QCoreApplication::translate("Recipe_Viewer", "Ingredients", nullptr));
        instructionsLabel->setText(QCoreApplication::translate("Recipe_Viewer", "Instructions", nullptr));
        equipmentLabel->setText(QCoreApplication::translate("Recipe_Viewer", "Equipment", nullptr));
        equipmentText->setPlaceholderText(QString());
        recipeImageLabel->setText(QCoreApplication::translate("Recipe_Viewer", "Recipe Image", nullptr));
        pushButton->setText(QCoreApplication::translate("Recipe_Viewer", "Cancel", nullptr));
        editRecipeButton->setText(QCoreApplication::translate("Recipe_Viewer", "Edit Recipe", nullptr));
        menuHome->setTitle(QCoreApplication::translate("Recipe_Viewer", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe_Viewer: public Ui_Recipe_Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_VIEWER_H
