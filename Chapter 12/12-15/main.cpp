#include <iostream>
using namespace std;

void nameSlice(char []);

int main() 
{
	const int NAME_LENGTH = 41;
	char name[NAME_LENGTH];
	
	cout << "Enter your first and last names, seperated by a space:\n";
	cin.getline(name, NAME_LENGTH);
	
	nameSlice(name);
	cout << "Your first name is: " << name << endl;

	return 0;
}

void nameSlice(char userName[])
{
	int k = 0;
	
	while (userName[k] != ' ' && userName[k] != '\0')
		k++;
		
	if (userName[k] == ' ')
		userName[k] = '\0';

}
