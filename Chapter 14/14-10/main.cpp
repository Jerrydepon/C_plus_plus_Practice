#include <iostream>
using namespace std;

const int COIN_SET_SIZE = 6;
const int coinValues[] = {1, 5, 10, 25, 50, 100};

int mkChange(int amount, int largestIndex)
{
	while(coinValues[largestIndex] > amount)
		largestIndex--;
		
	if (amount == 0 || largestIndex == 0)
		return 1;
		
	int nWays = 0;
	int nCoins = 0;
	
	while (nCoins <= amount/coinValues[largestIndex])
	{
		int amountLeft;
		amountLeft = amount - (nCoins *	coinValues[largestIndex]);
		
		nWays = nWays + mkChange(amountLeft, largestIndex - 1);
		
		nCoins++;	
	}
	return nWays;
}

int main() 
{
	cout << "Here are the valid coin values, in cents: ";
	for (int index = 0; index < COIN_SET_SIZE; index++)
		cout << coinValues[index] << " ";
	cout << endl;
	
	int amount;
	cout << "Enter the amount of cents to make change for: ";
	cin >> amount;
	cout << "Numbe of possible combination is " << mkChange(amount, COIN_SET_SIZE - 1) << endl; 
	
	return 0;
}

