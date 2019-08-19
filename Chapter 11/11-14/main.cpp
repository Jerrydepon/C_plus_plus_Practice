#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string name = "Williams";
	
	cout << "Here are the letters in your name: \n";
	for (int x = 0; x < name.length(); x++)
		cout << name[x] << endl;
	
	cout << "Enter a character and press Enter: ";
	cin >> name[2];
	
	cout << "Now, her are the letters in your name:\n";
	for (int x = 0; x < name.length(); x++)
		cout << name[x] << endl;	

	return 0;
}

