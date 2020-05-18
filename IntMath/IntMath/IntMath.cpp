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
	int int1;
	int int2;
	int add;
	int sub1;
	int sub2;
	int multiply;
	int div1;
	int div2;
	int per1;
	int per2;

	//input
	cout << "First number? ";
	cin >> int1;

	cout << "Second number? ";
	cin >> int2;

	//results
	add = int1 + int2;
	sub1 = int1 - int2;
	sub2 = int2 - int1;
	multiply = int1 * int2;
	div1 = int1 / int2;
	div2 = int2 / int1;
	per1 = int1 % int2;
	per2 = int2 % int1;


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
// %
	cout << int1;
	cout << " % ";
	cout << int2;
	cout << " = ";
	cout << per1;
	cout << "\n";
	cout << int2;
	cout << " % ";
	cout << int1;
	cout << " = ";
	cout << per2;
	cout << "\n";


	//Freeze
	string junk;
	cin >> junk;

	return (0);
}

