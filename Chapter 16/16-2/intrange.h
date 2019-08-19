#ifndef INTRANGE_H
#define INTRANGE_H

#include <iostream>
using namespace std;

class IntRange
{
	private:
		int input;
		int lower;
		int upper;
	
	public:
		class OutOfRange
		{
		};
		
		IntRange(int low, int high)
		{
			lower = low;
			upper = high;
		}
		int getInput()
		{
			cin >> input;
			if (input < lower || input > upper)
				throw OutOfRange();
			return input;
		}
};

#endif
