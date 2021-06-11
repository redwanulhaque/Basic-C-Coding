#include<iostream>
using namespace std;

int main(){

	int x;
	cout << "Enter a price: ";
	cin >> x;

	if ( x<=100 ){
	cout << "The price with 20 percent discount is $" << x*0.80;
	}
	
	else if ( x>100 ){
	cout << "The price with 40 percent discount is $" << x*.60;
	}

	else {
	cout << "Sorry no discount";
	}

	return 0;
}
