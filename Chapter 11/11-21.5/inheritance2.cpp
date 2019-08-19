#include "inheritance2.h"

Student::Student(string sname, Discipline d, Person* adv) : Person(sname)
{
	major = d;
	advisor = adv;
}
