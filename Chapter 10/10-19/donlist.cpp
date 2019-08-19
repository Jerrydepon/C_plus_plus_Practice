#include <iostream>
#include "donlist.h"
using namespace std;

DonationList::DonationList(int num, double gifts[])
{
	numDonations = num;
	if (num > 0)
	{
		donations = new double[num];
		
		arrPtr = new double*[num];
		
		for (int count = 0; count < numDonations; count++)
		{
			donations[count] = gifts[count];
			arrPtr[count] = &donations[count];
		}
		
		selectionSort();
	}
}

DonationList::~DonationList()
{
	if (numDonations > 0)
	{
		delete [] donations;
		donations = 0;
		delete [] arrPtr;
		arrPtr = 0;
	}
}

void DonationList::selectionSort()
{
	int scan,
		minIndex;
	double* minElem;
	
	for (scan = 0; scan < (numDonations - 1); scan++)
	{
		minIndex = scan;
		minElem = arrPtr[scan];
		for (int index = scan + 1; index < numDonations; index++)
		{
			if (*(arrPtr[index]) < *minElem)
			{
				minElem = arrPtr[index];
				minIndex = index;
			}
		}
		arrPtr[minIndex] = arrPtr[scan];
		arrPtr[scan] = minElem;
	}	
}

void DonationList::show()
{
	for (int count = 0; count < numDonations; count++)
		cout << donations[count] << " ";
		cout << endl;
}

void DonationList::showSorted()
{
	for (int count = 0; count < numDonations; count++)
		cout << *(arrPtr[count]) << " ";
	cout << endl;		
}
