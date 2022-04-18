#pragma once
#include <string>
#include <map>
#include "Animal.h"
using namespace std;

class Zoo
{
private:
	map<string, Animal> animals;
	// typedef pair<const Key, T> value_type;

public:
	Animal& add(Animal& a);
	Animal& remove(string name);
	void print();
	void printSortedByName();
	void printSortedByAge();
};
