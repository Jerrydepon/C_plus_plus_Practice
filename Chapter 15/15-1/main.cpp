#include "inheritance4.h"
#include <iostream>
using namespace std;

int main() 
{
	Person *pp;
	Faculty *pf;
	TFaculty *ptf;
	ptf = new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr.");
	
	cout << "Get name through a pointer to TFaculty: ";
	cout << ptf->getName() << endl;
	
	pf = ptf;
	cout << "Get name through a pointer to Faculty: ";
	cout << pf->getName() << endl;
	
	pp = ptf;
	cout << "Get name through a cast to pointer to TFaculty: ";
	cout << static_cast<TFaculty *>(pp)->getName() << endl;
	
	TFaculty *ptf1;
	ptf1 = static_cast<TFaculty *>(pp);
	cout << "Get name through a pointer to TFaculty: ";
	cout << ptf1->getName() << endl;

	return 0;
}

