#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	const int LENGTH = 81;
	fstream file;
	char input[LENGTH];
	
	file.open("murphy.txt", ios::in);
	if (!file)
	{
		cout << "File open error!" << endl;
		return 0; 
	}
	
	file >> input;
	while(!file.fail())
	{
		cout << input;
		file >> input;
	}
	
	file.close();

	return 0;
}

