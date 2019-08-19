#include <iostream>
#include "mystring.h"
using namespace std;

int main() 
{
	Mystring object1("This"), object2("is"), object3("a test.");
	Mystring object4 = object1;
	Mystring object5("is only a test.");
	char string1[] = "a test.";
	
	cout << "Object1: " << object1 << endl;
	cout << "Object2: " << object2 << endl;
	cout << "Object3: " << object3 << endl;
	cout << "Object4: " << object4 << endl;
	cout << "Object5: " << object5 << endl;
	cout << "String1: " << string1 << endl;
	
	object1 += " ";
	object1 += object2;
	object1 += " ";
	object1 += object3;
	object1 += " ";	
	object1 += object4;
	object1 += " ";
	object1 += object5;
	
	cout << "object1: " << object1 << endl;
							
	return 0;
}

