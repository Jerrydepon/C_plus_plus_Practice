#include <iostream>
#include <fstream> 
using namespace std;

int main() 
{
	char ch;
	
	fstream dataFile("sentence.txt", ios::out);
	if (!dataFile)
	{
		cout << "Error opening the file.";
		return 0;
	}
	
	cout << "Type a sentence and be sure to end it with a period.\n";
	cin.get(ch);
	while (ch != '.')
	{
		dataFile.put(ch);
		cin.get(ch);
	}
	dataFile.put(ch);
	
	dataFile.close();

	return 0;
}

