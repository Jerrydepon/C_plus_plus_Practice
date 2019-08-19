#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	fstream dataFile;
	string buffer;
	
	dataFile.open("myfile.dat", ios::out);
	dataFile << "Now is the time for all good men" << endl
		     << "to come to the aid of their country.";
	dataFile.close();
	
	dataFile.open("myfile.dat", ios::in);
	//first line
	getline(dataFile, buffer);
	cout << buffer << endl;
	//second line
	getline(dataFile, buffer);
	cout << buffer << endl;
	dataFile.close();

	return 0;
}

