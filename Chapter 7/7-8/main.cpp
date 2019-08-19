#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	union
	{
		short hours;
		float sales;	
	};
		
	char hourlyType;
	float payRate, grossPay;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "This program calculates either hourly wages or sales commission.\n";
	cout << "Is this an hourly employee (y or n)? ";
	cin >> hourlyType;

	if (hourlyType == 'y')
	{
		cout << "What is the hourly pay rate? ";
		cin >> payRate;
		cout << "How many hours were worked? ";
		cin >> hours;
		grossPay = hours * payRate;
		cout << "Gross pay: $" << grossPay << endl;
	}
	else
	{
		cout << "What are the total sales for this employees? ";
		cin >> sales;
		grossPay = sales * 0.10;
		cout << "Gross pay: $" << grossPay << endl;
	}
	
	return 0;
}

