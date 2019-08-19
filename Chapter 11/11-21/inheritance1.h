#include <string>
using namespace std;

enum Discipline{ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum Classfication{FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

//
class Person
{
	protected:
		string name;
	public:
		Person()
		{
			setName(" ");
		}
		Person(string pName)
		{
			setName(pName);
		}
		void setName(string pName)
		{
			name = pName;
		}
		string getName()
		{
			return name;
		}
};

//
class Student:public Person
{
	private:
		Discipline major;
		Person* advisor;
	public:
		//
		Student(string sname, Discipline d, Person* adv);
		
		void setMajor(Discipline d)
		{
			major = d;	
		}
		Discipline getMajor()
		{
			return major;
		}
		
		void setAdivisor(Person* p)
		{
			advisor = p;
		}
		Person* getAdvisor()
		{
			return advisor;
		}
};

//
class Faculty:public Person
{
	private:
		Discipline department;
	
	public:
		//
		Faculty(string fname, Discipline d)
		{
			name = fname;
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

