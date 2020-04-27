#include <string>
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <time.h>
#include <unistd.h>
#include "recipe.h"
#include <cctype>
#include <vector>
#include <sstream>
using namespace std;

void WriteRecipe(string name,string steps,string ingredients, string equipment, string imageAddress);

void DeleteRecipe(int n);

void indexBook(vector<recipe> cookbook);

void initialise();

void load(vector<recipe> &temp);

void EditRecipe(vector<recipe> &input, int index, string name, string newSteps, string newIngredients, string newEquipment, string imageAddress);

void vectorDump(vector<recipe> &input);

string ReplaceAll(string str, const string& oldText, const string& newText);

vector<int> searchCookbook(string input, vector<recipe> reference);

/*string returnConcatStringSteps(recipe input);

string returnConcatStringIngredients(recipe input);

string returnConcatStringEquipment(recipe input);*/

