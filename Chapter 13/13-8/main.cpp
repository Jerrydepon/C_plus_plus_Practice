#include <iostream>
#include <fstream>
using namespace std;

void showState(fstream &);

int main() 
{
	fstream testFile("stuff.dat", ios::out);
	if (testFile.fail())
	{
		cout << "cannot open the file.\n";
		return 0;
	}
	
	int num = 10;
	cout << "Writing to the file.\n";
	testFile << num;
	showState(testFile);
	testFile.close();
	
	testFile.open("stuff.dat", ios::in);
	if (testFile.fail())
	{
		cout << "cannot open the file.\n";
		return 0;
	}
	cout << "Reading from the file.\n";
	testFile >> num;
	showState(testFile);
	
	cout << "Forcing a bad read operation.\n";
	testFile >> num;
	showState(testFile);
	
	testFile.close();

	return 0;
}

void showState(fstream &file)
{
	cout << "File Status:\n";
	cout << " eof bit: " << file.eof() << endl;
	cout << " fail bit: " << file.fail() << endl;
	cout << " bad bit: " << file.bad() << endl;
	cout << " good bit: " << file.good() << endl;
	file.clear();
}
