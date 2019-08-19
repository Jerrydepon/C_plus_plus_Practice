#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() 
{
	const int SIZE = 20;
	ifstream dataIn;
	int numOffices,
		count;
	double sales[SIZE],
		   totalSales = 0.0,
		   averageSales;
	
	dataIn.open("sales.txt");
	if (!dataIn)	
		cout << "Error opening the data file.\n";
	else
	{
		count = 0;
		while (count < SIZE && dataIn >> sales[count])
		{
			totalSales += sales[count];
			count++;
		}
		numOffices = count;
		dataIn.close();
		
		averageSales = totalSales / numOffices;
		
		cout << fixed << showpoint << setprecision(2);
		cout << "The total sales are   $" << setw(9) << totalSales << endl;
		cout << "The average sales are $" << setw(9) << averageSales << endl;
		
		cout << "\nThe following have below-average sales figure.\n";
		for (int office = 0; office < numOffices; office++)
		{
			if (sales[office] < averageSales)
				cout << "Office " << setw(2) << (office+1) << " $ " << sales[office] << endl;
		}		
	}
	
	return 0;
}
