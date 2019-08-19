#include <iostream>
#include <sstream>
#include <iomanip> 
using namespace std;

int main() 
{
	const int SIZE = 5;
	double squares[SIZE] = {1, 4, 9, 16, 25};
	ostringstream outStr;
	
	outStr << fixed << showpoint << setprecision(1);
	for (int index = 0; index < SIZE; index++)
	{
		outStr << setw(10) << squares[index];
	}
	
	cout << outStr.str();

	return 0;
}

