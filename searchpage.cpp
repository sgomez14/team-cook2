#include "searchpage.h"
#include "ui_searchpage.h"
#include "recipe_viewer.h"
#include "recipe_editor.h"
#include "homepage.h"

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

void SearchPage::on_actionHome_triggered()
{
    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();

}

void SearchPage::on_actionAdd_Recipe_triggered()
{

    Recipe_Editor *editorPage = new Recipe_Editor();
    editorPage->setAttribute(Qt::WA_DeleteOnClose);
    editorPage->show();
    this->close();
}

void SearchPage::on_actionCancel_triggered()
{
    HomePage*  home = new HomePage();
    home->setAttribute(Qt::WA_DeleteOnClose);
    home->show();
    this->close();
}
