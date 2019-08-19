#include <iostream>
using namespace std;

int main() 
{
	int numStudents,
		numTests;
	double average;
	
	cout << "This program averages test score.\n";
	cout << "How many students are there? ";
	cin >> numStudents;
	
	cout << "How many test scores does each student have? ";
	cin >> numTests;
	cout << endl;
	
	for (int snum = 1; snum <= numStudents; snum++)
	{
		double total = 0.0;
		
		for (int test = 1; test <= numTests; test++)
		{
			int score;
			
			cout << "Enter score " << test << " for student " << snum << ": ";
			cin >> score;
			total += score;
		}
		average = total / numTests;
		cout << "The average score for student " << snum << " is " << average << "\n\n";
	}
	
	return 0;
}

