#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	char ch;
	fstream ioFile("rewind.txt", ios::out);
	if (!ioFile)
	{
		cout << "Error in trying to create file";
		return 0;
	}
	ioFile << "All good dogs " << endl
		   << "growl, bark, and eat." << endl;
	ioFile.close();
	
	ioFile.open("rewind.txt", ios::in);
	if (!ioFile)
	{
		cout << "Error in trying to open file";
		return 0;
	}
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		cout.put(ch);//???
		ioFile.get(ch);
	}
	ioFile.clear();
	
	ioFile.seekg(0, ios::beg);
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		cout.put(ch);
		ioFile.get(ch);
	}

	return 0;
}

