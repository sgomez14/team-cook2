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
#include "searchpage.h"

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
    cout << "Image Address: " << cookbook[recipeIndex].getImageAddress() << endl;

    QString ingredients = QString::fromStdString(cookbook[recipeIndex].returnConcatStringIngredients());

    QString instructions = QString::fromStdString(cookbook[recipeIndex].returnConcatStringSteps());

    QString equipment = QString::fromStdString(cookbook[recipeIndex].returnConcatStringEquipment());

    ui->recipeNameText->setText(recipeName);
    ui->ingredientsText->setText(ingredients);
    ui->instructionsText->setText(instructions);
    ui->equipmentText->setText(equipment);
}



void Recipe_Viewer::on_nextRecipeButton_clicked()
{

    Recipe_Viewer *viewRecipe = new Recipe_Viewer();

    vector<recipe> cookbook;
    load(cookbook);
    int lastRecipe = cookbook.size() - 1;


    if(recipeIndex == lastRecipe){
        viewRecipe->displayRecipe(0);
    }
    else{
        viewRecipe->displayRecipe(recipeIndex + 1);
    }


    viewRecipe->show();
    this->close();
}

void Recipe_Viewer::on_previousRecipeButton_clicked()
{
    Recipe_Viewer *viewRecipe = new Recipe_Viewer();
    vector<recipe> cookbook;
    load(cookbook);


    if(recipeIndex == 0){
        viewRecipe->displayRecipe(cookbook.size()-1);
    }
    else{
        viewRecipe->displayRecipe(recipeIndex-1);
    }


    viewRecipe->show();
    this->close();
}

void Recipe_Viewer::on_editRecipeButton_clicked()
{
    Recipe_Editor *editorPage = new Recipe_Editor();
    vector<recipe> cookbook;
    editorPage->displayRecipe(recipeIndex);
    editorPage->setOpenedFromViewer();
    editorPage->show();
    this->close();

}

void Recipe_Viewer::on_actionHome_triggered()
{
    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();

}

void Recipe_Viewer::on_actionSearch_triggered()
{

    SearchPage*  searchpage = new SearchPage();
    searchpage->setAttribute(Qt::WA_DeleteOnClose);
    searchpage->show();
    this->close();

}

void Recipe_Viewer::on_actionAdd_Recipe_triggered()
{
    Recipe_Editor *editorPage = new Recipe_Editor();
    editorPage->setAttribute(Qt::WA_DeleteOnClose);
    editorPage->show();
    this->close();
}

void Recipe_Viewer::on_actionEdit_this_recipe_triggered()
{
    Recipe_Editor *editorPage = new Recipe_Editor();
      vector<recipe> cookbook;
      editorPage->displayRecipe(recipeIndex);
      editorPage->show();
      this->close();

}

void Recipe_Viewer::on_actionDelete_Recipe_triggered()
{
//implement after delete
}
