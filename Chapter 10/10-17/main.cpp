#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
	string name;
	int idNum;
	int crdHrs;
	double gpa;
};

void getData(Student*);

int main() 
{
	Student freshman;
	
	cout << "Enter the following student data:\n";
	getData(&freshman);
	
	cout << "\nHere is the student data you entered:\n";
	cout << setprecision(4);
	cout << "Name: " << freshman.name << endl;
	cout << "ID number: " << freshman.idNum << endl;
	cout << "Credit hoursL " << freshman.crdHrs << endl;
	cout << "GPA: " << freshman.gpa << endl;
	
	return 0;
}

void getData(Student* s)
{
	cout << "Student name: ";
	getline(cin, s->name);
	cout << "Student ID number: ";
	cin >> s->idNum;
	cout << "Cridit hours enrolled: ";
	cin >> s->crdHrs;
	cout << "Current GPA: ";
	cin >> s->gpa;
}
