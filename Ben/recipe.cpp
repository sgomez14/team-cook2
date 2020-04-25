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
    recipe::recipe(string n, vector<string> i, vector<string> s){       //Add variable for tools/equipment. And tag/keyword member. Pointer for recipe's image.  
        name = n;
        ingredients = i;
        steps = s;
    }
    void recipe::display(){
        cout << "Recipe Name: " << name << endl;
        recipe::printAllIngredients();
        recipe::printAllSteps();

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

//setters for each variable
    void recipe::setName(string n){
        name = n;
    }
    void recipe::setIngredient(int n, string i){
        ingredients[n] = i;
    }
    void recipe::setStep(int n, string s){
        steps[n] = s;
    }
    void recipe::setEquipment(int n, string e){
        equipment[n] = e;
    }
    void recipe::setImageAddress(string link){
        imageAddress = link;
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
        cout << "Steps: " << endl;
        for (int i = 0; i < equipmentVectorSize;i++){
            cout << steps[i] << endl;
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
        stepsVectorSize = equipment.size();
        return;
    }
