// LGCHAR.cpp : Defines the entry point for the console application.
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
	char char1, char2;
	

//Input 1
	cout << "Enter a character: ";
	cin >> char1;
	cout << "Enter another character: ";
	cin >> char2;

	

//Calculations
	if (char2 > char1)
		{
			cout << char2 << " is a larger character." << endl;
		}
	else if (char1 > char2)
		{
			cout << char1 << " is a larger character." << endl;
		}
	else
		{
			cout << "The strings are the same size." << endl;
		}	
	
	Pause();
}