#pragma once
#include <string>
#include <iostream>

//#include "Item.h"
#include "Potion.h"
#include "Weapon.h"
//Sets the namespace to standered
using namespace std;

class Weapon;
class Potion;

class Player {
public:
	Potion * pHead;
	Weapon * wHead;

	//Overload constructor
	Player(int health, int mana, int power, string name);

	//Aceessors
	int getHealth();
	int getMana();
	int getPower();
	string getName();

	//Mutators
	void reduceHealth(int health);
	void reduceMana(int mana);
	void reducePower(int power);
	void addHealth(int health);
	void addMana(int mana);
	void addPower(int power);
	void setName(string name);
	void equipWepon(string name);
	void unequipWepon(string name);

	//Adds to linked lists
	void getPotion(int health, int mana, string name);
	void getWeapon(int power, string name);

	//removes items form linked lists
	void usePotion(string name);
	void DiscardPotion(string name);
	void DiscardWeapon(string name);

	//Comairs the power of players
	bool operator<(Player obj);
	bool operator>(Player obj);


private:
	//member variables
	int mHealth, mMana, mPower;
	string mName;
};