#include "HealthAbility.h"


//Sets the namespace to standered
using namespace std;

HealthAbility::HealthAbility(string name, string description, int cost, int health):Ability(name) {
	mDescription = description;
	mCost = cost;
	mHealth = health;
	fstream log;
	log.open("log.txt");
	log << "HealthAbility constructed / n";
	log.close();
}
string HealthAbility::getDescription() {
	return mDescription;
	fstream log;
	log.open("log.txt");
	log << "HealthAbility.getDescription() called / n";
	log.close();
}

void HealthAbility::useAbility(Player obj) {
	if (obj.getMana() >= mCost) {
		obj.reduceMana(mCost);
		obj.addHealth(mHealth);
	} else {
		cout << obj.getName() << " does not have enough mana to activate this ability";
	}

	fstream log;
	log.open("log.txt");
	log << "HealthAbility.useAbility() called / n";
	log.close();
}