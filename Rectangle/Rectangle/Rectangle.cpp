// Rectangle.cpp : Defines the entry point for the console application.
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
	double length;
	double width;
	double area;

	//input
	cout << "What is the length? ";
	cin >> length;

	cout << "What is the width? ";
	cin >> width;

	//results
	area = length * width;

	//display
	cout << "A rectangle of length ";
	cout << length;
	cout << " and width ";
	cout << width;
	cout << " has area ";
	cout << area;
	cout << ".";

	//Freeze
	string junk;
	cin >> junk;

	return (0);
}

