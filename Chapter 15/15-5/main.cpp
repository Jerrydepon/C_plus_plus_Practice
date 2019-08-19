#include "inheritance6.h"
#include <iostream>
using namespace std;

int main() 
{
	Faculty advisor("Amelia Quigley", BIOLOGY);
	TFaculty supervisor("Indiana Jones", ARCHEOLOGY, "Dr.");
	TAssistant tA("Lisa Starbuck", BIOLOGY, &advisor, ARCHEOLOGY);
	tA.setSupervisor(&supervisor);
	
	Person *pAdvisor = tA.getAdvisor();
	string advisorName = pAdvisor->getName();
	Person *pSupervisor = tA.getSupervisor();
	string supervisorName = pSupervisor->getName();
	
	cout << "The teaching assistant\'s name is " << tA.getName() << "." << endl;
	cout << "The teaching assistant\'s supervisor is " << supervisorName << "." << endl;
	cout << "The teaching assistant\'s advisor is " << advisorName << "." << endl;

	return 0;
}

