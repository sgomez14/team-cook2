#include "searchpage.h"
#include "ui_searchpage.h"
#include "recipe_viewer.h"
#include "recipe_editor.h"
#include "homepage.h"

#include "homepage.h"
#include "recipe_editor.h"
#include "recipe.h"
#include "cookbookFunctions.h"
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
#include <QMessageBox>


SearchPage::SearchPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchPage)
{
    ui->setupUi(this);
}

SearchPage::~SearchPage()
{
    delete ui;
}


void SearchPage::on_searchButton_clicked()
{


    searchResults.clear();
    ui->searchResultsList->clear();

    QString searchInput = ui->searchLine->text();

    if (searchInput.isEmpty()){
        QMessageBox::information(this,"Search Input Empty", "You did not enter any text into the search bar.");
    }
    else{

        vector<recipe> cookbook;

        load(cookbook);

         vector<int> cppVector = searchCookbook(searchInput.toStdString(), cookbook);

        //vector<int> searchResults = searchCookbook(searchInput.toStdString(), cookbook);

         for (unsigned long int i = 0; i< cppVector.size(); i++){

             searchResults.append(cppVector[i]);

         }



         if (searchResults.size() == 0){

             ui->searchResultsText->setText("No Recipes Found");

         }
         else{

             QString searchDisplayText;
                if (searchResults.size() > 1){

                    searchDisplayText = QString::number(searchResults.size()) + " Recipes Found";
                }
                else{
                    searchDisplayText = "1 Recipe Found";
                }

                ui->searchResultsText->setText(searchDisplayText);


            for (int i=0; i < searchResults.size(); i++){

                ui->searchResultsList->addItem(new QListWidgetItem(QIcon(QString::fromStdString(cookbook[(searchResults[i])].getImageAddress())), QString::fromStdString((cookbook)[(searchResults[i])].getName())));



                int count = ui->searchResultsList->count();

                for (int i= 0; i <count; i++){
                    QListWidgetItem *item = ui->searchResultsList->item(i);
                    item->setSizeHint(QSize(item->sizeHint().width(), 100));
                }
                ui->searchResultsList->setIconSize(QSize(100,100));
                ui->searchResultsList->setStyleSheet("font: 25pt");

            }

        }

     }
}

void SearchPage::searchFromHome(QString searchInput){

    ui->searchResultsList->clear();

    vector<recipe> cookbook;

    load(cookbook);



    vector<int> cppVector = searchCookbook(searchInput.toStdString(), cookbook);

    for (unsigned long int i = 0; i< cppVector.size(); i++){

        searchResults.append(cppVector[i]);


    }

     if (searchResults.size() == 0){

         ui->searchResultsText->setText("No Recipes Found");

     }
     else{

         QString searchDisplayText;
            if (searchResults.size() > 1){

                searchDisplayText = QString::number(searchResults.size()) + " Recipes Found";
            }
            else{
                searchDisplayText = "1 Recipe Found";
            }

            ui->searchResultsText->setText(searchDisplayText);


        for (int i=0; i < searchResults.size(); i++){

            ui->searchResultsList->addItem(new QListWidgetItem(QIcon(QString::fromStdString(cookbook[(searchResults[i])].getImageAddress())), QString::fromStdString((cookbook)[(searchResults[i])].getName())));



            int count = ui->searchResultsList->count();

            for (int i= 0; i <count; i++){
                QListWidgetItem *item = ui->searchResultsList->item(i);
                item->setSizeHint(QSize(item->sizeHint().width(), 100));
            }
            ui->searchResultsList->setIconSize(QSize(100,100));
            ui->searchResultsList->setStyleSheet("font: 25pt");

        }

    }

}


void SearchPage::on_searchLine_returnPressed()
{
    SearchPage::on_searchButton_clicked();
}

void SearchPage::on_returnHomeButton_clicked()

{
    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();

}

void SearchPage::on_addRecipeButton_clicked()
{

    Recipe_Editor *editorPage = new Recipe_Editor();
    editorPage->setAttribute(Qt::WA_DeleteOnClose);
    editorPage->show();
    this->close();
}


void SearchPage::on_actionHome_triggered()
{
    SearchPage::on_returnHomeButton_clicked();
}

void SearchPage::on_actionAdd_Recipe_triggered()
{
    SearchPage::on_addRecipeButton_clicked();
}

void SearchPage::on_actionCancel_triggered()
{
    SearchPage::on_returnHomeButton_clicked();
}

void SearchPage::on_searchResultsList_itemClicked(QListWidgetItem *item)
{
    int index = ui->searchResultsList->currentRow();
    Recipe_Viewer *viewRecipe = new Recipe_Viewer();


    vector<recipe> cookbook;

    load(cookbook);

    viewRecipe->setIndex(searchResults[index]);

    viewRecipe->displayRecipe(searchResults[index]);

    viewRecipe->show();
    this->close();
}

