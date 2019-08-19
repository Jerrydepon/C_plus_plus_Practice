#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
	private:
		class ListNode
		{
			friend class LinkedList<T>;
			T value;
			ListNode *next;
			
			ListNode(T value1, ListNode *next1 = NULL)
			{
				value = value1;
				next = next1;
			}	
		};
		ListNode *head;
		
	public:
		LinkedList()
		{
			head = NULL;	
		}	
		~LinkedList();
		void appendNode(T);
		void insertNode(T);
		void deleteNode(T);
		void displayList();
};

template <class T>
LinkedList<T>::~LinkedList()
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

template <class T>
void LinkedList<T>::appendNode(T val)
{
	if (head = NULL)
		head = new ListNode(val);
	else
	{
		ListNode *nodePtr;
		nodePtr = head;
		
		while (nodePtr->next != NULL)
			nodePtr = nodePtr->next;
		
		nodePtr->next = new ListNode(val);
	}
}

template <class T>
void LinkedList<T>::insertNode(T val)
{
	ListNode *nodePtr,
			 *previousNodePtr;
			 
	if (head == NULL || head->value >= val)
	{
		head = new ListNode(val, head);
	}
	else
	{
		previousNodePtr = head;
		nodePtr = head->next;
		
		while (nodePtr != NULL && nodePtr->value < val)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		
		previousNodePtr->next = new ListNode(val, nodePtr);
	}
}

template <class T>
void LinkedList<T>::displayList()
{
	ListNode *nodePtr;
	
	nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

template <class T>
void LinkedList<T>::deleteNode(T val)
{
	ListNode *nodePtr,
		  	 *previousNodePtr;
		  	 
	if (!head)
		return;
	
	if (head->value == val)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;
		
		while (nodePtr != NULL && nodePtr->value != val)
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

#endif
