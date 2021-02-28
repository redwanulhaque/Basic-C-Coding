#include<iostream>
using namespace std;
int main(){

	int number;

	cout << "Enter a positive number: ";
	cin >> number;

	while(number<=0){
		cout << "\nNot positive MORON! Do you wanna go back to middle school? \nTry again: ";
		cin >> number;
	}

	for(int i=1; i<=number; i++){
		if(i%2==1){
		cout<< i << "  ";
	}

	else if(i%2==0){
		cout << "-" << i << "  ";
	}
						        }
	return 0;
}

