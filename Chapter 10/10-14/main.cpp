#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double* sales;
	double total = 0.0,
		   average;
	int numDays,
		count;
		
	cout << "How many days of sales figures do you wish to process? ";
	cin >> numDays;
	
	sales = new double[numDays];
	
	cout << "Enter the sales figures below.\n";
	for (count = 0; count < numDays; count++)
	{
		cout << "Day" << (count + 1) << ": ";
		cin >> sales[count];
	}
	
	for (count = 0; count < numDays; count++)
	{
		total += sales[count];
	}

	average = total / numDays;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nTotal Sales: $" << total << endl;
	cout << "Average Sales: $" << average << endl;
	
	delete [] sales;
	sales = 0; 
	
	return 0;
}

