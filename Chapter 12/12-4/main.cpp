#include <iostream>
using namespace std;

int main() 
{
	const int NAME_LENGTH = 50;
	char* pname;
	
	pname = new char[NAME_LENGTH];
	
	cout << "Enter your name: ";
	cin.getline(pname, NAME_LENGTH);
	
	cout << "Hello " << pname;

	return 0;
}

