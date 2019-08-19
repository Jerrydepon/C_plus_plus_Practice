#include "dynintstack.h"
#include <iostream>
using namespace std;

void DynIntStack::push(int num)
{
	top = new StackNode(num, top);
}

void DynIntStack::pop(int &num)
{
	StackNode *temp;
	
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
		exit(1); 
	}
	else
	{
		num = top->value;
		temp = top;
		top = top->next;
		delete temp;
	}
}

bool DynIntStack::isEmpty()
{
	if (!top)
		return true;
	else
		return false;
}
