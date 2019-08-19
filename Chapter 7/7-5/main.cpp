#include <iostream>
#include <iomanip>
using namespace std;

//structure
struct InvItem
{
	int partNum;
	string description;
	int onHand;
	double price;
};

//function prototypes
void getItem(InvItem&);
void showItem(InvItem);

int main() 
{
	InvItem part;
	
	getItem(part);
	showItem(part);

	return 0;
}

//
void getItem(InvItem &piece)
{
	cout << "Enter the part number: ";
	cin >> piece.partNum;
	cout << "Enter the part description: ";
	cin.get();//move past the '\n' left in the input buffer by the last input
	getline(cin, piece.description);
	cout << "Enter the quantity on hand: ";
	cin >> piece.onHand;
	cout << "Enter the unit price: ";
	cin >> piece.price;
}

//
void showItem(InvItem piece)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Part Number  : " << piece.partNum << endl;
	cout << "Description  : " << piece.description << endl;
	cout << "Units On Hand: " << piece.onHand << endl;
	cout << "Price        :  $" << piece.price << endl;
}















