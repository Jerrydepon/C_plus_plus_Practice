#include <iostream>
#include <fstream> 
using namespace std;

struct ListNode
{
	double value;
	ListNode *next;
	//constructor
	ListNode(double value1, ListNode *next1 = NULL)
	{
		value = value1;
		next = next1;
	}
};

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
	cout << "The contents of the file are: " << endl;
	while (numberFile >> number)
	{
		cout << number << " ";
		numberList = new ListNode(number, numberList);
	}
	
	cout << endl << "The contents of the list are: " << endl;
	ListNode *ptr = numberList;
	while (ptr != NULL)
	{
		cout << ptr->value << " ";
		ptr = ptr->next;
	}

	return 0;
}

