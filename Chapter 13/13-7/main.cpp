#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

void showContents(fstream &);

int main() 
{
	fstream dataFile;
	
	dataFile.open("demofile.txt", ios::in);
	if (dataFile.fail())
	{
		cout << "File open error!" << endl;
		exit(1);
	}
	
	cout << "File open successfully.\n";
	cout << "Now reading information from the file.\n\n";
	showContents(dataFile);
	
	dataFile.close();
	cout << "\nDone.\n";

	return 0;
}

void showContents(fstream &file)
{
	string str;
	
	file >> str;
	while (!file.fail())
	{
		cout << str << endl;
		file >> str;
	}
}
