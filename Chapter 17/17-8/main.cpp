#include <iostream>
#include "NumberList2.h"
using namespace std;

int main() 
{
	NumberList list;
	
	for (double x = 1.5; x < 6; x += 1.1)
		list.appendNode(x);
	cout << "Here are the values in the list:\n";
	list.displayList();
	cout << "Here are the values in reverse odrder:\n";
	list.displayBackwards();
	cout << "\nThe list has " << list.numNodes() << " items."; 

	return 0;
}

