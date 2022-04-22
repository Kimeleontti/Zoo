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
{
    printf(" ---------- animals ----------\n");
    for (const auto& kv : animals) {
        printf("key: %s value: %s\n", kv.first.c_str(), kv.second->ToString().c_str());
    }
    printf(" ------ eof animals ----------\n");
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
        return s1 < s2;
    };
    lp.sort(bp);
    printf("---------- animals by name ----------\n");
    for (auto p : lp) {
        printf("%s\n", p->getName().c_str());
    }
    printf("------ eof animals by name ----------\n");
}

void Zoo::printSortedByAge()
{
}
