#include "Weapon.h"

//Sets the namespace to standered
using namespace std;

Weapon::Weapon(int power,string name):Item(name) {
	mPower = power;

	fstream log;
	log.open("log.txt");
	log << "Weapon constructed /n";

}


int Weapon::getPower() {
	return mPower;

	fstream log;
	log.open("log.txt");
	log << "Weapon.getPower() called \n";

}

string Weapon::getName() {
	return mName;

	fstream log;
	log.open("log.txt");
	log << "Weapon.getName() called \n";

}
