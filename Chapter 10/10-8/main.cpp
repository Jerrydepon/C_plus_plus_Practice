#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const int NUM_COINS = 5;
	double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
	double* doublePtr;
	int count;
	
	cout << setprecision(2);
	cout << "Here are the values in the coins array:\n";
	for (count = 0; count < NUM_COINS; count++)
	{
		doublePtr = &coins[count];
		cout << *doublePtr << " ";
	}
	cout << endl;

	return 0;
}

