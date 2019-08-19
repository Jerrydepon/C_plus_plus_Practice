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
	
	if (choice == 1)
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 2)
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "The total charges are $" << charges << endl;
	}	
	else if (choice == 3)
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "The total charges are $" << charges << endl;
	}	
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
	}		
	
	return 0;
}

