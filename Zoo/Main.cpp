#include "Date.h"
#include "Tiger.h"
#include "Shark.h"
#include <iostream>

using namespace std;

int main() {
	Date x = Date(1, 2, 3);
	cout << "x arvot ovat "<< (x.ToString()) << "\n";
	cout << "asetetaan x arvot 6,5,2000,	Blooean 1=True 0=False" << (x.setValues(6, 5, 2000))<< "\n";
	cout << "x arvot ovat "<< (x.ToString()) << "\n";
	cout << "asetetaan x arvot 33,33,33,	Blooean 1=True 0=False" << (x.setValues(33, 33, 33))<< "\n";
	cout << "x arvot ovat "<< (x.ToString()) << "\n";
	cout << "x:n y arvo "<< (x.getY()) << "\n";
	cout << "\n"<< "\n"<< "\n"<< "\n" << "\n";
	Tiger tikru = Tiger("nakki", Date(7,4,2003), 59.5, "Tiikeri");
	cout << tikru.ToString()<< "\n";
	cout << tikru.getName()<< "\n";
	cout << tikru.getSpecies()<< "\n";
	tikru.setSpecies("Karvaolio");
	cout << tikru.getSpecies()<< "\n";


	cout << "\n"<< "\n"<< "\n"<< "\n" << "\n";

	Shark kala = Shark("peto", Date(4,2,2020), 100.5, "Shark");
	cout << kala.ToString()<< "\n";
	cout << kala.getName()<< "\n";
	cout << kala.getSpecies()<< "\n";
	kala.setSpecies("valko");
	cout << kala.getSpecies()<< "\n";
};