#include <iostream>
#include <fstream> 
using namespace std;

int main() 
{
	int number;
	ifstream inputFile;
	
	inputFile.open("numbers.txt");
	if (!inputFile)
		cout << "Error opening file.\n";
	else
	{
		inputFile >> number;
		while (!inputFile.eof())
		{
			cout << number << "   ";
			inputFile >> number;
		}
		cout << endl;
		inputFile.close();
	}	
		
	return 0;
}

