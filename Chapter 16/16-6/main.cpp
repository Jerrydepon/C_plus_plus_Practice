#include <iostream>
#include <iomanip> 
using namespace std;

template <class T>
T square(T number)
{
	return number * number;
}

int main() 
{
	cout << setprecision(5);
	
	cout << "Enter an integer: ";
	int iValue;
	cin >> iValue;
	cout << "The square is " << square(iValue);
	
	cout << "\nEnter a double: ";
	double dValue;
	cin >> dValue;
	cout << "The square is " << square(dValue) << endl;

	return 0;
}

