#ifndef NUMBERLIST_H
#define NUMBERLIST_H

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
		
	public:
		NumberList()
		{
			head = NULL;
		}
		~NumberList();
		void appendNode(double);
		void insertNode(double);
		void deleteNode(double);
		void displayList();
};

#endif

