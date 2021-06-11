#include<iostream>
using namespace std;

int oddLessEven(int digit){
	if (digit <= 0)
		return 0;
	else if (digit % 2 == 1)
		return digit % 10 + oddLessEven(digit/10);
	return oddLessEven(digit/10) - digit % 10;
}

int main(){

	int integer;
		cout << "Enter a positive integer: ";
		cin >> integer;

	cout << "\nThe sum is " << oddLessEven(integer) <<endl;
		return 0;
}
