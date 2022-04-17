#include "Tiger.h"
#include <string>

using namespace std;

Tiger::Tiger(string name, Date birth, double weight, string Species) 
{
	Animal::setName(name);
	Animal::setBirth(birth);
	Animal::setWeight(weight);
}
string Tiger::ToString()
{
	string text;
	text.append(Name);
	text.append(" ");
	text.append(Birth.ToString());
	text.append(" ");
	text.append(to_string(Weight));
	text.append(Species);
	return text;
}


string Tiger::getName()
{

	return Animal::getName();
}