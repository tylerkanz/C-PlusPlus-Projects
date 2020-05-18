// Project 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

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
	ifstream InFile;
	string firstname, lastname, fullname, cpulse, crespir, coxygen, status;
	int room, pulse, respir, oxygen, normal=0, indicator=0, alert=0, check=0, critical=0;

	InFile.open("PATIENTS.txt");

	cout << "Room Name                  Pulse        Respir        Oxygen" << endl;

	while(InFile >> firstname >> lastname >> pulse >> respir >> oxygen >> room){
		fullname = firstname + ", " + lastname;
		if (pulse < 60)
		{
			++indicator;
			status + " LOW PULSE ";

		}

		else if (pulse > 100)
		{
			++indicator;
			status + " HIGH PULSE ";

		}
		if (respir < 12)
		{
			++indicator;
			status + " LOW Respiration ";

		}
		else if (respir > 20)
		{
			++indicator;
			status + " HIGH Respiration ";

		}
		if (oxygen < 92)
		{
			++indicator;
			status + " LOW Oxygen ";

		}
		else if (oxygen > 100)
		{
			++indicator;
			status + " HIGH Oxygen ";

		}
		if (indicator = 1)
		{
			++check;
		}
		if (indicator > 1)
		{
			++alert;
		}
		if (indicator > 2)
		{
			++critical;
		}


		cout << setw(3) << room << "  " << setw(22) << left << fullname << setw(13) << left << pulse << setw(14) << left << respir << oxygen << setw(4) << left << status <<endl;
	}

		cout << endl;
		cout << "Totals" << endl;
		cout << normal << " Normal" << endl;
		cout << alert << " ALERT" << endl;
		cout << check << " CHECK" << endl;
		cout << critical << " CRITICAL" << endl;

	


Pause();
}