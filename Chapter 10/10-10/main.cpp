#include <iostream>
using namespace std;

int main() 
{
	const int SIZE = 8;
	int set[] = {5, 10, 15, 20, 25, 30, 35, 40};
	int* numPtr = set;
	
	cout << "The numbers in set are:\n";
	cout << *numPtr << " ";
	
	while (numPtr < &set[SIZE - 1])
	{
		numPtr++;
		cout << *numPtr << " ";
	}
	
	cout << "\nThe numbers in set backwards are:\n";
	cout << *numPtr << " ";
	while (numPtr > set)
	{
		numPtr--;
		cout << *numPtr << " ";
	}

	return 0;
}

