#include <iostream>
using namespace std;

int main() 
{
	char *p, *q;
	
	p = "Hello ";
	q = "Bailey";
	
	cout << p << q << endl;
	
	cout << p << " is stored at " << &p << endl;
	cout << q << " is stored at " << &q << endl;
	cout << &"Another string literal";

	return 0;
}

