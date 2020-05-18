// AvgTil0.cpp : Defines the entry point for the console application.
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


int main(){

//Declare
    double odd = 0;
    int input = 0;
    int count = 0;
    double result = 0;

//Loop
        while (count < 10)
	{
        cout << "Enter any number: ";
        cin >> input;
        while(input % 2 == 0){
            cout << "Odd numbers only please." << endl;
			cout << "Enter any number: ";
            cin >> input;
        }
        odd += input;
            count++;
    }

//Calc
    result = odd / 10.0;
    cout << "The average is " << result << endl;
    
	Pause();
}