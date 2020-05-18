// newgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void Pause()

{ char junk;
	cout << "Press Enter to continue ... ";
	cin.ignore(10000, '\n');
	cin.get( junk);
}

int main()
{
	//Declare Files
	ifstream InFileF;
	ifstream InFileL;
	ofstream OutFile;

	//Declare Variables
	string lastname;
	string firstname;

	//Open
	InFileL.open("lastname.dat");
	InFileF.open("firstname.dat");
	OutFile.open("myname.dat");

	//Get Input
	getline(InFileL, lastname);
	InFileL >> lastname;
	getline(InFileF, firstname);
	InFileF >> firstname;

	//Display Results
	OutFile << lastname << ", " << firstname << endl;
	
	//Freeze
	Pause();

}