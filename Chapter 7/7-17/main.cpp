#include <iostream>
using namespace std;

class BigNum
{
	private:
		int biggest;
		
		void determineBiggest(int num)
		{
			if (num > biggest)
				biggest = num;
		}
	
	public:
		BigNum()
		{
			biggest = 0;
		}
		
		bool examineNum(int);
		
		int getBiggest()
		{
			return biggest;
		}
};

bool BigNum::examineNum(int n)
{
	bool goodValue = true;
	
	if (n > 0)
		determineBiggest(n);
	else
		goodValue = false;
	
	return goodValue;
}

//-------------------------------------------

void getNumbers(BigNum &);

//***************main*****************
int main() 
{
	BigNum stockShares;
	
	cout << "This program determines which stock purcahse involved the largest number of shares of stock.\n\n";
	
	getNumbers(stockShares);
	
	cout << "The largest number of shares bought was " << stockShares.getBiggest() << ".\n";
	
	return 0;
}
//***************main*****************

void getNumbers(BigNum &stock)
{
	int numTrans,
		numShares;
		
	cout << "How many stock purchases have you made this month? ";
	cin >> numTrans;
	
	for (int trans = 1; trans <= numTrans; trans++)
	{
		cout << "Transaction " << trans << " shares purchased: ";
		cin >> numShares;

		while (!stock.examineNum(numShares))
		{
			cout << "The number entered should be greater than 0.\n";
			cout << "Re-enter the number of stock shares purchased: ";
			cin >> numShares;
		}
	}
}
