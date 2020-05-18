// MTIME.cpp : Defines the entry point for the console application.
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

void milTime(string str) 
{ 
//Input calc
    int h1 = (int)str[1] - '0'; 
    int h2 = (int)str[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10); 
  
//AM calc
    if (str[10] == 'A') 
    { 
        if (hh == 12) 
        { 
            cout << "00"; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
        else
        { 
            for (int i=0; i <= 7; i++) 
                cout << str[i]; 
        } 
    } 
  
//PM calc
    else
    { 
        if (hh == 12) 
        { 
            cout << "12"; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
        else
        { 
            hh = hh + 12; 
            cout << hh; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
    } 
} 
  

int main() 
{ 
	
   string timetotal;
   cout << "Please enter a time in HH:MM:SS:AM/PM format: " << endl;
   cin >> timetotal;
   milTime(timetotal); 
   Pause();
} 