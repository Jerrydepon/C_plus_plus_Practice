#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int numDays;
	double total = 0.0;
	
	cout << "For how many days do you have sales figures? \n";
	cin >> numDays;
	
	for (int day = 1; day <= numDays; day++)
	{
		double sales;
		
		cout << "Enter the sales for day " << day << ": ";
		cin >> sales;
		total += sales;
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales are $" << total << endl;
	
	return 0;
}

