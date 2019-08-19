#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* getRandomNumbers(int);

int main() 
{
	int* numbers;
	
	numbers = getRandomNumbers(5);
	
	for (int count = 0; count < 5; count++)
		cout << numbers[count] << endl;
		
	delete [] numbers;
	numbers = 0;
		
	return 0;
}

int* getRandomNumbers(int num)
{
	int* array;
	
	if (num <= 0)
		return NULL;
		
	array = new int[num];
		
	srand(time(0));
	
	for (int count = 0; count < num; count++)
		array[count] = rand();
		
	return array;
}
