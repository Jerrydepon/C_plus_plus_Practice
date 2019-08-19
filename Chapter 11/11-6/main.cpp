#include <iostream>
using namespace std;

class Address
{
	private:
		string street;
	
	public:
		Address()
		{
			street = " ";
		}
		Address(string st)
		{
			setStreet(st);
		}
		void setStreet(string st)
		{
			street = st;
		}
		string getStreet()
		{
			return street;
		}
};

int main() 
{
	Address mary("123 Main St");
	Address joan = mary;
	cout << "Mary lives at " << mary.getStreet() << endl;
	cout << "Joan lives at " << joan.getStreet() << endl;
	
	joan.setStreet("1600 Pennysylvania Ave");
	cout << "Now Mary lives at " << mary.getStreet() << endl;
	cout << "Now Joan lives at " << joan.getStreet() << endl;
	
	return 0;
}

