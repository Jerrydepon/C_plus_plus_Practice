#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
	const double ADULT_RATE = 40.0;
	const double CHILD_RATE = 20.0;	
	const double SENIOR_RATE = 30.0;
	
	char choice;
	int months;
	double charges;
	
	cout << "   Health Club Membership Menu\n\n" ;
	cout << "A. Standard Adult Membership\n";
	cout << "B. Child Membership\n";
	cout << "C. Senior Citizen Membership\n";
	cout << "D. Quoit the program\n\n";
	cout << "Enter your choice: ";
	cin.get(choice);
	
	cout << fixed << showpoint << setprecision(2);
	
	if (choice < 'A' || choice > 'D')
	{
		cout << "The valid choices are A through D.\n";
		cout << "Run the program again and select one of those.\n";
	}
	
	else if (choice == 'A')
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 'B')
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "The total charges are $" << charges << endl;
	}	
	else if (choice == 'C')
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "The total charges are $" << charges << endl;
	}	

	return 0;
}

