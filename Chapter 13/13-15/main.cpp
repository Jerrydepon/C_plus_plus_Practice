#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;

int main() 
{
	const int LENGTH = 81;
	ifstream inFile;
	ofstream outFile("out.txt");
	char fileName[LENGTH], ch, ch2;
	
	cout << "Enter a file name: ";
	cin >> fileName;
	inFile.open(fileName);
	if (!inFile)
	{
		cout << "Cannot open " << fileName << endl;
		return 0;
	}
	
	inFile.get(ch);
	while (!inFile.fail())
	{
		ch2 = toupper(ch);
		outFile.put(ch2);
		inFile.get(ch);
	}
	
	inFile.close();
	outFile.close();
	cout << "File conversion done.\n";

	return 0;
}

