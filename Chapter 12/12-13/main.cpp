#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main() 
{
	const double PI = 3.14159;
	double radius;
	char response;
	
	cout << fixed << setprecision(2);
	cout << "This program calculates the area of a circle.\n";
	
	do
	{
		cout << "Enter the circle's radius: ";
		cin >> radius;
		cout << "The area is " << (PI * radius * radius);
		cout << endl;
		
		do
		{
			cout << "Calculate another? (Y or N) ";
			cin >> response;
			response = toupper(response);
		}while (response != 'Y' && response != 'N');
		
	}while (response == 'Y');

	return 0;
}

