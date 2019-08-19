#include "inheritance5.h"
#include <iostream>
using namespace std;

int main() 
{
	const int NUM_PEOPLE = 5;
	Person *arr[NUM_PEOPLE] = {new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr."),
							   new TFaculty("Thomas Cruise", COMPUTER_SCIENCE, "Professor"),
							   new TFaculty("James Stock", BIOLOGY, "Dr."),
							   new TFaculty("Sharon Rock", BIOLOGY, "Professor"),
							   new TFaculty("Nicole Eweman", ARCHEOLOGY, "Dr.")};
							   
	for (int k = 0; k < NUM_PEOPLE; k++)
	{
		cout << arr[k]->getName() << endl;
	}

	return 0;
}
