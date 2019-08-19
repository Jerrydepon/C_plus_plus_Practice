#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;

struct Invtry
{
	char desc[DESC_SIZE];
	int qty;
	double price;	
};

int main() 
{
	Invtry record;
	long rectNum;
	
	fstream inventory("invtry.txt", ios::in | ios::out | ios::binary);
	if (!inventory)
	{
		cout << "Error opening file.";
		return 0;
	}
	
	cout << "Which record do you want to edit?";
	cin >> rectNum;
	inventory.seekg(rectNum * sizeof(record), ios::beg);
	inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	
	cout << "Description: ";
	cout << record.desc << endl;
	cout << "Quantity: ";
	cout << record.qty << endl;
	cout << "Price: ";
	cout << record.price << endl;
	
	cout << "Enter the new data:\n";
	cout << "Description: ";
	cin.ignore();
	cin.getline(record.desc, DESC_SIZE);
	cout << "Quantity: ";
	cin >> record.qty;
	cout << "Price: ";
	cin >> record.price;
	
	inventory.seekp(rectNum * sizeof(record), ios::beg);
	inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
	
	inventory.close();

	return 0;
}

