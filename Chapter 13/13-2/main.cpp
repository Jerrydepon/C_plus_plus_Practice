#include <iostream>
#include <fstream> 
using namespace std;

int main() 
{
	fstream dataFile;
	
	dataFile.open("demofile.txt", ios::out);
	dataFile << "Jones\n";
	dataFile << "Smith\n";
	dataFile.close();
	
	dataFile.open("demofile.txt", ios::out|ios::app);
	dataFile << "Willis\n";
	dataFile << "Davis\n";
	dataFile.close();

	return 0;
}

