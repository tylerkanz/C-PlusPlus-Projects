#include<iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "arraytools.h"
using namespace std;


int main()
{
	int results, pause;
	const int arraysize = 100;
	srand(unsigned(time(0)));
	int num_arr[arraysize] = {0}, total = 0;

	for(int index=0;index < arraysize;index++)
		num_arr[index] = rand() % 100 + 1;
	print_array(num_arr,arraysize);

	results = linearsearch(num_arr, arraysize, 50);
		if (results == -1)
		{
			cout << "50 was not found\n";
		}
		else
		{
			cout << "The number 50 was found./n";
		}


	


	cout << "Press any key to continue...";
	cin >> pause;

return 0;
}


