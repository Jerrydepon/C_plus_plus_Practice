#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

struct Info
{
	char name[NAME_SIZE];
	int age;
	char address1[ADDR_SIZE];
	char address2[ADDR_SIZE];
	char phone[PHONE_SIZE];
};

int main() 
{
	Info person;
	char response;
	
	fstream people("people.dat", ios::out|ios::binary);
	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
		return 0;
	}
	
	do
	{
		cout << "Enter the following information about a person:\n";
		cout << "Name: ";
		cin.getline(person.name, NAME_SIZE);
		cout << "Age: ";
		cin >> person.age;
		cin.ignore();
		cout << "Address line 1: ";
		cin.getline(person.address1, ADDR_SIZE);
		cout << "Address line 2: ";
		cin.getline(person.address1, ADDR_SIZE);
		cout << "Phone: ";
		cin.getline(person.phone, PHONE_SIZE);
		
		people.write(reinterpret_cast<char *>(&person), sizeof(person));
		cout << "Do you want to enter another record? ";
		cin >> response;
		cin.ignore();
	}while (toupper(response) == 'Y');
	
	people.close();

	return 0;
}

