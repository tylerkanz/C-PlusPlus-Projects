// Project2.cpp : Defines the entry point for the console application.
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

	//Declare Variables
	string lastname, firstname, tDate, pNumber, pColor, pDescription, pPrice, unused;

	//Declare Files
	ifstream ITEMS2E;
	ifstream CUSTOMER2E;
	ofstream TRANSACTIONS;

	//Open
	ITEMS2E.open("ITEMS2E.pip");
	CUSTOMER2E.open("CUSTOMER2E.DAT");
	TRANSACTIONS.open("Transactions.XML");

	//Get Input

	getline(CUSTOMER2E, (tDate, pNumber, pColor, firstname, lastname));
	cin.ignore('|');
	CUSTOMER2E >> tDate >> pNumber >> pColor >> firstname >> lastname;

	getline(ITEMS2E, (pDescription,unused, pPrice, pNumber));
	cin.ignore('|');
	ITEMS2E >> pDescription >> unused >> pPrice >> pNumber;

	//Display Results
	TRANSACTIONS << "<Transaction>" << endl;
	TRANSACTIONS << " <Customer>" << endl;
	TRANSACTIONS << "  <Lastname>" << lastname << "</Lastname>" << endl;
	TRANSACTIONS << "  <Firstname>" << firstname << "</Firstname>" << endl;
	TRANSACTIONS << " </Customer>" << endl;
	TRANSACTIONS << " <TransactionDate>" << tDate << "</TransactionDate>" << endl;
	TRANSACTIONS << " <Items>" << endl;
	TRANSACTIONS << "  <Item>" << endl;
	TRANSACTIONS << "   <PartNumber>" << pNumber << "</PartNumber>" << endl;
	TRANSACTIONS << "   <PartColor>" << pColor << "</PartColor>" << endl;
	TRANSACTIONS << "   <PartDescription>" << pDescription << "</PartDescription>" << endl;
	TRANSACTIONS << "   <PartPrice>" << pPrice << "</PartPrice>" << endl;
	TRANSACTIONS << "  </Item>" << endl;
	TRANSACTIONS << " </Items>" << endl;
	TRANSACTIONS << "</Transaction>" << endl;


	//Freeze
	Pause();

}