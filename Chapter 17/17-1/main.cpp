#include <iostream>
using namespace std;

struct ListNode
{
	double value;
	ListNode *next;	
};

int main() 
{
	ListNode *head;
	
	head = new ListNode;
	head->value = 12.5;
	head->next = NULL;
	
	ListNode *secondPtr = new ListNode;
	secondPtr->value = 13.5;
	secondPtr->next = NULL;
	head->next = secondPtr;
	
	cout << "First item is " << head->value << endl;
	cout << "Second item is " << head->next->value << endl;

	return 0;
}

