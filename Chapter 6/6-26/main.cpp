#include <iostream>
#include <fstream>
using namespace std;

void readFile(ifstream&);

int main() 
{
	ifstream dataIn;
	
	dataIn.open("weather.txt");
	if (dataIn.fail())
		cout << "Error opening data file.\n";
	else
	{
		readFile(dataIn);
		
		dataIn.close();
	}

	return 0;
}

//
void readFile(ifstream & someFile)
{
	int temperature;
	
	while (someFile >> temperature)
	{
		cout << temperature << "  ";
	}
	cout << endl;
}
