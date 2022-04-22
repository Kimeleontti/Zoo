#include "Shark.h"
#include <string>

using namespace std;

Shark::Shark(string name, Date birth, double weight, string species) 
	:Animal(name,birth,weight), Species(species)
{

}
string Shark::ToString()
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

void Shark::move()
{
	//Code
}

void Shark::utter()
{
	//code
}


string Shark::getSpecies()  
{

	return Species;
}

void Shark::setSpecies( string species)
{
	Species = species;
	return ; 
}
