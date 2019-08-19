#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main() 
{
	const int SIZE = 10;
	SimpleVector<int> intTable(SIZE);
	SimpleVector<double> doubleTable(SIZE);
	
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();
	
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = (x * 2);
		doubleTable[x] = (x * 2.14);
	}
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();
	
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = intTable[x] + 5;
		doubleTable[x] = doubleTable[x] + 1.5;
	}
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();
	
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x]++;
		doubleTable[x]++;
	}
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();
		
	return 0;
}

