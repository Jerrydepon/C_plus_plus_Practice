#include <iostream>
using namespace std;

void displayValue(int);

int main() 
{
	cout << "I am passing several values to displyaValue.\n";
	displayValue(5);
	displayValue(10);
	displayValue(2);
	displayValue(16);
	
	cout << "Now I am back in main.\n";

	return 0;
}

//
void displayValue(int num)
{
	cout << "The value is " << num << endl;
}
