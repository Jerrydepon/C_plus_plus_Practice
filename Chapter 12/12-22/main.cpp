#include <iostream>
#include <string>
#include "currency.h"
using namespace std;

int main() 
{
	string input;
	
	cout << "Enter a dollar amount in the form nnnnn.nn : ";
	cin >> input;
	
	Currency dollars(input);
	cout << "Here is the amount formatted:\n";
	cout << dollars.getFormatted() << endl;

	return 0;
}

