#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	const int LENGTH = 81;
	fstream file;
	char ch, fileName[LENGTH];
	
	cout << "Enter a file name: ";
	cin >> fileName;
	file.open(fileName, ios::in);
	if (!file)
	{
		cout << fileName << " could not be opened.\n";
		return 0;
	}
	
	file.get(ch);
	while (!file.fail())
	{
		cout << ch;
		file.get(ch);
	}
	
	file.close();
	
	return 0;
}

