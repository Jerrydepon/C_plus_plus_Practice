#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct PayRoll
{
	int empNumber;
	string name;
	double hours;
	double payRate;
	double grossPay;
};

int main() 
{
	PayRoll* employee;
	
	employee = new PayRoll;
	
	cout << "Enter the employee's number: ";
	cin >> employee->empNumber;
	cout << "Enter the employee's name: ";
	cin.ignore();
	getline(cin, employee->name);
	cout << "How many hours did the employee work? ";
	cin >> employee->hours;
	cout << "What is the employee's hourly pay rate? ";
	cin >> employee->payRate;
	
	employee->grossPay = (employee->hours) * (employee->payRate);
	cout << "Here is the employee's payroll data:\n";
	cout << "Name: " << employee->name << endl;
	cout << "Number: " << employee->empNumber << endl;
	cout << "Hours worked: " << employee->hours << endl;
	cout << "Hourly pay rate: " << employee->payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << employee->grossPay << endl;
	
	delete employee; 

	return 0;
}

