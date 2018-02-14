

#include <iostream>
#include <string>
#include "Player.h"
#include "Exitus/src/PlayerStats/PlayerStats.h"

Player::Player() 
{
}

Player::Player(const std::string &name, int age, int height, PlayerStats& ps)
	: name(name),
	  age(age),
	  height(height),
	  ps(&ps)
{
}

std::string Player::GetName() const
{
	return name;
}


int Player::GetAge() const
{
	return age;
}

int Player::GetHeight() const
{
	return height;
}

