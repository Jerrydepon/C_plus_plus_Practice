#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const int NUM_MONTHS = 12;

	int day[NUM_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
/*	
	day[0] = 31;
	day[1] = 28;
	day[2] = 31;
	day[3] = 30;
	day[4] = 31;
	day[5] = 30;
	day[6] = 31;
	day[7] = 31;
	day[8] = 30;
	day[9] = 31;
	day[10] = 30;
	day[11] = 31;	
*/
	
	for (int month = 0; month < NUM_MONTHS; month++)
	{
		cout << "Month " << setw(2) << (month+1) << " has " << day[month] << " days\n";
	}
	
	return 0;
}

