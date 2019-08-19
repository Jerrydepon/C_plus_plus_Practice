#include <iostream>
#include <stack>
#include <fstream>
#include <algorithm>
using namespace std;

void qSort(int arr[], int size);
void outputArray(int arr[], int size);
int partition(int arr[], int, int);

class Range
{
	friend void qSort(int a[], int);
	int start;
	int end;
	
	public:
		Range(int s, int e)
		{
			start = s;
			end = e;
		}
};

const int MAX = 100;

//************************************************************************
int main() 
{
	ifstream inputFile;
	string filename = "sort.txt";
	int array[MAX];
	int size;
	inputFile.open(filename.data());
	
	if (!inputFile)
	{
		cout << "The file " << filename << " cannot be opened.";
		exit(1);
	}
	
	size = 0;
	while(inputFile >> array[size])
	{
		size++;
		if (size == MAX)
			break;		
	}
	
	cout << "The original array is :" << endl;
	outputArray(array, size);
	
	qSort(array, size);
	cout << "The sorted array is :" << endl;
	outputArray(array, size);
	
	return 0;
}
//************************************************************************

void qSort(int arr[], int size)
{
	stack<Range> qStack;
	int pivot, start, end;
	
	qStack.push(Range(0, size-1));//???
	
	while (!qStack.empty())
	{
		Range currentRange = qStack.top();
		qStack.pop();
		
		start = currentRange.start;
		end = currentRange.end;
		if (start < end)
		{
			pivot = partition(arr, start, end);
			
			qStack.push(Range(start, pivot-1));
			qStack.push(Range(pivot+1, end));
		}
	}
}

int partition(int arr[], int start, int end)
{
	int pivotValue = arr[start];
	int pivotPosition = start;
	
	for (int pos = start + 1; pos <= end; pos++)
	{
		if (arr[pos] < pivotValue)
		{
			swap(arr[pivotPosition + 1], arr[pos]);
			swap(arr[pivotPosition], arr[pivotPosition + 1]);
			pivotPosition++;
		}
	}
	
	return pivotPosition;
}

void outputArray(int arr[], int size)
{
	for (int k = 0; k < size; k++)
		cout << arr[k] << " ";
	cout << endl;
}

