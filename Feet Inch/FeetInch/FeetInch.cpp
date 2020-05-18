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
int justFeet;
int feetInInches;

//Input
	cout << "How many feet? ";
	cin >> justFeet;


//Calc
	feetInInches = 12 * justFeet;

//Results
	cout << justFeet;
	cout << " feet is equal to ";
	cout << feetInInches;
	cout << " inches. \n \n";

//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;

	return 0;
}

