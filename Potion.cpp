#include "Potion.h"

Potion::Potion(int health, int mana, string name): Item(name){
	mHealth = health;
	mMana = mana;

	fstream log;
	log.open("log.txt");
	log << "Potion constructed \n";

}

void Potion::usePotion(Player * obj) {
	obj->addMana(mMana);

	fstream log;
	log.open("log.txt");
	log << "Potion.usePotion() called \n";

}

int Potion::getHealth() {
	return mHealth;

	fstream log;
	log.open("log.txt");
	log << "Potion.getHealth() called \n";

}

int Potion::getMana() {
	return mMana;

	fstream log;
	log.open("log.txt");
	log << "Potion.getMana() called \n";
}

string Potion::getName() {
	return mName;

	fstream log;
	log.open("log.txt");
	log << "Potion.getName() called \n";
}