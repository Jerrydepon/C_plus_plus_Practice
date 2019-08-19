#include <iostream>
#include <string> 
using namespace std;

void showFees(string, double, int);

int main() 
{
	cout << "Calling the showFees with arguments "
	 	  << "Adult, 40.00, 3.\n";
	showFees("Adult", 40.00, 3);
	
	cout << "Calling the showFees function with arguments "
		 << "Child, 20.00, 2.\n";
	showFees("Child", 20.00, 2);
	
	cout << "Calling the showFees function with arguments "
		 << "Senior, 30.00, 4.\n";
	showFees("Senior", 30.00, 4);	
	
	return 0;
}

//
void showFees(string memberType, double rate, int months)
{
	cout << endl;
	cout << "Membership Type : " << memberType << endl
		 << "Monthly rate    : $"<< rate << endl
		 << "Number of months: " << months << endl
		 << "Total charges   : $"<< (rate * months) << endl << endl; 
}
