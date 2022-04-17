#include "Date.h"
#include <string>

using namespace std;

Date::Date(int d, int m, int y) 
// TODO parempi tarkastus(Esim karkausvuodet)

{
	if (d > 0 && d < 32 && y>1000 && y < 2022 && m>0 && m < 13) {
	D=d, M=m, Y=y;
}
	else{
		D = 1, M = 1, Y = 1990;
	}
}
string Date::ToString()
{
	string text;
	text.append(to_string(D));
	text.append(" ");
	text.append(to_string(M));
	text.append(" ");
	text.append(to_string(Y));
	return text;
}
bool Date::setValues(int d, int m, int y)
{
	bool success;
	
	if (d > 0 && d < 32 && y>1000 && y < 2022 && m>0 && m < 13){
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