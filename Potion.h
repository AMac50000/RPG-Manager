#pragma once
#include "Item.h"
#include"Player.h"

//Sets the namespace to standered
using namespace std;

class Player;
class Potion :Item {
public:
	//Constructor
	Potion(int health, int mana, string name);

	//use potion
	void usePotion(Player * obj);

	//Creates mNext pointer
	Potion *mNext;

	//Acessor
	int getHealth();
	int getMana();
	string getName();

protected:
	//member variabels
	int mHealth, mMana;
};
