#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	const int LENGTH = 81;
	fstream nameFile;
	char input[LENGTH];
	
	nameFile.open("murphy.txt", ios::in);
	if (!nameFile)
	{
		cout << "File open error!" << endl;
		return 0;
	}
	
	nameFile.getline(input, LENGTH);
	while (!nameFile.fail())
	{
		cout << input << endl;
		nameFile.getline(input, LENGTH);	
	} 
	
	nameFile.close();

	return 0;
}

