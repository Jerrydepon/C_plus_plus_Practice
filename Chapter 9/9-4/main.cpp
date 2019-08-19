#include <iostream>
using namespace std;

void sortArray(int [], int);
void showArray(int [], int);

int main() 
{
	const int SIZE = 6;
	
	int values[SIZE] = {7, 2, 3, 8, 9, 1};
	
	cout << "The unsorted values are:\n";
	showArray(values, SIZE);
	
	sortArray(values, SIZE);
	
	cout << "The sorted values are:\n";
	showArray(values, SIZE);

	return 0;
}

void sortArray(int array[], int size)
{
	int temp;
	bool swap;
	
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
		size -= 1; // the last number for each sorting is in order
	}while (swap);
}

void showArray(int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}

