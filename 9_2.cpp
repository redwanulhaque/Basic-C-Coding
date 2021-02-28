#include<iostream>
using namespace std;
int main(){

	int integer, sum=0, odd=0;

	cout << "Enter a positive integer: ";
	cin >> integer;

	while(integer<=0){
		cout << "\nNot positive! You are really making me furious \nTry again: ";
		cin >> integer;
	}

	sum=sum+integer;

	for(int i=1; i<=sum; i++){
		cout << "\nNow enter " << sum << " more values: ";
		cin >> integer;

		if(integer%2==1){
			odd++;
		}
	}

	cout << endl << odd << " were odd";

	return 0;
}

