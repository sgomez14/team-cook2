#ifndef RECIPE_VIEWER_H
#define RECIPE_VIEWER_H

#include <QMainWindow>




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

    void on_nextRecipeButton_clicked();

    void on_previousRecipeButton_clicked();

    void on_editRecipeButton_clicked();

private:
    Ui::Recipe_Viewer *ui;

signals:
    void nextPage(int index);


};

#endif // RECIPE_VIEWER_H
