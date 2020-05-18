// Movie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
//Declare
	int age, over, under, everyone;
	over = 65;
	under = 12;

//Input
	cout << "Ticket Prices are as follow: " << endl;
	cout << "Over 65 is $5.00" << endl << "Under 12 is $7.00" << endl << "Everyone Else is $8.00" << endl << endl;
	cout << "How old are you? ";
	cin >> age;

//Calculations
	if (age > over)
		cout << "Your movie ticket is $5.00" << endl;
	else if (age < under)
		cout << "Your movie ticket is $7.00" << endl;
	else 
		cout << "Your movie ticket is $8.00" << endl;

	
	
//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;
	return 0;
}

