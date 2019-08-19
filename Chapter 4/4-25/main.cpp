#include <iostream>
using namespace std;

int main() 
{
	int modelNum;
	
	cout << "Our TVs come in three models.\n";
	cout << "The 100, 200, and 300. Which do you want? ";
	cin >> modelNum;
	
	cout << "That models has the following features:\n";
	switch (modelNum)
	{
		case 300 : cout << "    Picture-in-a-picture\n";
		case 200 : cout << "    Stereo sound\n"; 
		case 100 : cout << "    Remote control\n";
				   break;
		default : cout << "You can only choose the 100, 200, or 300.\n";
	}
	
	return 0;
}

