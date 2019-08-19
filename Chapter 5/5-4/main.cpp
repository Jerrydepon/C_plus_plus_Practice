#include <iostream>
using namespace std;

int main() 
{
	int players,
		teamPlayers,
		numTeams,
		leftOver;
	
	cout << "How many players do you wish per team?\n";
	cout << "(Enter a value in the range 9 - 15): ";
	cin >> teamPlayers;
	
	while (teamPlayers < 9 || teamPlayers > 15)
	{
		cout << "Team size should be 9 to 15 players.\n";
		cout << "How many players do you wish per team?\n";	
		cin >> teamPlayers;
	}
	
	cout << "How many players are available? ";
	cin >> players;
	
	while (players <= 0)
	{
		cout << "Please enter a positive number: ";
		cin >> players;
	}
	
	numTeams = players / teamPlayers;
	leftOver = players % teamPlayers; 
	
	cout << "\nThere will be " << numTeams << " teams with " << leftOver << " players left over.\n";

	return 0;
}

