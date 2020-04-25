#ifndef COOKBOOKFUNCTIONS
#define COOKBOOKFUNCTIONS

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

void dirtyWrite(string name,string steps,string ingredients, string equipment); //change name

void dirtyDelete(int n); //change name

void indexBook(vector<recipe> cookbook);


void initialise();

void load(vector<recipe> &temp);

void dirtyEdit(vector<recipe> &input);

void vectorDump(vector<recipe> &input);

string ReplaceAll(string str, const string& oldText, const string& newText);

/*string returnConcatStringSteps(recipe input);

string returnConcatStringIngredients(recipe input);

string returnConcatStringEquipment(recipe input);*/

#endif
