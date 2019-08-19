#include <iostream>
using namespace std;

int sum(int, int);

int main() 
{
	int value1 = 20,
		value2 = 40,
		total;
		
	total = sum(value1, value2);
	
	cout << "The sum of " << value1 << " and " << value2 << " is " << total << endl;

	return 0;
}

//
int sum(int sum1, int sum2)
{
	return sum1 + sum2;
}
