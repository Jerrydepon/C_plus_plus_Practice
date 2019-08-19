#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() 
{
	const int LENGTH = 20;
	char input[LENGTH];
	
	int total = 0,
		count = 0;
	double average;
	
	cout << "This program will average a series of numbers.\n";
	cout << "Enter the first number or Q to quit: ";
	cin.getline(input, LENGTH);
	
	while((strcmp(input, "Q") != 0) && (strcmp(input, "q") != 0))
	{
		total += atoi(input);
		count ++;
		
		cout << "Enter the next number or Q to quit: ";
		cin.getline(input, LENGTH);
	}
	
	if (count != 0)
	{
		average = double(total) / count;
		cout << "average: " << average << endl;
	}

	return 0;
}

