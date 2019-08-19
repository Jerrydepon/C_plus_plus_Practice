#include <iostream>
#include <iomanip>
#include "budget.h"
using namespace std;

double Budget::corpBudget = 0;

int main() 
{
	const int N_DIVISIONS = 4;
	Budget divisions[N_DIVISIONS];
	
	for (int count = 0; count < N_DIVISIONS; count++)
	{
		double bud;
		
		cout << "Enter the budget request for division ";
		cout << (count + 1) << ": ";
		cin >> bud;
		divisions[count].addBudget(bud);
	}
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the division budget requests:\n";
	for (int count = 0; count < N_DIVISIONS; count++)
	{
		cout << "Division " << (count + 1) << "\t$";
		cout << divisions[count].getDivBudget() << endl;
	}
	
	cout << "Total Budget Requests:\t$";
	cout << divisions[0].getCorpBudget() << endl;
	//cout << divisions[1].getCorpBudget() << endl;
	//cout << divisions[2].getCorpBudget() << endl;
	//cout << divisions[3].getCorpBudget() << endl;
	
	return 0;
}

