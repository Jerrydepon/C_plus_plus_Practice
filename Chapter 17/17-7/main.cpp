#include <iostream>
#include <fstream> 
using namespace std;

struct ListNode
{
	double value;
	ListNode *next;
	
	ListNode(double value1, ListNode *next1 = NULL)
	{
		value = value1;
		next = next1;
	}
};

int length(ListNode *);
void printList(ListNode *);

int main() 
{
	ListNode *numberList = NULL;
	
	ifstream numberFile("numberFile.dat");
	if (!numberFile)
	{
		cout << "Error in opening the file of numbers.";
		exit(1);
	}
	
	double number;
	while (numberFile >> number)
	{
		numberList = new ListNode(number, numberList);
	}
	
	cout << endl << "The contents of the list are: " << endl;
	printList(numberList);
	
	cout << endl << "The number of items in the list is: " << length(numberList);
	
	return 0;
}

int length(ListNode *ptr)
{
	if (ptr == NULL)
		return 0;
	else
		return 1 + length(ptr->next);
}

void printList(ListNode *ptr)
{
	if (ptr == NULL)
		return;
	else
	{
		cout << ptr->value << " ";
		printList(ptr->next);
	}
}

