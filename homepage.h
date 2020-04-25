#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>

/*
    Desired Functionality:

    - This is the default page when the program starts.

    - It will have the search bar at the top.

    - There will be a button that takes you to the recipe editor

    - On this page you will be able to see a list of the recipes with their pictures

*/

QT_BEGIN_NAMESPACE
namespace Ui { class HomePage; }
QT_END_NAMESPACE

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:


    void on_addRecipeButton_clicked();

    void on_recipeList_itemClicked(QListWidgetItem *item);

private:
    Ui::HomePage *ui;
};
#endif // HOMEPAGE_H
