#include <iostream>
using namespace std;

int main() 
{
	const int SIZE = 3;
	int values[SIZE];
	int count;
	
	cout << "I will store 5 numbers int the 3-element array!\n";
	for (count = 0; count < 5; count++)
		values[count] = 100;
		
	cout << "If you see this message, it means the computer has not crashed! Here are the number:\n";
	for (count = 0; count < 5; count++)
		cout << values[count] << endl; 

	return 0;
}

