#include "recipe_viewer.h"
#include "ui_recipe_viewer.h"
#include "recipe_editor.h"
#include <QFile>
#include <QImage>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include "recipe.h"
#include "cookbookFunctions.h"
#include <vector>
#include <iostream>
#include <QString>
#include "recipe_editor.h"
#include "homepage.h"

using namespace std;

Recipe_Viewer::Recipe_Viewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Recipe_Viewer)

{
    ui->setupUi(this);



}

Recipe_Viewer::~Recipe_Viewer()
{
    delete ui;
}

void Recipe_Viewer::setIndex(int index){

    recipeIndex = index;

    cout << "Recipe Index set" << endl;
}


int Recipe_Viewer::getIndex(){
    return recipeIndex;
}

void Recipe_Viewer::displayRecipe(int index){

    recipeIndex = index;

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

void Recipe_Viewer::on_nextRecipeButton_clicked()
{

    Recipe_Viewer *viewRecipe = new Recipe_Viewer();
    vector<recipe> cookbook;
    long cursize = cookbook.size() - 1;
    recipeIndex = getIndex();
    if(recipeIndex == cursize){
        setIndex(0);
    }
    else{
        setIndex(recipeIndex +1);
    }

    viewRecipe->setIndex(recipeIndex);

    load(cookbook);

    viewRecipe->displayRecipe(recipeIndex);

    viewRecipe->show();
    this->close();
}

void Recipe_Viewer::on_previousRecipeButton_clicked()
{
    Recipe_Viewer *viewRecipe = new Recipe_Viewer();
    vector<recipe> cookbook;
    recipeIndex = getIndex();
    if(recipeIndex == 0){
        setIndex(cookbook.size()-1);
    }
    else{
        setIndex(recipeIndex-1);
    }
    viewRecipe->setIndex(recipeIndex);

    load(cookbook);

    viewRecipe->displayRecipe(recipeIndex);

    viewRecipe->show();
    this->close();
}

void Recipe_Viewer::on_editRecipeButton_clicked()
{
    Recipe_Editor *editorPage = new Recipe_Editor();
    vector<recipe> cookbook;
    editorPage->displayRecipe(recipeIndex);
    //editorPage->setAttribute(Qt::WA_DeleteOnClose);
    editorPage->show();
    this->close();

}
