#include "Tiger.h"
#include <string>

using namespace std;

Tiger::Tiger(string name, Date birth, double weight, string species) 
	:Animal(name,birth,weight), Species(species)
{

}
string Tiger::ToString()
{
	string text;
	/*text.append(Name);
	text.append(" ");
	text.append(Birth.ToString());
	text.append(" ");
	string rounded = to_string(Weight).substr(0, to_string(Weight).find(".") + 2);
	//double rounded = round( Weight);
	//float rounded = floor(Weight * 100.0) / 100.0;
	text.append(rounded);
	text.append(" ");
	text.append(Species);*/
	text.append(Animal::ToString());
	text.append(Species);
	return text;
}

void Tiger::move()
{
	//Code
}

void Tiger::utter()
{
	//code
}


string Tiger::getSpecies()  
{

	return Species;
}

void Tiger::setSpecies( string species)
{
	Species = species;
	return ; 
}

Tiger::~Tiger() {
	printf("Tiger destructor: %s\n", this->ToString().c_str());
}