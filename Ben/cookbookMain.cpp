#include <string>
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <time.h>
#include <unistd.h> 
#include "ui.h"
#include "initialisation.h"
#include "book.h"
#include "recipe.h"
#include <cctype>
using namespace std;

vector<recipe> cookbook;
const char *path="dataToUpload.txt";

void dirtyWrite(){
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');     //Flushes cin buffer.
    string name, steps, ingredients;
    cout << "Enter recipe name: ";
    getline(cin,name);                     //Skipping first line for some reason.
    cout << "Enter ingredients, seperated by a comma: ";
    getline(cin,ingredients);
    cout << "Enter steps, seperated by a comma: ";
    getline(cin , steps);;
    ofstream file(path, ios::app);
    string data("buffer/" + name + "/" + ingredients + "/" + steps + "/");
    file << data << endl;
}

void dirtyDelete(int n){    //TODO: PRUNE EMPTY LINES FROM COPY
    string line;
    int lineCounter = 0;
    ifstream input;
    ofstream inputTemp;
    inputTemp.open("temp.txt",ofstream::out);
    input.open(path);
    if(input.fail()) {
        cout << "Error!" << endl;
        return;
    }
    while(getline(input,line)){
        if(lineCounter == n){NULL;}
        else{
            inputTemp << line << endl;
        }
        lineCounter++;
    }
    inputTemp.close();
    input.close();
    //Clearing old file
    remove(path);
    //Renaming new edited file
    rename("temp.txt",path);
}

void indexBook(){
    for (int i =0; i<cookbook.size();i++){
        cout << "Place " << i << ": " << cookbook[i].getName() << endl;
    }
}

int main(){
    initilise();
    string line;
    bool q1;
    bool quitCond = false;
    system("cls");
    cout << "Welcome to my cookbook" << endl;
    system("pause");      
    //home_screen();
    while (quitCond == false){
        system("cls");
        cout << "What would you like to do? (write, load, quit, index, delete)" << endl;
        cin >> line;
        if(line == "Quit" || line == "quit"){
            quitCond = true;
        }
        else if(line == "load"){
            string n;
            cout << "Load which index? (# or 'all') " ;
            cin >> n;
            load(cookbook);
            //Printing Recipe list
            if(n == "all"){
                for (int i =0; i< cookbook.size();i++){
                    cookbook[i].recipe::display();
                    cout << endl;
                }
            system("pause");
            }
            else{
                try
                {
                    int index = std::stoi(n);
                    cookbook[index].recipe::display();
                    cout << endl;
                }
                catch(const std::exception& e){
                    cout << "Error: Not a number." << endl;
                }
                system("pause");                                //"Press any key to continue"
            }
        }
        else if(line == "write"){
            dirtyWrite();
            cout << endl;
            system("pause");
        }
        else if(line == "index"){
            load(cookbook);
            indexBook();
            cout << endl;
            system("pause");
        }
        else if(line == "delete"){
            load(cookbook);
            int n;
            cout << "Delete which index? ";
            cin >> n;
            dirtyDelete(n);
            cout << endl;
            system("pause");
        }
    }
    system("cls");
    cout << "Goodbye" << endl;
}
