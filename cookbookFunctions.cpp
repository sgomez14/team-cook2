#include <string>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "recipe.h"
#include <cctype>
#include <vector>
#include <sstream>
#include "cookbookFunctions.h"
#include <QDir>
#include <QString>

using namespace std;

QDir currentDir;


QString current = QString(currentDir.currentPath());

//create path to the database file
const string path=  current.toStdString() + "/database.txt";


void initialise(){
    std::ofstream file(path, ios::app);

}

void load(vector<recipe> &cookbook){

    //cout << path << endl;

    cookbook.clear();
    ifstream input;
    vector<string> ingredients;
    vector<string> steps;
    vector<string> equipment;
    string line, name, ingredientString, stepString, equipmentString, imageAddress, dump;


    input.open(path);

    //maybe change to show an error window
    if(input.fail()) {
        cout << "Error!" << endl;
        //line to kill whole program
        return;
    }

    //Takes elements of a single line and loads them into corresponding arrays. For some reasons outputs a new line for all entires after the first. Issue is the previous line contains a "new line" character, and the name of the next line contains that. Causes the print command to print a new line before name. First input in while loop acts as a buffer, catching this endl.

    while (getline(input,dump,'|'),getline(input,name,'|'), getline(input, ingredientString, '|'), getline(input, stepString, '|'), getline(input, equipmentString, '|'), getline(input, imageAddress, '|')){
        stringstream ingWorking(ingredientString);
        stringstream stepWorking(stepString);
        stringstream equipmentWorking(equipmentString);
        while (ingWorking.good()){
            string subIng;
            getline(ingWorking,subIng,'^');
            ingredients.push_back(subIng);
        }
        while (stepWorking.good()){
            string subSteps;
            getline(stepWorking,subSteps,'^');
            steps.push_back(subSteps);
        }
        while (equipmentWorking.good()){
            string subEquipment;
            getline(equipmentWorking,subEquipment,'^');
            equipment.push_back(subEquipment);
        }
        recipe upload(name,ingredients,steps,equipment,imageAddress);
        cookbook.push_back(upload);
        ingredients.clear();
        steps.clear();
        equipment.clear();
    }
}

void WriteRecipe(string name,string steps,string ingredients, string equipment,string imageAddress){

    steps = ReplaceAll(steps, string("\n"),string("^"));
    ingredients = ReplaceAll(ingredients,string("\n"),string("^"));
    equipment = ReplaceAll(equipment, string("\n"),string("^"));

    ofstream file(path, ios::app);
    string data("buffer|" + name + "|" + ingredients + "|" + steps + "|" + equipment + "|" + imageAddress + "|");
    file << data << endl;
    file.close();

}

void DeleteRecipe(int n){
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
    remove(path.c_str());
    //Renaming new edited file
    rename("temp.txt",path.c_str());

    //cout << "DELETE SUCCESSFUL" << endl;
}

void EditRecipe(vector<recipe> &input, int index, string name, string newSteps, string newIngredients, string newEquipment,string imageAddress){

    if (index>=input.size())
    {
        cout << "Error: Input too large" << endl;
        abort();
    }
    else{

        //cout << "Replacing Strings" << endl;
        input[index].setName(name);
        input[index].setImageAddress(imageAddress);
        newSteps = ReplaceAll(newSteps, "\n","^");
        newIngredients = ReplaceAll(newIngredients, "\n","^");
        newEquipment = ReplaceAll(newEquipment, "\n","^");
        input[index].recipe::clearSteps();
        input[index].recipe::clearIngredients();
        input[index].recipe::clearEquipment();
        stringstream ingWorking(newIngredients);
        stringstream stepWorking(newSteps);
        stringstream equipmentWorking(newEquipment);
        while (ingWorking.good()){
            string subIng;
            getline(ingWorking,subIng,'^');
            input[index].recipe::pushIngredient(subIng);
        }
        while (stepWorking.good()){
            string subSteps;
            getline(stepWorking,subSteps,'^');
            input[index].recipe::pushSteps(subSteps);
        }
        while (equipmentWorking.good()){
            string subEquipment;
            getline(equipmentWorking,subEquipment,'^');
            input[index].recipe::pushEquipment(subEquipment);
        }

        vectorDump(input);
    }

}

//Below code based on replacAll by Gauthier Boaglio on Stack Overflow https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string
string ReplaceAll(string str, const string& oldText, const string& newText) {
    size_t start = 0;
    while((start = str.find(oldText, start)) != std::string::npos) {
        str.replace(start, oldText.length(), newText);
        start += newText.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

vector<int> searchCookbook(string input, vector<recipe> reference){                          //Accepts an input reference cookbook and makes a vector containing just the indices if there's a match. Very light weight relative to tossing vectors.
    vector<int> output;
    for (int i = 0; i < reference.size();i++){
        if (reference[i].recipe::getName().find(input) != string::npos){
            //cout << "|NAME MATCH|";
            output.push_back(i);
        }
        else{
            NULL;
        }
    }
    return output;
}

//Outputs the current vector to a textfile and overwrites old one.
void vectorDump(vector<recipe> &input){
    cout << "Test: Vector Dump" << endl;
    ofstream inputTemp;
    inputTemp.open("temp.txt",ofstream::out);
    if(inputTemp.fail()) {
        cout << "Error!" << endl;
        return;
    }
    for (int i = 0; i< input.size();i++){
        string name,ingredients,steps,equipment, imageAddress;
        imageAddress = input[i].getImageAddress();
        name = input[i].getName();
        for (int j = 0; j < input[i].recipe::getIngredientsVectorSize();j++){
            if (ingredients.empty()){
                ingredients = input[i].recipe::getIngredient(j);
            }
            else{
                ingredients = ingredients + "^" + input[i].recipe::getIngredient(j);
            }
        }
        for (int x = 0; x < input[i].recipe::getStepsVectorSize();x++){
            if(steps.empty()){
                steps = input[i].recipe::getStep(x);
            }
            else
            {
                steps = steps + "^" + input[i].recipe::getStep(x) ;
            }
        }
        for (int x = 0; x < input[i].recipe::getEquipmentVectorSize();x++){
            if(equipment.empty()){
                equipment = input[i].recipe::getEquipment(x);
            }
            else
            {
                equipment = equipment + "^" + input[i].recipe::getEquipment(x) ;
            }
        }
        string line("buffer|" + name + "|" + ingredients + "|" + steps + "|" + equipment + "|" + imageAddress + "|");
        inputTemp << line << endl;
    }
    inputTemp.close();
    //Clearing old file
    remove(path.c_str());
    //Renaming new edited file
    rename("temp.txt",path.c_str());
}

void indexBook(vector<recipe> cookbook){
    for (int i =0; i<cookbook.size();i++){
        cout << "Place " << i << ": " << cookbook[i].getName() << endl;
    }
}

