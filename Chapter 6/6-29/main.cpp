#include <iostream>
#include <cstdlib>
using namespace std;

void someFunction();

int main() 
{
	someFunction();

	return 0;
}

//
void someFunction()
{
	cout << "This program terminates with the exit function.\n";
	cout << "Bye!\n";
	exit(0);
	
	cout << "This message will never be displayed because the program has already terminated.\n";
}
