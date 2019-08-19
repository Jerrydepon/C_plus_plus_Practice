#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo
{
	double food,
		   medical,
		   license,
		   misc;	
};

struct PetInfo
{
	string name;
	string type;
	int age;
	
	CostInfo cost;	
};

int main() 
{
	PetInfo pet;
	
	pet.name = "Sassy";
	pet.type = "cat";
	pet.age = 5;
	pet.cost.food = 250.00;
	pet.cost.medical = 150.00;
	pet.cost.license = 7.00;
	pet.cost.misc = 50.00;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Annual costs for my " << pet.age << "-year-old " 
		 << pet.type << " " << pet.name << " are $" 
		 << (pet.cost.food + pet.cost.medical + pet.cost.license + pet.cost.misc) << endl;

	return 0;
}

