#include <iostream>
#include <cstring> 
using namespace std;

int main() 
{
	const int N_ITEMS = 5,
		      S_LENGTH = 31;
		      
	char prods[5][S_LENGTH] = {"TV327  31 inch Television",
							   "CD257  CD Player",
							   "TA677  Answering Machine",
							   "CS109  Car Stereo",
							   "PC955  Personal Computer"};
	char lookUp[S_LENGTH];
	char *strPtr = NULL;
	
	cout << "\tProduct Database\n\n";
	cout << "Enter a product number to search for: ";
	cin.getline(lookUp, S_LENGTH);
	
	int index = 0;
	while (index < N_ITEMS)
	{
		strPtr = strstr(prods[index], lookUp);
		if (strPtr != NULL)
			break;
		index++;
	}
	
	if (strPtr == NULL)
		cout << "No matching product was found.\n";
	else
		cout << prods[index] << endl;	   

	return 0;
}

