// BlastOff.cpp : Defines the entry point for the console application.
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
	int count;
	bool done;

	count = 10;
	done = ( count < 1);

	while (!done)
	{
		cout << count << endl;
		count = count -1;
		done = ( count < 1 );
	}
	cout << "BlastOff!!" << endl;

	Pause();
}



