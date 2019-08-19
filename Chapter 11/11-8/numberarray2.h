#ifndef NUMBERARRAY2_H
#define NUMBERARRAY2_H
#include <iostream>
using namespace std;

class NumberArray
{
	private:
		double *aPtr;
		int arraySize;
		
	public:
		NumberArray(NumberArray &);
		NumberArray(int size, double value);
		~NumberArray()
		{
			if (arraySize > 0)
				delete [] aPtr;
		}
		void print();
		void setValue(double value);
};
#endif
