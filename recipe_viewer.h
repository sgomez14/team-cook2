#ifndef RECIPE_VIEWER_H
#define RECIPE_VIEWER_H

#include <QMainWindow>
#include "recipe.h"
#include <vector>

/*
    Desired Functionality:

    - If users click the add recipe button from the homepage, then they recipe a blank editor.

    - If users click on the edit button on a recipe, then the fields will be pre-populated

    - There will be fields for name, ingredients, equipment, instructions.

    - There will be an upload recipe picture button.

    - Users can select photo from anywhere on their computer.

    - All data entered on this page will be save to the resources folder.

    - A save recipe button will be at the bottom.


*/

namespace Ui {
class Recipe_Viewer;
}

class Recipe_Viewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Recipe_Viewer(QWidget *parent = nullptr);
    ~Recipe_Viewer();

    int recipeIndex;

    void setIndex(int index);

    int getIndex();

    void displayRecipe(int index);


private slots:
   // void on_uploadPhoto_clicked();

    void on_nextRecipeButton_clicked();

    void on_previousRecipeButton_clicked();

    void on_editRecipeButton_clicked();

private:
    Ui::Recipe_Viewer *ui;

signals:
    void nextPage(int index);

/*public slots:
    void setIndex(int index);*/

};

#endif // RECIPE_VIEWER_H
