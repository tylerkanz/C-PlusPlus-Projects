// IntMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	//declare
	double int1;
	double int2;
	double add;
	double sub1;
	double sub2;
	double multiply;
	double div1;
	double div2;


	//input
	cout << "First number? ";
	cin >> int1;

	cout << "Second number? ";
	cin >> int2;

	//results
// = int1 + int2;
	add= int1 +int2;
	sub1 = int1 - int2;
	sub2 = int2 - int1;
	multiply = int1 * int2;
	div1 = int1 / int2;
	div2 = int2 / int1;


	//display
// +
	cout << int1;
	cout << " + ";
	cout << int2;
	cout << " = ";
	cout << add;
	cout << "\n";
// -
	cout << int1;
	cout << " - ";
	cout << int2;
	cout << " = ";
	cout << sub1;
	cout << "\n";
	cout << int2;
	cout << " - ";
	cout << int1;
	cout << " = ";
	cout << sub2;
	cout << "\n";
// *
	cout << int1;
	cout << " * ";
	cout << int2;
	cout << " = ";
	cout << multiply;
	cout << "\n";
// /
	cout << int1;
	cout << " / ";
	cout << int2;
	cout << " = ";
	cout << div1;
	cout << "\n";
	cout << int2;
	cout << " / ";
	cout << int1;
	cout << " = ";
	cout << div2;
	cout << "\n";



	//Freeze
	string junk;
	cin >> junk;

	return (0);
}

