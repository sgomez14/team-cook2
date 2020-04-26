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

    int recipeIndex = index;

    vector<recipe> cookbook;

    load(cookbook);

    QString recipeName = QString::fromStdString(cookbook[recipeIndex].getName());

    cout <<"Recipe Name: " <<  cookbook[recipeIndex].getName() << endl;


    QString ingredients = QString::fromStdString(cookbook[recipeIndex].returnConcatStringIngredients());

    QString instructions = QString::fromStdString(cookbook[recipeIndex].returnConcatStringSteps());

    QString equipment = QString::fromStdString(cookbook[recipeIndex].returnConcatStringEquipment());

    ui->recipeNameText->setText(recipeName);
    ui->ingredientsText->setText(ingredients);
    ui->instructionsText->setText(instructions);
    ui->equipmentText->setText(equipment);
}

/*
void Recipe_Editor::on_uploadPhoto_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose")," ", tr("Images (*.png *.jpg *.jpeg *bmp *.gif)"));

    QImage image;

    if (QString::compare(filename, QString()) != 0)
    {

        bool valid = image.load(filename);

        if(valid)
        {
            image = image.scaledToWidth(ui->img->width(),Qt::SmoothTransformation);
            ui->img->setPixmap(QPixmap::fromImage(image));
        }
        else
        {
            //error handling
        }
    }

    QDir currentDir;

    QString  imagePath = QFileDialog::getSaveFileName(this, tr("Save File"), tr("JPEG (*.jpg *.jpeg); PNG (*.png)"));

    //QMessageBox::information(this,"", currentDir.currentPath());

    if (image.save(imagePath))
    {
        QMessageBox::information(this,"", "The file saved");
    }
    else
    {
        QMessageBox::warning(this,"", "The file didn't save");
    }


}*/

void Recipe_Editor::on_saveRecipeButton_clicked()
{

    if (openedFromViewer == false){

        QString recipeName = ui->recipeNameText->toPlainText();

        QString ingredients = ui->ingredientsText->toPlainText();

        QString instructions = ui->instructionsText->toPlainText();

        QString equipment = ui->equipmentText->toPlainText();

        QString imageAddress;

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
        else{

            imageAddress = ":/resources/img/spices.jpg"; //default recipe image
        }


        WriteRecipe(recipeName.toStdString(),instructions.toStdString(), ingredients.toStdString(), equipment.toStdString(),imageAddress.toStdString());
       }





    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();



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
             QImage scaledImage = image.scaledToHeight(ui->photoLabel->width(),Qt::SmoothTransformation);
            ui->photoLabel->setPixmap(QPixmap::fromImage(scaledImage));
        }
        else
        {
            //error handling
            //need to configure message box to say that image didn't save properly
        }
    }





}

void Recipe_Editor::on_actionHome_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Home","Are you sure you want to exit without saving?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        HomePage*  home = new HomePage();
        home->setAttribute(Qt::WA_DeleteOnClose);
        home->show();
        this->close();
    }

}
