#include "feetinch2.h"

void FeetInches::simplify()
{
	inches = 12 * feet + inches;
	feet = inches / 12;
	inches = inches % 12;
}

FeetInches FeetInches::operator+(const FeetInches &right) const 
{
	FeetInches temp;
	
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}

FeetInches FeetInches::operator-(const FeetInches &right) const
{
	FeetInches temp;
	
	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();
	return temp;
}


