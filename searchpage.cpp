#include "searchpage.h"
#include "ui_searchpage.h"

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
