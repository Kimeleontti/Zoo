#pragma once
#include "Animal.h"
class Tiger :
    public Animal
{
private:
    string Species;
public:
	Tiger(string name, Date birth, double Weight, string species);
    string ToString();
    void move() ;
    void utter() ;
    string getSpecies();
    void setSpecies(string species);
    virtual ~Tiger();
};

