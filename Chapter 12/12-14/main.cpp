#include <iostream>
using namespace std;

void stringCopy(char [], char []);

int main() 
{
	const int S_LENGTH = 30;
	char dest[S_LENGTH], source[S_LENGTH];
	
	cout << "Enter a string with no more than " << S_LENGTH - 1 << " characters:\n";
	cin.getline(source, S_LENGTH);
	
	stringCopy(dest, source);
	cout << "The string you entered is:\n" << dest << endl;

	return 0;
}

void stringCopy(char destStr[], char sourceStr[])
{
	int index = 0;
	
	while (sourceStr[index] != '\0')
	{
		destStr[index] = sourceStr[index];
		index++;
	}
	destStr[index] = '\0';
}
