#include <iostream>
#include <cctype> 
using namespace std;

bool testNum(char []);

const int NUM_LENGTH = 8;
const int ALPHA_LENGTH = 3;

int main() 
{
	char customer[NUM_LENGTH];
	
	cout << "Enter a customer number in the form LLLNNNN\n";
	cout << "(LLL = letters and NNNN = numbers): ";
	cin.getline(customer, NUM_LENGTH);
	
	if (testNum(customer))
		cout << "That's a valid customer number.\n";
	else
	{
		cout << "That is not the proper format of the customer number.\n";
		cout << "Here is an example:\n";
		cout << "   ABC1234\n";
	}

	return 0;
}

bool testNum(char custNum[])
{
	for (int k = 0; k < ALPHA_LENGTH; k++)
	{
		if (!isalpha(custNum[k]))
			return false;
	}
	
	for (int k = ALPHA_LENGTH; k < NUM_LENGTH - 1; k++)
	{
		if (!isdigit(custNum[k]))
			return false;
	}
	
	return true;
}

