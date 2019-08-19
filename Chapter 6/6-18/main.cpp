#include <iostream>
#include <iomanip>
using namespace std;

const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5;

double getBasePay(double);
double getOvertimePay(double);

int main() 
{
	double hours,
		   basePay,
		   overtimePay = 0.0,
		   totalPay;

	cout << "How many hours did you work? ";
	cin >> hours;
	
	basePay = getBasePay(hours); 
	
	if (hours > BASE_HOURS)
		overtimePay = getOvertimePay(hours);
	
	totalPay = basePay + overtimePay;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Base pay     $" << setw(7) << basePay << endl;
	cout << "Overtime pay $" << setw(7) << overtimePay << endl;
	cout << "Total pay    $" << setw(7) << totalPay << endl;
		
	return 0;
}

//
double getBasePay(double hoursWorked)
{
	double basePay;
	
	if (hoursWorked > BASE_HOURS)
		basePay = BASE_HOURS * PAY_RATE;
	else
		basePay = hoursWorked * PAY_RATE;
		
	return basePay;
}

//
double getOvertimePay(double hoursworked)
{
	double overtimePay;
	
	overtimePay = (hoursworked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
	
	return overtimePay;	
}

















