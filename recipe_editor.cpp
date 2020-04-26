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

        WriteRecipe(recipeName.toStdString(),instructions.toStdString(),    ingredients.toStdString(), equipment.toStdString());
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
