#pragma once
#include "Animal.h"
// #include "Tiger.h"
class Shark :
    public Animal
{
private:
    string Species;
public:
    Shark();
	Shark(string name, Date birth, double Weight, string species);
    string ToString();
    void move() ;
    void utter() ;
    string getSpecies();
    void setSpecies(string species);
};
