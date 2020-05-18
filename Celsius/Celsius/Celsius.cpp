// Celcius.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

string name;
int fahrenheit;
int celcius;

//Input
	cout << "What is the temperature in fahrenheit? ";
	cin >> fahrenheit;

//Calc
	celcius = ((fahrenheit - 32) * 5) / 9;

//Results
	cout << fahrenheit;
	cout << " degrees fahrenheit is equal to ";
	cout << celcius;
	cout << " degrees celcius \n";

//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;

	return 0;
}

