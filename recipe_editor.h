#ifndef RECIPE_EDITOR_H
#define RECIPE_EDITOR_H

#include <QMainWindow>
#include <QString>


namespace Ui {
class Recipe_Editor;
}

class Recipe_Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Recipe_Editor(QWidget *parent = nullptr);

    ~Recipe_Editor();

    //variable used to keep track of recipe opened from the recipe viwer window
    int recipeIndex;

    void displayRecipe(int index);

    bool openedFromViewer = false;

    void setOpenedFromViewer(){

        openedFromViewer = true;
    }

    //location in app where the reipce image will be saved
    QString recipeImagePath;

    //original location on user's computer
    QString userImagePath = "";

private slots:

    void on_saveRecipeButton_clicked();

    void on_cancelButton_clicked();

    void on_uploadButton_clicked();

    void on_actionHome_triggered();

    void on_actionSave_Recipe_triggered();

    void on_actionCancel_triggered();

    void on_actionSearch_triggered();

    void on_actionDelete_Recipe_triggered();

    void on_resetPhotoButton_clicked();

private:
    Ui::Recipe_Editor *ui;
};

#endif // RECIPE_EDITOR_H
