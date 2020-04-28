#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>



QT_BEGIN_NAMESPACE
namespace Ui { class HomePage; }
QT_END_NAMESPACE

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:


    void on_addRecipeButton_clicked();

    void on_recipeList_itemClicked(QListWidgetItem *item);

    void on_actionNew_Recipe_triggered();

    void on_mainSearchButton_clicked();

    void on_searchLine_returnPressed();

    void on_actionSearch_triggered();

private:
    Ui::HomePage *ui;

signals:
    void sendIndex(int index);

};

#endif // HOMEPAGE_H
