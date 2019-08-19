#include <iostream>
using namespace std;

int numChars(char, char[], int);

int main() 
{
	char array[] = "adbcdddef";
	
	cout << "The letter d appears " << numChars('d', array, 0) << " times.\n";

	return 0;
}

int numChars(char search, char str[], int subscript)
{
	if (str[subscript] == '\0')
		return 0;
	if (str[subscript] == search)
		return (1 + numChars(search, str, subscript + 1));
	else
		return (numChars(search, str, subscript + 1)); 
}
