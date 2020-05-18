// LGDBL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Pause()
{ string junk, extraNewLine;
cin.ignore();
cout << "Press Enter to continue ... ";
getline(cin, junk);
}

int main()
{
//Declare
	double num1, num2;

//Input 1
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter another integer: ";
	cin >> num2;

//Calculations
	if (num1 > num2)
		{
			cout << num1 << " is a larger integer." << endl;
		}
	else if (num2 > num1)
		{
			cout << num2 << " is a larger integer." << endl;
		}
	else
		{
			cout << "The integers are the same." << endl;
		}	
	
	Pause();
}