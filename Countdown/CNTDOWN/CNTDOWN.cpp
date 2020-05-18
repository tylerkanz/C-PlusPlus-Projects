// CNTDOWN.cpp : Defines the entry point for the console application.
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
	float count;
	bool done;

	cout << "Enter any number: ";
	cin >> count;
	done = ( count < 1);

	while (!done)
	{
		if (count < 1)
		{
			count + 1;
		}
		else
		{
		cout << count << endl;
		count = count -1;
		done = ( count < 1 );
		}
	}

	Pause();
}





