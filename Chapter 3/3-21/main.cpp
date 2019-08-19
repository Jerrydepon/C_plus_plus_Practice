#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() 
{
	string month1 = "January",
		   month2 = "February",
		   month3 = "March";

	int day1 = 31,
		day2 = 28,
		day3 = 31;
		
	double high1 = 22.6,
		   high2 = 37.4,
		   high3 = 53.9;
		   
	cout << fixed << showpoint << setprecision(1);
	cout << "Month       Days     High\n";
	
	cout << left << setw(12) << month1
		 << right << setw(4) << day1 << setw(9) << high1 << endl;	 
	cout << left << setw(12) << month2
		 << right << setw(4) << day2 << setw(9) << high2 << endl;
	cout << left << setw(12) << month3
		 << right << setw(4) << day3 << setw(9) << high3 << endl;		 		 
		
	return 0;
}

