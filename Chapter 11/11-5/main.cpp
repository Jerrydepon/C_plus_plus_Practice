#include <iostream>
using namespace std;

class Rectangle
{
	private:
		double width, 
			   length;
		double area;
		void calArea()
		{
			area = width * length;
		}
		
	public:
		void setData(double w, double l)
		{
			width = w;
			length = l;
			calArea();
		}
		double getWidth()
		{
			return width;
		}
		double getLength()
		{
			return length;
		}
		double getArea()
		{
			return area;
		}
};

int main() 
{
	Rectangle box1,
			  box2;
	box1.setData(10, 20);
	box2.setData(5, 10);
	
	cout << "Before the assignment:\n";
	cout << "Box 1's width: " << box1.getWidth() << endl;
	cout << "Box 1's length: " << box1.getLength() << endl;
	cout << "Box 1's area: " << box1.getArea() << endl;
	cout << "Box 2's width: " << box2.getWidth() << endl;
	cout << "Box 2's length: " << box2.getLength() << endl;
	cout << "Box 2's area: " << box2.getArea() << endl;
	
	box2 = box1;
	
	cout << endl;
	cout << "After the assignment:\n";
	cout << "Box 1's width: " << box1.getWidth() << endl;
	cout << "Box 1's length: " << box1.getLength() << endl;
	cout << "Box 1's area: " << box1.getArea() << endl;
	cout << "Box 2's width: " << box2.getWidth() << endl;
	cout << "Box 2's length: " << box2.getLength() << endl;
	cout << "Box 2's area: " << box2.getArea() << endl;
		
	return 0;
}

