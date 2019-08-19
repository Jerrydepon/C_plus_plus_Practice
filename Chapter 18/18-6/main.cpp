#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main() 
{
	DynIntQueue iQueue;
	
	cout << "Enqueuing 5 items...\n";
	
	for (int k = 1; k <= 5; k++)
		iQueue.enqueue(k * k);
		
	cout << "The values in the queue were:\n";
	while(!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}

	return 0;
}

