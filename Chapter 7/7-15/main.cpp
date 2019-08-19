#include <iostream>
using namespace std;

class Demo
{
	public:
		Demo();
		~Demo();
};

Demo::Demo()
{
	cout << "An object has just been defined, so the constructor is running.\n";
}

Demo::~Demo()
{
	cout << "Now the destructor is running.\n";
}

int main() 
{
	Demo demoObj;
	
	cout << "The object now exists, biut is about to be destroyed.\n";

	return 0;
}

