#ifndef OVERLOAD_H
#define OVERLOAD_H

class NumberArray
{
	private:
		double *aPtr;
		int arraySize;
	
	public:
		//overloaded operator function
		void operator=(const NumberArray &right);
		
		//constructors and other member function
		NumberArray(const NumberArray &);
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
