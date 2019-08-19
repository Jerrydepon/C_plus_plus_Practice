#include "feetinch4.h"

bool FeetInches::operator>(const FeetInches &right) const
{
	if (feet > right.feet)
		return true;
	else if (feet == right.feet && inches > right.inches)
		return true;
	else
		return false;
}

bool FeetInches::operator<(const FeetInches &right) const
{
	return right > *this;//???
}

bool FeetInches::operator==(const FeetInches &right) const
{
	if (feet == right.feet && inches == right.inches)
		return true;
	else
		return false;
}

void FeetInches::simplify()
{
	inches = 12 * feet + inches;
	feet = inches / 12;
	inches = inches % 12;
}
