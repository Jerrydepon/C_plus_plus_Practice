#include <iostream>
#include <string> 
using namespace std;

/*
int main() 
{
	string name,
		   city;
	
	cout << "Please enter your name." << endl;
	getline(cin, name);
	cout << "Please enter the city you live in." << endl;
	getline(cin, city);
	
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl; 
	
	return 0;
}
*/

int main() 
{
	string name,
		   city;
	
	cout << "Please enter your name." << endl;
	cin >> name;
	cout << "Please enter the city you live in." << endl;
	cin >> city;
	
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl; 
	
	return 0;
}


