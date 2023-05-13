#include <string>
#include <iostream>
using namespace std;

struct Car
{
	string name;
	int speed;
	int acelerateByOne;
	int position;
	string color;
	Car(string name, int speed, int acelerateByOne,string color, int position = 0)
	{
		this->name = name;
		this->speed = speed;
		this->acelerateByOne = acelerateByOne;
		this->position = position;
		this->color = color;
	}
	Car()
	{

	}
	void print()
	{
		cout << name << " " << color << " speed " << speed << " position " << position << endl;
	}
	void acelerate()
	{
		speed += acelerateByOne;
		print();
	}
	void setTime()
	{
		position += speed;
		print();
	}
};
