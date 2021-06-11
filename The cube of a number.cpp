#include<iostream>
using namespace std;
int main(){

	int integer,strike=0,number=10,sum;

	cout << "Enter an integer between 1 and 20: ";
	cin >> integer;

	while(integer<1 || integer>20){
		cout << "\nNot even close! What are you even thinking? \nTry again please: ";
		cin >> integer;
		strike++;
		cout << "\nThats the " <<strike << " strike!\n";

		if(strike>10){
			cout << "\nThats enough out of you! \nI will chose your number and that number is 10!\n";
			integer=number;
			break;
	}

	}

	sum=integer*integer*integer;

	cout << "\nThe cube of " << integer << " is: " << sum << "\n\n";

	return 0;
}
