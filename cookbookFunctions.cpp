#include <string>
#include <iostream>
#include <fstream>
//#include <unistd.h>
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


const string path=  current.toStdString() + "/database.txt";


void initialise(){

    //system("mkdir Working");
    std::ofstream file(path, ios::app);

}

void load(vector<recipe> &cookbook){

    cout << path << endl;
    cookbook.clear();
    ifstream input;
    vector<string> ingredients;
    vector<string> steps;
    vector<string> equipment;
    string line, name, ingredientString, stepString, equipmentString, dump;
    //input.open("C:/Users/santi09/Google Drive/Coding/327/team-cook/build-Cookbook-Desktop_Qt_5_14_2_MinGW_64_bit-Debug/dataToUpload.txt");

    input.open(path);

    //maybe change to show an error window
    if(input.fail()) {
        cout << "Error!" << endl;
        //line to kill whole program
        return;
    }

    //Takes elements of a single line and loads them into corresponding arrays. For some reasons outputs a new line for all entires after the first. Issue is the previous line contains a "new line" character, and the name of the next line contains that. Causes the print command to print a new line before name. First input in while loop acts as a buffer, catching this endl.
    //Make into permanent heap based;
    while (getline(input,dump,'|'),getline(input,name,'|'), getline(input, ingredientString, '|'), getline(input, stepString, '|'), getline(input, equipmentString, '|')){
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
        recipe upload(name,ingredients,steps,equipment);
        cookbook.push_back(upload);
        ingredients.clear();
        steps.clear();
        equipment.clear();
    }
}

void WriteRecipe(string name,string steps,string ingredients, string equipment){                  //Add a concat string function to return a long string with spacing and new lines.
    //cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');     //Flushes cin buffer.
    /*string name, steps, ingredients,equipment;
    //cout << "Enter recipe name: ";
    getline(cin,name);                     //Skipping first line for some reason.
    //cout << "Enter ingredients, seperated by a comma: ";
    getline(cin,ingredients);
    //cout << "Enter steps, seperated by a comma: ";
    getline(cin , steps);
    //cout << "Enter equipment, seperated by a comma: ";
    getline(cin , equipment);*/

    cout << "Replacing Strings" << endl;
    steps = ReplaceAll(steps, string("\n"),string("^"));
    ingredients = ReplaceAll(ingredients,string("\n"),string("^"));
    equipment = ReplaceAll(equipment, string("\n"),string("^"));

    cout << steps << endl;

    ofstream file(path, ios::app);
    string data("buffer|" + name + "|" + ingredients + "|" + steps + "|" + equipment + "|");
    file << endl << data << endl;
    file.close();

}

void DeleteRecipe(int n){    //TODO: PRUNE EMPTY LINES FROM COPY
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
    //remove(path);
    //Renaming new edited file
    //rename("temp.txt",path);
}

void EditRecipe(vector<recipe> &input, int index, string newSteps, string newIngredients, string newEquipment){
    //string newSteps, newIngredients, newEquipment;
    //int n;
    //cout << "Enter index number: ";
    //cin >> n;
    if (index>=input.size())
    {
        cout << "Error: Input too large" << endl;
        abort();
    }
    else{
        /*cout << "Old Steps: " << input[n].returnConcatStringSteps() << endl;
        cout << "Old Ingedients: " << input[n].returnConcatStringIngredients() << endl;
        cout << "Old Equipment: " << input[n].returnConcatStringEquipment() << endl;
        cout << "______________________" << endl;
        cout << "Enter Steps, seperated by a coma: " << endl;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');     //Flushes cin buffer.
        getline(cin,newSteps);
        cout << "Enter Ingredients, seperated by a coma: " << endl;
        getline(cin,newIngredients);
        cout << "Enter Equipment, seperated by a coma: " << endl;
        getline(cin,newEquipment);*/
        cout << "Replacing Strings" << endl;
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
//         input[index].recipe::printAllIngredients();
//         input[index].recipe::printAllSteps();
//         input[index].recipe::printAllEquipment();
        vectorDump(input);
    }

}

//Below code based on replacAll by Gauthier Boaglio on Stack Overflow https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string
string ReplaceAll(string inputString, const string& oldText, const string& newText) {
    size_t start = 0;
    while((start = inputString.find(oldText, start)) != std::string::npos) {
        inputString.replace(start, oldText.length(), newText);
        start += newText.length(); // Handles case where 'to' is a substring of 'from'
    }
    return inputString;
}
//std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
//    size_t start_pos = 0;
//    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
//        str.replace(start_pos, from.length(), to);
//        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
//    }
//    return str;
//}

vector<int> searchIndices(string input, vector<recipe> reference){                          //Accepts an input reference cookbook and makes a vector containing just the indices if there's a match. Very light weight relative to tossing vectors.
    vector<int> output;
    for (int i = 0; i < reference.size();i++){
        if (reference[i].recipe::getName().find(input) != string::npos){
            cout << "|NAME MATCH|";
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
        string name,ingredients,steps,equipment;
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
        string line("buffer|" + name + "|" + ingredients + "|" + steps + "|" + equipment + "|");
        inputTemp << line << endl;
    }
    inputTemp.close();
    //Clearing old file
    //remove(path);
    //Renaming new edited file
    //rename("temp.txt",path);
}

void indexBook(vector<recipe> cookbook){
    for (int i =0; i<cookbook.size();i++){
        cout << "Place " << i << ": " << cookbook[i].getName() << endl;
    }
}

//MOVE TO RECIPE CLASS, AND MAKE DUPLICATE FOR EACH VECTOR TYPE
/*string returnConcatStringSteps(recipe input)       //Takes an input recipe object and a selector string. The vectors inside of the input are parsed to be returned as one long strong with \n implemented for each line. Selector acts as a way of picking ingredient, equipment, or steps vector.
{
    string output;
    for (int i = 0; i<input.recipe::getStepsVectorSize(); i++){
        output = output + input.recipe::getStep(i) + "\n";
    }
    return output;
}

string returnConcatStringIngredients(recipe input){
    string output;
    for (int i = 0; i<input.recipe::getIngredientsVectorSize(); i++){
        output = output + input.recipe::getIngredient(i) + "\n";
    }
    return output;
}

string returnConcatStringEquipment(recipe input){
    string output;
    for (int i = 0; i<input.recipe::getEquipmentVectorSize(); i++){
        output = output + input.recipe::getEquipment(i) + "\n";
    }
    return output;
}*/
