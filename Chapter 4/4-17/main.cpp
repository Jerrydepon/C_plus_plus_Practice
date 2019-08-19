#include <iostream>
using namespace std;

int main() 
{
	cout << "What is your annual income? ";
	double income;

	
	cout << "How many years have you worked at your current job? ";
	int years;	
	cin >> years;
	
	if (income >= 35000 || years > 5)
		cout << "You qualified for a loan.\n";
	else
		cout << "You must earn at least $35000 or have been employed for more than 5 years to qualify for a loan.\n";
	
	return 0;
}

