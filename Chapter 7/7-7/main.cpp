#include <iostream>
#include <iomanip>
using namespace std;

union PaySource
{
	short hours;
	float sales;	
};

int main() 
{
	PaySource employee1;
	
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
		cin >> employee1.hours;
		grossPay = employee1.hours * payRate;
		cout << "Gross pay: $" << grossPay << endl;
	}
	else
	{
		cout << "What are the total sales for this employees? ";
		cin >> employee1.sales;
		grossPay = employee1.sales * 0.10;
		cout << "Gross pay: $" << grossPay << endl;
	}
	
	return 0;
}

