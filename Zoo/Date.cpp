#include "Date.h"
string Date::Date()
{
	// now we formulate person contents using c-language functions
	const size_t bufsize = 1024;
	char buf[bufsize];
	// 1) sprintf() is unsafe (buffer overflow!) --> project properties | c/c++ | general | sdl check off
	//sprintf(buf,"%s %s %s", this->getFname().c_str(), this->getLname().c_str(),
	//	this->isFemale() ? "female" : "miesoletettu");
	// 2) sprintf_s() is recommended safe version (but with problem: not found in every libs)
	//sprintf_s(buf, "%s %s %s", this->getFname().c_str(), this->getLname().c_str(),
	//	this->isFemale() ? "female" : "miesoletettu");
	// 3) snprintf() is safe and is found in every libs
	snprintf(buf, bufsize, "%s %s %s", this->getFname().c_str(), this->getLname().c_str(),
		this->isFemale() ? "female" : "male?");
	return buf; // compiler: return string(buf);
}