#include <iostream>
#include "CharRange.h"
using namespace std;

int main() 
{
	char ch;
	
	CharRange input('J', 'N');
	
	cout << "Enter any of the character J, K, L, M, or N.\n";
	cout << "Enter N will stop this program.\n";
	ch = input.getChar();
	
	while (ch != 'N')
	{
		cout << "You entered " << ch << endl;
		ch = input.getChar(); 
	}

	return 0;
}

