#include <iostream>
#include <list>

#include "Zoo.h"
#include "Shark.h"
#include "Tiger.h"
#include "Animal.h"

using namespace std;

Animal* Zoo::add(Animal* a) 
{	
	string key = a->getName();
	Animal* tmp = remove(key);
    auto it = animals.find(key);
    if (it != animals.end()) {  // found?
		return tmp;
    }
	else {
		animals[key] = a;
		return tmp;
	}
}

Animal* Zoo::remove(string name)
{
	Animal* tmp = nullptr;
	string key = name;
    auto it = animals.find(key);
    if (it != animals.end()) {  // found?
		tmp = it->second;
		animals.erase(it);
		return tmp;
    }
	else {
		return tmp;
	}
}

void Zoo::print()
{   //default print, [key , value] pairs are printed
    printf(" ---------- animals ----------\n");
    for (const auto& kv : animals) {
        printf("[%s,%s]\n", kv.first.c_str(), kv.second->ToString().c_str());
    }
    printf(" ------ eof animals ----------\n\n\n");
}

void Zoo::printSortedByName()
{
    list<Animal*> lp;
    for (auto it = animals.begin(); it != animals.end(); it++) {
        lp.push_back(it->second);
    }
    auto bp = [](auto a, auto b) {
        string s1 = a->getName();
        string s2 = b->getName();
        return s1[0] < s2[0];
    };
    lp.sort(bp);
    printf("---------- animals by name ----------\n");
    for (auto p : lp) {
        printf("[%s,%s]\n", p->getName().c_str(), p->ToString().c_str());

    }
    printf("------ eof animals by name ----------\n");
}

void Zoo::printSortedByAge()
{
   // just values (animals) are printed, hint: you could retrieve the values as a List<Animal> and then find a sort() version
   //who takes the the comparison lambda etc and implement the lambda so that it compares the birth dates

}
