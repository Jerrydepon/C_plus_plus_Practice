#include <iostream>
#include "feetinch6.h"
using namespace std;

int main() 
{
	FeetInches distance;
	double d;
	int i;
	
	cout << "Enter a distance in feet and inches:\n";
	cin >> distance;
	d = distance;
	i = distance;
	cout << "The value " << distance;
	cout << " is equivalent to " << d << " feet\n";
	cout << "or " << i << " feet, rounded down.\n";

	return 0;
}

