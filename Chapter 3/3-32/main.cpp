/*
#include <iostream>
#include <cstdlib> 
using namespace std;

int main() 
{
	unsigned seed;
	
	cout << "Enter a seed value:¡@";
	cin >> seed;
	
	srand(seed);
	
	cout << rand() << endl << rand() << endl << rand() << endl;
	
	return 0;
}
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() 
{
	unsigned seed;
	seed = time(0);
	
	srand(seed);
	
	cout << rand() << endl << rand() << endl << rand() << endl;
	
	return 0;
}
