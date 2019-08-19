#include <iostream>
using namespace std;

int main() 
{
	int num, lastNum;
	
	cout << "This program will display a table of integer number and their squares.\n"
	     << "It will start with 1. What should the last number be?\n"
	     << "Enter an integer between 2 and 20: ";
	cin >> lastNum;
	
	while (lastNum < 2 || lastNum > 20)
	{
		cout << "Please enter an integer between 2 and 20";
		cin >> lastNum;
	}
	
	cout << "\nNumber    Number Squared\n";
	cout << "------------------------- \n";
	num = 1;
	while (num <= lastNum)
	{
		cout << num << "\t\t" << (num * num) << endl;
		num++;
	}
	
	return 0;
}

