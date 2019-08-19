#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main() 
{
	ifstream inFile;
	string name;
	
	inFile.open("demofile.txt");
	cout << "Reading information from the file.\n\n";
	
	inFile >> name;
	cout << name << endl;
	
	inFile >> name;
	cout << name << endl;	

	inFile >> name;
	cout << name << endl;
	
	inFile.close();
	cout << endl << "Done.\n";
		
	return 0;
}

