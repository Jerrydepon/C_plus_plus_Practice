#include "dynintqueue.h"
#include <iostream>
using namespace std;

DynIntQueue::DynIntQueue()
{
	front = 0;
	rear = 0;
}

DynIntQueue::~DynIntQueue()
{
	clear();
}

void DynIntQueue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}

void DynIntQueue::dequeue(int &num)
{
	QueueNode *temp;
	if (isEmpty())
	{
		cout << "The queue is empty.\n";
		exit(1);
	}
	else
	{
		num = front->value;
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool DynIntQueue::isEmpty()
{
	if (front == 0)
		return true;
	else
		return false;
}

void DynIntQueue::clear()
{
	int value;
	
	while(!isEmpty())
		dequeue(value);
}
