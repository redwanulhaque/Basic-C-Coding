#include<iostream>
using namespace std;
int main(){

	int integer,counter=1,sum;

	cout << "Enter integers from 1 to 100: ";
	cin >> integer;

	while(integer < 1 || integer > 100){
		cout << "\nI told you to put numbers between 1 and 100! \nTry again: ";
		cin >> integer;
	}

	while(counter<=20){
		sum=integer*counter;
		cout << integer << " * " << counter << " = "<< sum << endl;
		counter++;
	}

	return 0;
}
