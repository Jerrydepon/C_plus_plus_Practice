#include <iostream>
#include "feetinch2.h"
using namespace std;

int main() 
{
	FeetInches first, second, third;
	int f, i;
	
	cout << "Enter a distance in feet and inches: ";
	cin >> f >> i;
	first.setData(f, i);
	cout << "Enter another distance in feet and inches: ";
	cin >> f >> i;
	second.setData(f, i);
	
	third = first + second;
	cout << "first + seccond = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";
	
	third = first - second;
	cout << "first - seccond = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";
	
	return 0;
}

