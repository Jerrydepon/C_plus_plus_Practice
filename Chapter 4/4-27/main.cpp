#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
	const double ADULT_RATE = 40.0;
	const double CHILD_RATE = 20.0;	
	const double SENIOR_RATE = 30.0;
	
	int choice;
	int months;
	double charges;
	
	cout << "   Health Club Membership Menu\n\n" ;
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quoit the program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	
	if (choice >= 1 && choice <=3)
	{
		cout << "For how many months? ";	
		cin >> months;
		
		switch(choice)
		{
			case 1: charges = months * ADULT_RATE;
			        break;
			case 2: charges = months * CHILD_RATE;
			        break;
			case 3: charges = months * SENIOR_RATE;
			        break;								
		}
		
		cout << fixed << showpoint << setprecision(2);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4.\n";	
		cout << "Run the program again and select one of these.\n";
	} 
	
	return 0;
}

