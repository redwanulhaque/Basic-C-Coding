#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

	int integer,x,counter=1;

	cout << "Lets play the guessing game! Are you ready! Lets start!\n\n";

	srand( time(0) );
	x=rand() % 100;

	cout << "Alright. I got the number. Now guess it! \n\n";

	cout << "Enter a number from 1 to 100 please: ";
	cin >> integer;

	while(integer<1 || integer>100){
		cout << "\nYou are not following direction moron! Try again: ";
		cin >> integer;
	}

	while(integer != x){
		counter++;

		if(integer>x){
			cout << "\nGuess what? Too big! \nMwahahahahahahahhahaha! \n\nTry again: ";
			cin >> integer;
		}

		else if(integer<x){
			cout << "\nKnock Knock. \nWhos there? \nSmall. \nSmall who? \nToo small to be a number! \n\nTry again: ";
			cin >> integer;
		}
	}

	if(integer==x){
		cout << "\nWaw! You are one lucky fella! \nCongratulation. You hit the jackpot!\n";
		}

	cout << "\nIt took you " << counter << " tries to hit the jackpot!";

	if(counter<=1){
		cout << "\nTHIS IS INSANE! YOUR LUCK IS INSANE! HOW ARE YOU THIS LUCKY?\n\n";
		}

	else if(counter<=5){
		cout << "\nGood job!\n\n";
		}

	else if(counter>=5){
		cout << "\nI don't know about you, but you gatta work on your luck mate!\n\n";
		}

	return 0;
}
