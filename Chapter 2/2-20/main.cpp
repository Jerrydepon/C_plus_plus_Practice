#include <iostream>
using namespace std;

int main() 
{
	double basePayRate = 18.25,
		   overtimePayRate = 27.78,
		   regularHours = 40.0,
		   overtimeHours = 10,
		   regularWages,
		   overtimeWages,
		   totalWages;
	
	regularWages = basePayRate * regularHours;
	
	overtimeWages = overtimePayRate * overtimeHours;
	
	totalWages = regularWages + overtimeWages;
	
	cout << "Wages for this week are $ " << totalWages << endl;
	
	return 0;
}

