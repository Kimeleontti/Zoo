#include <iostream>
#include <list>

#include "Zoo.h"
#include "Shark.h"
#include "Tiger.h"
#include "Animal.h"
#include "Date.h"

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
    printf("------ eof animals by name ----------\n\n");
}

void Zoo::printSortedByAge()
{
    list<Animal*> lp;
    for (auto it = animals.begin(); it != animals.end(); it++) {
        lp.push_back(it->second);
    }
    auto bp = [](auto a, auto b) {
        string s1 = a->ToString();
        string s2 = b->ToString();


        int pos = s1.find(" ");
        int pos2 = s1.find(" ",pos+1);
        int day = stoi(s1.substr(pos+1, pos2-1-pos));
        int pos3 = s1.find(" ",pos2+1);
        int month = stoi(s1.substr(pos2+1, pos3-1-pos2)); 
        int year = stoi(s1.substr(pos3+1, 4)); 

        int posb = s2.find(" ");
        int pos2b = s2.find(" ",posb+1);
        int dayb = stoi(s2.substr(posb+1, pos2b-1-posb));
        int pos3b = s2.find(" ",pos2b+1);
        int monthb = stoi(s2.substr(pos2b+1, pos3b-1-pos2b)); 
        int yearb = stoi(s2.substr(pos3b+1, 4)); 
        //cout << "day:" << dayb << "month:" << monthb << "year:" << yearb << endl;
        
        if (year != yearb){
            return year < yearb;
        }
        else {
            if (month != monthb){
                return month < monthb;
            }
            else {
                return day < dayb;
            }
        };
    };
    lp.sort(bp);
    printf("\n---------- animals by age ----------\n");
    for (auto p : lp) {
        printf("[%s]\n", p->ToString().c_str());

    }
    printf("------ eof animals by age ----------\n\n");

}

Zoo::~Zoo()
{
    for (auto it = animals.begin(); it != animals.end(); ) {
        it = animals.erase(it);
    }
}

