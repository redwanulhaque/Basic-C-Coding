#include<iostream>
using namespace std;
int main(){

	int integer,sum=0;

	cout << "Enter a positive integer: ";
	cin >> integer;

	while(integer<=0){
		cout << "\nThe program terminated its self! \nYou did it. Not me. So blame your self!\n\n";
		return 0;
	}

	for(int i=1; i<=integer; i++){
		sum=i+sum;

		for(int x=1; x<=i; x++){
			cout << " " << x;
	}

	cout << " the sum is " << sum;
		cout << endl;

	}

	return 0;
}

