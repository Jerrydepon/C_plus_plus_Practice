#include <iostream>
using namespace std;

int main() 
{
	int num = 1;
	
	cout << "Number    Number Squared\n";
	cout << "------------------------\n";
	
	while (num <= 10)
	{
		cout << num << "\t\t" << (num * num) << endl;
		num++;
	}
	
	return 0;
}

