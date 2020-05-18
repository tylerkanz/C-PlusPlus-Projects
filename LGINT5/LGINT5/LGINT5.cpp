// LGINT5.cpp : Defines the entry point for the console application.
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
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

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

//Input 2
	cout << "Enter an integer: ";
	cin >> num3;
	cout << "Enter another integer: ";
	cin >> num4;

//Calculations
	if (num3 > num4)
		{
			cout << num3 << " is a larger integer." << endl;
		}
	else if (num4 > num3)
		{
			cout << num4 << " is a larger integer." << endl;
		}
	else
		{
			cout << "The integers are the same." << endl;
		}	

//Input 3
	cout << "Enter an integer: ";
	cin >> num5;
	cout << "Enter another integer: ";
	cin >> num6;

//Calculations
	if (num5 > num6)
		{
			cout << num5 << " is a larger integer." << endl;
		}
	else if (num6 > num5)
		{
			cout << num6 << " is a larger integer." << endl;
		}
	else
		{
			cout << "The integers are the same." << endl;
		}	

//Input 4
	cout << "Enter an integer: ";
	cin >> num7;
	cout << "Enter another integer: ";
	cin >> num8;

//Calculations
	if (num7 > num8)
		{
			cout << num7 << " is a larger integer." << endl;
		}
	else if (num8 > num7)
		{
			cout << num8 << " is a larger integer." << endl;
		}
	else
		{
			cout << "The integers are the same." << endl;
		}	

//Input 5
	cout << "Enter an integer: ";
	cin >> num9;
	cout << "Enter another integer: ";
	cin >> num10;

//Calculations
	if (num9 > num10)
		{
			cout << num9 << " is a larger integer." << endl;
		}
	else if (num10 > num9)
		{
			cout << num10 << " is a larger integer." << endl;
		}
	else
		{
			cout << "The integers are the same." << endl;
		}	
	

Pause();
}