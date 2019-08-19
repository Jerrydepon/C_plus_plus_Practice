#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> vect;
	
	for (int x = 0; x < 10; x++)
		vect.push_back(x * x);
		
	vector<int>::iterator iter = vect.begin();
	while (iter != vect.end())
	{
		cout << *iter << " ";
		iter++;
	}

	return 0;
}

