#include<iostream>
using namespace std;

int main(){

	int integer;
	int stored[100];

	cout << "Enter a number between 1 and 100: ";
	cin >> integer;

	while(integer<=0 || integer>100){
		cout << "\nYou have to take a college course on how to follow direction! \nTry again: ";
		cin >> integer;
	}

	cout << "\nNow enter " << integer << " single-digit integers!";
	cout << "\nI repeat only single digit integers: \n";
	for(int i=0; i<integer; i++){
		cin >> stored[i];
	}

	bool Numbers[integer];

	for(int i=0; i<integer; i++){

		for(int x=0; x<=9; x++){
			if(stored[i] == x){												Numbers[x] = true;											}				
		}	
	}

	for(int i=0; i<10; i++)
		if(Numbers[i] != true){
			cout << "\nMISSING NUMBERS: " << i << "\n";
	}

	return 0;
}
