#ifndef SEARCHPAGE_H
#define SEARCHPAGE_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <vector>
#include <QVector>

namespace Ui {
class SearchPage;
}

class SearchPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchPage(QWidget *parent = nullptr);
    ~SearchPage();


    void searchFromHome(QString searchInput);

    QVector<int> searchResults;


private slots:
    void on_searchButton_clicked();

    void on_searchLine_returnPressed();

    void on_returnHomeButton_clicked();

    void on_addRecipeButton_clicked();


private slots:

    void on_actionHome_triggered();

    void on_actionAdd_Recipe_triggered();

    void on_actionCancel_triggered();


    void on_searchResultsList_itemClicked(QListWidgetItem *item);

private:
    Ui::SearchPage *ui;
};

#endif // SEARCHPAGE_H
