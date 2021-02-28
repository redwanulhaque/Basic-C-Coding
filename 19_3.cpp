#include<iostream>
using namespace std;

int biggestDigit(int n) {

	int big = n % 10;
	int x;
	n=n/10;

	while(n != 0){
		x = n % 10;

		if (x > big)
			big = x;
			n=n/10;
	}
	return big;
}

int main(){

	int integer;

	cout << "Enter a positive integer: ";
	cin >> integer;

	while(integer<=0){
		cout << "\nNot positive! \nTry again please: ";
		cin >> integer;
	}

	cout << "\nThe biggest digit in the integer parameter is " << biggestDigit(integer);

	return 0;
}
