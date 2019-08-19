#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int NUM_SECTIONS = 3,
		  ROWS_IN_SECTION = 5,
		  SEATS_IN_ROW = 8;
		  
typedef double seatTable[][ROWS_IN_SECTION][SEATS_IN_ROW];

void fillArray(seatTable);
void showArray(seatTable);

int main() 
{
	double seats[NUM_SECTIONS][ROWS_IN_SECTION][SEATS_IN_ROW];
	
	fillArray(seats);
	showArray(seats);

	return 0;
}

void fillArray(seatTable array)
{
	ifstream dataIn;
	dataIn.open("seats.dat");
	
	if (!dataIn)
		cout << "Error opening file.\n";
	else
	{
		for (int section = 0; section < NUM_SECTIONS; section++)
			for (int row = 0; row < ROWS_IN_SECTION; row++)
				for (int seat = 0; seat < SEATS_IN_ROW; seat++)
					dataIn >> array[section][row][seat];
		
		dataIn.close();
	}
}

void showArray(seatTable array)
{
	cout << fixed << showpoint << setprecision(2);
	
	for (int section = 0; section < NUM_SECTIONS; section++)
	{
		cout << "\n\nsection" << (section + 1);
		for (int row = 0; row < ROWS_IN_SECTION; row++)
		{
			cout << "\nRow " << (row + 1) << ": ";
			for (int seat = 0; seat < SEATS_IN_ROW; seat++)
				cout << setw(7) << array[section][row][seat];	
		} 
	}
	cout << endl;
}
