#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

double array_average(int[], const int&);
void print_array(int [], const int &);
void format();

int main()
{
	int pause;
	const int arraysize = 10;
	srand(unsigned(time(0)));
	int numbers[arraysize] = {0};
	double average = 0.0;

	for(int i=0; i<arraysize;i++)
		numbers[i] = rand() % 100 +1;

	average = array_average(numbers,arraysize);
	print_array(numbers,arraysize);
	format();

	cout << "The average = " << average;

	cout << endl;

	cout << "Press any key to continue..";
	cin >> pause;
	return 0;
}

double array_average(int n[], const int &s)
{
	int sum = 0;
	for(int i=0;i<s;i++)
		sum+= n[i];

	return sum / double(s);
}

void format()
{
	cout << setprecision(2);
	cout << setiosflags(ios::fixed | ios::showpoint);
}

void print_array(int n[], const int &s)
{
	int spaces = 0;
		for(int i=0;i<s;i++)
		{
			cout << setw(4) << n[i] << " ";
			spaces += 6;
		}
		cout << endl;
}



