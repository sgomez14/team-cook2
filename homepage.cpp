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


using namespace std;
string test = "test";



HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);


    vector<recipe> cookbook;

    load(cookbook);

    /*while (!readIn.atEnd()){
        receipeVector.append(readIn.readLine());
    }*/


    for (int i=0; i < cookbook.size() ; i++) {

        cout << "Reading in new recipe" << endl;

        ui->recipeList->addItem(new QListWidgetItem(QIcon(":/resources/icons/logo3.png"), QString::fromStdString((cookbook)[i].getName())));



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


    cout << ui->recipeList->currentRow() <<endl;
    int index = ui->recipeList->currentRow();
    Recipe_Viewer *recipe = new Recipe_Viewer();

    //QObject::connect(this, SIGNAL(sendIndex()), recipe, ///SLOT(setIndex(index)));

    //this->sendIndex(index);

    recipe->setIndex(index);

    //cout << item->type() <<endl;
    //Recipe_Viewer *recipe = new Recipe_Viewer();

    recipe->show();
    this->close();
}
