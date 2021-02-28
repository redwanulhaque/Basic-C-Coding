#include<iostream>
using namespace std;
int main(){

	int x, y;

	cout << "Enter your first positive number: ";
	cin >> x;

	while(x<=0){
		cout << "\nI see you like to play games! Lets play then! \nTry again: ";
		cin >> x;
	}

	cout << "\nEnter your second positive number: ";
	cin >> y;

	while(y<=0){
		cout << "\nI see you like to play games! BRING IT ON! \nTry again: ";
		cin >> y;
	}

	for(int i=1; i<=x && x<=y || i<=y && y<=x; i++){
		cout << "x ";
	}

	return 0;
}
