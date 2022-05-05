#include "Date.h"
#include "Tiger.h"
#include "Shark.h"
#include <iostream>
#include "Zoo.h"
using namespace std;

int main() {

	Tiger kisu = Tiger("Tikru", Date(8,2,1998), 110.5, "Kiinantiikeri");
	Tiger kisu2 = Tiger("Mansikki", Date(5,12,2020), 15.5, "Indokiinantiikeri");
	Tiger kisu3 = Tiger("Kisuli", Date(10,2,2000), 100.5, "Siperiantiikeri");
	Shark fisu4 = Shark("Tuna", Date(26,2,1248), 17.0, "Tiikerihai");
	Shark fisu5 = Shark("Sina", Date(4,2,2020), 78.5, "Valkohai");
	Shark fisu6 = Shark("Huihai", Date(1,2,2020), 80.5, "Valashai");
	Shark fisu7 = Shark("Veeti", Date(19,2,2020), 20.5, "Vasarahai");
	Shark fisu8 = Shark("Pekka", Date(4,2,2012), 103.5, "Sinihai");

	Zoo korkeasaari = Zoo();
	korkeasaari.add(&kisu);
	korkeasaari.add(&kisu2);
	korkeasaari.add(&fisu8);
	korkeasaari.add(&fisu4);
	korkeasaari.add(&fisu6);
	korkeasaari.add(&fisu5);
	korkeasaari.add(&fisu7);
	korkeasaari.add(&kisu3);
	korkeasaari.add(&fisu5);
	korkeasaari.add(&fisu4);
	korkeasaari.print();
	korkeasaari.printSortedByName();
	korkeasaari.printSortedByAge();
};