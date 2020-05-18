// Triangle.cpp : Defines the entry point for the console application.
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
	double base;
	double height;
	double area;

	//input
	cout << "What is the base? ";
	cin >> base;

	cout << "What is the height? ";
	cin >> height;

	//results
	area = (1/2) * base * height;

	//display
	cout << "A triangle of base ";
	cout << base;
	cout << " and height ";
	cout << height;
	cout << " has area ";
	cout << area;
	cout << ".";

	//Freeze
	string junk;
	cin >> junk;

	return (0);
}

