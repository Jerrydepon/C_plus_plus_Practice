#include <iostream>
#include "inheritance2.h"
using namespace std;

const string dName[] = {"Archeology", "Biology", "Computer Science"};
const string cName[] = {"Freshman", "Sophomore", "Junior", "Senior"};

int main() 
{
	Faculty prof("Indiana Jones", ARCHEOLOGY);
	Student st("Sean Bolster", ARCHEOLOGY, &prof);
	cout << "Professor " << prof.getName()
		 << " teaches " << dName[prof.getDepartment()]
		 << "." << endl;
		
	Person* pAdvisor = st.getAdvisor();
	cout << st.getName() << "\'s advisor is "
		 << pAdvisor->getName() << ".";

	return 0;
}

