#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() 
{
	vector<int> hours;
	vector<double> payRate;
	double grossPay;
	int numEmployees;
	int index;
	
	cout << "How many employees do you have? ";
	cin >> numEmployees;
	
	cout << "Enter the hours worked and hourly pay rates of " << numEmployees << " employees. \n";
	
	for (index = 0; index < numEmployees; index++)
	{
		int tempHours;
		double tempRate;
		
		cout << "Hours worked by employee #" << (index + 1) << ": ";
		cin >> tempHours;
		hours.push_back(tempHours);
		
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin >> tempRate;
		payRate.push_back(tempRate);
	}
	
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < numEmployees; index++)
	{
		grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1) << ": $" << setw(7) << grossPay << endl;
	}
	
	return 0;
}

