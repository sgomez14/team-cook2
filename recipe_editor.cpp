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
    QString recipeName = ui->recipeNameText->toPlainText();

    QString ingredients = ui->ingredientsText->toPlainText();

    QString instructions = ui->instructionsText->toPlainText();

    QString equipment = ui->equipmentText->toPlainText();

    dirtyWrite(recipeName.toStdString(),instructions.toStdString(), ingredients.toStdString(), equipment.toStdString());

    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();



}
