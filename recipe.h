#ifndef RECIPE
#define RECIPE

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;



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

        recipe(string n, vector<string> i, vector<string> s, vector<string> e, string imageAddress);

        //Deconstructor
        //~recipe();          //Do we need to deconstruct vectors?

        void display();

        void display(string recipeName); //Get specific recipe

        //getters for each variables.
        string getName();

        string getImageAddress();

        string getEquipment(int n);

        //Vector Sizes

        int getIngredientsVectorSize();

        int getStepsVectorSize();

        int getEquipmentVectorSize();

        //setters for each variable
        void setName(string n);

        void setIngredient(int n, string i);

        void setStep(int n, string s);

        void setEquipment(int n, string e);

        void setImageAddress(string link);

        //Pushers
        void pushIngredient(string n);

        void pushSteps(string n);

        void pushEquipment(string n);

        //Clearers
        void clearSteps();

        void clearIngredients();

        void clearEquipment();

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

        string returnConcatStringSteps();

        string returnConcatStringIngredients();

        string returnConcatStringEquipment();

};

#endif
