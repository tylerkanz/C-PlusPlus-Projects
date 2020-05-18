#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;


void create_array(int n[], const int &s)
{
	srand(unsigned(time(0)));
	for(int i=0;i<s;i++)
		n[i] = rand() % 100 + 1;
}

void bubbleSort( int array[], int size)
{
	int max;
	int index;

	for (max = size -1; max > 0; max--)
	{
		for (index = 0; index < max; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index+1]);
			}
		}

	}
}

int linearsearch( const int arr[], int size, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}



void print_array(int n[], const int s) 
{
	int count = 0;
	for(int i=0;i<s;i++)
	{
		cout << setw(6) << n[i];
		count += 6;
		if(count % 72 == 0)
			cout << endl;
	}
 cout << endl;
}

void total_array(int n[], const int &s, int &t)
{
	for(int i=0;i<s;i++)
		t+=n[i];
}
