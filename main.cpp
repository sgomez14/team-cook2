#include "homepage.h"
#include "recipe_editor.h"
#include <QDir>
#include <QFile>
#include <QString>
#include <QTextStream>
#include "cookbookFunctions.h"
#include "recipe.h"


#include <QApplication>


QString readTextFile(QString path)
{
    QFile file(path);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream inFile(&file);
        return inFile.readAll();
    }
    return "";

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     QString css =readTextFile(":/resources/style/style.css");

    if (css.length()>0)
    {
        a.setStyleSheet(css);
    }

    initialise();


    HomePage w;
    w.show();

    QDir picturePath;

    QString recipePictures = "recipePictures";

    picturePath.mkpath(recipePictures);

    //Recipe_Editor editor;

    //editor.show();
    return a.exec();
}
