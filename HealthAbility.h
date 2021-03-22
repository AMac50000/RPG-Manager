#pragma once
#include"Ability.h"

//Sets the namespace to standered
using namespace std;

class HealthAbility :Ability {
public:
	//Constructor
	HealthAbility(string name, string description, int cost, int health);

	//Acessor
	string getDescription();

	//Uses ability
	void useAbility(Player obj);
protected:
	//Member variables
	int mHealth, mCost;
	string mDescription;
};