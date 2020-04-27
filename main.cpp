#include "homepage.h"
#include "recipe_editor.h"
#include <QDir>
#include <QFile>
#include <QString>
#include <QTextStream>
#include "cookbookFunctions.h"
#include "recipe.h"
#include <QSplashScreen>
#include <QTimer>


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

    QSplashScreen *splash=new QSplashScreen;
        splash->setPixmap (QPixmap(":/resources/img/Loading2.png"));
        splash->show();


     QString css =readTextFile(":/resources/style/style.css");

    if (css.length()>0)
    {
        a.setStyleSheet(css);
    }

    initialise();

    QDir picturePath;

    QString recipePictures = "recipePictures";

    picturePath.mkpath(recipePictures);


    HomePage w;

    QTimer::singleShot(2500, splash, SLOT(close()));
    QTimer::singleShot(2500, &w, SLOT(show()));


    return a.exec();
}
