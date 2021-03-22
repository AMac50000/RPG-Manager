#include "Player.h"

using namespace std;

Player::Player(int health, int mana,int power, string name) {
	mHealth = health;
	mMana = mana;
	mName = name;
	mPower = power;
	pHead = nullptr;
	wHead = nullptr;

	fstream log;
	log.open("log.txt");
	log << "Player constructed \n";

}

int Player::getHealth() {
	return mHealth;


	fstream log;
	log.open("log.txt");
	log << "Player.getHealth() called \n";
}
int Player::getMana() {
	return mMana;


	fstream log;
	log.open("log.txt");
	log << "Player.getMana() called \n";

}
string Player::getName() {
	return mName;

	fstream log;
	log.open("log.txt");
	log << "Player.getName() called \n";

}

void Player::reduceHealth(int health) {
	mHealth -= health;

	fstream log;
	log.open("log.txt");
	log << "Player.reduceHealth() called \n";
}
void Player::reduceMana(int mana) {
	mMana -= mana;

	fstream log;
	log.open("log.txt");
	log << "Player.reduceMana() called \n";
}
void Player::reducePower(int power) {
	mPower -= power;

	fstream log;
	log.open("log.txt");
	log << "Player.reducePower() called \n";
}
void Player::addHealth(int health) {
	mHealth += health;

	fstream log;
	log.open("log.txt");
	log << "Player.addHealth() called \n";
}
void Player::addMana(int mana) {
	mMana += mana;

	fstream log;
	log.open("log.txt");
	log << "Player.addMana() called \n";
}
void Player::addPower(int power) {
	mPower += power;

	fstream log;
	log.open("log.txt");
	log << "Player.addPower() called \n";
}
void Player::setName(string name) {
	mName = name;

	fstream log;
	log.open("log.txt");
	log << "Player.setName() called \n";
}

void Player::getPotion(int health, int mana, string name) {
	if (pHead == nullptr) {
		pHead = new Potion(health,mana, name);
	}
	else
	{
		Potion *nodePtr = pHead;
		while (nodePtr->mNext != nullptr)
			nodePtr = nodePtr->mNext;
		nodePtr->mNext = new Potion(health, mana, name);
	}

	fstream log;
	log.open("log.txt");
	log << "Player.getPotion() called \n";
}

void Player::getWeapon(int power, string name)
{
	if (wHead == nullptr) {
		wHead = new Weapon(power, name);
	}
	else
	{
		Weapon *nodePtr = wHead;
		while (nodePtr->mNext != nullptr)
			nodePtr = nodePtr->mNext;
		nodePtr->mNext = new Weapon(power, name);
	}

	fstream log;
	log.open("log.txt");
	log << "Player.getWeapon() called \n";

}


void Player::usePotion(string name) {
	Potion *nodePtr, *previousNodePtr;
	//Detects if their is any members in the list and returns if their is not
	if (!pHead) return;

	//Cheacks to see if the head's first and last name match the provided name and deletes it if so
	if ((pHead->getName() == name)) {
		addHealth(pHead->getHealth());
		addMana(pHead->getMana());
		nodePtr = pHead;
		pHead = pHead->mNext;
		delete nodePtr;
	}
	//Searchs though the list to find the node with the name that matchs the prodided name then deletes it
	else
	{
		nodePtr = pHead;
		previousNodePtr = nodePtr;

		//Cheach each node to see if it has the same name as the one provided and moves on if not
		while (name != nodePtr->getName())
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->mNext;
		}

		if (nodePtr) {
			addHealth(pHead->getHealth());
			addMana(pHead->getMana());
			previousNodePtr->mNext = nodePtr->mNext;
			delete nodePtr;
		}
	}

	fstream log;
	log.open("log.txt");
	log << "Player.usePotion() called \n";

}
void Player::DiscardPotion(string name) {
	Potion *nodePtr, *previousNodePtr;
	//Detects if their is any members in the list and returns if their is not
	if (!pHead) return;

	//Cheacks to see if the head's first and last name match the provided name and deletes it if so
	if (pHead->getName() == name) {
		nodePtr = pHead;
		pHead = pHead->mNext;
		delete nodePtr;
	}
	//Searchs though the list to find the node with the name that matchs the prodided name then deletes it
	else
	{
		nodePtr = pHead;
		previousNodePtr = nodePtr;

		//Cheach each node to see if it has the same name as the one provided and moves on if not
		while (name != nodePtr->getName())
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->mNext;
		}

		if (nodePtr) {
			previousNodePtr->mNext = nodePtr->mNext;
			delete nodePtr;
		}
	}

	fstream log;
	log.open("log.txt");
	log << "Player.DiscardPotion() called \n";

}
void Player::DiscardWeapon(string name){
	Weapon *nodePtr, *previousNodePtr;
	//Detects if their is any members in the list and returns if their is not
	if (!wHead) return;

	//Cheacks to see if the head's first and last name match the provided name and deletes it if so
	if (wHead->getName() == name) {
		nodePtr = wHead;
		pHead = pHead->mNext;
		delete nodePtr;
	}
	//Searchs though the list to find the node with the name that matchs the prodided name then deletes it
	else
	{
		nodePtr = wHead;
		previousNodePtr = nodePtr;

		//Checks each node to see if it has the same name as the one provided and moves on if not
		while (name != nodePtr->getName())
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->mNext;
		}

		if (nodePtr) {
			previousNodePtr->mNext = nodePtr->mNext;
			delete nodePtr;
		}
	}

	fstream log;
	log.open("log.txt");
	log << "Player.DiscardWeapon() called \n";

}

void Player::equipWepon(string name) {
	Weapon *nodePtr, *previousNodePtr;
	//Detects if their is any members in the list and returns if their is not
	if (!wHead) return;

	//Cheacks to see if the head's first and last name match the provided name and deletes it if so
	if (wHead->getName() == name) {
		nodePtr = wHead;
		wHead = wHead->mNext;
		addPower(nodePtr->getPower());
	}
	//Searchs though the list to find the node with the name that matchs the prodided name then deletes it
	else
	{
		nodePtr = wHead;
		previousNodePtr = nodePtr;

		//Checks each node to see if it has the same name as the one provided and moves on if not
		while (name != nodePtr->getName())
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->mNext;
		}

		if (nodePtr) {
			previousNodePtr->mNext = nodePtr->mNext;
			addPower(nodePtr->getPower());
		}
	}
	fstream log;
	log.open("log.txt");
	log << "Player.equipWepon() called \n";
}


void Player::unequipWepon(string name) {
	Weapon *nodePtr, *previousNodePtr;
	//Detects if their is any members in the list and returns if their is not
	if (!wHead) return;

	//Cheacks to see if the head's first and last name match the provided name and deletes it if so
	if (wHead->getName() == name) {
		nodePtr = wHead;
		wHead = wHead->mNext;
		reducePower(nodePtr->getPower());
	}
	//Searchs though the list to find the node with the name that matchs the prodided name then deletes it
	else
	{
		nodePtr = wHead;
		previousNodePtr = nodePtr;

		//Cheach each node to see if it has the same name as the one provided and moves on if not
		while (name != nodePtr->getName())
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->mNext;
		}

		if (nodePtr) {
			previousNodePtr->mNext = nodePtr->mNext;
			reducePower(nodePtr->getPower());
		}
	}
	fstream log;
	log.open("log.txt");
	log << "Player.unequipWepon() called \n";
}

bool Player::operator<(Player obj) {
	fstream log;
	log.open("log.txt");
	log << "Player < overloader called \n";

	if (mPower < obj.getPower()) {
		return true;
	}
}

bool Player::operator>(Player obj) {
	fstream log;
	log.open("log.txt");
	log << "Player < overloader called \n";

	if (mPower > obj.getPower()) {
		return true;
	}
}

int Player::getPower() {
	return mPower;
	fstream log;
	log.open("log.txt");
	log << "Player.getPower";
}
