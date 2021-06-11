#include<iostream>
using namespace std;

int main() {
	
	int x;
	int y;

	cout << "Enter a positive integer: ";
	cin >> x;

    	while(x<0){
	cout << "No factor for negative number! Try again: ";
	cin >> x;
	}

    	cout << "The factors of " << x << " are " << endl;


	for(y = 1; y <= x; ++y){
		if(x % y == 0)
		cout << y << endl;
	}

	return 0;
}
