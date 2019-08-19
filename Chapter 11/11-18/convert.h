#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
using namespace std;

class IntClass
{
	private:
		int value;
	
	public:
		IntClass(int intValue)
		{
			value = intValue;
		}
		int getValue()
		{
			return value;
		}
};

#endif
