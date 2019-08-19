#include <iostream>
using namespace std;

class BaseDemo
{
	public:
		BaseDemo()
		{
			cout << "This is the BaseDemo constructor.\n";
		}
		~BaseDemo()
		{
			cout << "This is the BaseDemo destructorr.\n";
		}
};

class DeriDemo:public BaseDemo
{
	public:
		DeriDemo()
		{
			cout << "This is the DeriDemo constructor.\n";
		}
		~DeriDemo()
		{
			cout << "This is the DeriDemo destructor.\n";
		}
};

int main() 
{
	cout << "We will now create a DeriDemo object.\n";
	DeriDemo object;
	cout << "The program is now going th end.\n";	

	return 0;
}

