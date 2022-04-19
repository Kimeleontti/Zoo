#pragma once
#include <string>
using namespace std;

class Date
{
	private:
	// string is standard c++ string but it needs #include <string> and using namespace std;
		int Y;
		int M;
		int D;

public:
	Date(int y, int m, int d);
	string ToString();
	//bool setValues(int y, int m, int d) { Y = y, D = d, M = m; }
	bool setValues(int y, int m, int d);
	int getY();
	int getM();
	int getD();
};

