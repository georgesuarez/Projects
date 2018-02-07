#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include <string>

using namespace std;
class Player_Info
{
  public:
	Player_Info();
	Player_Info(const string &name, int age, int feet, int inches);
	string get_name() const;
	int get_age() const;
	int get_height() const;

  private:
	string name;
	int age;
	int feet;
	int inches;
};
#endif 