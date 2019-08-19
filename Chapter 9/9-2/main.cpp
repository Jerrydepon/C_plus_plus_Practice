#include <iostream>
using namespace std;

int binarySearch(int [], int, int);

const int SIZE = 20;

int main() 
{
	int IDnums[SIZE] = {101, 142, 147, 188, 199, 207, 222,
						234, 289, 296, 310, 319, 388, 394,
						417, 429, 447, 521, 536, 600};
	int empID,
		results;
		
	cout << "Enter the employee ID you wish to search for: ";
	cin >> empID;
	
	results = binarySearch(IDnums, SIZE, empID);
	
	if (results == -1)
		cout << "That number does not exist in the array.\n";
	else
	{
		cout << "ID " << empID << " was found in element " << results << " of the array.\n";
	}

	return 0;
}

int binarySearch(int array[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;
	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	
	return position;
}
