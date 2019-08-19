#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include <cstdlib>           
class NumberList
{
	private:
		class ListNode
		{
	    	friend class NumberList;
			double value;
			ListNode *next;
	    	
			ListNode(double value1, ListNode *next1 = NULL)
	      	{
	        	value = value1;
	         	next = next1;
	      	}
		};
		ListNode *head;
		
		// Used to release all memory used by a linked list.
		static void destroyList(ListNode *);
		
		// Used to make a distinct copy of a linked list.
	   	static ListNode *copyList(ListNode *);
		
	public:
		NumberList()	                   // Constructor
		{
			head = NULL;
		}
	   	NumberList(NumberList &nList)     // Copy constructor
	    { 	
			head = copyList(nList.head);
		}
		~NumberList()                     // Destructor
	    { 
			destroyList(head);
		}
		
		void appendNode(double);
		void insertNode(double);
		void deleteNode(double);
		void displayList();
		
	   	NumberList &operator=(NumberList &right);//
};

#endif
