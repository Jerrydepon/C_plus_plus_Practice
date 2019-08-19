#include <iostream>
#include "DynIntStack.h"
using namespace std;

int main() 
{
	DynIntStack stack;
	int catchVar;
	
	cout << "Pushing 5\n";
	stack.push(5);
	cout << "Pushing 10\n";
	stack.push(10);
	cout << "Pushing 15\n";
	stack.push(15);		

	cout << "Popping...\n";
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.pop(catchVar);
	cout << catchVar << endl;
	
	cout << "\nAttemping to pop again...";
	stack.pop(catchVar);
		
	return 0;
}

