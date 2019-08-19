#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159;

struct Circle
{
	double radius,
		   diameter,
		   area;	
};

int main() 
{
	Circle c1, c2;
	
	cout << "Enter the diameter of circcle 1: ";
	cin >> c1.diameter;
	cout << "Enter the diameter of circcle 2: ";
	cin >> c2.diameter;
	
	c1.radius = c1.diameter / 2;
	c1.area = pow(c1.radius, 2.0) * PI;
	c2.radius = c2.diameter / 2;
	c2.area = pow(c2.radius, 2.0) * PI;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe radius and area of the circle are\n";
	cout << "Circle 1 -- Radius: " << setw(6) << c1.radius << "  Area: " << setw(6) << c1.area << endl;
	cout << "Circle 2 -- Radius: " << setw(6) << c2.radius << "  Area: " << setw(6) << c2.area << endl;
	
	if (c1.area == c2.area)
		cout << "The two circles have the same area.\n";
	
	return 0;
}

