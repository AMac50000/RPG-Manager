#pragma once
#include"Ability.h"

//Sets the namespace to standered
using namespace std;

class EnviormentAbility :Ability {
public:
	//Constructor
	EnviormentAbility(string name, string description,int cost);

	//Acessor
	string getDescription();

	//Use ability
	void useAbility(Player obj);
protected:
	//Member variables
	int mCost;
	string mDescription;
};