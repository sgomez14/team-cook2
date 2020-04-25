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

using namespace std;
string test = "test";



HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);

    initialise();

    /*QFile recipeData("C:/Users/santi09/Google Drive/Coding/327/team-cook/build-Cookbook-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/dataToUpload.txt");

    if (recipeData.open(QFile::ReadOnly | QFile::Text)){
        //QMessageBox::warning(this, "recipe file not open");
        cout << "recipe did not open";
    }*/

    //QTextStream readIn(&recipeData);

    //QString saveWord;

    vector<recipe> cookbook;

    load(cookbook);

    /*while (!readIn.atEnd()){
        receipeVector.append(readIn.readLine());
    }*/

     cout << cookbook.size() << endl;

    for (int i=0; i < cookbook.size() ; i++) {
        ui->recipeList->addItem(new QListWidgetItem(QString::fromStdString((cookbook)[i].getName())));
        cout << test << endl;
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

    cout << item->type() <<endl;
    /*Recipe_Viewer *recipe = new Recipe_Viewer();
    recipe->show();
    this->close();*/
}
