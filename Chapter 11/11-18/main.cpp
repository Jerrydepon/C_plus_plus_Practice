#include <iostream>
#include "convert.h"
using namespace std;

void printValue(IntClass);
IntClass f(int);

int main() 
{
	IntClass intObject = 23;
	cout << "The value is " << intObject.getValue() << endl;
	
	intObject = 24;
	cout << "The value is " << intObject.getValue() << endl;	

	cout << "The value is ";
	printValue(25);
	cout << endl;
	
	intObject = f(26);
	cout << "The value is ";
	printValue(intObject);

	return 0;
}

