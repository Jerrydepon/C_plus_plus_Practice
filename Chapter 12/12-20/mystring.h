#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

//declarations
class Mystring;
ostream &operator<<(ostream &, Mystring &);
istream &operator>>(istream &, Mystring &);

class Mystring
{
	private:
		char *str;
		int len;
	
	public:
		Mystring()
		{
			str = 0;
			len = 0;
		}
		
		//convert and copy constructors
		Mystring(char *);//
		Mystring(Mystring &);//
		//destructor
		~Mystring()
		{
			if (len != 0)
				delete [] str;
			str = 0;
			len = 0; 
		}
		
		//member fuctions and operators
		int length()
		{
			return len;
		}
		char *getValue()
		{
			return str;
		}
		Mystring operator=(Mystring &);
		Mystring operator=(const char *);
		Mystring operator+=(Mystring &);
		Mystring operator+=(const char *);
		bool operator==(Mystring &);
		bool operator==(const char *);
		bool operator!=(Mystring &);
		bool operator!=(const char *);
		bool operator>(Mystring &);
		bool operator>(const char *);
		bool operator<(Mystring &);
		bool operator<(const char *);		
		bool operator>=(Mystring &);
		bool operator>=(const char *);	
		bool operator<=(Mystring &);
		bool operator<=(const char *);	
		
		//overload insertion and extraction operators
		friend ostream &operator<<(ostream &, Mystring &);
		friend istream &operator>>(istream &, Mystring &);		
};

#endif
