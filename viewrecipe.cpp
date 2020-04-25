#include "viewrecipe.h"
#include "ui_viewrecipe.h"

ViewRecipe::ViewRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewRecipe)
{
    ui->setupUi(this);
}

ViewRecipe::~ViewRecipe()
{
    delete ui;
}
