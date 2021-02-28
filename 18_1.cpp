#include<iostream>
using namespace std;

int thirdDigit(int x){

	if(x<100) return 0;
	if(x<1000) return x%10;

	return thirdDigit(x/10);
}

int main(){

	int integer;

	cout << "Enter an integer: ";
	cin >> integer;

	cout << "\nThe third digit of the integer is " << thirdDigit(integer);

	return 0;
}
