#include <iostream>
#include "feetinch3.h"
using namespace std;

int main() 
{
	FeetInches first, second(1, 5);
	
	cout << "Demonstring prefix ++ operator.\n";
	for (int count = 0; count < 12; count++)
	{
		first = ++second;
		cout << "first: " << first.getFeet() << " feet, ";
		cout << first.getInches() << " inches.";
		cout << "second: " << second.getFeet() << " feet, ";
		cout << second.getInches() << " inches.\n";
	}
	
	cout << "\nDemonstring postfix ++ operator.\n";
	for (int count = 0; count < 12; count++)
	{
		first = second++;
		cout << "first: " << first.getFeet() << " feet, ";
		cout << first.getInches() << " inches.";
		cout << "second: " << second.getFeet() << " feet, ";
		cout << second.getInches() << " inches.\n";
	}
	
	return 0;
}

