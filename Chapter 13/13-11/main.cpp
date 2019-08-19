#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	const int LENGTH = 81;
	char input[LENGTH];
	
	fstream dataFile("addresses.txt", ios::in);
	if (!dataFile)
	{
		cout << "Error opening file.";
		return 0;
	}
	
	dataFile.getline(input, LENGTH, '$');
	while (!dataFile.fail())
	{
		cout << input << endl;
		dataFile.getline(input, LENGTH, '$');
	}
	
	dataFile.close();
	
	return 0;
}

