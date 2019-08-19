#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int>);
void sortVector(vector<int> &);

int main() 
{
	const int SIZE = 6;
	
	vector<int> values(SIZE);
	
	cout << "Please enter " << SIZE << " intergers separated by spaces.\n";
	
	for (int i = 0; i < SIZE; i++)
		cin >> values[i];
	
	cout << "\nThe unsorted values entered are:\n";
	displayVector(values);
	
	sortVector(values);
	cout << "The sorted values are:\n";
	displayVector(values);
	
	return 0;
}

void displayVector(vector<int> numbers)
{
	for (int count = 0; count < numbers.size(); count++)
		cout << numbers[count] << " ";
	cout << endl;
}

void sortVector(vector<int> &numbers)
{
	int temp;
	bool swap;
	
	do
	{
		swap = false;
		for (int count = 0; count < (numbers.size() - 1); count++)
		{
			if (numbers[count] > numbers[count + 1])
			{
				temp = numbers[count];
				numbers[count] = numbers[count + 1];
				numbers[count + 1] = temp;
				swap = true;
			}
		}
	}while (swap);
}
