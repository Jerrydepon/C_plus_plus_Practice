#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() 
{
	const double A_PRICE = 249.0,
				 B_PRICE = 299.0;
	
	const int PART_LENGTH = 8;
	char partNum[PART_LENGTH];
	
	cout << "The stereo part numbers are:\n";
	cout << "\tBoom Box, part number S147-29A\n";
	cout << "\tShelf Model, part number S147-29B\n";
	cout << "Enter the part number of the stereo you wish th purchase: ";
	
	cin >> setw(9);
	cin >> partNum;
	
	cout << fixed << showpoint << setprecision(2);
	if (strcmp(partNum, "S147-29A") == 0)
		cout << "The price is $" << A_PRICE << endl;
	else
		cout << "The price is $" << B_PRICE << endl;
		
	return 0;
}

