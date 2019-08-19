#include <iostream>
using namespace std;

/*
int main() 
{
	short testVar = 32767;
	
	cout << testVar << endl;
	
	testVar = testVar + 1 ;
	cout << testVar << endl;

	testVar = testVar - 1 ;
	cout << testVar << endl;	 
	 
	return 0;
}
*/

int main()
{
	float test;
	
	test = 2.0e38 * 2;
	cout << test << endl;
	test = 2.0e-38 / 2.0e38; 
	cout << test << endl;
	
	return 0;
}
