#include <iostream>
#include <iomanip>
#include "Circle.h"
using namespace std;

const int NUM_CIRCLES = 4;

int main() 
{
	Circle circle[NUM_CIRCLES] = {0.0, 2.0, 2.5};
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the areas of the " << NUM_CIRCLES << " circles.\n";
	
	for (int index = 0; index < NUM_CIRCLES; index++)
	{
		cout << "circle " << (index + 1) << setw(8) << circle[index].findArea() << endl;
	}

	return 0;
}

