#include "Item.h"

Item::Item(string name) {
	mName = name;

	fstream log;
	log.open("log.txt");
	log << "Item constructed \n";
}