#include <iostream>
using namespace std;

int swap2(int x) {

	int swapped = 0,a,b;

	a = x % 10;
	b = (x / 10) % 10;
	x = x - ((b * 10) + a);

	swapped = x + (a * 10) + b;

	return swapped;
}

int main(){
	int integer;
		cout << "Enter an integer that has 2 or more digits: ";
		cin >> integer;

	while(integer>=-9 && integer<=9){
		cout << "\nYou didn't follow direction! \nTry again please: ";
		cin >> integer;
	}

	cout << "\nThe original number is " << integer;
	cout << "\n\nThe swapped number is " << swap2(integer);

	return 0;
}
