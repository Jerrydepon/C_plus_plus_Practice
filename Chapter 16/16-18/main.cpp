#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void doubleValue(int &);

int main() 
{
	vector<int> numbers;
	vector<int>::iterator iter;
	
	for (int x = 0; x < 10; x++)
		numbers.push_back(x);
	cout << "The numbers in the vector are:\n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	
	for_each(numbers.begin(), numbers.end(), doubleValue);
	
	cout << "Now the numbers in the vector are:\n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl;		

	return 0;
}

void doubleValue(int &val)
{
	val *= 2;
}

