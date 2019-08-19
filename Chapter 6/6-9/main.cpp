#include <iostream>
using namespace std;

void changeMe(int);

int main() 
{
	int number = 12;
	
	cout << "In main number is " << number << endl;
	
	changeMe(number);

	cout << "Back in main again, number is still " << number << endl;
	
	return 0;
}

void changeMe(int myValue)
{
	myValue = 0;
	
	cout << "In changeMe, the value has been changed to " << myValue << endl;	
}
