#pragma once
#include"Ability.h"

//Sets the namespace to standered
using namespace std;

class DamageAbility :Ability {
public:
	//Constructer
	DamageAbility(string name, string description, int cost, int damage);
	//Acessors
	string getDescription();
	//Activates the ability
	void useAbility(Player atacking, Player Defending);
protected:
	//Member variables
	int mDamage,mCost;
	string mDescription;
};