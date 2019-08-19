#include <iostream>
using namespace std;

class Shape
{
	protected:
		int posX, posY;
		
	public:
		virtual void draw() = 0;
		void setPosition(int pX, int pY)
		{
			posX = pX;
			posY = pY;
		}
};

class Rectangle:public Shape
{
	public:
		virtual void draw()
		{
			cout << "Drawing rectangle at " << posX << " " << posY << endl;
		}	
};

class Hexagon:public Shape
{
	public:
		virtual void draw()
		{
			cout << "Drawing hexagon at " << posX << " " << posY << endl;
		}
};

int main() 
{
	const int NUM_SHAPES = 3;
	Shape *shapeArray[] = {new Hexagon(), new Rectangle(), new Hexagon()};
	
	int posX = 5, posY = 15;
	for (int k = 0; k < NUM_SHAPES; k++)
	{
		shapeArray[k]->setPosition(posX, posY);
		posX += 10;
		posY += 10;
	}
	
	for (int j = 0; j < NUM_SHAPES; j++)
	{
		shapeArray[j]->draw();
	}

	return 0;
}

