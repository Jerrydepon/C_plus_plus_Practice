#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
	double base;
	char choice;
	
	cout << "Enter a number: ";
	cin >> base;
	cout << "This program will raise to the power of 0 through 10.\n";
	
	for (int count = 0; count <= 10; count++)
	{
		cout << base << " raised to the power of " << count << " is " << pow(base, count);
		
		cout << "\nEnter Q to quit or any other key to continue. ";
		cin >> choice;
		
		if (choice == 'Q'|| choice == 'q')
			break;
	}

	return 0;
}

