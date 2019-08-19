#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	int score1, score2, score3;
	bool perfectScore = false;
	double average;
	
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	
	average = (score1 + score2 + score3) / 3.0;
	
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;
	
	if (pow(average -100, 2) < .001)
		perfectScore = true;
		
	if (perfectScore)
		cout << "Congratulation! That's a perfect score.\n";
	
	return 0;
}

