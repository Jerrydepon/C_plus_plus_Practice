#include <iostream>
using namespace std;

int main() 
{
	double income;
	int years;
	
	cout << "What is your annual income? ";
	cin >> income;
	cout << "How many years have you worked at your current job? ";
	cin >> years;
	
	if (!(income >= 35000 || years > 5)) 
		cout << "You must earn at least $35000 or have been employed for more than 5 years to qualify for a loan.\n";
	else
		cout << "You qualified for a loan.\n";		
	
	return 0;
}

