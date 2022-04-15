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
	Date();
	Date(int y, int m, int d);
	string ToString();
	bool setValues(int y, int m, int d);
};

