#include <iostream>
#include <iomanip>
using namespace std;
#include "Sale.h"

int main() 
{
	Sale cashier1(0.06, 24.95);
	
	Sale cashier2(24.95);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nWith a 0.06 sales tax rate, the toal of the $24.95 sale is $";
	cout << cashier1.getTotal() << endl;
	
	cout <<"\nOn a tax-exempt purcahse, the total of the $24.95 sale is, of course, $";
	cout << cashier2.getTotal() << endl;

	return 0;
}
 
