#include <iostream>
#include <iomanip>
using namespace std;

double sumArray(double[], int);
double getHighest(double[], int);
double getLowest(double[], int);

int main() 
{
	const int NUM_DAYS = 5;
	double sales[NUM_DAYS],
		   total,
		   average,
		   highest,
		   lowest;
		   
	cout << "Enter the sales for this week.\n";
	for (int day = 0; day < NUM_DAYS; day++)
	{
		cout << "Day " << (day + 1) << ": ";
		cin >> sales[day];
	}
	
	total = sumArray(sales, NUM_DAYS);
	average = total / NUM_DAYS;
	highest = getHighest(sales, NUM_DAYS);
	lowest = getLowest(sales, NUM_DAYS);
		
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "The total sales are         $" << setw(9) << total << endl;
	cout << "The avergae sales amount is $" << setw(9) << average << endl;
	cout << "The highest sales amount is $" << setw(9) << highest << endl;
	cout << "The lowest sales amount is  $" << setw(9) << lowest << endl;

	return 0;
}

double sumArray(double array[], int size)
{
	double total = 0;
	
	for (int count = 0; count < size; count++)
		total += array[count];
	
	return total;
}

double getHighest(double array[], int size)
{
	double highest = array[0];
	
	for (int count = 1; count < size; count++)
	{
		if (array[count] > highest)
			highest = array[count];
	}
	
	return highest;
}

double getLowest(double array[], int size)
{
	double lowest = array[0];
	
	for (int count = 1; count < size; count++)
	{
		if (array[count] < lowest)
			lowest = array[count];
	}
	
	return lowest;
}
