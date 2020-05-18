#include<iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "arraytools.h"
using namespace std;


int main()
{
	int pause;
	const int arraysize = 20;
	srand(unsigned(time(0)));
	int num_arr[arraysize] = {0}, total = 0;

	for(int index=0;index < arraysize;index++)
		num_arr[index] = rand() % 100 + 1;

	selectionSort(num_arr,arraysize);
	print_array(num_arr,arraysize);


	cout << "Press any key to continue...";
	cin >> pause;

return 0;
}


