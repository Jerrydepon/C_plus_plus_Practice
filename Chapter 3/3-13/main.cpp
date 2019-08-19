#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159 

int main() 
{ 
	double area, radius;
	
	cout << "This program calculates the area of a circle.\n";
	
	cout << "What is the radius of the circle? ";
	cin >> radius;
	
	area = pow(radius, 2) * PI;
	cout << " The area is " << area << endl;
	
	return 0;
}

