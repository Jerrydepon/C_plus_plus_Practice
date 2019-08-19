#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const double PAY_RATE = 50.0;
	double hours, charges;
	
	cout << "How many hours were worked? ";
	cin >> hours;
	
	hours = hours < 5 ? 5  : hours;
	charges = PAY_RATE * hours;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The charges are $" << charges << endl;
	
	return 0;
}

