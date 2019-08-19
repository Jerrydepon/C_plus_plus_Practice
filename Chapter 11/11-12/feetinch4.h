#ifndef FEETINCH4_H
#define FEETINCH4_H

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
		//overloaded prefix++ and postfix++
		FeetInches operator++();
		FeetInches operator++(int);
		//overloaded relational
		bool operator>(const FeetInches &) const;
		bool operator<(const FeetInches &) const;
		bool operator==(const FeetInches &) const;
};

#endif
