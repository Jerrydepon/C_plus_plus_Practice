#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayMenu();
int getChoice();
void showFees(string, double, int);

int main() 
{
	const double ADULT_RATE = 40.00,				 
				 CHILD_RATE = 20.00,
				 SENIOR_RATE = 30.00;
				 
	int choice,
		months;
		
	cout << fixed << showpoint << setprecision(2);
	
	do
	{
		displayMenu();
		
		choice = getChoice();
		
		if (choice != 4)
		{
			cout << "For how many months? ";
			cin >> months;
			
			switch (choice)
			{
				case 1: showFees("Adult", ADULT_RATE, months);
						break;
				case 2: showFees("Child", CHILD_RATE, months);
						break;
				case 3: showFees("Senior", SENIOR_RATE, months);
						break;												
			}
		}
	} while (choice != 4);

	return 0;
}

//
void displayMenu()
{
	cout << "\n\  Health Club Membership Menu\n\n";
	cout << "1.  Standard Adult Membership\n";
	cout << "2.  Child Membership\n";
	cout << "3.  Senior Citizen Membership\n";
	cout << "4.  Quit the Program\n\n";

}

//
int getChoice()
{
	int choice;
	
	cin >> choice;
	while (choice < 1 || choice > 4)
	{
		cout << "The only valid choices are 1-4. Please re-enter. ";
		cin >> choice;	
	}
}

//
void showFees(string memberType, double rate, int months)
{
	cout << endl
		 << "Membership Type : " << memberType << endl
		 << "Monthly rate    : $" << rate << endl
		 << "Number of months: " << months << endl
		 << "Total charges   : $" << (rate * months)
		 << endl << endl; 
}

