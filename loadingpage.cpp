#include "loadingpage.h"
#include "ui_loadingpage.h"

LoadingPage::LoadingPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoadingPage)
{
    ui->setupUi(this);
}

LoadingPage::~LoadingPage()
{
    delete ui;
}
