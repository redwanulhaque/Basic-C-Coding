#include<iostream>
using namespace std;

int main(){

	int x;
	cout << "Enter a shoe price: ";
	cin >> x;

	if ( x>=125 ){
	cout << "The shoe with 10 percent discount is priced at $" << x*0.9;
	}

	else if ( x<125 ){
	cout << "Sorry no discount at $" << x;
	}

	return 0;
}
