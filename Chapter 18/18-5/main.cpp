#include <iostream>
#include "IntQueue.h"
using namespace std;

int main() 
{
	IntQueue iQueue(5);
	
	cout << "Enqueuing 5 items...\n";
	
	for (int k = 1; k <= 5; k++)
		iQueue.enqueue(k * k);
	
	cout << "The values in the queue were: ";
	while(!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}
	cout << endl;
	
	return 0;
}

