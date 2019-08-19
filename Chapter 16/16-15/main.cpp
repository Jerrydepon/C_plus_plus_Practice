#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() 
{
	vector<int> values;
	vector<int>::iterator iter;
	
	values.push_back(1);
	values.push_back(2);
	values.push_back(2);
	values.push_back(3);
	values.push_back(3);
	values.push_back(3);
	
	cout << "The values in the vector are:\n";
	for (iter = values.begin(); iter != values.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;
	
	cout << "The number of 1s in the vector is ";
	cout << count(values.begin(), values.end(), 1) << endl;
	cout << "The number of 2s in the vector is ";
	cout << count(values.begin(), values.end(), 2) << endl;
	cout << "The number of 3s in the vector is ";
	cout << count(values.begin(), values.end(), 3) << endl;
		
	return 0;
}

