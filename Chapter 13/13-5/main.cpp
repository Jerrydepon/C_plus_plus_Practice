#include <iostream>
#include <iomanip>
#include <sstream> 
using namespace std;

string dollarFormat(double);

int main() 
{
	const int ROWS = 3, COLS = 2;
	double amount[ROWS][COLS] = {184.45, 7, 59.13,
								 64.32, 7.29, 1289};
								
	for (int row = 0; row < ROWS; row++)
	{
		for(int col = 0; col < COLS; col++)
		{
			cout << setw(10) << dollarFormat(amount[row][col]);
		}
		cout << endl;
	}

	return 0;
}

string dollarFormat(double amount)
{
	ostringstream outStr;
	
	outStr << fixed << showpoint << setprecision(2);
	outStr << '$' << amount;
	
	return outStr.str();
}
