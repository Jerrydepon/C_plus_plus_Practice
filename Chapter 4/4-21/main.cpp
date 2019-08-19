#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
	const double PRICE_A = 249.0,
				 PRICE_B = 299.0;
	
	string partNum;
	
	cout << "The stereo part numbers are:\n";
	cout << "Boom Box   : part number S-29A \n";
	cout << "Sheif Model: part number S-29B \n";
	cout << "Enter the part number of the stereo you wish to purcahse: ";
	cin >> partNum;
	
	cout << fixed << showpoint << setprecision(2);
	
	if (partNum == "S-29A")
		cout << "The price is $" << PRICE_A << endl;
	else if (partNum == "S-29B")
		cout << "The price is $" << PRICE_B << endl;
	else 
		cout << partNum << " is not a valid part number.\n";
	
	return 0;
}

