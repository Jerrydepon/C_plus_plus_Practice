#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	fstream file("num.dat", ios::out|ios::binary);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}

	int buffer[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(buffer) / sizeof (buffer[0]);
	
	cout << "Now writing the data to the file.\n";
	file.write(reinterpret_cast<char *>(buffer), sizeof(buffer));
	file.close();
	
	//read
	file.open("num.dat", ios::in);
	if (!file)
	{
		cout << "Error opening file.";
		return 0;
	}
	
	cout << "Now reading the data back into memory.\n";
	file.read(reinterpret_cast<char *>(buffer), sizeof(buffer));
	 
	for (int count = 0; count < size; count++)
		cout << buffer[count] << " ";
	
	file.close();
		
	return 0;
}
