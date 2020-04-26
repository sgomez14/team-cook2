#include <string>
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <time.h>
//#include <unistd.h>
#include "recipe.h"
#include <cctype>
#include <vector>
#include <sstream>
using namespace std;

void WriteRecipe(string name,string steps,string ingredients, string equipment);

void DeleteRecipe(int n);

void indexBook(vector<recipe> cookbook);

void initialise();

void load(vector<recipe> &temp);

void EditRecipe(vector<recipe> &input);

vector<int> searchIndices(string input, vector<recipe> reference);

void vectorDump(vector<recipe> &input);

string ReplaceAll(string str, const string& oldText, const string& newText);

/*string returnConcatStringSteps(recipe input);

string returnConcatStringIngredients(recipe input);

string returnConcatStringEquipment(recipe input);*/

