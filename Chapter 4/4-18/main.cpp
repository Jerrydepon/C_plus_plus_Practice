#include <iostream>
using namespace std;

int main() 
{
	cout << "What is your annaul income? ";
	double income;
	cin >> income;
	
	if (income >= 35000)
	{
		cout << "How many years have you worked at your current job? ";
		int years;
		cin >> years;
	
		if (years > 5)
			cout << "You qualified.\n";
		else
			cout << "You must have been employed for more than 5 years to qualify.\n";
	}
	else
		cout << "Youmust earn at least $35000 to qualify.\n";	
	
	return 0;
}

