#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "src/PlayerStats/PlayerStats.h"

class Player
{
public:
	Player();
	Player(const std::string &name, int age, int height, PlayerStats& ps);
	std::string GetName() const;
	int GetAge() const;
	int GetHeight() const;

private:
	std::string name;
	int age;
	int height;
	PlayerStats* ps;
};
#endif // !PLAYER_H
