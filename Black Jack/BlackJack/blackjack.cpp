#include <iostream>
#include <istream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int c1, c2, c3, c4;
int cardtotal;
char hitstick;

int main() {
	void deal();
	void Lose();
	void Win();
	void dealThree();
	void dealerPlay();
	void dealFour();

	cout << "Welcome to the BlackJack Table" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "Press ENTER to begin!" << endl;
	cin.get();
	deal();
	cout << "Card 1: " << c1 << endl;
	cout << "Card 2: " << c2 << endl;
		cardtotal = c1 + c2;
		cout << "Your card total is: " << cardtotal << endl;
		cin.get();
			if (cardtotal>21){
					Lose();
			}
			if (cardtotal<21){
			}


	cout << "Do you want to '(H)it' or (S)tick" << endl;
	cin >> hitstick;

		if (hitstick=!"H") {
			dealThree();	
	}
		if (hitstick=!"S") {
			dealerPlay();
		}


	system("cls");
	cout << "Welcome to the BlackJack Table" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "Card 1: " << c1 << endl;
	cout << "Card 2: " << c2 << endl;
	cout << "Card 3: " << c3 << endl;
		cardtotal = cardtotal + c3;
	cout << "Your card total is: " << cardtotal << endl;
	cin.get();
			if (cardtotal>21){
					Lose();
			}
			if (cardtotal<21){
					Win();
			}

	cout << "Do you want to '(H)it' or (S)tick" << endl;
	cin >> hitstick;

		if (hitstick=!"H") {
			dealFour();	
	}
		if (hitstick=!"S") {
			dealerPlay();
		}

	system("cls");
	cout << "Welcome to the BlackJack Table" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "Card 1: " << c1 << endl;
	cout << "Card 2: " << c2 << endl;
	cout << "Card 3: " << c3 << endl;
	cout << "Card 4: " << c3 << endl;
	cout << endl;
		cardtotal = cardtotal + c4;
	cout << "Your card total is: " << cardtotal << endl;
	cin.get();

	return 0;
}

void deal() {

	srand(time(NULL));
	c1 = rand() % 11 + 1;
	c2 = rand() % 11 + 1;
	return;
}

void dealThree() {
	srand(time(NULL));
	c3 = rand() % 11 + 1;
}

void dealFour() {
	srand(time(NULL));
	c4 = rand() % 11 + 1;
}


void Lose() {
	system("cls");
	cout << "Welcome to the BlackJack Table" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "You have bust!" << endl;
	return;
}

void dealerPlay() {
	return;
}

void Win() {
	system("cls");
	cout << "Welcome to the BlackJack Table" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "You win!" << endl;
	return;
}