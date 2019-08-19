#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//circle structure declaration
struct Circle
{
	double radius;
	double diameter;
	double area;	
};

//function prototype
Circle getInfo();

//const 
const double PI = 3.14159;


int main() 
{
	Circle c1, c2;
	
	c1 = getInfo();
	c2 = getInfo();
	
	c1.area = PI * pow(c1.radius, 2.0);
	c2.area = PI * pow(c2.radius, 2.0);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe radius and area of the circles are\n";
	cout << "Circle 1 -- Radius: " << setw(6) << c1.radius
		 << "   Area: " << setw(6) << c1.area << endl;
	cout << "Circle 2 -- Radius: " << setw(6) << c2.radius
		 << "   Area: " << setw(6) << c2.area << endl;	
		 
	if (c1.area == c2.area)
		cout << "The two circles have the same area.\n\n"; 

	return 0;
}

//
Circle getInfo()
{
	Circle round;
	
	cout << "Enter the diameter of a circle: ";
	cin >> round.diameter;
	round.radius = round.diameter / 2;
	
	return round;
}
