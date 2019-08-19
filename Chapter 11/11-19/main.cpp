#include <iostream>
#include <string>
using namespace std;

//
class Date
{
	private:
		string month;
		int day;
		int year;
		
	public:
	void setDate(string month, int day, int year)
	{
		this->month = month;
		this->day = day;
		this->year = year;	
	}	
	Date(string month, int day, int year)
	{
		setDate(month, day , year);
	}
	Date()
	{
		setDate("January", 1 , 1990);
	}
	string getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
	int getYear()
	{
		return year;
	}
};

//
class Acquaintance
{
	private:
		string name;
		Date dob; //Date of Birth
	public:
		Acquaintance(string name, string month, int day, int year)
		{
			this->name = name;
			dob.setDate(month, day, year);
		}
		void print()
		{
			cout << name << "\'s birthday is on "
				 << dob.getMonth() << " " << dob.getDay() << ", " << dob.getYear();
		}
};

int main() 
{
	Acquaintance buddy("Bill Stump", "February", 5, 1975);
	
	buddy.print();

	return 0;
}

