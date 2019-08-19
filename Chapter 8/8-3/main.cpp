#include <iostream>
#include <fstream> 
using namespace std;

int main() 
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count;
	ifstream datafile;
	
	datafile.open("work.txt");
	if (!datafile)
		cout << "Error opening data file.\n";
	else
	{
		for (count = 0; count < NUM_EMPLOYEES; count++)
			datafile >> hours[count];
		datafile.close();
		
		cout << "The hours worked by each employee are\n";
		for (count = 0; count < NUM_EMPLOYEES; count++)
		{
			cout << "Employee " << count+1 << ": " << hours[count] << endl;
		}
	}

	return 0;
}

