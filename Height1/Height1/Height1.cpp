// Height1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Pause()
{ string junk;

	cout << endl << endl << "Press Enter to continue...";
	 cin >> junk;

}

int main()
{
//Declare
	string name;
	int feet,inches,totalInches;
	char extraQuote;

//Input
	cout << "What is your name? ";
	getline(cin, name);

	cout << "How tall are you? (5' 10\")";
	cin >> feet;
	cin.ignore(1,'\'');
	cin >> inches;
	//cin >> extraQuote;

//Calculations
	totalInches = feet * 12 + inches;

//Display
	cout << endl << name << " is " << totalInches << "\" tall." << endl << endl;
	cin.ignore(1,'\'');

//Freeze
	Pause();
	return (0);
}

