#include "Zoo.h"
#include "Shark.h"
#include "Tiger.h"
#include "Animal.h"

Animal& Zoo::add(Animal& a) 
{	
	Animal& ani = Shark("asds", Date(1, 1, 1), 23.5, "Tiger");
	return ani;
}

Animal& Zoo::remove(string name)
{
	return Animal();
}

void Zoo::print()
{
}

void Zoo::printSortedByName()
{
}

void Zoo::printSortedByAge()
{
}
