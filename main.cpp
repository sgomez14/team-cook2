#include "homepage.h"
#include "recipe_editor.h"
#include <QDir>
#include <QString>


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (css.length()>0)
    {
        a.setStyleSheet(css);
    }

    HomePage w;
    w.show();

    QDir picturePath;

    QString recipePictures = "recipePictures";

    picturePath.mkpath(recipePictures);

    //Recipe_Editor editor;

    //editor.show();
    return a.exec();
}
