#ifndef RECIPE 
#define RECIPE

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

//Idea for importing vectors: Create a new variable for each 
//vector that constantly gets the length of the array, and 
//stores as an int. When initialising, create a for loop for 
//that number when loading to act as seperators. 

//Recipes Class and functions
class recipe{
    private:                            //Add variable for tools/equipment. And tag/keyword member. Pointer for recipe's image.  
        string name;
        string imageAddress;            //System command for copy file from user input to working directory. 
        vector<string> tags;
        vector<string> equipment;
        int equipmentVectorSize;
        vector<string> ingredients;
        int ingredientVectorSize;
        vector<string> steps;
        int stepsVectorSize;

    public:
        //Constructors
        recipe();

        recipe(string n, vector<string> i, vector<string> s);

        //Deconstructor
        //~recipe();          //Do we need to deconstruct vectors? 

        void display();

        void display(string recipeName); //Get specific recipe

        //getters for each variables. 
        string getName();

        //string getIngredient(int n);         //Convert to vector later

        //string getStep(int n);              //Convert to vector later

        string getImageAddress();

        string getEquipment(int n);

        //setters for each variable
        void setName(string n);

        void setIngredient(int n, string i);

        void setStep(int n, string s);

        void setEquipment(int n, string e);

        void setImageAddress(string link);

        //Getters for vector items
        string getStep(int n);          //Returns ingredient in the nth places. Still a string because the vector contains a string.
                                        
        string getIngredient(int n);    //Returns ingredient in the nth places. Still a string because the vector contains a string.

        //Displaying vectors
        void printAllIngredients();
        
        void printAllSteps();

        void printAllEquipment();

        //Calibrating vector size variables
        void calibrateStepSize();

        void calibrateIngredientSize();

        void calibrateEquipmentSize();
};

#endif
