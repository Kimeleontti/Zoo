#include "Animal.h"
#include <string>

using namespace std;

Animal::Animal(string name, Date birth, double weight)
	: Name(name), Birth(birth), Weight(weight)
{
	
}
string Animal::ToString()
{
	string text;
	text.append(Name);
	text.append(" ");
	text.append(Birth.ToString());
	text.append(" ");
	text.append(to_string(Weight).substr(0, to_string(Weight).find(".") + 2));
	return text;
}

string Animal::getName()
{

	return Name;
}
Date Animal::getBirth()
{

	return Birth;
}
double Animal::getWeight()
{

	return Weight;
}
void Animal::setName( string name)
{
	Name = name;
	return ;
}
void Animal::setBirth(Date birth)
{
	Birth = birth;
	return ;
}
void Animal::setWeight(double weight)
{
	Weight = weight;
	return ;
}

Animal::~Animal()
{
	printf("Animal destructor: %s\n", this->ToString().c_str());
}


