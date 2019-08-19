#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() 
{
	long offset;
	char ch;
	char response;
	
	fstream file("letters.txt", ios::in);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	
	do
	{
		cout << "Currently at position " << file.tellg() << endl;
		cout << "Enter an offset from the beginning of the file: ";
		cin >> offset;
		
		file.seekg(offset, ios::beg);
		file.get(ch);
		cout << "Character read: " << ch << endl;
		cout << "Do it again? "; 
		cin >> response;
	}while (toupper(response) == 'Y');
	
	file.close(); 

	return 0;
}

