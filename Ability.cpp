#include"Ability.h"

//Sets the namespace to standered
using namespace std;
Ability::Ability(string name) {
	fstream log;
	log.open("log.txt");
	log << "Ability constructed \n";
	mName = name;
}

void Ability::setName(string name) {
	mName = name;
	fstream log;
	log.open("log.txt");
	log << "Ability.setName() called \n";
}

string Ability::getName() {
	return mName;

	fstream log;
	log.open("log.txt");
	log << "Ability.getName() called \n";
}
