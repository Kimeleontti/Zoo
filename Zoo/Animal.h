#pragma once
#include <string>
#include "Date.h"
using namespace std;

class Animal
{
private:
// string is standard c++ string but it needs #include <string> and using namespace std;
	string Name;
	Date Birth;
	double Weight;

public:
	Animal();
	Animal(string name, Date birth, double weight);
	string ToString();
	virtual void move() = 0;
	virtual void utter() = 0;
	string getName();
	Date getBirth();
	double getWeight();
	void setName( string name);
	void setBirth(Date birth);
	void setWeight(double weight);
};

