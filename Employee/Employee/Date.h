#include <iostream>
#include <string>
using namespace std;
#pragma once

class Date
{
public:
	Date(int=1,int=1,int=1900); // constructor
	void print_date() const;
	void print_military_date(); // e.g 4-Jan-2005
	void print_full_date(); // e.g. Monday, February 26, 2018 research dow 
	void yesterday();
	void tomorrow();

	~Date(void); // destructor
private:
	bool leapyear(int);
	int month,day,year;
};

