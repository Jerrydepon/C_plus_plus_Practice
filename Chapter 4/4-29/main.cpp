#include <iostream>
#include <iomanip> 
using namespace std;

const double ADULT_MEAL_COST = 6.25;

int main() 
{
	int numAdults, numChildren;
	double adultMealTotal, childMealTotal, totalMealCost;
	
	cout << "This program claculates total cost for a buffet luncheon.\n";
	cout << "Enter the number of adult guest (age 12 and over): ";
	cin >> numAdults;
	cout << "Enter the number of child guest (age 2-11): ";
	cin >> numChildren;
	
	adultMealTotal = numAdults * ADULT_MEAL_COST;
	childMealTotal = numChildren * ADULT_MEAL_COST * .75;
	totalMealCost = adultMealTotal + childMealTotal;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal buffet cost is $" << totalMealCost << endl;
	
	return 0;
}

