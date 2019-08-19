#include <iostream>
using namespace std;

int main() 
{
	int num;
	
	cout << "Number    Number Squared\n";
	cout << "------------------------\n";
	
	for (num = 1; num <= 10; num++)
		cout << num << "\t\t" << (num * num) << endl;
	
	return 0;
}

