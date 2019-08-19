#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayRoll
{
	int empNumber;
	string name;
	double hours,
		   payRate,
		   grossPay;	
};

int main() 
{
	PayRoll employee;
	
	cout << "Enter the employee's number: ";
	cin >> employee.empNumber;
	cout << "Enter the employee's name: ";
	
	cin.ignore(); //to skip '\n' character left in the input buffer
	getline(cin, employee.name);
	
	cout << "How many hours did the employee work? ";
	cin >> employee.hours;
	cout << "What is the employee's hourly pay rate? ";
	cin >> employee.payRate;
	
	employee.grossPay = employee.hours * employee.payRate;
	
	cout << "\nHere is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay $" << employee.grossPay << endl; 
	
	return 0;
}

