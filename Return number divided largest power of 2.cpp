#include<iostream>
using namespace std;

int twoPart(int n){
	if (n % 2 == 1) return 1;
	return 2 * twoPart (n / 2);
}

int main(){

	int integer;

	cout << "Enter a positive integer: ";
	cin >> integer;

	while(integer<=0){
		cout << "\nYou didn't follow direction! \nTry again please: ";
		cin >> integer;
	}

	cout << "\nThe number " << integer << " divided by largest power of 2 is " << twoPart(integer);


return 0;
}

