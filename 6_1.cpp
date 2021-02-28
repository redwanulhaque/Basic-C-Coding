#include<iostream>
using namespace std;

int main(){

	int x; 
	int remainder;

	cout << "Enter any positive even integer: ";
	cin >> x;

        remainder = (x%2);

	while (remainder != 0 || x<0){
		cout << "Invalid! " << endl;
		cout << "Enter a positive even integer: ";
		cin >> x;
		remainder = (x%2);
	}

	while (x>0){
		cout << x%2;
		x=x/2;
 	}
	
	return 0;
}

