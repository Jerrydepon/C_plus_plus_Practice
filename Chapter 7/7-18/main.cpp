#include <iostream>
#include <iomanip>
#include <cctype>
#include "Account.h"
#include "CharRange.h"
using namespace std;

//function prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

//*********************************************
int main() 
{
	Account savings;
	CharRange input('A', 'G');
	char choice;
	
	cout << fixed << showpoint << setprecision(2);
	
	do
	{
		displayMenu();
		choice = input.getChar();
		switch(choice)
		{
			case 'A': cout << "The current balance is $" << savings.getBalance() << endl;
					  break;
			case 'B': cout << "There have been " << savings.getTransactions() << " transactions.\n";
					  break;
			case 'C': cout << "Interset earned for this period: $" << savings.getInterest() << endl;
					  break;
			case 'D': makeDeposit(savings);
					  break;
			case 'E': withdraw(savings);
					  break;
			case 'F': savings.calcInterest();
					  cout << "Interest added.\n";
		}
	}while (choice != 'G');

	return 0;
}
//*********************************************

void displayMenu()
{
	cout << "\n               MENU\n\n";
	cout << "a) Display the account balance\n";
	cout << "b) Display the number of transactions\n";
	cout << "c) Display interst earned for this period\n";
	cout << "d) Make a deposit\n";
	cout << "e) Make a withDraw\n";
	cout << "f) Add interst for this period\n";
	cout << "g) Exit the program\n\n";
	cout << "Enter your choice: ";
}

void makeDeposit(Account &account)
{
	double dollars;
	cout << "Enter the amount of the deposit: ";
	cin >> dollars;
	cin.ignore();
	account.makeDeposit(dollars);
}

void withdraw(Account &account)
{
	double dollars;
	
	cout << "Enter the amount if the withdrawal: ";
	cin >> dollars;
	cin.ignore();
	if (!account.withdraw(dollars))
		cout << "ERROR: Withdrawal amount too large.\n\n";
}
