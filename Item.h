#pragma once
#include <string>
#include<iostream>
#include <fstream>

//#include "Player.h"

//Sets the namespace to standered
using namespace std;

class Item{
public:
	//Constructor
	Item(string name);
protected:
	//Member variable
	string mName;
};