// SkipCount.cpp : Defines the entry point for the console application.
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
	int number, skipValue, count;
	bool done;
	const int MAX_TIMES =7;

	//Input
	cout << "Enter a number: ";
	cin >> number;
	cout << "Please enter a skip number: ";
	cin >> skipValue;

	count = 0;
	done = ( count >= MAX_TIMES);

	//Loop
	while (!done)
	{
		cout << number;
		if ( count < MAX_TIMES-1)
		{
			cout << ", ";
		}
		else
		{}
		number = number + skipValue;
		count++;
		done = ( count >= MAX_TIMES);
	}
	cout << endl;
	Pause();
}



