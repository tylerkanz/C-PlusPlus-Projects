// MilesCM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

string name;
int Miles;
int milesInCM;

//Input
	cout << "How many miles? ";
	cin >> Miles;


//Calc
	milesInCM = Miles * 160934;

//Results
	cout << Miles;
	cout << " Miles is equal to ";
	cout << milesInCM;
	cout << " Centimeters \n \n";

//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;

	return 0;
}

