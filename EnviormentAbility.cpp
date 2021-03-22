#include "EnviormentAbility.h"


//Sets the namespace to standered
using namespace std;

EnviormentAbility::EnviormentAbility(string description, string name, int cost):Ability(name) {
	mDescription = description;
	mCost = cost;
	fstream log;
	log.open("log.txt");
	log << "EnviormentAbility constructed \n";
}

string EnviormentAbility::getDescription() {
	return mDescription;

	fstream log;
	log.open("log.txt");
	log << "EnviormentAbility.getDescription() called \n";
}
void EnviormentAbility::useAbility(Player obj) {
	if (obj.getMana() >= mCost) {
		obj.reduceMana(mCost);
	} else {
		cout << obj.getName() << " does not have enough mana to activate this ability" << endl;
	}

	fstream log;
	log.open("log.txt");
	log << "EnviormentAbility.useAbility() called \n";
}
