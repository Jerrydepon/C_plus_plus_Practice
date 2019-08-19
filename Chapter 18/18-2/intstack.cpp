#include "intstack.h"

#include <iostream>
#include "intStack.h"
using namespace std;

IntStack::IntStack(int size)
{
	stackArray = new int[size];
	stackSize = size;
	top = -1;
}

void IntStack::push(int num)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
		exit(1);
	}
	else
	{
		top++;
		stackArray[top] = num;
	}
}

void IntStack::pop(int &num)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
		exit(1);
	}
	else
	{
		num = stackArray[top];
		top--;
	}
}

bool IntStack::isFull()
{
	if (top == stackSize - 1)
		return true;
	else
		return false;
}

bool IntStack::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

