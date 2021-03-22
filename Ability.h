#pragma once
#include"Player.h"


//Sets the namespace to standered
using namespace std;

class Ability {
public:
	//Constructer
	Ability(string name);

	//Acessors
	string getName();

	//Mutators
	void setName(string name);

	//Pure virtual void
	virtual string getDescription() = 0;

protected:
	string mName;
};