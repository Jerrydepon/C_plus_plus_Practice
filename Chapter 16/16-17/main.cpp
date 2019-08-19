#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() 
{
	vector<int> numbers;
	vector<int>::iterator iter;
	
	for (int x = 0; x < 10; x++)
		numbers.push_back(x);
	cout << "The numbers in the vector are:\n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;
	
	iter = find(numbers.begin(), numbers.end(), 7);
	cout << "The value search for is " << *iter << endl;

	return 0;
}

