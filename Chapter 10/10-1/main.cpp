#include <iostream>
using namespace std;

char letter;
short number;
float amount;
double profit;
char ch;

int main() 
{
	cout << "Address of letter is: " << &letter << endl;
	cout << "Address of number is: " << &number << endl;
	cout << "Address of amount is: " << &amount << endl;
	cout << "Address of profit is: " << &profit << endl;
	cout << "Address of ch is:     " << &ch << endl;
	
	return 0;
}

