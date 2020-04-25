#ifndef VIEWRECIPE_H
#define VIEWRECIPE_H

#include <QMainWindow>

/*
    Desired Functionality:

    - When this page loads, it defaults to reading the first recipe stored.

    - There should be a dropdown menu where you can jump to a specifc recipe

    - At the bottom of the screen there will be previous and next button to navigate through the receipes

    - Recipe navigation should wrap around, ie if on the last recipe clicking next will take you back to the first receipe & vice versa.

    - This view page should also have a edit button that till take you the editor page.


*/

namespace Ui {
class ViewRecipe;
}

class ViewRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewRecipe(QWidget *parent = nullptr);
    ~ViewRecipe();

private:
    Ui::ViewRecipe *ui;
};

#endif // VIEWRECIPE_H
