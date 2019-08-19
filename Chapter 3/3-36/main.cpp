#include <iostream>
#include <string> 
using namespace std;

int main() 
{
	string town;
	
	cout << "Where do you live? ";
	getline(cin, town);
	
	cout << "Your town's name has " << town.length() << " character.\n";
	
	return 0;
}

