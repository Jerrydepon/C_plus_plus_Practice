#include <iostream>
#include <cstdlib>
#include <new> 
using namespace std;

int main() 
{
	int *p;
	try
	{
		p = new int[2];
		p[0] = 10;
		p[1] = 20;
	}
	catch (bad_alloc)
	{
		cout << "Memory cannot be allocated.";
		exit(1);	
	} 
	cout << p[0] << " " << p[1];

	return 0;
}

