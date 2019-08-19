#ifndef INTARRAY_H
#define INTARRAY_H
#include <iostream>
using namespace std;

class IntArray
{
	private:
		int* aptr;
		int arraySize;
		void subError();

	public:
		IntArray(int);
		IntArray(const IntArray &);
		~IntArray();
		
		int size()
		{
			return arraySize;
		}
		
		int &operator[](int);
};

#endif
#ifndef INTARRAY_H
#define INTARRAY_H

class intarray
{
	public:
	protected:
};

#endif
