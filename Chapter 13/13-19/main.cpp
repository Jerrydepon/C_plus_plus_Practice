#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	char ch;
	
	fstream file("letters.txt", ios::in);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	
	file.seekg(5L, ios::beg);
	file.get(ch);
	cout << "Byte 5 from beginning: " << ch << endl;
	
	file.seekg(-10L, ios::end);
	file.get(ch);
	cout << "Byte 10 from end: " << ch << endl;
	
	file.seekg(3L, ios::cur);
	file.get(ch);
	cout << "Byte 3 from current: " << ch << endl;
	
	file.close();

	return 0;
}

