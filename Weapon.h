#pragma once
#include "Item.h"
#include"Player.h"

//Sets the namespace to standered
using namespace std;

class Player;
class Weapon :Item {
public:
	//Constructor
	Weapon(int power, string name);
	//Creates mNext pointer
	Weapon * mNext;

	//Acessors
	string getName();
	int getPower();

protected:
	//Member Variables
	int mPower;
};
