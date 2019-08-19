#include <iostream>
using namespace std;

int main() 
{
	int testScore;
	char grade;
	
	cout << "Enter your numeric test score and I will\n"
	     << "tell you the letter grade you earned: ";
	cin >> testScore;
	
	if (testScore < 0 || testScore > 100)
	{
		cout << testScore << " is an invalid score.\n";
		cout << "Run the program again and enter a value in the range of 0 to 100.\n";
	}
	else
	{
		if  (testScore < 60)
			grade = 'E';
		else if (testScore < 70)
			grade = 'D';
		else if (testScore < 80)
			grade = 'C';
		else if (testScore < 90)
			grade = 'B';
		else if (testScore <= 100)
			grade = 'A';		
						
		cout << "Your grade is " << grade <<".\n";
	}
	return 0;
}
