#include <string>
#include <iostream>
#include <fstream>
#include "recipe.h"
#include <vector>
using namespace std;

//Idea for importing vectors: Create a new variable for each
//vector that constantly gets the length of the array, and
//stores as an int. When initialising, create a for loop for
//that number when loading to act as seperators.

//Recipes Class and functions
//Constructors
    recipe::recipe(string n, vector<string> i, vector<string> s, vector<string> e){       //Add variable for tools/equipment. And tag/keyword member. Pointer for recipe's image.
        name = n;
        ingredients = i;
        steps = s;
        equipment = e;
    }

//Display
    void recipe::display(){
        cout << "Recipe Name: " << endl << name << endl;
        recipe::printAllIngredients();
        recipe::printAllSteps();
        recipe::printAllEquipment();

        //cout << "Steps: " << steps << endl;     //Create an iterator that uses step.size() to count the number of times it needs to loop to print out each ingredient, maybe use a subfucntion called printAllSteps()?
    }

//getters for each variables.
    string recipe::getName(){
        return name;
    }
    string recipe::getIngredient(int n){        //Gets ingredient at place n. Use with a for loop using vector size to display all. Build into defailt function?
        return ingredients[n];
    }
    string recipe::getStep(int n){      //Gets step at place n. Use with a for loop using vector size to display all. Build into defailt function?
        return steps[n];
    }
    string recipe::getEquipment(int n){      //Gets step at place n. Use with a for loop using vector size to display all. Build into defailt function?
        return equipment[n];
    }
    string recipe::getImageAddress(){
        return imageAddress;
    }
    int recipe::getIngredientsVectorSize(){
        calibrateIngredientSize();
        return ingredientVectorSize;
    }

    int recipe::getStepsVectorSize(){
        calibrateStepSize();
        return stepsVectorSize;
    }

    int recipe::getEquipmentVectorSize(){
        calibrateEquipmentSize();
        return equipmentVectorSize;
    }

//setters for each variable
    void recipe::setName(string n){
        //Add input string parsing.
        name = n;
    }
    void recipe::setIngredient(int n, string i){
        //Add input string parsing.
        ingredients[n] = i;
    }
    void recipe::setStep(int n, string s){
        //Add input string parsing.
        steps[n] = s;
    }
    void recipe::setEquipment(int n, string e){
        //Add input string parsing.
        equipment[n] = e;
    }
    void recipe::setImageAddress(string link){
        //Add input string parsing.
        imageAddress = link;
    }

//Pushers
    void recipe::pushIngredient(string n){
        ingredients.push_back(n);
    }

    void recipe::pushSteps(string n){
        steps.push_back(n);
    }

    void recipe::pushEquipment(string n){
        equipment.push_back(n);
    }

//Clearers
    void recipe::clearSteps(){
        steps.clear();
        calibrateStepSize();
    }

    void recipe::clearIngredients(){
        ingredients.clear();
        calibrateIngredientSize();
    }

    void recipe::clearEquipment(){
        equipment.clear();
        calibrateEquipmentSize();
    }

//Displaying vectors
    void recipe::printAllIngredients(){    //Iterates through all parts of vector. Each ingredient is stored as its own "string sentence thing", so we use them as string objects to import them as seperate items on the vector.
        recipe::calibrateIngredientSize();
        cout << "Ingredients: " << endl;
        for (int i = 0; i < ingredientVectorSize;i++){
            cout << ingredients[i] << endl;
        }
        //cout << "Done outputting ingredients. Size: "<< ingredients.size() << endl;     //Testing case
    }
    void recipe::printAllSteps(){
        recipe::calibrateStepSize();
        cout << "Steps: " << endl;
        for (int i = 0; i < stepsVectorSize;i++){
            cout << steps[i] << endl;
        }
        //cout << "Done outputting steps. Size: "<< steps.size() << endl;     //Testing case
    }
    void recipe::printAllEquipment(){
        recipe::calibrateEquipmentSize();
        cout << "equipment: " << endl;
        for (int i = 0; i < equipmentVectorSize;i++){
            cout << equipment[i] << endl;
        }
        //cout << "Done outputting ingredients." << endl;     //Testing case
    }

//Calibrating Vector Size Variables
    void recipe::calibrateIngredientSize(){ //Calibrates the current vector size, ie gets vector current size and sets variable to that.
        ingredientVectorSize = ingredients.size();
        return;
    }
    void recipe::calibrateStepSize(){ //Calibrates the current vector size, ie gets vector current size and sets variable to that.
        stepsVectorSize = steps.size();
        return;
    }
    void recipe::calibrateEquipmentSize(){ //Calibrates the current vector size, ie gets vector current size and sets variable to that.
        equipmentVectorSize = equipment.size();
        return;
    }

    string recipe::returnConcatStringSteps()       //Takes an input recipe object and a selector string. The vectors inside of the input are parsed to be returned as one long strong with \n implemented for each line. Selector acts as a way of picking ingredient, equipment, or steps vector.
    {
        string output;
        for (int i = 0; i< getStepsVectorSize(); i++){
            output = output + getStep(i) + "\n";
        }
        return output;
    }

    string recipe::returnConcatStringIngredients(){
        string output;
        for (int i = 0; i< getIngredientsVectorSize(); i++){
            output = output + getIngredient(i) + "\n";
        }
        return output;
    }

    string recipe::returnConcatStringEquipment(){
        string output;
        for (int i = 0; i< getEquipmentVectorSize(); i++){
            output = output + getEquipment(i) + "\n";
        }
        return output;
    }
