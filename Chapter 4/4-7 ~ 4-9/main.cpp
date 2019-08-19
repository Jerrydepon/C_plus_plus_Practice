#include <iostream>
using namespace std;

//4-7
/* 
int main() 
{
	int testScore;
	char grade;
	
	cout << "Enter your numeric test score and I will\n"
	     << "tell you the letter grade you earned: ";
	cin >> testScore;
	
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
					
	return 0;
}
*/

 int main() 
{
	int testScore;
	char grade;
	bool goodScore = true;
	
	cout << "Enter your numeric test score and I will\n"
	     << "tell you the letter grade you earned: ";
	cin >> testScore;
	
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
	else
		goodScore = false;		
	
	if (goodScore)				
		cout << "Your grade is " << grade <<".\n";
	else
		cout << "We do not give scores higher than 100.\n";
					
	return 0;
}

