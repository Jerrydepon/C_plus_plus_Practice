#include <iostream>
#include "feetinch5.h"
using namespace std;

int main() 
{
	FeetInches first, second, third;
	
	cout << "Enter a distance in feet and inches:\n";
	cin >> first;
	cout << "Enter another distance in feet and inches:\n";
	cin >> second;
	cout << "The values you entered are:\n";
	cout << first << " and " << second;

	return 0;
}

