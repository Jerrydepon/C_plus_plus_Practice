#include <iostream>
using namespace std;

class Dog
{
	protected:
		double weight;
	
	public:
		Dog(double w)
		{
			weight = w;
		}
		virtual void bark()
		{
			cout << "I am a dog weighting " << weight << " pounds." << endl;
		}
};

class SheepDog:public Dog
{
	private:	
		int numberSheep;
		
	public:
		SheepDog(double w, int nSheep) : Dog(w)
		{
			numberSheep = nSheep;
		}
		void bark()
		{
			cout << "I am a sheepdog weighting " << weight << " pounds \n   and guarding " << numberSheep << " sheep." << endl;
		}
};

int main() 
{
	const int NUM_DOGS = 3;
	Dog *kennel[] = {new Dog(40.5),
					 new SheepDog(45.3, 50),
					 new Dog(24.7)};
	
	for (int k = 0; k < NUM_DOGS; k++)
	{
		cout << k+1 << ": ";
		kennel[k]->bark();
	}
	
	return 0;
}

