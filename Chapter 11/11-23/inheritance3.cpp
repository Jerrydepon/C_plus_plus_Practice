#include "inheritance3.h"

Student::Student(string sname, Discipline d, Person* adv) : Person(sname)
{
	major = d;
	advisor = adv;
}
#include "inheritance3.h"
