#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int x = 63;
	
	cout << setw(20) << left << setfill('.') << "Octal:" << right << oct << x << endl;
	cout << setw(20) << left << "Decimal:" << right << dec << x << endl;
	cout << setw(20) << left << "Hexadecimal:" << right << hex << x << endl;

	return 0;
}

