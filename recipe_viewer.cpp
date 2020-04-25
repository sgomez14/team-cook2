#include "recipe_viewer.h"
#include "ui_recipe_viewer.h"
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

    vector<recipe> cookbook;

    load(cookbook);

    cout << "Viewer Index: " << recipeIndex << endl;

}

Recipe_Viewer::~Recipe_Viewer()
{
    delete ui;
}

void Recipe_Viewer::setIndex(int index){

    recipeIndex = index;
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
