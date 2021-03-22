#include "DamageAbility.h"

//Sets the namespace to standered
using namespace std;

DamageAbility::DamageAbility(string name, string description, int cost, int damage) :Ability(name) {
	mDescription = description;
	mCost = cost;
	mDamage = damage;

	fstream log;
	log.open("log.txt");
	log << "DamageAbility constructed \n";

}
string DamageAbility::getDescription() {
	return mDescription;

	fstream log;
	log.open("log.txt");
	log << "DamageAbility.getDescription() called \n";

}
void DamageAbility::useAbility(Player atacking, Player defending) {
	if (atacking.getMana() >= mCost) {
		defending.reduceHealth(mDamage);
		atacking.reduceMana(mCost);
	} else {
		cout << atacking.getName() << " does not have enough mana to activate this ability" << endl;
	}

	fstream log;
	log.open("log.txt");
	log << "DamageAbility.useAbility() called \n";

}