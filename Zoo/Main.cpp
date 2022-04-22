#include "Date.h"
#include "Tiger.h"
#include "Shark.h"
#include <iostream>
#include "Zoo.h"
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
	
	cout << "\n"<< "\n"<< "\n"<< "\n" << "\n";
	cout << "tässä"<< "\n";
	Shark fisu = Shark("peto", Date(4,2,2020), 100.5, "Shark");
	Shark fisu2 = Shark("peto2", Date(4,2,2020), 10.5, "Shark");
	Shark fisu3 = Shark("peto3", Date(4,2,2020), 100.5, "Shark");
	Shark fisu4 = Shark("peto4", Date(4,2,2020), 17.0, "Shark");
	Shark fisu5 = Shark("peto5", Date(4,2,2020), 78.5, "Shark");
	Shark fisu6 = Shark("peto6", Date(4,2,2020), 100.5, "Shark");
	Shark fisu7 = Shark("peto7", Date(4,2,2020), 100.5, "Shark");
	Shark fisu8 = Shark("petooooooooooo", Date(4,2,2020), 100.5, "Shark");

	Zoo korkeasaari = Zoo();
	korkeasaari.add(&fisu);
	korkeasaari.add(&fisu2);
	korkeasaari.add(&fisu8);
	korkeasaari.add(&fisu4);
	korkeasaari.add(&fisu6);
	korkeasaari.add(&fisu5);
	korkeasaari.add(&fisu7);
	korkeasaari.add(&fisu3);
	korkeasaari.add(&fisu5);
	korkeasaari.add(&fisu4);
	korkeasaari.print();
	korkeasaari.printSortedByName();
};