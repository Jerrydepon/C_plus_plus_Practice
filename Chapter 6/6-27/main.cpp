#include <iostream>
#include <iomanip>
using namespace std;

int square(int);
double square(double);

int main() 
{
	int userInt;
	double userReal;
	
	cout << "Enter an integer and a floating-point value: ";
	cin >> userInt >> userReal;

	cout << "Here are their squares: ";
	cout << fixed << showpoint << setprecision(2);
	cout << square(userInt) << " and " << square(userReal) << endl;
	
	return 0;
}

//
int square(int number)
{
	return number * number;
}

double square(double number)
{
	return number * number;
}
