#ifndef SEARCHPAGE_H
#define SEARCHPAGE_H

#include <QMainWindow>

/*
    Desired Functionality:

    - This page will have a search bar at the top.

    - results will display alphabetically below the search bar.

    - At the bottom of the screen there will be previous and next button to navigate through the receipes

    - Recipes should display their photo is they have one. There should be an icon for recipes that don't have an image

    - Clicking on a recipe will take you the view page of the recipe


*/

namespace Ui {
class SearchPage;
}

class SearchPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchPage(QWidget *parent = nullptr);
    ~SearchPage();

private slots:
    void on_actionHome_triggered();

    void on_actionAdd_Recipe_triggered();

    void on_actionCancel_triggered();

private:
    Ui::SearchPage *ui;
};

#endif // SEARCHPAGE_H
