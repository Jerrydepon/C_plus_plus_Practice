#include <iostream>
#include "IntBinaryTree.h" 
using namespace std;

int main() 
{
	IntBinaryTree tree;
	
	cout << "Inserting the numbers 5 8 3 12 9.\n\n";
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);

	if (tree.search(3))
		cout << "3 is found in the tree.\n";
	else
		cout << "3 was not found in the tree.\n";	

	return 0;
}

