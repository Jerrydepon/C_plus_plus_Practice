#ifndef INHERITANCE6_H
#define INHERITANCE6_H

#include <string>
using namespace std;

enum Discipline
{
	ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE
};

enum Classification
{
	FRESHMAN, SOPHOMORE, JUNIOR, SENIOR
};

class Person
{
	protected:
		string name;

	public:
		Person()
		{
			setName("");
		}
		Person(string pName)
		{
			setName(pName);
		}
		void setName(string pName)
		{
			name = pName;
		}
		virtual string getName()
		{
			return name;
		}
};

class Student:virtual public Person
{
	private:
		Discipline major;
		Person *advisor;
	
	public:
		Student(string sname, Discipline d, Person *adv) : Person(sname)
		{
			major = d;
			advisor = adv;
		}
		void setMajor(Discipline d)
		{
			major = d;
		}
		Discipline getMajor()
		{
			return major;
		}
		void setAdvisor(Person *p)
		{
			advisor = p;
		}
		Person *getAdvisor()
		{
			return advisor;
		}
};

class Faculty:virtual public Person
{
	private:
		Discipline department;
	
	public:
		Faculty(string fname, Discipline d) : Person(fname)
		{
			department = d;
		}
		void setDepartment(Discipline d)
		{
			department = d;
		}
		Discipline getDepartment()
		{
			return department;
		}
};

class TFaculty:public Faculty
{
	private:
		string title;
	
	public:
		TFaculty(string fname, Discipline d, string title) 
				: Faculty(fname, d), 
				  Person(fname) 
		{
			setTitle(title);
		}
		void setTitle(string title)
		{
			this->title = title;
		}
		virtual string getName()
		{
			return title + " " + Person::getName();
		}	
};

class TAssistant:public Student,
				 public Faculty
{
	private:
		Faculty *supervisor;
	
	public:
		void setSupervisor(Faculty *fac)
		{
			supervisor = fac;	
		}
		Faculty *getSupervisor()
		{
			return supervisor;
		}
		
		TAssistant(string name, Discipline stDisp1, Person *advisor, Discipline facDisp1)
					: Student(name, stDisp1, advisor),
					  Faculty(name, facDisp1),
					  Person(name)
		{
			supervisor = NULL;
		}
};

#endif
