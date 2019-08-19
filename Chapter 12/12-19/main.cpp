#include <iostream>
#include <string> 
using namespace std;

int main() 
{
	string str1, str2, str3;
	str1 = "ABC";
	str2 = "DEF";
	str3 = str1 + str2;
	
	for (int k = 0; k < str3.size(); k++)
		cout << str3[k] << endl;
	cout << endl;
	
	if (str1 < str2)
		cout << str1 << " is less than " << str2 << endl;
	else
		cout << str1 << " is not less than " << str2 << endl;
	
	return 0;
}

