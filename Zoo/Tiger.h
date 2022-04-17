#pragma once
#include "Animal.h"
class Tiger :
    public Animal
{
private:
    string Species;
public:
    Tiger();
	Tiger(string name, Date birth, double Weight, string species);
    string species();
    string ToString();
    void move() {};
    void utter() {};
    string getName();
};

