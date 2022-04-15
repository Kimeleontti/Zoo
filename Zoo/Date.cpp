#include "Date.h"
#include <string>

using namespace std;

Date::Date(int y, int m, int d)
	: D(d), M(m), Y(y)
{
	
}
string Date::ToString()
{
	string text;
	text.append(to_string(Y));
	text.append(" ");
	text.append(to_string(M));
	text.append(" ");
	text.append(to_string(D));
	return text;
}
bool Date::setValues(int y, int m, int d)
{
	bool success;
	
	if (d>0 && d<32 && y>1000 && y<2022 && m>0 && m<13){
		success = true;
		Y = y, D = d, M = m;
	}
	else {
		success = false;
	}
	return success;
}
int Date::getY()
{

	return Y;
}
int Date::getD()
{

	return D;
}
int Date::getM()
{

	return M;
}