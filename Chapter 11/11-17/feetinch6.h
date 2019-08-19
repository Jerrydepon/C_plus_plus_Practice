#ifndef FEETINCH6_H
#define FEETINCH6_H

#include <iostream>
using namespace std;

class FeetInches
{
	private:
		int feet;
		int inches;
		void simplify();
	
	public:
		FeetInches(int f = 0, int i = 0)
		{
			feet = f;
			inches = i;
			simplify();
		}
		
		void setData(int f, int i)
		{
			feet = f;
			inches = i;
			simplify();
		}
		
		int getFeet()
		{
			return feet;
		}
		
		int getInches()
		{
			return inches;
		}
		
		//overloaded + and - operators
		FeetInches operator+(const FeetInches &) const;
		FeetInches operator-(const FeetInches &) const;
		//overloaded prefix++ and postfix++ operator
		FeetInches operator++();
		FeetInches operator++(int);
		//overloaded relational operator
		bool operator>(const FeetInches &) const;
		bool operator<(const FeetInches &) const;
		bool operator==(const FeetInches &) const;
		//overloaded << and >> operator
		friend ostream &operator<<(ostream &, FeetInches &);
		friend istream &operator>>(istream &, FeetInches &);
		
		//operator converts to type double
		operator double()
		{
			return (feet + inches / 12.0);
		}
		//operator converts to type int
		operator int()
		{
			return feet;
		}
};

#endif

