#include <iostream>
using namespace std;

/* 
int main() 
{
	char employed, recentGrad;
	
	cout << "Answer the following questions with either Y for Yes or N for No.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;
	
	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
			cout << "You qualify for the special interst rate.\n";
	}
	return 0;
}
*/ 

int main() 
{
	char employed, recentGrad;
	
	cout << "Answer the following questions with either Y for Yes or N for No.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;
	
	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{	
			cout << "You qualify for the special interst rate.\n";
		}
		else 
		{
			cout << "You must have graduated from college in the past two years to quailfy for the special interst rate.\n";	
		} 
	}
	else
	{	
		cout << "You must be employed to qualify for the special interst rate.\n";
	}
	
	return 0;
}
