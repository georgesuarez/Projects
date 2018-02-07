



#include <iostream>
#include <string>

using namespace std;
class Player_Info
{
	public:
		Player_Info();
		void set_name();
		string get_name();
		void set_age();
		int get_age();
		int set_height();
		int get_height();
	
	private: 
		string name;
		int age;
		int feet;
		int inches;
};

Player_Info::Player_Info(){}

void Player_Info::set_name()
{
	string firstname;
	string lastname;
	string fullname;
	
	cout<<"Enter first name: ";
	cin>>firstname;
	cout<<"\nEnter last name: ";
	cin>>lastname;
	
	fullname = firstname +" "+lastname;
	name = fullname;
	
}

string Player_Info::get_name()
{
	return name;
}

void Player_Info::set_age()
{
	int x;
	cout<<"Enter your age: ";
	cin >> x;
	
	age = x;
}

int Player_Info::get_age()
{
	return age;
}

int Player_Info::set_height()
{

}

int Player_Info::get_height()
{
	return feet;
}

int main()
{
	string f, l;
	
	
	Player_Info p;
	p.set_age();
	p.set_name();
	cout<<p.get_age();
	cout<<"\n"<<p.get_name();
	

	
	
	
	

	
}
