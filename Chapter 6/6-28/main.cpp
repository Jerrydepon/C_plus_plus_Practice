#include <iostream>
#include <iomanip>
using namespace std;

char getChoice();
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main() 
{
	char selection;
	int worked;
	double rate, yearly;
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) an hourly-wage employee, or \n";
	cout << "(S) a salaried employee? ";
	
	selection = getChoice();
	
	switch (selection)
	{
		case 'H': 
		case 'h': cout << "How many hours were worked? ";
				  cin >> worked;
				  cout << "What is the hourly pay rate? ";
				  cin >> rate;
				  cout << "The gross weekly pay is $";
				  cout << calcWeeklyPay(worked, rate) << endl;
				  break;
				  
		case 'S':
		case 's': cout << "What is the annual salary? ";
				  cin >> yearly;
				  cout << "The gross weekly pay is $";
				  cout << calcWeeklyPay(yearly) << endl;
				  break;
	}
	
	return 0;
}

//
char getChoice()
{
	char letter;
	
	cin >> letter;
	
	while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
	{
		cout << "Enter H or S: ";
		cin >> letter;
	}
	
	return letter;
}

//
double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

//
double calcWeeklyPay(double annSalary)
{
	return annSalary / 52.0;
}

