#include <iostream>
#include "serialization.h" 
using namespace std;

int main() 
{
	const int NUM_PEOPLE = 2;
	Person people[NUM_PEOPLE];
	
	ifstream inFile("MorePeople.dat", ios::binary);
	if (!inFile)
	{
		cout << "The input file cannot be opened.";
		exit(1);
	}
	
	for (int k = 0; k < NUM_PEOPLE; k++)
		people[k].load(inFile);
	for (int k = 0; k < NUM_PEOPLE; k++)
		people[k].display();
		
	inFile.close();

	return 0;
}

