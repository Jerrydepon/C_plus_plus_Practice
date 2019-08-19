#include "intqueue.h"
#include <iostream>
using namespace std;

IntQueue::IntQueue(int s)
{
	queueArray = new int[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;	
}

IntQueue::~IntQueue()
{
	delete [] queueArray;
}

void IntQueue::enqueue(int num)
{
	if (isFull())
	{
		cout << "The queue is full.\n";
		exit(1);	
	}	
	else
	{
		rear = (rear + 1) % queueSize;
		queueArray[rear] = num;
		numItems++;
	}
}

void IntQueue::dequeue(int &num)
{
	if (isEmpty())
	{
		cout << "The queue is empty.\n";
		exit(1);
	}
	else
	{
		front = (front + 1) % queueSize;
		num = queueArray[front];
		numItems--;
	}
}

bool IntQueue::isEmpty()
{
	if (numItems > 0)
		return false;
	else
		return true;
}

bool IntQueue::isFull()
{
	if (numItems < queueSize)
		return false;
	else
		return true;
}

void IntQueue::clear()
{
	front = -1;
	rear = -1;
	numItems = 0;
}
