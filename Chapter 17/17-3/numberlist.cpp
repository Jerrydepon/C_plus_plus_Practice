#include <iostream>
#include "NumberList.h"
using namespace std;

NumberList::~NumberList()
{
	ListNode *nodePtr,
			 *nextNodePtr;
	
	nodePtr = head;
	while (nodePtr != NULL)
	{
		nextNodePtr = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNodePtr;
	}
}

void NumberList::appendNode(double num)
{
	if (head == NULL)
		head = new ListNode(num);
	else
	{
		ListNode *nodePtr;
		nodePtr = head;
		
		while (nodePtr->next != NULL)
			nodePtr = nodePtr->next;
			
		nodePtr->next = new ListNode(num);
	}
}

void NumberList::insertNode(double num)
{
	ListNode *nodePtr,
			 *previousNodePtr;
			 
	if (head == NULL || head->value >= num)
	{
		head = new ListNode(num, head);
	}
	else
	{
		previousNodePtr = head;
		nodePtr = head->next;
		
		while (nodePtr != NULL && nodePtr->value < num)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		
		previousNodePtr->next = new ListNode(num, nodePtr);
	}
}

void NumberList::deleteNode(double num)
{
	ListNode *nodePtr,
			 *previousNodePtr;
			 
	if (!head)
		return;
		
	if (head->value == num)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;
		
		while (nodePtr != NULL && nodePtr->value != num)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		
		if (nodePtr)
		{
			previousNodePtr->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void NumberList::displayList()
{
	ListNode *nodePtr;
	
	nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

