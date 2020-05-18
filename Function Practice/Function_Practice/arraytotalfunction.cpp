#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void print_array(int[],const int&);
void total_array(int[],const int&, int&);

int main()
{
	const int arraysize = 10;
	srand(unsigned(time(0)));
	int num_arr[arraysize] = {0}, total = 0;

	for(int index=0;index < arraysize;index++)
		num_arr[index] = rand() % 100 + 1;

	print_array(num_arr,arraysize);
	total_array(num_arr,arraysize,total);

	cout << "The total = " << total << endl;
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

void total_array(int n[], const int &s, int &t)
{
	for(int i=0;i<s;i++)
		t+=n[i];
}