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
    void displayRecipe(int index);
    ~Recipe_Editor();

    bool openedFromViewer = false;

    void setOpenedFromViewer(){

        openedFromViewer = true;
    }

    QString imgPath;

private slots:
   // void on_uploadPhoto_clicked();

    void on_saveRecipeButton_clicked();

    void on_cancelButton_clicked();

    void on_uploadButton_clicked();

private:
    Ui::Recipe_Editor *ui;
};

#endif // RECIPE_EDITOR_H
