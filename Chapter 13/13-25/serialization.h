#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
	private:
		string fname, lname;
		char mi;
		int age;
	
	public:
		//constructor
		Person(string fname = "", char mi = 0, string lname = "", int age = 0);//
		
		string getFname()
		{
			return fname;
		}
		string getLname()
		{
			return lname;
		}
		char getMi()
		{
			return mi;
		}
		int getAge()
		{
			return age;
		}
		
		void setFname(string name)
		{
			fname = name;
		}
		void setLname(string name)
		{
			lname = name;
		}
		void setMi(char ch)
		{
			mi = ch;
		}
		
		void store(ofstream &outFile);//	
		void load(ifstream &inFile);//
		
		void display()
		{
			cout << fname << " " << mi << " " << lname << endl
			     << "Age: " << age << endl;
		}
};

#endif
