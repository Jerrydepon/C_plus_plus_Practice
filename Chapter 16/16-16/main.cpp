#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

int main() 
{
	vector<int> numbers;
	vector<int>::iterator iter;
	
	for (int x = 0; x < 10; x++)
		numbers.push_back(x);
		
	srand(time(0));
	random_shuffle(numbers.begin(), numbers.end());
	cout << "The numbers in the vector are:\n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	
	iter = max_element(numbers.begin(), numbers.end());
	cout << "The largest value in the vector is " << *iter << endl;

	iter = min_element(numbers.begin(), numbers.end());
	cout << "The smallest value in the vector is " << *iter << endl;
	
	return 0;
}

