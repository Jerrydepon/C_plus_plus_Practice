#include <iostream>
using namespace std;

int main() 
{
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];
	
	cout << "Enter a string: ";
	cin.getline(firstString, LENGTH);
	cout << "Enter another string: ";
	cin.getline(secondString, LENGTH);
	
	if (firstString == secondString)
		cout << "You entered the same string twice.\n";
	else
		cout << "The strings are not the same.\n";

	return 0;
}

