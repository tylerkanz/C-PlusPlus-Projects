// Project4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double hourRate, hourWork=6, otHours, pay, FICA, state, fed, netpay;

void Pause()
{ string junk, extraNewLine;
cin.ignore();
cout << "Press Enter to continue ... ";
getline(cin, junk);
}



void GetRate(){
	cout << "Hourly Rate? ";
	cin >> hourRate;
	while (hourRate < 5.50 || hourRate > 200){
		cout << "Rate out of range. Please enter a vaild Rate." << endl;
		cout << "Hourly Rate? ";
		cin >> hourRate;
	}
}

void GetHrs(){
	cout << "Hours worked? ";
	cin >> hourWork;
	while (hourWork < 0 || hourWork > 60){
		cout << "Hours are out of range. Please enter a vaild Hour." << endl;
		cout << "Hours worked? ";
		cin >> hourWork;
	}
	if (hourWork > 40){
		otHours = hourWork - 40;
		hourWork = 40;
	}
	else {
		otHours = 0;
	}
}

void CalcFCIA(){
	FICA = pay * .0765;
}

void CalcFedTax(){
	if (pay > 1500){
		fed =  pay * .28;
	}
	else {
		fed = pay * .22;
	}
}
void CalcStateTax(){
	state = pay * .12;
}

void GetPay(){
	pay = (hourRate * hourWork) + (otHours * (hourRate * 1.5));
}

void PrintStub(){
		
		std::cout << std::fixed;
		std::cout << std::setprecision(2);
		cout << "FICA $" << FICA << endl;
		cout << "Fed $" << fed << endl;
		cout << "State $" << state << endl;
		netpay = pay - (FICA + fed + state);
		cout << "Net Pay $" << netpay << endl;
		cout << endl;

}



int main()
{
	string name;
	cout << "Employee name? ";
	cin >> name;
	GetRate();
	GetHrs();
	GetPay();
	CalcFCIA();
	CalcFedTax();
	CalcStateTax();
	
	cout << endl;
	cout << endl;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	cout << name << " earned $" << pay << endl;
	if (pay >= 10000){
		cout << "Pay is out of normal range." << endl;
	}
	PrintStub();



Pause();
}
