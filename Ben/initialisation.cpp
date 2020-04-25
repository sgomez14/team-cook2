#include <iostream>
#include <fstream>
#include <string>
#include "initialisation.h"
#include "recipe.h"
#include <sstream>
#include <algorithm>
using namespace std;

void initilise(){
    const char *path="dataToUpload.txt";
    system("mkdir Working"); 
    cout << "Initialise successful" << endl;
    std::ofstream file(path, ios::app);
    // string data("Pie buy_it Lots_of_steps");                 //Writes data input to file for testing. 
    // file << data << endl;
    cout << "Database created" << endl;
}   

void load(vector<recipe> &temp){               //REDO THIS ENTIRE LOAD FUNCTION. WORKING NOW
    temp.clear();
    ifstream input;
    vector<string> ingredients;
    vector<string> steps;
    string line, name, ingString, stepString, dump;
    input.open("dataToUpload.txt");
    if(input.fail()) {
        cout << "Error!" << endl;
        return;
    }
    //Takes elements of a single line and loads them into corresponding arrays. For some reasons outputs a new line for all entires after the first. Issue is the previous line contains a "new line" character, and the name of the next line contains that. Causes the print command to print a new line before name. First input in while loop acts as a buffer, catching this endl. 
    //Make into permanent heap based;
    while (getline(input,dump,'/'),getline(input,name,'/'), getline(input, ingString, '/'), getline(input, stepString, '/')){ 
        stringstream ingWorking(ingString);
        stringstream stepWorking(stepString);
        while (ingWorking.good()){
            string subIng;
            getline(ingWorking,subIng,',');
            ingredients.push_back(subIng);
        }
        while (stepWorking.good()){
            string subSteps;
            getline(stepWorking,subSteps,',');
            steps.push_back(subSteps);
        }
        recipe upload(name,ingredients,steps);
        temp.push_back(upload);
        ingredients.clear();
        steps.clear();
    }
}
