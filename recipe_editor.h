#ifndef RECIPE_EDITOR_H
#define RECIPE_EDITOR_H

#include <QMainWindow>

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
class Recipe_Editor;
}

class Recipe_Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Recipe_Editor(QWidget *parent = nullptr);
    void displayRecipe(int index);
    ~Recipe_Editor();

private slots:
   // void on_uploadPhoto_clicked();

    void on_saveRecipeButton_clicked();

private:
    Ui::Recipe_Editor *ui;
};

#endif // RECIPE_EDITOR_H
