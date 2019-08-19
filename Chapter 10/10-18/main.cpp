#include <iostream>
#include <cstring>
using namespace std;

class InvItem
{
	private:
		char* description;
		int units;
	
	public:
		InvItem(char* descr, int number)
		{
			description = new char[strlen(descr)];
			strcpy(description, descr);
			units = number;
		}
		
		~InvItem()
		{
			delete [] description;
		}
		
		char* getDesc()
		{
			return description;
		}
		
		int getUnits()
		{
			return units;
		}
};

int main() 
{
	InvItem stock("Wrench", 20);
	
	cout << "Item description: " << stock.getDesc() << endl;
	cout << "Units on hand: " << stock.getUnits() << endl;

	return 0;
}

