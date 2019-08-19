#include <iostream>
#include "NumberList3.h"
using namespace std;

int main() 
{
	NumberList list;
	
	for (float x = 1.5; x < 6; x += 1.1)
		list.appendNode(x);
	cout << "Here are the values in the list:\n";
	
	NumberList cList(list);
	cout << "\nHere is the list copied by the copy constructor:\n";
	cList.displayList();
	
	cout << "Here is the result of the assignment:\n";
	NumberList dList;
	dList = list;
	dList.displayList();

	return 0;
}

