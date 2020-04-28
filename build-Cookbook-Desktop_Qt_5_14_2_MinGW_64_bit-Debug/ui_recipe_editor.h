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

class Ui_Recipe_Editor
{
public:
    QAction *actionHome;
    QAction *actionSearch;
    QAction *actionCancel;
    QAction *actionSave_Recipe;
    QAction *actionDelete_Recipe;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *recipeNameLabel;
    QTextEdit *recipeNameText;
    QLabel *ingredientsLabel;
    QTextEdit *ingredientsText;
    QLabel *instructionsLabel;
    QTextEdit *instructionsText;
    QLabel *equipmentLabel;
    QTextEdit *equipmentText;
    QLabel *photoLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *uploadButton;
    QPushButton *resetPhotoButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveRecipeButton;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recipe_Editor)
    {
        if (Recipe_Editor->objectName().isEmpty())
            Recipe_Editor->setObjectName(QString::fromUtf8("Recipe_Editor"));
        Recipe_Editor->resize(1200, 800);
        Recipe_Editor->setMinimumSize(QSize(800, 600));
        Recipe_Editor->setBaseSize(QSize(1200, 800));
        Recipe_Editor->setAnimated(false);
        actionHome = new QAction(Recipe_Editor);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/Home1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon);
        actionSearch = new QAction(Recipe_Editor);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon1);
        actionCancel = new QAction(Recipe_Editor);
        actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCancel->setIcon(icon2);
        actionSave_Recipe = new QAction(Recipe_Editor);
        actionSave_Recipe->setObjectName(QString::fromUtf8("actionSave_Recipe"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/icons/saveYellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Recipe->setIcon(icon3);
        actionDelete_Recipe = new QAction(Recipe_Editor);
        actionDelete_Recipe->setObjectName(QString::fromUtf8("actionDelete_Recipe"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/icons/trashCan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Recipe->setIcon(icon4);
        centralwidget = new QWidget(Recipe_Editor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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
        recipeNameText->setTabChangesFocus(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, recipeNameText);

        ingredientsLabel = new QLabel(centralwidget);
        ingredientsLabel->setObjectName(QString::fromUtf8("ingredientsLabel"));
        ingredientsLabel->setBaseSize(QSize(0, 0));
        ingredientsLabel->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, ingredientsLabel);

        ingredientsText = new QTextEdit(centralwidget);
        ingredientsText->setObjectName(QString::fromUtf8("ingredientsText"));
        ingredientsText->setFont(font);
        ingredientsText->setTabChangesFocus(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, ingredientsText);

        instructionsLabel = new QLabel(centralwidget);
        instructionsLabel->setObjectName(QString::fromUtf8("instructionsLabel"));
        instructionsLabel->setBaseSize(QSize(0, 0));
        instructionsLabel->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, instructionsLabel);

        instructionsText = new QTextEdit(centralwidget);
        instructionsText->setObjectName(QString::fromUtf8("instructionsText"));
        instructionsText->setFont(font);
        instructionsText->setTabChangesFocus(true);

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
        equipmentText->setTabChangesFocus(true);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, equipmentText);

        photoLabel = new QLabel(centralwidget);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(photoLabel->sizePolicy().hasHeightForWidth());
        photoLabel->setSizePolicy(sizePolicy2);
        photoLabel->setMinimumSize(QSize(100, 100));
        photoLabel->setBaseSize(QSize(0, 0));
        photoLabel->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, photoLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(350, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        uploadButton = new QPushButton(centralwidget);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(uploadButton->sizePolicy().hasHeightForWidth());
        uploadButton->setSizePolicy(sizePolicy3);
        uploadButton->setMinimumSize(QSize(150, 0));
        uploadButton->setMaximumSize(QSize(150, 100));
        uploadButton->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/icons/upload.png"), QSize(), QIcon::Normal, QIcon::On);
        uploadButton->setIcon(icon5);
        uploadButton->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(uploadButton);

        resetPhotoButton = new QPushButton(centralwidget);
        resetPhotoButton->setObjectName(QString::fromUtf8("resetPhotoButton"));
        sizePolicy3.setHeightForWidth(resetPhotoButton->sizePolicy().hasHeightForWidth());
        resetPhotoButton->setSizePolicy(sizePolicy3);
        resetPhotoButton->setMinimumSize(QSize(100, 0));
        resetPhotoButton->setMaximumSize(QSize(150, 100));
        resetPhotoButton->setFont(font);

        horizontalLayout_3->addWidget(resetPhotoButton);

        horizontalSpacer_3 = new QSpacerItem(450, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout_3->setLayout(4, QFormLayout::FieldRole, horizontalLayout_3);


        verticalLayout_2->addLayout(formLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(258, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(200, 0));
        cancelButton->setFont(font);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/icons/close.png"), QSize(), QIcon::Normal, QIcon::On);
        cancelButton->setIcon(icon6);

        horizontalLayout_2->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(400, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveRecipeButton = new QPushButton(centralwidget);
        saveRecipeButton->setObjectName(QString::fromUtf8("saveRecipeButton"));
        saveRecipeButton->setMinimumSize(QSize(200, 0));
        saveRecipeButton->setFont(font);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/icons/saveYellow.png"), QSize(), QIcon::Normal, QIcon::On);
        saveRecipeButton->setIcon(icon7);

        horizontalLayout_2->addWidget(saveRecipeButton);

        horizontalSpacer_5 = new QSpacerItem(250, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Recipe_Editor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Recipe_Editor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        Recipe_Editor->setMenuBar(menubar);
        statusbar = new QStatusBar(Recipe_Editor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Recipe_Editor->setStatusBar(statusbar);
        QWidget::setTabOrder(recipeNameText, ingredientsText);
        QWidget::setTabOrder(ingredientsText, instructionsText);
        QWidget::setTabOrder(instructionsText, equipmentText);
        QWidget::setTabOrder(equipmentText, uploadButton);
        QWidget::setTabOrder(uploadButton, cancelButton);
        QWidget::setTabOrder(cancelButton, saveRecipeButton);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionHome);
        menuMenu->addAction(actionSearch);
        menuMenu->addAction(actionCancel);
        menuMenu->addAction(actionSave_Recipe);
        menuMenu->addSeparator();
        menuMenu->addAction(actionDelete_Recipe);

        retranslateUi(Recipe_Editor);

        QMetaObject::connectSlotsByName(Recipe_Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Recipe_Editor)
    {
        Recipe_Editor->setWindowTitle(QCoreApplication::translate("Recipe_Editor", "MainWindow", nullptr));
        actionHome->setText(QCoreApplication::translate("Recipe_Editor", "Home", nullptr));
        actionSearch->setText(QCoreApplication::translate("Recipe_Editor", "Search", nullptr));
        actionCancel->setText(QCoreApplication::translate("Recipe_Editor", "Cancel", nullptr));
        actionSave_Recipe->setText(QCoreApplication::translate("Recipe_Editor", "Save Recipe", nullptr));
        actionDelete_Recipe->setText(QCoreApplication::translate("Recipe_Editor", "Delete Recipe", nullptr));
        recipeNameLabel->setText(QCoreApplication::translate("Recipe_Editor", "Recipe Name", nullptr));
        ingredientsLabel->setText(QCoreApplication::translate("Recipe_Editor", "Ingredients", nullptr));
        instructionsLabel->setText(QCoreApplication::translate("Recipe_Editor", "Instructions", nullptr));
        equipmentLabel->setText(QCoreApplication::translate("Recipe_Editor", "Equipment", nullptr));
        equipmentText->setPlaceholderText(QString());
        photoLabel->setText(QCoreApplication::translate("Recipe_Editor", "Photo", nullptr));
        uploadButton->setText(QCoreApplication::translate("Recipe_Editor", "Upload Photo", nullptr));
        resetPhotoButton->setText(QCoreApplication::translate("Recipe_Editor", "Reset Photo", nullptr));
        cancelButton->setText(QCoreApplication::translate("Recipe_Editor", "Cancel", nullptr));
        saveRecipeButton->setText(QCoreApplication::translate("Recipe_Editor", "Save Recipe", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("Recipe_Editor", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe_Editor: public Ui_Recipe_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_EDITOR_H
