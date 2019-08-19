#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main()
{
	char firstChar, secondChar;
	cout << "Enter two characters: ";
	cin >> firstChar >> secondChar;
	swap(firstChar, secondChar);
	cout << firstChar << " " << secondChar << endl;
	
	int firstInt, secondInt;
	cout << "Enter two integers: ";
	cin >> firstInt >> secondInt;
	swap(firstInt, secondInt);
	cout << firstInt << " " << secondInt << endl;
	
	cout << "Enter two strings: ";
	string firstString, secondString;
	cin >> firstString >> secondString;
	swap(firstString, secondString);
	cout << firstString << " " << secondString << endl;

	return 0;
}

