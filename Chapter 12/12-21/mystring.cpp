#include "mystring.h"

//constructor
Mystring::Mystring(char *sptr)
{
	len = strlen(sptr);
	str = new char[len + 1];
	strcpy(str, sptr);
}

//copy constructor
Mystring::Mystring(Mystring &right)
{
	len = right.length();
	str = new char[right.length() + 1];
	strcpy(str, right.getValue());
}

//overloaded = operator
Mystring Mystring::operator=(Mystring &right)
{
	if (len !=0)
		delete [] str;
	len = right.length();
	str = new char[right.length() + 1];
	strcpy(str, right.getValue());
	return *this;
}
Mystring Mystring::operator=(const char *right)
{
	if (len !=0)
		delete [] str;
	len = strlen(right);
	str = new char[len + 1];
	strcpy(str, right);
	return *this;
}

//overloaded += operator
Mystring Mystring::operator+=(Mystring &right)
{
	char *temp = str;
	
	str = new char[strlen(str) + right.length() + 1];
	strcpy(str, temp);
	strcat(str, right.getValue());
	if (len != 0)
		delete [] temp;
	len = strlen(str);
	return *this;
}
Mystring Mystring::operator+=(const char *right)
{
	char *temp = str;
	
	str = new char[strlen(str) + strlen(right) + 1];
	strcpy(str, temp);
	strcat(str, right);
	if (len != 0)
		delete [] temp;
	len = strlen(str);
	return *this;
}

//overloaded == operator
bool Mystring::operator==(Mystring &right)
{
	return !strcmp(str, right.getValue());
}
bool Mystring::operator==(const char *right)
{
	return !strcmp(str, right);
}

//overloaded != operator
bool Mystring::operator!=(Mystring &right)
{
	return strcmp(str, right.getValue()); 
}
bool Mystring::operator!=(const char *right)
{
	return strcmp(str, right);
}

//overloaded > operator
bool Mystring::operator>(Mystring &right)
{
	if (strcmp(str, right.getValue()) > 0)
		return true;
	else
		return false;
}
bool Mystring::operator>(const char *right)
{
	if (strcmp(str, right) > 0)
		return true;
	else
		return false;
}

//overloaded < operator
bool Mystring::operator<(Mystring &right)
{
	if (strcmp(str, right.getValue()) < 0)
		return true;
	else
		return false;
}
bool Mystring::operator<(const char *right)
{
	if (strcmp(str, right) < 0)
		return true;
	else
		return false;
}

//overloaded >= operator
bool Mystring::operator>=(Mystring &right)
{
	if (strcmp(str, right.getValue()) >= 0)
		return true;
	else
		return false;
}
bool Mystring::operator>=(const char *right)
{
	if (strcmp(str, right) >= 0)
		return true;
	else
		return false;
}

//overloaded <= operator
bool Mystring::operator<=(Mystring &right)
{
	if (strcmp(str, right.getValue()) <= 0)
		return true;
	else
		return false;
}
bool Mystring::operator<=(const char *right)
{
	if (strcmp(str, right) <= 0)
		return true;
	else
		return false;
}

//overloaded stream insertion operator (<<)
ostream &operator<<(ostream &strm, Mystring &obj)
{
	strm << obj.str;
	return strm;
}

//overloaded stream extraction operator (>>)
istream &operator>>(istream &strm, Mystring &obj)//???
{
	const int MAX_LEN = 256;
	char buffer[MAX_LEN];
	
	strm.getline(buffer, MAX_LEN);
	
	obj.str = buffer;
	return strm;
}

#include "mystring.h"
