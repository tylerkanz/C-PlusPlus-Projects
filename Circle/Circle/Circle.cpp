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
int radius;
int area;

//Input
	cout << "What is the radius of the circle? ";
	cin >> radius;


//Calc
	area = 3.14 * radius * radius;

//Results
	cout << "The area of the circle is ";
	cout << area;
	cout << ". \n";

//Freeze
	cout << "Press any key to continue...";
	string junk;
	cin >> junk;

	return 0;
}

