#include "currency.h"

//constructor
Currency::Currency(string str)
{
	original = str;
	dollarFormat();
}

void Currency::dollarFormat()
{
	formatted = original;
	int dp = formatted.find('.');
	
	while (dp > 3)
	{
		dp = dp - 3;
		formatted.insert(dp, ",");
	}
	formatted.insert(0, "$");
}
