// Retire.cpp : Defines the entry point for the console application.
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
int Retirement;
int ageOfRetirement;
ifstream InFile;

//Input
	InFile.open("retire.dat");
	cout << "What is your name? ";
	cin >> name;

	cout << "How old are you? ";
	cin >> ageInYears;

//Calc
	Retirement = 67;
	ageOfRetirement = Retirement - ageInYears;

//Results
	cout << name;
	cout << " can retire in ";
	cout << ageOfRetirement;
	cout << " years. \n \n";

//Freeze
	cout << "Press any key to continue...";
	InFile.;
	string junk;
	cin >> junk;

	return 0;
}

