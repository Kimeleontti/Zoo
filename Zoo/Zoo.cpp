#include "Zoo.h"
#include "Shark.h"
#include "Tiger.h"
#include "Animal.h"

Animal& Zoo::add(Animal& a) 
{	
	animals.insert({ a.getName(), a });
	//testi.insert({ "asd",1 });
	//Animal& ani = new Shark("asds", Date(1, 1, 1), 23.5, "Tiger");
	Shark kala = Shark("asds", Date(1, 1, 1), 23.5, "Tiger");
	if (true){
		return kala;
	}
	iterator tes = testi.get("asd");
	Animal& foo = animals.find(a.getName());
	return a;
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
map<char, int>::iterator it;
for(it=first.begin(); it!=first.end(); ++it){
  cout << it->first << " => " << it->second << '\n';
}