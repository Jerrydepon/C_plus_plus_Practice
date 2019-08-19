#include "feetinch6.h"

ostream &operator<<(ostream &strm, FeetInches &obj)
{
	strm << obj.feet << " feet, " << obj.inches << " inches";
	return strm;
}

istream &operator>>(istream &strm, FeetInches &obj)
{
	strm >> obj.feet >> obj.inches;
	return strm;
}

void FeetInches::simplify()
{
	inches = 12 * feet + inches;
	feet = inches / 12;
	inches = inches % 12;
}
#include "feetinch6.h"
