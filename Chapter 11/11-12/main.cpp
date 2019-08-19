#include <iostream>
#include "feetinch4.h"
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
	
	if (first == second)
		cout << "First is equal to second.\n";
	if (first > second)
		cout << "First is greater than second.\n";
	if (first < second)
		cout << "First is less than second.\n";

	return 0;
}

