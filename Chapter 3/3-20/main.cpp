#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double amount = 125.0;
	
	cout << setw(6) << amount << endl;
	
	cout << showpoint;
	cout << setw(6) << amount << endl;
	
	cout << fixed << showpoint << setprecision(2) << setw(6) << amount << endl; 
	 
	return 0;
}

