

#include <iostream>
#include <string>
#include "PlayerInfo.h"

using namespace std;

Player_Info::Player_Info() {}

Player_Info::Player_Info(const string &name, int age, int feet, int inches)
	: name(name),
	  age(age),
	  feet(feet),
	  inches(inches)
{
}

string Player_Info::get_name() const
{
	return name;
}


int Player_Info::get_age() const
{
	return age;
}

int Player_Info::get_height() const
{
	return feet;
}

