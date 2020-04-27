#include "homepage.h"
#include "ui_homepage.h"
#include "recipe_editor.h"
#include "recipe.h"
#include "cookbookFunctions.h"
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <vector>
#include <QVector>
#include <QTextStream>
#include <QListWidgetItem>
#include <QString>
#include "recipe_viewer.h"
#include <iostream>
#include <QIcon>
#include <QObject>
#include "searchpage.h"


using namespace std;
string test = "test";



HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);


    vector<recipe> cookbook;

    load(cookbook);



    for (int i=0; i < cookbook.size() ; i++) {


        ui->recipeList->addItem(new QListWidgetItem(QIcon(QString::fromStdString(cookbook[i].getImageAddress())), QString::fromStdString((cookbook)[i].getName())));



        int count = ui->recipeList->count();

        for (int i= 0; i <count; i++){
            QListWidgetItem *item = ui->recipeList->item(i);
            item->setSizeHint(QSize(item->sizeHint().width(), 100));
        }
        ui->recipeList->setIconSize(QSize(100,100));
        ui->recipeList->setStyleSheet("font: 25pt");


    }


}

HomePage::~HomePage()
{
    delete ui;
}




void HomePage::on_addRecipeButton_clicked()
{
    Recipe_Editor *editorPage = new Recipe_Editor();
    editorPage->setAttribute(Qt::WA_DeleteOnClose);
    editorPage->show();
    this->close();
}

void HomePage::on_recipeList_itemClicked(QListWidgetItem *item)
{


    int index = ui->recipeList->currentRow();
    Recipe_Viewer *viewRecipe = new Recipe_Viewer();


    vector<recipe> cookbook;

    load(cookbook);

    viewRecipe->setIndex(index);

    viewRecipe->displayRecipe(index);

    viewRecipe->show();
    this->close();
}


void HomePage::on_actionNew_Recipe_triggered()
{
    Recipe_Editor *editorPage = new Recipe_Editor();
    editorPage->setAttribute(Qt::WA_DeleteOnClose);
    editorPage->show();
    this->close();
}

void HomePage::on_mainSearchButton_clicked()
{
    QString searchInput = ui->searchLine->text();

    SearchPage *searchPage = new SearchPage();
    searchPage->setAttribute(Qt::WA_DeleteOnClose);

    searchPage->searchFromHome(searchInput);

    searchPage->show();
    this->close();

}

void HomePage::on_searchLine_returnPressed()
{
    HomePage::on_mainSearchButton_clicked();
}

void HomePage::on_actionSearch_triggered()
{
    SearchPage *searchPage = new SearchPage();
    searchPage->setAttribute(Qt::WA_DeleteOnClose);

    searchPage->show();
    this->close();
}
