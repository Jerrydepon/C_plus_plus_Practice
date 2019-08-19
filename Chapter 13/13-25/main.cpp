#include <iostream>
#include "serialization.h"
using namespace std;

int main() 
{
	Person people[] = {Person("Joseph", 'X', "Puff", 32),
					   Person("Louise", 'Y', "Me", 28)};
	
	ofstream outFile("MorePeople.dat", ios::binary);
	if (!outFile)
	{
		cout << "The output file cannot be opened.";
		exit(1);
	}
	
	people[0].store(outFile);
	people[1].store(outFile);
	cout << "Data has been written to the file 'MorePeople.dat'";
	
	outFile.close();
	
	return 0;
}

