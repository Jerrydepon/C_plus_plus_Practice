#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>
using namespace std;

class Currency
{
	private:
		string original;
		string formatted;
	
	public:
		Currency(string);
		void dollarFormat();
		
		string getOriginal()
		{
			return original;
		}
		string getFormatted()
		{
			return formatted;
		}
};

#endif
