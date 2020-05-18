// Month1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
//Declare
	int number;

//Input
	cout << "Please choose a number that corresponds to a month: " << endl;
	cin >> number;

//Calc
	if (number == 1)
		cout << "That is the month of January." << endl;
	else if (number == 2)
		cout << "That is the month of February." << endl;
	else if (number == 3)
		cout << "That is the month of March." << endl;
	else if (number == 4)
		cout << "That is the month of April." << endl;
	else if (number == 5)
		cout << "That is the month of May." << endl;
	else if (number == 6)
		cout << "That is the month of June." << endl;
	else if (number == 7)
		cout << "That is the month of July." << endl;
	else if (number == 8)
		cout << "That is the month of August." << endl;
	else if (number == 9)
		cout << "That is the month of September." << endl;
	else if (number == 10)
		cout << "That is the month of October." << endl;
	else if (number == 11)
		cout << "That is the month of November." << endl;
	else if (number == 12)
		cout << "That is the month of December." << endl;

	else 
		cout << "That is not a valid month." << endl; 
	
//Freeze
	cout << "Press any key to continue..." << endl;
	string junk;
	cin >> junk;
	return 0;
}

