#include <iostream>
using namespace std;

bool isEven(int);

int main() 
{
	int val;
	
	cout << "Enter an integer and I will tell you if it is even or odd: ";
	cin >> val;
	
	if (isEven(val))
		cout << val << " is even.\n";
	else 
		cout << val << " is odd.\n";

	return 0;
}

bool isEven(int number)
{
	if (number % 2 == 0)
		return true;
	else
		return false;
}
