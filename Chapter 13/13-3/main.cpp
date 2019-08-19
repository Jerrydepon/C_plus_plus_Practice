#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() 
{
	const int ROWS = 3, COLS = 3;
	fstream outFile("table.txt", ios::out);
	int nums[ROWS][COLS] = {2897, 5 , 837,
							34, 7, 1623,
							390, 3456, 12};
							
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			outFile << setw(4) << nums[row][col] << " ";
		}
		outFile << endl;
	}
	
	outFile.close();

	return 0;
}

