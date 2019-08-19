#include <iostream>
#include "MathStack.h"
using namespace std;

int main() 
{
	MathStack stack(5);
	int catchVar;
	
	cout << "Pushing 3\n";
	stack.push(3);
	cout << "Pushing 6\n";
	stack.push(6);
	stack.add();
	cout << "The sum is ";
	stack.pop(catchVar);
	cout << catchVar << endl;
	cout << "Pushing 7\n";
	stack.push(7);
	cout << "Pushing 10\n";
	stack.push(10);
	stack.sub();
	cout << "The difference is ";
	stack.pop(catchVar);
	cout << catchVar;

	return 0;
}

