// LookOldB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

string name;
int ageInYears;
int ageInMonths;

//Input
	cout << "What is your name? ";
	cin >> name;

	cout << "How old are you? ";
	cin >> ageInYears;

//Calc
	ageInMonths = 12 * ageInYears;

//Results
	cout << "\nWell ";
	cout << name;
	cout << ", you dont look ";
	cout << ageInMonths;
	cout << " months old. \n \n";

//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;

	return 0;
}

