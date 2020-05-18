
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;


void print_array(int[], const int&);


int main()
{
	int const arraysize = 100;
	srand(unsigned(time(0)));
	int num_arr[arraysize] = {0};

	for (int index=0;index < arraysize; index++)
		num_arr[index] = rand() % 100 + 1;

		print_array(num_arr, arraysize);

		return 0;
	}

void print_array(int n[], const int &size)
{
	int spaces = 0;
	for(int i=0;i<size;i++)
	{
		cout << setw(4) << n[i] << " ";
		spaces += 6;

		if(spaces % 66 == 0)
			cout << endl;

	}
	cout << endl;
}

