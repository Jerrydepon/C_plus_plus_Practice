#include <iostream>
using namespace std;

int main() 
{
	int books, months;
	double booksPerMonth;
	
	cout << "How many books do you plan to read? ";
	cin >> books;
	
	cout << "How many months will it take to read them? ";
	cin >> months;
	
	booksPerMonth = double(books) / months;
	cout << "That is " << booksPerMonth << "books per month.\n";
		
	return 0;
}

