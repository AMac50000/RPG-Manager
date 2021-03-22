#include "Ability.h"
#include "DamageAbility.h"
#include "EnviormentAbility.h"
#include "HealthAbility.h"
#include "Item.h"
#include "Player.h"
#include "Potion.h"
#include "Weapon.h"

//The purpose of this project was to create the frame work for a rpg's stats and item system.  It has functions for getting/using items,abilities and weapons

//Sets the namespace to standered
using namespace std;

//The main funtion is used to test all parts of the system to make sure they are working properly
int main() {
	//opens the file log.txt so it can be edited
	ofstream log;
	log.open("log.txt");

	//Creates two new players
	Player player1(5,4,3,"Eroe");
	Player player2(3, 7, 8, "Arthur");

	//Item elderScroll("Elder Scroll");
	//Item stone("Stone");

	//Creates various weapons then gives them to the players
	player1.getWeapon(9, "Dawn Breaker");
	player1.getWeapon(4, "Ebony Blade");

	player2.getWeapon(10, "Excalaber");

	player1.getPotion(5, 5, "The White Phial");
	player1.getPotion(0, 7, "Skooma");


	player2.getPotion(3, 7, "Merlin's Water");

	//Creates various abilities
	DamageAbility firebolt("Firebolt", "Fires a ball of fire at their enemy", 3, 3);
	DamageAbility holyLight("Holy Light", "Swings down their mighty sword to rain death on their enemies", 4, 5);

	HealthAbility closeWounds("Close Wounds", "Heals the player a great deal", 5, 5);
	HealthAbility healingLight("Healing Light", "A divine light that heals the player alost completly", 7, 9);

	EnviormentAbility pickLock("Pick Lock", "Picks a lock and gets the player into places they probobly shouldn't be", 4);
	EnviormentAbility pullSword("Pull Sword",  "The player pulls the legendery sword from the stone declaring themselves the rightful king of england", 8);


	//Compairs the stats of two players to determin which is stronger.  The result is then displayed on the console.
	if (player1 > player2) 
	{
		cout << "Player 1 is stronger";
	}
	else if(player1 < player2)
	{
		cout << "Player 2 is stronger";
	}
	else 
	{
		cout << "Both players are equaly strong";
	}

	//An example of players using items and abilities

	pickLock.useAbility(player1);

	player1.equipWepon("Dawn Breaker");

	player2.equipWepon("Excalaber");

	player1.usePotion("Skooma");

	firebolt.useAbility(player2, player1);

	closeWounds.useAbility(player1);


	//Closes log.txt
	log.close();

	//Waits for player input before closing the program.
	string temp;
	cin >> temp;
}