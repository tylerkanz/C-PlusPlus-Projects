#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int);

int main()
{
	int testnumber = 0;
	cout << "Enter any integer : ";
	cin >> testnumber;

	if (isPrime(testnumber))
		cout << testnumber << " is Prime " << endl;
	else
		cout << testnumber << " is not Prime " << endl;

	system("pause");
	return 0;
}

bool isPrime(int n)
{
	for(int i = 2;i<sqrt(double(n));i++)
		if(n % i == 0)
			return false;
	return true;
}

