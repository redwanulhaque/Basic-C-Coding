#include<iostream>
using namespace std;
int main(){

	int integer,even=0,odd=0;

	cout << "Enter integers from 1 to 100: ";
	cin >> integer;

	while(integer < 1 || integer > 100){
	cout << "\nI told you to put numbers between 1 and 100! \nTry again: ";
	cin >> integer;
        }

	while(integer!=0){
	cout << "\nEnter 0 to stop \nEnter more values: ";
		if(integer%2==0){
			even++;
	}
		else if(integer%2==1){
			odd++;
	}
	cin >> integer;
	}
	
	cout << "\nNumber of even integers: " << even;
	cout << "\nNumber of odd integers: " << odd;


	return 0;
}

