#include <iostream>
#include <string>
using namespace std;

struct PopInfo
{
	string name;
	long population;
	
	PopInfo(string n = "New City  ", long p = 0)
	{
		name = n;
		population = p;
	}
};

int main() 
{
	PopInfo city1("Aurora    ", 168181);
	PopInfo city2("Naperville", 141579);
	PopInfo city3;
	
	cout << "Here is the city data.\n";
	cout << city1.name << "  " << city1.population << endl;
	cout << city2.name << "  " << city2.population << endl;
	cout << city3.name << "  " << city3.population << endl;		
	
	return 0;
}

