#include "recipe_editor.h"
#include "ui_recipe_editor.h"
#include <QFile>
#include <QImage>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include "recipe.h"
#include "cookbookFunctions.h"
#include <QString>
#include "homepage.h"
#include <QFileInfo>
#include "searchpage.h"

Recipe_Editor::Recipe_Editor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Recipe_Editor)

{
    ui->setupUi(this);
    vector<recipe> cookbook;
    load(cookbook);

}

Recipe_Editor::~Recipe_Editor()
{
    delete ui;
}


void Recipe_Editor::displayRecipe(int index){


    recipeIndex = index;

    vector<recipe> cookbook;

    load(cookbook);

    recipeImagePath = QString::fromStdString(cookbook[recipeIndex].getImageAddress());


    QString recipeName = QString::fromStdString(cookbook[recipeIndex].getName());

    QString ingredients = QString::fromStdString(cookbook[recipeIndex].returnConcatStringIngredients());

    QString instructions = QString::fromStdString(cookbook[recipeIndex].returnConcatStringSteps());

    QString equipment = QString::fromStdString(cookbook[recipeIndex].returnConcatStringEquipment());

    ui->recipeNameText->setText(recipeName);
    ui->ingredientsText->setText(ingredients);
    ui->instructionsText->setText(instructions);
    ui->equipmentText->setText(equipment);

    QString imgPath = QString::fromStdString(cookbook[recipeIndex].getImageAddress());

    QImage image;

    if (!image.load(imgPath)){

        QImage defaultPicture;

        defaultPicture.load(":/resources/img/spices.jpg");

        QImage defaultPictureScaled = defaultPicture.scaledToWidth(ui->photoLabel->width(),Qt::SmoothTransformation);

        ui->photoLabel->setPixmap(QPixmap::fromImage(defaultPictureScaled));
    }
    else{
        QImage scaledRecipePicture = image.scaledToWidth(ui->photoLabel->width(),Qt::SmoothTransformation);

        ui->photoLabel->setPixmap(QPixmap::fromImage(scaledRecipePicture));
    }


}



void Recipe_Editor::on_saveRecipeButton_clicked()
{

    QString recipeNameField = ui->recipeNameText->toPlainText();

    QString ingredients = ui->ingredientsText->toPlainText();

    QString instructions = ui->instructionsText->toPlainText();

    QString equipment = ui->equipmentText->toPlainText();

    QString imageAddress;

    //checking to see if name field is empty. Do not save if it is empty.
    if (recipeNameField.isEmpty()){

        QMessageBox::warning(this, "Recipe Name Missing","Recipe Name is Required to Save");

    }

    //saving recipe when creating new recipe
    else if (openedFromViewer == false){


        //saving photo that user uploaded
        if (!userImagePath.isEmpty()){

            QDir currentDir;


            QString current = QString(currentDir.currentPath());

            QFileInfo fileInfo(userImagePath);

            recipeImagePath = current + "/recipePictures/" + fileInfo.fileName();

            if (QFile(recipeImagePath).exists() != true){

                QFile::copy(userImagePath, recipeImagePath);
            }

            imageAddress = recipeImagePath;

          }
        //if user did not upload photo, then use default recipe photo
        else{

            imageAddress = ":/resources/img/spices.jpg"; //default recipe image
        }

        //write the new recipe to the cookbook
        WriteRecipe(recipeNameField.toStdString(),instructions.toStdString(), ingredients.toStdString(), equipment.toStdString(),imageAddress.toStdString());


            HomePage*  home = new HomePage();
            home->setAttribute(Qt::WA_DeleteOnClose);
            home->show();
            this->close();
       }

    //saving recipe after it was opened from recipe viewer window
    else{

        vector<recipe> cookbook;

        load(cookbook);

        //the image will be either what user saved before, their new photo, or the default photo if they reset it.
        //save new image
        if (!userImagePath.isEmpty()){

            QDir currentDir;


            QString current = QString(currentDir.currentPath());

            QFileInfo fileInfo(userImagePath);

            recipeImagePath = current + "/recipePictures/" + fileInfo.fileName();

            if (QFile(recipeImagePath).exists() != true){

                QFile::copy(userImagePath, recipeImagePath);
            }

            imageAddress = recipeImagePath;

          }
        //use perviously saved recipe image
        else{
            imageAddress = recipeImagePath;
        }

        EditRecipe(cookbook, recipeIndex, recipeNameField.toStdString(), instructions.toStdString(),ingredients.toStdString(), equipment.toStdString(),imageAddress.toStdString());


        HomePage*  home = new HomePage();
        home->setAttribute(Qt::WA_DeleteOnClose);
        home->show();
        this->close();
    }
}



void Recipe_Editor::on_cancelButton_clicked()
{
    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();
}

void Recipe_Editor::on_uploadButton_clicked()
{
    userImagePath = QFileDialog::getOpenFileName(this, tr("Choose")," ", tr("Images (*.png *.jpg *.jpeg *bmp *.gif)"));

    QImage image;

    if (QString::compare(userImagePath, QString()) != 0)
    {

        bool valid = image.load(userImagePath);

        if(valid)
        {
             QImage scaledImage = image.scaledToWidth(ui->photoLabel->width(),Qt::SmoothTransformation);
            ui->photoLabel->setPixmap(QPixmap::fromImage(scaledImage));
        }
        else
        {
            QMessageBox::warning(this, "Photo Upload Error","Photo Did Not Upload. Try Again.");
        }
    }

}

void Recipe_Editor::on_actionHome_triggered()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit without Saving?","Are you sure you want to exit without saving?",QMessageBox::Yes|QMessageBox::No);

    if(reply == QMessageBox::Yes){
        HomePage*  home = new HomePage();
        home->setAttribute(Qt::WA_DeleteOnClose);
        home->show();
        this->close();
    }

}

void Recipe_Editor::on_actionSave_Recipe_triggered()
{
    Recipe_Editor::on_saveRecipeButton_clicked();
}

void Recipe_Editor::on_actionCancel_triggered()
{
    Recipe_Editor::on_cancelButton_clicked();
}

void Recipe_Editor::on_actionSearch_triggered()
{

    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit without Saving?","Are you sure you want to exit without saving?",QMessageBox::Yes|QMessageBox::No);


    if(reply == QMessageBox::Yes){
        SearchPage*  searchpage = new SearchPage();
        searchpage->setAttribute(Qt::WA_DeleteOnClose);
        searchpage->show();
        this->close();
    }
}

void Recipe_Editor::on_actionDelete_Recipe_triggered()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Delete Recipe?","Are you sure you want to delete this recipe?",QMessageBox::Yes|QMessageBox::No);

    if(reply == QMessageBox::Yes){

        DeleteRecipe(recipeIndex);

        HomePage*  home = new HomePage();
        home->setAttribute(Qt::WA_DeleteOnClose);
        home->show();
        this->close();
    }
}

void Recipe_Editor::on_resetPhotoButton_clicked()
{
    ui->photoLabel->clear();
    //userImagePath = ":/resources/img/spices.jpg";
    recipeImagePath = ":/resources/img/spices.jpg";

    QImage image;

    if (QString::compare(recipeImagePath, QString()) != 0)
    {

        bool valid = image.load(recipeImagePath);

        if(valid)
        {
             QImage scaledImage = image.scaledToHeight(ui->photoLabel->width(),Qt::SmoothTransformation);
            ui->photoLabel->setPixmap(QPixmap::fromImage(scaledImage));
        }
        else
        {
            QMessageBox::warning(this, "Photo Upload Error","Photo Did Not Upload. Try Again.");
        }
    }
}
