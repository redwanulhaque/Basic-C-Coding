#include<iostream>
using namespace std;
int main(){

	int integer;

	cout << "Enter an odd positive integer: ";
	cin >> integer;

	while(integer%2==0 || integer <= 0){
		cout << "\nThe program terminated its self! Thanks to you. \n#No cookies for you! \n";
		return 0;
	}

	for(int i=1, x=integer; i<=integer; i++,x--){

		for(int y=1; y<=integer; y++){
			if(y==i && y==x){
				cout << "*";
				}
			else if(y==x && y<=i || y==i && y<=x){
				cout << "+";
				}
			else if(y==x && y>=i || y==i && y>=x){
				cout << "x";
				}
			else{
				cout << " ";
                                }
	}
		cout << endl;
	}
	cout << "\nSee what happens when you follow instructions!\n\n";

	return 0;
}
