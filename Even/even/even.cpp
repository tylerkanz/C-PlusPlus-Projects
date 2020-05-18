// even.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
//Declare
	int number, result;

//Input
	cout << "Enter any integer: ";
	cin >> number;

//Calculations
	result = number % 2;
	if ( result == 0)
		cout << "The integer " << number << " is even." << endl;
	else
		cout << "The integer " << number << " is odd." << endl;

//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;
	return 0;
}

