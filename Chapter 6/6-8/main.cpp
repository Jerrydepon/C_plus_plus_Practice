#include <iostream>
using namespace std;

void showSum(int, int, int);

int main() 
{
	int value1, value2, value3;
	
	cout << "Enter three integers and I will display their sum: ";
	cin >> value1 >> value2 >> value3;
	
	showSum(value1, value2, value3);

	return 0;
}

void showSum(int num1, int num2, int num3)
{
	cout << "The sum is " << (num1 + num2 + num3) << endl;
}

