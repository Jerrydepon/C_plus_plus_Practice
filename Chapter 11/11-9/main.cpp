#include <iostream>
#include <iomanip>
#include "overload.h"
using namespace std;

int main() 
{
	NumberArray first(3, 10.5);
	NumberArray second(5, 20.5);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "First object's data is ";
	first.print();
	cout << endl << "Second object's data is ";
	second.print();
	
	cout << "\nNow we will assign the second object to the first." << endl;
	first = second;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "First object's data is ";
	first.print();
	cout << endl << "Second object's data is ";
	second.print();

	return 0;
}

