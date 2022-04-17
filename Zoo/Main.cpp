#include "Date.h"
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
};