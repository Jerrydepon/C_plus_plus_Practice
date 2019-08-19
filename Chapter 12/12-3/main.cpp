#include <iostream>
using namespace std;

int main() 
{
	const int LENGTH = 80;
	char line[LENGTH];
	
	cout << "Enter a sentence of no more than "
		 << LENGTH - 1 << " characters:\n";
	cin.getline(line, LENGTH);
	cout << "The sentence you entered is:\n";
	
	for (int index = 0; line[index] != '\0'; index++)
	{
		cout << line[index];
	}

	return 0;
}

